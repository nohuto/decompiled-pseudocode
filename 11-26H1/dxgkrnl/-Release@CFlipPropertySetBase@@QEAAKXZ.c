/*
 * XREFs of ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C
 * Callers:
 *     NtFlipObjectConsumerAcquirePresent @ 0x1400196F0 (NtFlipObjectConsumerAcquirePresent.c)
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x140019E94 (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     NtFlipObjectConsumerPostMessage @ 0x14001AEA0 (NtFlipObjectConsumerPostMessage.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001B0AC (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x14001B1F0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x14001B310 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectSetContent @ 0x14001B470 (NtFlipObjectSetContent.c)
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x14001B744 (--1CFlipPresentUpdate@@UEAA@XZ.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x14001B940 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x14001B988 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x14001C294 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x140022F48 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x140023904 (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x140025CDC (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x140029F6C (-Clear@CBackchannelManager@@QEAAXXZ.c)
 *     NtFlipObjectAddContent @ 0x140044810 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x140044B00 (NtFlipObjectAddPoolBuffer.c)
 *     ??1CContentResourceState@@UEAA@XZ @ 0x140058714 (--1CContentResourceState@@UEAA@XZ.c)
 *     ??1CFlipResource@@MEAA@XZ @ 0x140059444 (--1CFlipResource@@MEAA@XZ.c)
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x14005A7E0 (-Remove@CContentResourceState@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipPropertySetBase::Release(CFlipPropertySetBase *this)
{
  unsigned int v1; // ebx

  v1 = *((_DWORD *)this + 2) - 1;
  *((_DWORD *)this + 2) = v1;
  if ( !v1 )
    (**(void (__fastcall ***)(CFlipPropertySetBase *, __int64))this)(this, 1LL);
  return v1;
}
