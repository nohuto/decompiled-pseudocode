/*
 * XREFs of ?RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x140029BFC
 * Callers:
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x140029EC8 (-RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x14001C474 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x140029854 (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?RemoveContentState@CEndpointResourceStateManager@@QEAAXPEAVCContentResourceState@@@Z @ 0x140029D10 (-RemoveContentState@CEndpointResourceStateManager@@QEAAXPEAVCContentResourceState@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::RemoveContent(CFlipManager *this, __int64 a2, struct CDisableScanoutToken **a3)
{
  CContentResource **ResourceState; // rsi
  __int64 Win32kImportTable; // rax
  CContentResource *v7; // rbx
  void (__fastcall *v8)(_QWORD, _QWORD, CContentResource *); // rdi
  unsigned int TracingId; // eax
  unsigned int v10; // ebx
  CEndpointResourceStateManager *v11; // rcx

  ResourceState = (CContentResource **)CEndpointResourceStateManager::FindResourceState(
                                         this,
                                         a2,
                                         (struct _LIST_ENTRY *)((char *)this + 72));
  if ( ResourceState )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    v7 = ResourceState[3];
    v8 = *(void (__fastcall **)(_QWORD, _QWORD, CContentResource *))(Win32kImportTable + 288);
    TracingId = CFlipManager::GetTracingId(this);
    v8(0LL, TracingId, v7);
    v10 = CContentResource::ClearCompositionSurfaceBinding(ResourceState[3], a3);
    CEndpointResourceStateManager::RemoveContentState(v11, (struct CContentResourceState *)ResourceState);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
