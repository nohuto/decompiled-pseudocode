/*
 * XREFs of ?_NtUserGetSendMessageReceiver@@YAPEAUHWND__@@K@Z @ 0x140293B18
 * Callers:
 *     NtUserGetSendMessageReceiver @ 0x140298800 (NtUserGetSendMessageReceiver.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall _NtUserGetSendMessageReceiver(unsigned int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  const struct tagUIPI_INFO *v6; // r8
  __int64 v7; // rdi
  int v8; // ecx
  __int64 v9; // rdx
  __int64 *v10; // rdx
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h]

  v2 = 0LL;
  v13[0] = 0;
  v3 = EnterSharedCrit(0LL, 1LL);
  v14 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v13, v4);
  v5 = PtiFromThreadId(a1);
  v7 = v5;
  if ( !v5 || *(_QWORD *)(v5 + 496) != *(_QWORD *)(v3 + 496) )
  {
    v8 = 87;
    goto LABEL_11;
  }
  if ( !UIPrivilegeIsolation::CheckAccess(
          (UIPrivilegeIsolation *)(*(_QWORD *)(v3 + 464) + 864LL),
          (const struct tagUIPI_INFO *)(*(_QWORD *)(v5 + 464) + 864LL),
          v6) )
  {
    EtwTraceUIPIMsgError(*(_QWORD *)(v3 + 464), *(_QWORD *)(v7 + 464), 0LL, 0LL, 0LL);
LABEL_5:
    v8 = 5;
LABEL_11:
    UserSetLastError(v8);
    goto LABEL_12;
  }
  v9 = *(_QWORD *)(v7 + 544);
  if ( v9 )
  {
    v10 = *(__int64 **)(v9 + 112);
    if ( v10 )
    {
      if ( *(_QWORD *)(v10[2] + 496) != *(_QWORD *)(v3 + 496) )
        goto LABEL_5;
      v2 = *v10;
    }
  }
LABEL_12:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
  UserSessionSwitchLeaveCrit(v11);
  return v2;
}
