/*
 * XREFs of ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x140050B50
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140301D84 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x14030261C (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x140050C1C (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 */

void __fastcall DXGSWAPCHAIN::GetOtherClientSurfaceInfo(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        unsigned int a3,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO **a4,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **a5)
{
  __int64 v6; // rbx
  __int64 v9; // rdx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v10; // rbx

  v6 = a3;
  if ( a3 >= *((_DWORD *)this + 14) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 467;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"SurfaceIdx < m_SurfaceTableSize", 467LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = *((unsigned int *)a2 + 7);
  v10 = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(*((_QWORD *)this + 8) + 160 * v6);
  *a4 = v10;
  *a5 = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)((char *)v10 + 48 * (int)DXGSWAPCHAIN::SwitchClient(this, v9) + 64);
}
