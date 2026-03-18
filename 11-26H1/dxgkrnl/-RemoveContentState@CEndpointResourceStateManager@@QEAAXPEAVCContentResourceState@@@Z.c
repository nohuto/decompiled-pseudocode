/*
 * XREFs of ?RemoveContentState@CEndpointResourceStateManager@@QEAAXPEAVCContentResourceState@@@Z @ 0x140029D10
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14001C914 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x140029BFC (-RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?RemoveAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x140029C94 (-RemoveAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CEndpointResourceStateManager::RemoveContentState(
        CEndpointResourceStateManager *this,
        struct CContentResourceState *a2)
{
  (*(void (__fastcall **)(struct CContentResourceState *))(*(_QWORD *)a2 + 24LL))(a2);
}
