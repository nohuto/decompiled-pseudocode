/*
 * XREFs of ?SyncCaptureBits@CMagnifierRenderTargetProxy@@QEAAJII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@AEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1800670AC
 * Callers:
 *     ?OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@@Z @ 0x180066FDC (-OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTUR.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMagnifierRenderTargetProxy::SyncCaptureBits(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int, __int64))(**(_QWORD **)(a1 + 16)
                                                                                          + 296LL))(
           *(_QWORD *)(a1 + 16),
           *(unsigned int *)(a1 + 24),
           a2,
           a3,
           a4,
           a5,
           a6);
}
