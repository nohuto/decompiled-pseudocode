/*
 * XREFs of ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x18014B068
 * Callers:
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180134878 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x18014B0A0 (--1CDDARenderTarget@@UEAA@XZ.c)
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801A3EFC (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@MEAA@XZ @ 0x180245E38 (--1CDDisplayRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x180246038 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteRenderTarget@@UEAA@XZ @ 0x1802460B8 (--1CRemoteRenderTarget@@UEAA@XZ.c)
 * Callees:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18020E8A8 (--1COcclusionContext@@QEAA@XZ.c)
 */

void __fastcall CTargetDirtyBase<8>::~CTargetDirtyBase<8>(__int64 a1)
{
  COcclusionContext::~COcclusionContext((COcclusionContext *)(a1 + 472));
  if ( *(_QWORD *)(a1 + 464) )
    std::default_delete<CRegion>::operator()();
}
