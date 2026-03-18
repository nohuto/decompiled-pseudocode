/*
 * XREFs of CmpCallbackFatalFilter @ 0x140850970
 * Callers:
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     CmpFireCleanupNotifications @ 0x1408CAE50 (CmpFireCleanupNotifications.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x135u, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 40), BugCheckParameter4);
}
