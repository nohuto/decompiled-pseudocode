/*
 * XREFs of MiPeriodicTrimWorkingSet @ 0x1403C3C80
 * Callers:
 *     MiTrimAllWorkingSets @ 0x14045F5B0 (MiTrimAllWorkingSets.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402E06D0 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402E0830 (MiLockWorkingSetCoreExclusive.c)
 *     MiComputeTrimAmount @ 0x1403C3F40 (MiComputeTrimAmount.c)
 *     MiQueuePageAccessLog @ 0x1403C4198 (MiQueuePageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1403C4304 (MiReturnCcAccessLog.c)
 *     MiTrimWorkingSet @ 0x1403C437C (MiTrimWorkingSet.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiPeriodicTrimWorkingSet(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  __int64 v5; // rcx
  __int64 v7; // r15
  int v8; // ebp
  unsigned __int8 v9; // si
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  _QWORD **v14; // rdi
  __int64 v15; // r8
  __int64 result; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // r8
  ULONG *v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rax
  _OWORD v23[3]; // [rsp+60h] [rbp-78h] BYREF

  v3 = *(_DWORD *)(a2 + 4);
  v5 = *(unsigned __int16 *)(a1 + 174);
  memset(v23, 0, sizeof(v23));
  v7 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v5);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 || KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)(a1 - 1024) )
  {
    v8 = 0;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)(a1 - 1024), 1, (__int64)v23);
    v8 = 1;
  }
  v9 = MiLockWorkingSetShared(a1, a2, a3);
  if ( v3 == 1 )
  {
    *(_BYTE *)(a2 + 25) = *((_BYTE *)&MiTrimPassToAge + *(unsigned __int8 *)(a2 + 24));
    v11 = MiComputeTrimAmount(a2, a1);
    if ( !v11 )
      goto LABEL_6;
    v10 = *(_QWORD *)(a1 + 152);
    if ( v10 < v11 )
      goto LABEL_6;
    v22 = MiTrimWorkingSet(a1, 0, (int)v10 - (int)v11, v9, *(unsigned __int8 *)(a2 + 25), 17);
    goto LABEL_27;
  }
  v12 = *(_QWORD *)(a1 + 112);
  if ( v12 )
  {
    v22 = MiTrimWorkingSet(a1, v12, 0, v9, *(unsigned __int8 *)(a2 + 25), 1);
LABEL_27:
    *(_QWORD *)(a2 + 16) += v22;
  }
LABEL_6:
  v13 = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v14 = (_QWORD **)&unk_140E379A8;
  else
    v14 = (_QWORD **)(a1 + 232);
  if ( *v14 )
  {
    MiLockWorkingSetCoreExclusive(a1, v12, v10);
    v17 = *v14;
    if ( *v14 )
    {
      v18 = (_QWORD *)*v17;
      v19 = *v14;
      if ( *v17 )
      {
        do
        {
          v19 = v18;
          v18 = (_QWORD *)*v18;
        }
        while ( v18 );
      }
      if ( v13 - v19[2] > (unsigned __int64)PfKernelGlobals )
      {
        if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
          v20 = &MiSystemPartition;
        else
          v20 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
        MiEmptyPageAccessLog((__int64)v20, v17);
        *v14 = 0LL;
      }
    }
    MiUnlockWorkingSetCoreExclusive(a1);
  }
  MiUnlockWorkingSetShared(a1, v9);
  if ( v8 )
    KiUnstackDetachProcess((__int64)v23, 1);
  result = *(_QWORD *)(v7 + 18112);
  if ( result )
  {
    v21 = _InterlockedExchange64((volatile __int64 *)(v7 + 18112), 0LL);
    if ( v21 )
    {
      if ( v13 - *(_QWORD *)(v21 + 16) > (unsigned __int64)PfKernelGlobals )
        return MiQueuePageAccessLog(v7, v21, v15);
      else
        return MiReturnCcAccessLog(v7, v21, 0LL);
    }
  }
  return result;
}
