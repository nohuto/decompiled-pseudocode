/*
 * XREFs of NtUserBlockInput @ 0x1401FF6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _BlockInput @ 0x1401FF6F0 (_BlockInput.c)
 */

__int64 __fastcall NtUserBlockInput(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v5);
  v2 = BlockInput(a1);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v5);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
