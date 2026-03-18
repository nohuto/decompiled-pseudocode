/*
 * XREFs of ?FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ @ 0x1401938A0
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x14020547C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *__fastcall DXGSWAPCHAIN::FindEmptySlot(DXGSWAPCHAIN *this)
{
  __int64 i; // rdx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *result; // rax

  if ( !DXGFASTMUTEX::IsOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2940;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2940LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
  {
    result = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(160 * i + *((_QWORD *)this + 8));
    if ( !*((_DWORD *)result + 2) )
      return result;
  }
  return 0LL;
}
