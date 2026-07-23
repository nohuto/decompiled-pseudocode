/*
 * XREFs of Amd64SetInterval @ 0x1405A7520
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpTimerSetProfilingTarget @ 0x140312CC4 (HalpTimerSetProfilingTarget.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpGetProfileDescriptor @ 0x1404E4A04 (HalpGetProfileDescriptor.c)
 */

__int64 __fastcall Amd64SetInterval(int a1, unsigned int *a2)
{
  __int64 v4; // rdx
  int ProfileDescriptor; // edi
  unsigned __int8 v6; // r9
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r10
  __int128 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  v18 = 0LL;
  HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a1, v4, &v18);
  if ( ProfileDescriptor >= 0 )
  {
    v8 = v18;
    v9 = *a2;
    v10 = *(unsigned __int8 *)(v18 + 28);
    v11 = dword_14002C314[2 * v10];
    if ( *a2 < v11 )
    {
      *a2 = v11;
      v9 = v11;
    }
    v12 = Amd64ProfileIntervalLimits[2 * v10];
    if ( v9 > v12 )
    {
      *a2 = v12;
      v9 = v12;
    }
    *(_DWORD *)(v8 + 24) = v9;
    HalpReleaseHighLevelLock(&HalpProfileSourceDescriptorListLock, v6);
    if ( !a1 )
      HalpTimerSetProfilingTarget();
    LODWORD(v13) = KeGetPcr()->Prcb.Number;
    v14 = *a2;
    v15 = (unsigned __int64)KiProcessorBlock[v13];
    v16 = *(_QWORD *)(v15 + 88);
    v17 = *(_QWORD *)(v16 + 16);
    if ( *(_DWORD *)(v16 + 4) )
    {
      do
      {
        if ( *(_DWORD *)(v17 + 48LL * *((_QWORD *)&v15 + 1) + 36) == a1
          && !*(_DWORD *)(v17 + 48LL * *((_QWORD *)&v15 + 1) + 24) )
        {
          *(_QWORD *)(v17 + 48LL * *((_QWORD *)&v15 + 1)) = v14;
        }
        *((_QWORD *)&v15 + 1) = (unsigned int)(DWORD2(v15) + 1);
      }
      while ( DWORD2(v15) < *(_DWORD *)(v16 + 4) );
    }
    return 0LL;
  }
  else
  {
    HalpReleaseHighLevelLock(&HalpProfileSourceDescriptorListLock, v6);
    return (unsigned int)ProfileDescriptor;
  }
}
