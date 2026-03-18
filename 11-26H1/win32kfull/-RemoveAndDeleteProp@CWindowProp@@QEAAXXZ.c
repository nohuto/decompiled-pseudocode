/*
 * XREFs of ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x14004E2F8
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x14013E5A0 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1401D215C (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     RemoveVisRgnTracker @ 0x1401D2208 (RemoveVisRgnTracker.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1401F69D0 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x140201C1C (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 *     ?DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1402062BC (-DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402E2708 (-PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402E2C88 (-RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall CWindowProp::RemoveAndDeleteProp(CWindowProp *this)
{
  unsigned __int16 v2; // ax
  void (__fastcall **v3)(CWindowProp *); // rax

  v2 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  InternalRemoveProp(*((_QWORD *)this + 2), v2, 1u);
  v3 = *(void (__fastcall ***)(CWindowProp *))this;
  *((_QWORD *)this + 2) = 0LL;
  (*v3)(this);
}
