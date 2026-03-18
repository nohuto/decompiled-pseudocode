/*
 * XREFs of MiPeriodicTrimWorkingSet @ 0x1403B9E10
 * Callers:
 *     MiTrimAllWorkingSets @ 0x140466450 (MiTrimAllWorkingSets.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     MiEmptyPageAccessLog @ 0x1402CFDDC (MiEmptyPageAccessLog.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402FE650 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402FE7B0 (MiLockWorkingSetCoreExclusive.c)
 *     MiComputeTrimAmount @ 0x1403BA0D0 (MiComputeTrimAmount.c)
 *     MiQueuePageAccessLog @ 0x1403BA328 (MiQueuePageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1403BA494 (MiReturnCcAccessLog.c)
 *     MiTrimWorkingSet @ 0x1403BA50C (MiTrimWorkingSet.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall MiPeriodicTrimWorkingSet(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  __int64 v5; // rcx
  __int64 v7; // r15
  int v8; // ebp
  unsigned __int8 v9; // si
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  _QWORD **v12; // rdi
  __int64 v13; // r8
  __int64 result; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // r8
  ULONG *v18; // rcx
  __int64 v19; // r13
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  _OWORD v23[3]; // [rsp+60h] [rbp-78h] BYREF

  v3 = *(_DWORD *)(a2 + 4);
  v5 = *(unsigned __int16 *)(a1 + 174);
  memset(v23, 0, sizeof(v23));
  v7 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * v5);
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
    v10 = MiComputeTrimAmount(a2, a1);
    if ( !v10 )
      goto LABEL_6;
    v20 = *(_QWORD *)(a1 + 152);
    if ( v20 < v10 )
      goto LABEL_6;
    v21 = MiTrimWorkingSet(a1, 0, (int)v20 - (int)v10, v9, *(unsigned __int8 *)(a2 + 25), 17);
    goto LABEL_27;
  }
  v22 = *(_QWORD *)(a1 + 112);
  if ( v22 )
  {
    v21 = MiTrimWorkingSet(a1, v22, 0, v9, *(unsigned __int8 *)(a2 + 25), 1);
LABEL_27:
    *(_QWORD *)(a2 + 16) += v21;
  }
LABEL_6:
  v11 = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v12 = (_QWORD **)&unk_140E37828;
  else
    v12 = (_QWORD **)(a1 + 232);
  if ( *v12 )
  {
    MiLockWorkingSetCoreExclusive(a1);
    v15 = *v12;
    if ( *v12 )
    {
      v16 = (_QWORD *)*v15;
      v17 = *v12;
      if ( *v15 )
      {
        do
        {
          v17 = v16;
          v16 = (_QWORD *)*v16;
        }
        while ( v16 );
      }
      if ( v11 - v17[2] > stru_140F12D20.Padding[1] )
      {
        if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
          v18 = &MiSystemPartition;
        else
          v18 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
        MiEmptyPageAccessLog((__int64)v18, v15);
        *v12 = 0LL;
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
    v19 = _InterlockedExchange64((volatile __int64 *)(v7 + 18112), 0LL);
    if ( v19 )
    {
      if ( v11 - *(_QWORD *)(v19 + 16) > stru_140F12D20.Padding[1] )
        return MiQueuePageAccessLog(v7, v19, v13);
      else
        return MiReturnCcAccessLog(v7, v19, 0LL);
    }
  }
  return result;
}
