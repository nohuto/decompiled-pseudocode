/*
 * XREFs of ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x140206AF4
 * Callers:
 *     DxgkOpenSwapChain @ 0x140405E20 (DxgkOpenSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205FD4 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z @ 0x14020732C (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_OPENSWAPCHAIN *a2)
{
  unsigned int v4; // ebx
  int v5; // ebp
  UINT v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rsi
  _BYTE v11[16]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v4 = 0;
  if ( a2->SurfaceCount != *((_DWORD *)this + 15) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2648;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pKmOpen->SurfaceCount == m_ActiveSurfaceCo",
      2648LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = 0;
  v6 = 0;
  if ( *((_DWORD *)this + 15) )
  {
    while ( v6 < a2->SurfaceCount )
    {
      v7 = *((_QWORD *)this + 8);
      v8 = 160LL * v6;
      if ( !*(_DWORD *)(v8 + v7 + 8) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2656;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pSurfaceTable[Idx].SlotStatus != SLOT_AVAILABLE",
          2656LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v7 = *((_QWORD *)this + 8);
      }
      v5 = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
             this,
             (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(v8 + v7),
             a2->bProducer,
             &a2->pNtSurfaceHandles[v6],
             HIDWORD(a2[1].hNtSwapChain) != 0,
             1);
      if ( v5 < 0 )
      {
        if ( *((_DWORD *)this + 14) )
        {
          v9 = a2->bProducer ? 0x30 : 0;
          do
            DXGSWAPCHAIN::DestroySurfacesResourcesLocal(
              this,
              *(_DWORD *)((char *)this + v9 + 124),
              *((_QWORD *)this + 8) + 160LL * v4++);
          while ( v4 < *((_DWORD *)this + 14) );
        }
        break;
      }
      if ( ++v6 >= *((_DWORD *)this + 15) )
        break;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  return (unsigned int)v5;
}
