/*
 * XREFs of ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x140207990
 * Callers:
 *     DxgkRemoveSurfaceFromSwapChain @ 0x140209190 (DxgkRemoveSurfaceFromSwapChain.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205EE8 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205FD4 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140300290 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::RemoveSurface(DXGSWAPCHAIN *this, struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *a2)
{
  unsigned int v5; // eax
  __int64 BufferIdx; // r9
  __int64 v7; // rax
  const wchar_t *v8; // r9
  bool v9; // dl
  __int64 v10; // r8
  __int64 v11; // rdi
  HANDLE hNtSurfaceHandle; // rdx
  DXGSWAPCHAIN *v13; // rcx
  HANDLE v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]

  if ( !DXGFASTMUTEX::IsOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2866;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2866LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 58) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2872;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"RemoveSurface is not allowed for sequential swapchains",
      2872LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  v5 = *((_DWORD *)this + 14);
  BufferIdx = a2->BufferIdx;
  if ( (unsigned int)BufferIdx >= v5 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)BufferIdx, v5);
    v7 = *((unsigned int *)this + 14);
    v8 = L"Surface index (0x%I64x) is outside of the range of the table size (0x%I64x)";
    WdLogGlobalForLineNumber = 2879;
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, a2->BufferIdx, v7, 0LL, 0LL, 0LL);
LABEL_8:
    DXGSWAPCHAIN::MarkAbandoned(this, v9);
    return 3221225485LL;
  }
  v10 = *((_QWORD *)this + 8);
  v11 = v10 + 160 * BufferIdx;
  if ( !*(_DWORD *)(v11 + 8) )
  {
    WdLogSingleEntry2(2LL, a2->BufferIdx, 0LL);
    v7 = *(int *)(v11 + 8);
    v8 = L"Surface index (0x%I64x) is not in use by producer, current status (0x%I64x)";
    WdLogGlobalForLineNumber = 2888;
    goto LABEL_7;
  }
  hNtSurfaceHandle = a2->hNtSurfaceHandle;
  if ( *(HANDLE *)(v11 + 96) != hNtSurfaceHandle )
  {
    WdLogSingleEntry3(2LL, hNtSurfaceHandle, *(_QWORD *)(v10 + 96), BufferIdx);
    v16 = a2->BufferIdx;
    v15 = *(_QWORD *)(*((_QWORD *)this + 8) + 96LL);
    v14 = a2->hNtSurfaceHandle;
    WdLogGlobalForLineNumber = 2896;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Surface handle (0x%I64x) provided by caller does not match the handle (0x%I64x) for that index (0x%I64x)",
      (__int64)v14,
      v15,
      v16,
      0LL,
      0LL);
    goto LABEL_8;
  }
  DXGSWAPCHAIN::DestroySurfacesResourcesLocal(this, 0, v10 + 160 * BufferIdx);
  if ( *(_BYTE *)(v11 + 112) )
  {
    *(_DWORD *)(v11 + 8) = 2;
  }
  else
  {
    DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v13, (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)v11);
    memset((void *)v11, 0, 0xA0uLL);
    --*((_DWORD *)this + 15);
  }
  return 0LL;
}
