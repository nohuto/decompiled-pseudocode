/*
 * XREFs of PopStateTransitionTimeoutDispatch @ 0x14060A3E0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopQueryLastStateTransitionInfo @ 0x140C031FC (PopQueryLastStateTransitionInfo.c)
 */

void __noreturn PopStateTransitionTimeoutDispatch()
{
  ULONG_PTR v0; // rdi
  struct _KTHREAD *BugCheckParameter4; // rbx
  ULONG_PTR BugCheckParameter1[2]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v3; // [rsp+40h] [rbp-9h]
  __int128 v4; // [rsp+50h] [rbp+7h]
  _OWORD v5[3]; // [rsp+60h] [rbp+17h] BYREF

  memset(v5, 0, sizeof(v5));
  *(_OWORD *)BugCheckParameter1 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  if ( dword_140F105D4 == 1 )
  {
    v0 = 240LL;
  }
  else
  {
    v0 = 15LL;
    if ( dword_140F105D4 == 2 )
      v0 = 241LL;
  }
  BugCheckParameter4 = KeGetCurrentThread();
  if ( (unsigned int)(dword_140F105D4 - 1) <= 1 && (int)PopQueryLastStateTransitionInfo(BugCheckParameter1) >= 0 )
  {
    if ( *((_QWORD *)&v4 + 1) )
    {
      if ( (_DWORD)v4 == 1 )
      {
        guard_dispatch_icall_no_overrides((unsigned int)dword_140F105E0, &BugCheckParameter1[1]);
      }
      else if ( (_DWORD)v4 == 2 )
      {
        guard_dispatch_icall_no_overrides((unsigned int)dword_140F105E0, *((_QWORD *)&v3 + 1));
      }
    }
    if ( BugCheckParameter1[1] && (*(_DWORD *)(BugCheckParameter1[1] + 1532) & 0x1000) == 0 )
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1[1], 0, (__int64)v5);
    if ( BugCheckParameter1[0] )
      BugCheckParameter4 = (struct _KTHREAD *)BugCheckParameter1[0];
  }
  KeBugCheckEx(0xA0u, v0, dword_140F1044C, PopSleepCheckpoint, (ULONG_PTR)BugCheckParameter4);
}
