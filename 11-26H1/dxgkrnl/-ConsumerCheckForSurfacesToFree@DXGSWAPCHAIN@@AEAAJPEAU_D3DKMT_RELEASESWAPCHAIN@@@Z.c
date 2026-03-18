/*
 * XREFs of ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x140205CBC
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140301D84 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205EE8 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205FD4 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ConsumerCheckForSurfacesToFree(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2)
{
  unsigned int bProducer; // ebp
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // r14
  __int64 v10; // r8
  DXGSWAPCHAIN *v11; // rcx
  unsigned int v12; // eax

  if ( !DXGFASTMUTEX::IsOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4110;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 4110LL, 0LL, 0LL, 0LL, 0LL);
  }
  bProducer = a2[1].bProducer;
  v5 = 0;
  a2[1].bProducer = 0;
  while ( v5 < *((_DWORD *)this + 14) )
  {
    v6 = *((_QWORD *)this + 27);
    v7 = *(_QWORD *)(v6 + 16);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v6 + 12);
      while ( v8 != *(_DWORD *)(v6 + 8) )
      {
        if ( *(_DWORD *)(v7 + 4LL * v8) == v5 )
          goto LABEL_15;
        if ( ++v8 == *(_DWORD *)(v6 + 4) )
          v8 = 0;
      }
    }
    v9 = 160LL * v5;
    v10 = v9 + *((_QWORD *)this + 8);
    if ( *(_DWORD *)(v10 + 8) == 2 )
    {
      DXGSWAPCHAIN::DestroySurfacesResourcesLocal(this, 1LL, v10);
      DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(
        v11,
        (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(v9 + *((_QWORD *)this + 8)));
      memset((void *)(v9 + *((_QWORD *)this + 8)), 0, 0xA0uLL);
      v12 = a2[1].bProducer;
      if ( v12 >= bProducer )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4138;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Caller only provided 0x%I64x entires in deferred free list, that was not enough. Swapchain 0x%I64x",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225625LL;
      }
      *((_DWORD *)a2[1].pMetaData + v12) = v5;
      ++a2[1].bProducer;
      --*((_DWORD *)this + 15);
    }
LABEL_15:
    ++v5;
  }
  return 0LL;
}
