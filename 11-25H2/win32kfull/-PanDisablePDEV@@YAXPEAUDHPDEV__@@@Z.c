/*
 * XREFs of ?PanDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x14030AA00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall PanDisablePDEV(struct DHPDEV__ *a1)
{
  (*((void (__fastcall **)(_QWORD))a1 + 101))(*((_QWORD *)a1 + 4));
  EngDeleteSemaphore(*((HSEMAPHORE *)a1 + 14));
  Win32FreePool(a1);
}
