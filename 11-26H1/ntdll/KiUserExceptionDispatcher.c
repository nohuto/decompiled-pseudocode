/*
 * XREFs of KiUserExceptionDispatcher @ 0x180162FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlDispatchException @ 0x18004C680 (RtlDispatchException.c)
 *     RtlGuardRestoreContext @ 0x180080B50 (RtlGuardRestoreContext.c)
 *     ZwRaiseException @ 0x180161DD0 (ZwRaiseException.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  int v0; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( Wow64PrepareForException )
    Wow64PrepareForException(&STACK[0x4F0], &retaddr);
  if ( (unsigned __int8)RtlDispatchException((__int64)&STACK[0x4F0], (__int64)&retaddr) )
    RtlGuardRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException();
  RtlRaiseStatus(v0);
}
