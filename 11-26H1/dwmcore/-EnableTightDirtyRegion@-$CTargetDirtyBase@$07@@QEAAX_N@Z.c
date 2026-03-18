/*
 * XREFs of ?EnableTightDirtyRegion@?$CTargetDirtyBase@$07@@QEAAX_N@Z @ 0x1801C9A10
 * Callers:
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x18014921C (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ??0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C93E0 (--0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z @ 0x1801C974C (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z.c)
 *     ?ProcessSetDirtyRegionMode@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETDIRTYREGIONMODE@@@Z @ 0x180216AE4 (-ProcessSetDirtyRegionMode@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURER.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1802591C4 (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??R?$default_delete@VCRegion@@@std@@QEBAXPEAVCRegion@@@Z @ 0x1801B31E4 (--R-$default_delete@VCRegion@@@std@@QEBAXPEAVCRegion@@@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

void __fastcall CTargetDirtyBase<8>::EnableTightDirtyRegion(__int64 a1, char a2)
{
  __int64 v2; // rbx
  _DWORD **v3; // rax
  FastRegion::CRegion **v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi

  v2 = a1;
  if ( a2 )
  {
    v3 = *(_DWORD ***)(a1 + 464);
    if ( v3 )
    {
      **v3 = 0;
      return;
    }
    v5 = operator new(0x48uLL);
    v6 = v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0x48uLL);
      a1 = (__int64)(v6 + 1);
      *v6 = v6 + 1;
    }
    v4 = *(FastRegion::CRegion ***)(v2 + 464);
    *(_QWORD *)(v2 + 464) = v6;
  }
  else
  {
    v4 = *(FastRegion::CRegion ***)(a1 + 464);
    *(_QWORD *)(a1 + 464) = 0LL;
  }
  if ( v4 )
    std::default_delete<CRegion>::operator()(a1, v4);
}
