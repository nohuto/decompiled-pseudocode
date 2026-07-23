/*
 * XREFs of MiCreateEnclaveRegions @ 0x140D032F4
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 */

__int64 __fastcall MiCreateEnclaveRegions(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  int v4; // eax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 PoolMm; // rax
  bool v9; // r8
  _QWORD *InitialStack; // rdx
  _QWORD *v11; // rax
  _QWORD **v12; // rcx
  unsigned __int64 v13; // rax
  _QWORD *i; // rcx
  _QWORD *v15; // rax

  v1 = 0LL;
  stru_140E366D8.KernelStack = &stru_140E366D8.CurrentRunTime;
  *(_QWORD *)&stru_140E366D8.CurrentRunTime = &stru_140E366D8.CurrentRunTime;
  stru_140E366D8.StateSaveArea = 0LL;
  stru_140E366D8.SchedulingGroup = 0LL;
  v2 = *(_QWORD *)(a1 + 360);
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      v3 = 0LL;
    else
      v3 = v2 ^ ((a1 + 352) | 1);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 360);
  }
  while ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 24);
    if ( v4 != 33 && v4 != 35 )
      goto LABEL_19;
    v5 = *(_QWORD *)(v3 + 32);
    v6 = *(_QWORD *)(v3 + 40);
    if ( v1 )
    {
      v7 = v1[4];
      if ( v5 == v7 + v1[3] )
      {
        v1[4] = v7 + v6;
        goto LABEL_18;
      }
    }
    PoolMm = ExAllocatePoolMm(
               64LL,
               0x28uLL,
               1380281677,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    v1 = (_QWORD *)PoolMm;
    if ( !PoolMm )
      return 0LL;
    *(_QWORD *)(PoolMm + 24) = v5;
    v9 = 0;
    *(_QWORD *)(PoolMm + 32) = v6;
    InitialStack = stru_140E366D8.InitialStack;
    if ( !stru_140E366D8.InitialStack )
      goto LABEL_17;
    while ( v5 < InitialStack[3] )
    {
      v11 = (_QWORD *)*InitialStack;
      if ( !*InitialStack )
        goto LABEL_17;
LABEL_24:
      InitialStack = v11;
    }
    v11 = (_QWORD *)InitialStack[1];
    if ( v11 )
      goto LABEL_24;
    v9 = 1;
LABEL_17:
    RtlAvlInsertNodeEx((unsigned __int64 *)&stru_140E366D8.InitialStack, (unsigned __int64)InitialStack, v9, v1);
LABEL_18:
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v5, v6, 0);
LABEL_19:
    v12 = *(_QWORD ***)(v3 + 8);
    v13 = v3;
    if ( v12 )
    {
      v3 = *(_QWORD *)(v3 + 8);
      for ( i = *v12; i; i = (_QWORD *)*i )
        v3 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v3 || *(_QWORD *)v3 == v13 )
          break;
        v13 = v3;
      }
    }
  }
  if ( !stru_140E366D8.InitialStack )
    return 1LL;
  v15 = (_QWORD *)ExAllocatePoolMm(
                    64LL,
                    0x50uLL,
                    1296190789,
                    KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( v15 )
  {
    *(_DWORD *)v15 = 512;
    v15[1] = v15 + 2;
    *((_BYTE *)v15 + 16) |= 1u;
    stru_140E366D8.StackBase = v15;
    stru_140E366D8.ThreadLock = 0LL;
    LODWORD(stru_140E366D8.CycleTime) = 0;
    return 1LL;
  }
  return 0LL;
}
