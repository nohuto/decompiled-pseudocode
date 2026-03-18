/*
 * XREFs of ?Release@CFlipResource@@QEAAKXZ @ 0x14001C888
 * Callers:
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001B0AC (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x14001C294 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x14001C8BC (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x140024790 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x140044E14 (-Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAV.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentationSurfaceInfo@@@Z @ 0x1400450C8 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentat.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x140058714 (--1CContentResourceState@@UEAA@XZ.c)
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x1400587DC (--1CFlipResourceState@@MEAA@XZ.c)
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x14005A7E0 (-Remove@CContentResourceState@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipResource::Release(CFlipResource *this)
{
  unsigned int v1; // ebx

  v1 = *((_DWORD *)this + 6) - 1;
  *((_DWORD *)this + 6) = v1;
  if ( !v1 )
    (**(void (__fastcall ***)(CFlipResource *, __int64))this)(this, 1LL);
  return v1;
}
