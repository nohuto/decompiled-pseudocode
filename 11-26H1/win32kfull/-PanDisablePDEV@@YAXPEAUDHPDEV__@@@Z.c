/*
 * XREFs of ?PanDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1403216F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall PanDisablePDEV(struct DHPDEV__ *a1)
{
  (*((void (__fastcall **)(_QWORD))a1 + 101))(*((_QWORD *)a1 + 4));
  EngDeleteSemaphore(*((HSEMAPHORE *)a1 + 14));
  Win32FreePool(a1);
}
