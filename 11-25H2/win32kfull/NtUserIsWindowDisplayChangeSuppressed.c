/*
 * XREFs of NtUserIsWindowDisplayChangeSuppressed @ 0x14029AEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserIsWindowDisplayChangeSuppressed(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  _BYTE v9[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = v2;
  if ( v2 )
  {
    v9[0] = 0;
    v10 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v9, v3);
    v7 = *(unsigned int *)(v6 + 380);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9);
    v5 = (v7 >> 4) & 1;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
