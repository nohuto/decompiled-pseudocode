/*
 * XREFs of ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x140105884
 * Callers:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x14010581C (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z @ 0x1401059A0 (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void *__fastcall CBasePTPEngine::SendTimerOutput(__int64 a1, int a2, int a3)
{
  _DWORD *v3; // rbx
  void (__fastcall ***v4)(_QWORD, _DWORD *); // rcx

  v3 = (_DWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 180) = a2;
  *(_DWORD *)(a1 + 184) = a3;
  v4 = *(void (__fastcall ****)(_QWORD, _DWORD *))(a1 + 8);
  *v3 = 3;
  (**v4)(v4, v3);
  return memset(v3, 0, 0x254uLL);
}
