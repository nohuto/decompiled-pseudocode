/*
 * XREFs of ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x1801C9AA4
 * Callers:
 *     ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C90E8 (--0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C9240 (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C93E0 (--0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C959C (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z @ 0x1801C974C (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1802591C4 (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ??0?$CMergedRectBase@$07@@QEAA@_N@Z @ 0x18005A1BC (--0-$CMergedRectBase@$07@@QEAA@_N@Z.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x180203E84 (--0COcclusionContext@@QEAA@XZ.c)
 */

__int64 __fastcall CTargetDirtyBase<8>::CTargetDirtyBase<8>(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &CTargetDirtyBase<8>::`vftable';
  CMergedRectBase<8>::CMergedRectBase<8>(a1 + 16, 1);
  *(_QWORD *)(a1 + 464) = 0LL;
  COcclusionContext::COcclusionContext((COcclusionContext *)(a1 + 472));
  result = a1;
  *(_WORD *)(a1 + 1872) = 256;
  return result;
}
