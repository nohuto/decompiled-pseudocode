/*
 * XREFs of RtlUserFiberStart @ 0x1800868F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180086970 (RtlExitUserThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __noreturn RtlUserFiberStart()
{
  (*((void (**)(void))NtCurrentTeb()->NtTib.FiberData + 21))();
  RtlExitUserThread(3221225473LL);
  JUMPOUT(0x180086913LL);
}
