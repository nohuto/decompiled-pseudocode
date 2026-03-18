/*
 * XREFs of CiSchedulerSetPriority @ 0x1400017E0
 * Callers:
 *     CiSchedulerUpdateSuspendState @ 0x140001220 (CiSchedulerUpdateSuspendState.c)
 *     CiSchedulerAddThread @ 0x1400013D0 (CiSchedulerAddThread.c)
 *     CiSchedulerCommitPriority @ 0x1400014B0 (CiSchedulerCommitPriority.c)
 *     CiSchedulerThreadFunction @ 0x140001520 (CiSchedulerThreadFunction.c)
 * Callees:
 *     __security_check_cookie @ 0x1400057E0 (__security_check_cookie.c)
 */

char __fastcall CiSchedulerSetPriority(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int8 v3; // dl
  unsigned int v4; // edi
  struct _KTHREAD *v6; // rcx
  HANDLE ThreadProcessId; // rax
  struct _KTHREAD *v8; // rcx
  __int64 v9; // rax
  int v10; // [rsp+30h] [rbp-78h] BYREF
  HANDLE v11; // [rsp+38h] [rbp-70h] BYREF
  HANDLE ThreadId; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-58h] BYREF
  HANDLE *p_ThreadId; // [rsp+60h] [rbp-48h]
  __int64 v15; // [rsp+68h] [rbp-40h]
  int *v16; // [rsp+70h] [rbp-38h]
  __int64 v17; // [rsp+78h] [rbp-30h]
  __int64 v18; // [rsp+80h] [rbp-28h]
  __int64 v19; // [rsp+88h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 148) & 1) != 0 )
    return 0;
  if ( CiThreadsMovedUp )
  {
    v2 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(v2 + 120) || !*(_BYTE *)(v2 + 132) && *(_QWORD *)(v2 + 80) )
    {
      v3 = *(_BYTE *)(*(_QWORD *)(a1 + 64) + 40LL);
      if ( v3 > *(_BYTE *)(a1 + 104) )
        v3 = *(_BYTE *)(a1 + 104);
    }
    else
    {
      v3 = *(_BYTE *)(a1 + 104);
    }
  }
  else
  {
    v3 = *(_BYTE *)(a1 + 106);
  }
  v4 = v3;
  if ( *(unsigned __int8 *)(a1 + 107) != v3 )
  {
    *(_BYTE *)(a1 + 107) = v3;
    if ( byte_14000A0F0 )
    {
      v6 = *(struct _KTHREAD **)(a1 + 96);
      v10 = v3;
      ThreadProcessId = PsGetThreadProcessId(v6);
      v8 = *(struct _KTHREAD **)(a1 + 96);
      v11 = ThreadProcessId;
      ThreadId = PsGetThreadId(v8);
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v11;
      v15 = 4LL;
      p_ThreadId = &ThreadId;
      v16 = &v10;
      v9 = *(_QWORD *)(a1 + 72);
      v17 = 1LL;
      v18 = v9 + 144;
      v19 = 4LL;
      EtwWrite(RegHandle, &CiSchedulerPriorityEvent, 0LL, 4u, &UserData);
    }
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 96), v4);
  }
  return 1;
}
