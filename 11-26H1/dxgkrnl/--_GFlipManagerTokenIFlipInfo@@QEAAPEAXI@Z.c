/*
 * XREFs of ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x14001949C
 * Callers:
 *     ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x140019350 (-Discard@CFlipManagerToken@@UEAAXXZ.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x140023904 (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x140023B84 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x140024424 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 * Callees:
 *     ??1FlipManagerTokenIFlipInfo@@QEAA@XZ @ 0x1400194D0 (--1FlipManagerTokenIFlipInfo@@QEAA@XZ.c)
 */

FlipManagerTokenIFlipInfo *__fastcall FlipManagerTokenIFlipInfo::`scalar deleting destructor'(
        FlipManagerTokenIFlipInfo *P)
{
  FlipManagerTokenIFlipInfo::~FlipManagerTokenIFlipInfo(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
