/*
 * XREFs of PopSstInvokeNotificationHandlers @ 0x140BF9490
 * Callers:
 *     PopHiberCheckResume @ 0x140BFA8A0 (PopHiberCheckResume.c)
 *     PopMarkComponentsBootPhase @ 0x140BFAE30 (PopMarkComponentsBootPhase.c)
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopSstInvokeNotificationHandlers(unsigned int a1)
{
  struct _KTHREAD *i; // rbx

  for ( i = (struct _KTHREAD *)stru_140F11D08.WaitBlock[1].SparePtr;
        i != (struct _KTHREAD *)&stru_140F11D08.WaitBlockFill11[88];
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    guard_dispatch_icall_no_overrides(i->QuantumTarget, a1);
    if ( a1 == 1 )
    {
      PoSetHiberRange(0LL, 0x10000u, i, 0x28uLL, 0);
      PoSetHiberRange(0LL, 0x10000u, i->SListFaultAddress, 0LL, 0);
    }
  }
}
