/*
 * XREFs of ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x140105F7C
 * Callers:
 *     ?SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z @ 0x140105D34 (-SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z.c)
 *     ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1401940E0 (-ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

void *__fastcall CBasePTPEngine::SendGestureOutput(__int64 a1, int a2, int a3, unsigned int a4, void *Src)
{
  void *v5; // rdi

  *(_DWORD *)(a1 + 180) = a2;
  v5 = (void *)(a1 + 176);
  *(_DWORD *)(a1 + 192) = a4;
  *(_DWORD *)(a1 + 176) = 2;
  *(_DWORD *)(a1 + 184) = a3 != 0;
  memmove((void *)(a1 + 196), Src, 96LL * a4);
  (***(void (__fastcall ****)(_QWORD, void *))(a1 + 8))(*(_QWORD *)(a1 + 8), v5);
  return memset(v5, 0, 0x254uLL);
}
