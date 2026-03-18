/*
 * XREFs of ?_NtUserGetSendMessageReceiver@@YAPEAUHWND__@@K@Z @ 0x1402AE694
 * Callers:
 *     NtUserGetSendMessageReceiver @ 0x1402B4BB0 (NtUserGetSendMessageReceiver.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall _NtUserGetSendMessageReceiver(unsigned int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rax
  const struct tagUIPI_INFO *v5; // r8
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // rdx
  __int64 *v9; // rdx
  __int64 v10; // rcx
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0LL;
  v3 = EnterSharedCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
  v4 = PtiFromThreadId(a1);
  v6 = v4;
  if ( !v4 || *(_QWORD *)(v4 + 488) != *(_QWORD *)(v3 + 488) )
  {
    v7 = 87;
    goto LABEL_11;
  }
  if ( !UIPrivilegeIsolation::CheckAccess(
          (UIPrivilegeIsolation *)(*(_QWORD *)(v3 + 456) + 864LL),
          (const struct tagUIPI_INFO *)(*(_QWORD *)(v4 + 456) + 864LL),
          v5) )
  {
    EtwTraceUIPIMsgError(*(_QWORD *)(v3 + 456), *(_QWORD *)(v6 + 456), 0LL, 0LL, 0LL);
LABEL_5:
    v7 = 5;
LABEL_11:
    UserSetLastError(v7);
    goto LABEL_12;
  }
  v8 = *(_QWORD *)(v6 + 536);
  if ( v8 )
  {
    v9 = *(__int64 **)(v8 + 112);
    if ( v9 )
    {
      if ( *(_QWORD *)(v9[2] + 488) != *(_QWORD *)(v3 + 488) )
        goto LABEL_5;
      v2 = *v9;
    }
  }
LABEL_12:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
  UserSessionSwitchLeaveCrit(v10);
  return v2;
}
