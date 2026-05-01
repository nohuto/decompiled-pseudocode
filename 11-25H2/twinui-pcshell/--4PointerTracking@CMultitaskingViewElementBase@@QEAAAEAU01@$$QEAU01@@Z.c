/*
 * XREFs of ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z @ 0x1804AF9C0
 * Callers:
 *     ?DragLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804AFE60 (-DragLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?Drop@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804B00D0 (-Drop@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingVie.c)
 *     ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804B0DA0 (-PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801B9298 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::PointerTracking::operator=(__int64 a1, __int64 a2)
{
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)(a1 + 32), (char *)(a2 + 32));
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)(a1 + 40), (char *)(a2 + 40));
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  return a1;
}
