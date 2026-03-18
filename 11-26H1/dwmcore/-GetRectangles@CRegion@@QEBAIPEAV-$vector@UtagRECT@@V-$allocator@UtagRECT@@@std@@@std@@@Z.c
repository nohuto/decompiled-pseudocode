/*
 * XREFs of ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800566F0
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800363C0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x18012B148 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x180172968 (-AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 *     ?GetDirtyRects@CConversionSwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801DB910 (-GetDirtyRects@CConversionSwapChain@@UEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@s.c)
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1801FD0C0 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x180253F5C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?GetDirtyRects@CCompSwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1802A3810 (-GetDirtyRects@CCompSwapChain@@UEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?GetDirtyRects@CLegacyRemotingSwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1802A4320 (-GetDirtyRects@CLegacyRemotingSwapChain@@UEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std.c)
 * Callees:
 *     ??$_Reallocate@$0A@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800568E0 (--$_Reallocate@$0A@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$emplace_back@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT@@AEAU2@@Z @ 0x1802346E0 (--$emplace_back@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagR.c)
 */

__int64 __fastcall CRegion::GetRectangles(int **a1, _QWORD *a2)
{
  int *v2; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  int *v10; // rbx
  int v11; // eax
  __int64 v12; // r12
  _DWORD *v13; // rbx
  char *v14; // r12
  int v15; // r14d
  _DWORD *v16; // rsi
  _DWORD *v17; // rcx
  __int64 v18; // r13
  __int64 v19; // rax
  _DWORD *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rax
  _DWORD v24[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v2 = *a1;
  v5 = **a1;
  if ( !v5 )
    return 0LL;
  v6 = (__int64)&v2[2 * v5 + 1];
  v7 = (v6 + *(int *)(v6 + 4) - (__int64)v2[4] - (__int64)(v2 + 3)) >> 3;
  if ( (_DWORD)v7 )
  {
    v8 = (unsigned int)v7 + ((__int64)(a2[1] - *a2) >> 4);
    v9 = (__int64)(a2[2] - *a2) >> 4;
    v25 = v8;
    if ( v8 > v9 )
    {
      if ( v8 > 0xFFFFFFFFFFFFFFFLL )
        std::_Xlength_error("vector too long");
      std::vector<tagRECT>::_Reallocate<0>(a2, &v25);
    }
    v10 = *a1;
    v11 = *v10;
    if ( *v10 )
    {
      v12 = v10[4];
      v13 = v10 + 3;
      v14 = (char *)v13 + v12;
      v15 = 0;
      v16 = &v13[2 * v11 - 2];
      v17 = v13 + 2;
      v18 = ((__int64)v13 + (int)v13[3] - (_QWORD)v14 + 8) >> 3;
      if ( (int)v18 <= 0 )
      {
        v15 = 1;
        do
        {
          v13 = v17;
          v19 = (int)v17[3];
          v14 = (char *)v17 + (int)v17[1];
          v17 += 2;
          LODWORD(v18) = ((__int64)v17 + v19 - (__int64)v14) >> 3;
          if ( (_DWORD)v18 )
            goto LABEL_16;
        }
        while ( v13 < v16 );
      }
    }
    else
    {
      v14 = (char *)v25;
      v16 = 0LL;
      v15 = v25;
      v13 = 0LL;
      LODWORD(v18) = v25;
    }
LABEL_13:
    while ( v13 < v16 )
    {
      v20 = v13 + 2;
      v24[1] = *v13;
      v24[3] = v13[2];
      v21 = 2 * v15;
      v24[0] = *(_DWORD *)&v14[4 * v21];
      v24[2] = *(_DWORD *)&v14[4 * v21 + 4];
      std::vector<tagRECT>::emplace_back<tagRECT &>(a2, v24);
      if ( ++v15 >= (int)v18 )
      {
        while ( 1 )
        {
          v13 = v20;
          v22 = (int)v20[3];
          v14 = (char *)v20 + (int)v20[1];
          v20 += 2;
          LODWORD(v18) = ((__int64)v20 + v22 - (__int64)v14) >> 3;
          if ( (_DWORD)v18 )
            break;
          if ( v13 >= v16 )
            goto LABEL_13;
        }
LABEL_16:
        v15 = 0;
      }
    }
  }
  return (unsigned int)v7;
}
