/*
 * XREFs of MiFlushStrongCodeDriverLoadFailures @ 0x140CFA8B8
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_UNKNOWN **MiFlushStrongCodeDriverLoadFailures()
{
  _UNKNOWN **result; // rax
  struct _KTHREAD *Lock; // rdi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v3; // rax
  __int64 v4; // r8
  int v5; // [rsp+28h] [rbp-69h]
  int v6; // [rsp+30h] [rbp-61h]
  int Blink; // [rsp+48h] [rbp-49h] BYREF
  int Blink_high; // [rsp+4Ch] [rbp-45h] BYREF
  __int64 v9; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v11[16]; // [rsp+78h] [rbp-19h] BYREF
  _DWORD *v12; // [rsp+88h] [rbp-9h]
  __int64 v13; // [rsp+90h] [rbp-1h]
  struct _LIST_ENTRY *v14; // [rsp+98h] [rbp+7h]
  _DWORD v15[2]; // [rsp+A0h] [rbp+Fh] BYREF
  int *p_Blink; // [rsp+A8h] [rbp+17h]
  __int64 v17; // [rsp+B0h] [rbp+1Fh]
  int *p_Blink_high; // [rsp+B8h] [rbp+27h]
  __int64 v19; // [rsp+C0h] [rbp+2Fh]
  __int64 *v20; // [rsp+C8h] [rbp+37h]
  __int64 v21; // [rsp+D0h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  result = &retaddr;
  if ( stru_140E366D8.FirstArgument )
  {
    Lock = MmAcquireLoadLock();
    while ( 1 )
    {
      Flink = stru_140E2D2D0.SchedulerApc.ApcListEntry.Flink;
      if ( (unsigned __int8 *)stru_140E2D2D0.SchedulerApc.ApcListEntry.Flink == &stru_140E2D2D0.SchedulerApcFill5[16] )
        break;
      if ( (unsigned __int8 *)stru_140E2D2D0.SchedulerApc.ApcListEntry.Flink->Blink != &stru_140E2D2D0.SchedulerApcFill5[16]
        || (v3 = stru_140E2D2D0.SchedulerApc.ApcListEntry.Flink->Flink,
            stru_140E2D2D0.SchedulerApc.ApcListEntry.Flink->Flink->Blink != stru_140E2D2D0.SchedulerApc.ApcListEntry.Flink) )
      {
        __fastfail(3u);
      }
      stru_140E2D2D0.SchedulerApc.ApcListEntry.Flink = stru_140E2D2D0.SchedulerApc.ApcListEntry.Flink->Flink;
      v3->Blink = &stru_140E2D2D0.SchedulerApc.ApcListEntry;
      if ( *(_DWORD *)stru_140E366D8.FirstArgument > 2u
        && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000004000LL) )
      {
        tlgCreate1Sz_char((__int64)v11, (const CHAR *)Flink[1].Flink);
        v14 = Flink[2].Flink;
        v15[0] = LOWORD(Flink[1].Blink);
        Blink = (int)Flink[2].Blink;
        p_Blink = &Blink;
        Blink_high = HIDWORD(Flink[2].Blink);
        p_Blink_high = &Blink_high;
        v20 = &v9;
        v12 = v15;
        v13 = 2LL;
        v15[1] = 0;
        v17 = 4LL;
        v19 = 4LL;
        v9 = 0x1000000LL;
        v21 = 8LL;
        tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&byte_140058867, v4, 1u, v5, v6, 8u, &v10);
      }
      ExFreePoolWithTag(Flink, 0);
    }
    return (_UNKNOWN **)MmReleaseLoadLock(Lock);
  }
  return result;
}
