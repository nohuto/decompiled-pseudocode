/*
 * XREFs of NtUserSetMaxTouchpadSensitivity @ 0x14029F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserSetMaxTouchpadSensitivity(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = 0LL;
  v2 = EnterCrit(0LL, 0LL);
  v6[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v6, v3);
  *(_QWORD *)(*(_QWORD *)(v2 + 464) + 808LL) = *(_QWORD *)(*(_QWORD *)(v2 + 464) + 808LL) & 0xFFFFFFFFFFFFFF7FuLL | (a1 != 0 ? 0x80 : 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v6);
  UserSessionSwitchLeaveCrit(v4);
  return 1LL;
}
