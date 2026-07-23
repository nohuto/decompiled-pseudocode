/*
 * XREFs of EmonSetInterval @ 0x140599120
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpTimerSetProfilingTarget @ 0x140312CC4 (HalpTimerSetProfilingTarget.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpGetProfileDescriptor @ 0x1404E4A04 (HalpGetProfileDescriptor.c)
 *     EmonSetIntervalInternal @ 0x140599218 (EmonSetIntervalInternal.c)
 */

__int64 __fastcall EmonSetInterval(unsigned int a1, unsigned int *a2)
{
  __int64 v4; // rdx
  int ProfileDescriptor; // ebx
  unsigned __int8 v6; // r9
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned int Number; // ebx
  __int64 v15; // r8
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  v16 = 0LL;
  HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a1, v4, &v16);
  if ( ProfileDescriptor >= 0 )
  {
    v8 = v16;
    v9 = *a2;
    v10 = *(unsigned __int8 *)(v16 + 28);
    v11 = HIDWORD(EmonProfileIntervalLimits[v10]);
    if ( *a2 < v11 )
    {
      *a2 = v11;
      v9 = v11;
    }
    v12 = EmonProfileIntervalLimits[v10];
    if ( v9 > v12 )
    {
      *a2 = v12;
      v9 = v12;
    }
    *(_DWORD *)(v8 + 24) = v9;
    HalpReleaseHighLevelLock(&HalpProfileSourceDescriptorListLock, v6);
    if ( !a1 )
      HalpTimerSetProfilingTarget();
    Number = KeGetPcr()->Prcb.Number;
    EmonSetIntervalInternal(a1, *a2, v13, Number);
    EmonSetIntervalInternal(a1, *a2, v15, Number);
    return 0LL;
  }
  else
  {
    HalpReleaseHighLevelLock(&HalpProfileSourceDescriptorListLock, v6);
    return (unsigned int)ProfileDescriptor;
  }
}
