/*
 * XREFs of ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D790
 * Callers:
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001B0AC (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x14001C294 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x14001C8BC (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ @ 0x14001D6FC (-ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ.c)
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x14005694C (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x140058714 (--1CContentResourceState@@UEAA@XZ.c)
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x14005A7E0 (-Remove@CContentResourceState@@UEAAXXZ.c)
 * Callees:
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CPoolBufferResource::RemoveUsageReference(CPoolBufferResource *this)
{
  int v1; // eax
  int v3; // eax
  void (__fastcall *v4)(_QWORD, CPoolBufferResource *, __int64); // rbx
  unsigned int TracingId; // eax
  __int64 v6; // r8

  v1 = *((_DWORD *)this + 20);
  if ( v1 )
  {
    v3 = v1 - 1;
    *((_DWORD *)this + 20) = v3;
    if ( !v3 )
    {
      KeSetEvent(*((PRKEVENT *)this + 8), 1, 0);
      v4 = *(void (__fastcall **)(_QWORD, CPoolBufferResource *, __int64))(DxgkGetWin32kImportTable() + 240);
      TracingId = CFlipManager::GetTracingId(*((CFlipManager **)this + 6));
      LOBYTE(v6) = 1;
      v4(TracingId, this, v6);
    }
  }
}
