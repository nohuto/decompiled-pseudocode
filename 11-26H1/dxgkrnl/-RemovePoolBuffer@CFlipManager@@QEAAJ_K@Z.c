/*
 * XREFs of ?RemovePoolBuffer@CFlipManager@@QEAAJ_K@Z @ 0x14002A1DC
 * Callers:
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x14002A17C (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x14001C474 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x14002A264 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::RemovePoolBuffer(CFlipManager *this, __int64 a2)
{
  unsigned int v3; // esi
  struct CFlipResourceState *ResourceState; // rbp
  __int64 Win32kImportTable; // rax
  __int64 v6; // rbx
  void (__fastcall *v7)(_QWORD, __int64); // rdi
  unsigned int TracingId; // eax

  v3 = 0;
  ResourceState = CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 56));
  if ( ResourceState )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    v6 = *((_QWORD *)ResourceState + 3);
    v7 = *(void (__fastcall **)(_QWORD, __int64))(Win32kImportTable + 256);
    TracingId = CFlipManager::GetTracingId(this);
    v7(TracingId, v6);
    CEndpointResourceStateManager::RemovePoolBufferState((CFlipManager *)((char *)this + 56), ResourceState);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
