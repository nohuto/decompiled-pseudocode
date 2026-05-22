/*
 * XREFs of ??1CUIHierarchy@@AEAA@XZ @ 0x180092D60
 * Callers:
 *     _CUIHierarchy::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__ @ 0x1801DDF10 (_CUIHierarchy--GetInstance_--_2_--_dynamic_atexit_destructor_for__instance__.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x18001075C (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?StopWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800A91C0 (-StopWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 */

void __fastcall CUIHierarchy::~CUIHierarchy(__int64 **this)
{
  __int64 *v2; // rcx

  if ( this[9] )
    CUIHierarchy::StopWindowWatcher((CUIHierarchy *)this);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)(this + 9));
  v2 = this[2];
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v2, this[3]);
    std::_Deallocate<16>(
      this[2],
      (struct std::nothrow_t *)(((char *)this[4] - (char *)this[2]) & 0xFFFFFFFFFFFFFFF8uLL));
    this[2] = 0LL;
    this[3] = 0LL;
    this[4] = 0LL;
  }
}
