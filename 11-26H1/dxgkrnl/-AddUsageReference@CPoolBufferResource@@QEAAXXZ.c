/*
 * XREFs of ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D894
 * Callers:
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x14001C8BC (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140023164 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140024EA8 (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x14005694C (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 * Callees:
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CPoolBufferResource::AddUsageReference(CPoolBufferResource *this)
{
  void (__fastcall *v2)(_QWORD, CPoolBufferResource *, _QWORD); // rbx
  unsigned int TracingId; // eax

  if ( !*((_DWORD *)this + 20) )
  {
    KeResetEvent(*((PRKEVENT *)this + 8));
    v2 = *(void (__fastcall **)(_QWORD, CPoolBufferResource *, _QWORD))(DxgkGetWin32kImportTable() + 240);
    TracingId = CFlipManager::GetTracingId(*((CFlipManager **)this + 6));
    v2(TracingId, this, 0LL);
  }
  ++*((_DWORD *)this + 20);
}
