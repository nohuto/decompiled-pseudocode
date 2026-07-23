/*
 * XREFs of EmonEnableMonitoring @ 0x140597AD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpGetProfileDescriptor @ 0x1404E4A04 (HalpGetProfileDescriptor.c)
 *     EmonAllocateCounter @ 0x140597438 (EmonAllocateCounter.c)
 *     EmonConfigureCounter @ 0x140597850 (EmonConfigureCounter.c)
 */

__int64 __fastcall EmonEnableMonitoring(int a1, int a2, _DWORD *a3, int *a4, int *a5, int *a6)
{
  unsigned __int8 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rdx
  int ProfileDescriptor; // ebx
  __int64 v13; // rsi
  __int64 v14; // rdi
  int v15; // ecx
  int v16; // r10d
  int v17; // r8d
  int v18; // ecx
  int v20; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+38h] [rbp-40h] BYREF
  __int64 v22; // [rsp+40h] [rbp-38h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v20 = 0;
  v9 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a2, v10, &v21);
  if ( ProfileDescriptor >= 0 )
  {
    v13 = v21;
    v14 = v21;
    v15 = *(_DWORD *)(v21 + 312);
    if ( v15 != 37 && (int)HalpGetProfileDescriptor(v15, v11, &v22) >= 0 )
    {
      v13 = v22;
      v14 = v22;
    }
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v14 + 32), KeGetPcr()->Prcb.Number) )
    {
      ProfileDescriptor = EmonAllocateCounter(a1, v14, a2, &v20, a6);
      if ( ProfileDescriptor >= 0 )
      {
        v16 = v20;
        v17 = v20;
        if ( *a6 == 1 )
          v17 = v20 | 0x40000000;
        v18 = v20;
        *a5 = v17;
        *a4 = v16;
        *a3 = 1;
        EmonConfigureCounter(v18, *a6, 1, *(unsigned int *)(v13 + 24), *(_DWORD *)(v14 + 304), a1 == 0);
      }
    }
    else
    {
      ProfileDescriptor = -1073741637;
    }
  }
  HalpReleaseHighLevelLock(&HalpProfileSourceDescriptorListLock, v9);
  return (unsigned int)ProfileDescriptor;
}
