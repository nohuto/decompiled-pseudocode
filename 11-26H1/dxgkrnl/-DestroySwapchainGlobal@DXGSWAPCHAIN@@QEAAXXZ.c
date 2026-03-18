/*
 * XREFs of ?DestroySwapchainGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1402063A0
 * Callers:
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x140205450 (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFIXEDQUEUE@@QEAA@XZ @ 0x1400645FC (--1DXGFIXEDQUEUE@@QEAA@XZ.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205EE8 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySwapchainGlobal(DXGSWAPCHAIN *this)
{
  unsigned int i; // edi
  void *v3; // rcx
  void *v4; // rdi
  void *v5; // rcx
  struct DXGPROCESS *Current; // rax

  if ( *((_QWORD *)this + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1901;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_ProducerInfo.pNtProcess == nullptr",
      1901LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 14) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1902;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_ConsumerInfo.pNtProcess == nullptr",
      1902LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = 0; i < *((_DWORD *)this + 14); ++i )
    DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(
      this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(*((_QWORD *)this + 8) + 160LL * i));
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
    *((_QWORD *)this + 8) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 27);
  if ( v4 )
  {
    DXGFIXEDQUEUE::~DXGFIXEDQUEUE(*((DXGFIXEDQUEUE **)this + 27));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
    *((_QWORD *)this + 27) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 28);
  if ( v5 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
    *((_QWORD *)this + 28) = 0LL;
  }
  Current = DXGPROCESS::GetCurrent();
  WdLogSingleEntry2(4LL, this, Current);
  WdLogGlobalForLineNumber = 1932;
}
