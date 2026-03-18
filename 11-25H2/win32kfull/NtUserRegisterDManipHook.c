/*
 * XREFs of NtUserRegisterDManipHook @ 0x140222020
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _RegisterDManipHook @ 0x140222070 (_RegisterDManipHook.c)
 */

__int64 NtUserRegisterDManipHook()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v3);
  v0 = (int)RegisterDManipHook();
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v3);
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
