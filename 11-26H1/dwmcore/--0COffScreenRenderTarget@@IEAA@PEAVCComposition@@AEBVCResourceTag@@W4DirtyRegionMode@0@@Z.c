/*
 * XREFs of ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z @ 0x1801C974C
 * Callers:
 *     ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18005B690 (--0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18020F1D8 (--0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180214088 (--0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CVisualCapture@@QEAA@PEAVCComposition@@@Z @ 0x1802861E4 (--0CVisualCapture@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C9998 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?EnableTightDirtyRegion@?$CTargetDirtyBase@$07@@QEAAX_N@Z @ 0x1801C9A10 (-EnableTightDirtyRegion@-$CTargetDirtyBase@$07@@QEAAX_N@Z.c)
 *     ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x1801C9AA4 (--0-$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z.c)
 */

unsigned __int64 __fastcall COffScreenRenderTarget::COffScreenRenderTarget(
        unsigned __int64 a1,
        struct CComposition *a2,
        __int64 a3,
        int a4)
{
  __int128 *v6; // r10
  __int128 v7; // xmm0
  int v8; // r9d
  __int64 v9; // rdx
  unsigned __int64 result; // rax

  CRenderTarget::CRenderTarget((CRenderTarget *)a1, a2);
  *(_QWORD *)(a1 + 80) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)a1 = &COffScreenRenderTarget::`vftable'{for `CNotificationResource'};
  *(_QWORD *)(a1 + 88) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)(a1 + 96) = &COffScreenRenderTarget::`vftable'{for `IRenderTarget'};
  v7 = *v6;
  *(_DWORD *)(a1 + 176) = v8;
  *(_OWORD *)(a1 + 160) = v7;
  *(_DWORD *)(a1 + 180) = 0;
  *(_OWORD *)(a1 + 208) = xmmword_1802F3860;
  *(_DWORD *)(a1 + 184) = 1;
  *(_OWORD *)(a1 + 224) = xmmword_1802F3870;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_OWORD *)(a1 + 240) = xmmword_1802F3880;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_OWORD *)(a1 + 256) = xmmword_1802F3890;
  *(_OWORD *)(a1 + 272) = xmmword_1802F38A0;
  *(_OWORD *)(a1 + 288) = xmmword_1802F38B0;
  *(_DWORD *)(a1 + 304) = 1065353216;
  *(_QWORD *)(a1 + 368) = 1065353216LL;
  *(_QWORD *)(a1 + 308) = 1065353216LL;
  *(_QWORD *)(a1 + 316) = 0LL;
  *(_DWORD *)(a1 + 324) = 0;
  *(_QWORD *)(a1 + 328) = 1065353216LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 348) = 1065353216LL;
  *(_QWORD *)(a1 + 356) = 0LL;
  *(_DWORD *)(a1 + 364) = 0;
  *(_BYTE *)(a1 + 373) &= 0xE9u;
  *(_BYTE *)(a1 + 373) |= 0x29u;
  *(_BYTE *)(a1 + 372) = -86;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = -1LL;
  CTargetDirtyBase<8>::CTargetDirtyBase<8>(a1 + 408, (a1 + 88) & ((unsigned __int128)-(__int128)a1 >> 64));
  *(_QWORD *)(a1 + 408) = &CTargetDirtyBase<8>::`vftable';
  LOBYTE(v9) = a4 != 0;
  *(_QWORD *)(a1 + 2288) = a1 + 2320;
  *(_QWORD *)(a1 + 2296) = a1 + 2320;
  *(_DWORD *)(a1 + 2304) = 6;
  *(_QWORD *)(a1 + 2308) = 6LL;
  *(_QWORD *)(a1 + 2368) = 0LL;
  *(_WORD *)(a1 + 2376) = 0;
  *(_BYTE *)(a1 + 2378) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_DWORD *)(a1 + 152) = 1065353216;
  CTargetDirtyBase<8>::EnableTightDirtyRegion(a1 + 408, v9);
  result = a1;
  *(_QWORD *)(a1 + 400) = 16 * g_qpcFrequency.QuadPart / 1000;
  return result;
}
