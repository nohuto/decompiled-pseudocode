/*
 * XREFs of ??0GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@34@V?$com_ptr_t@UIApplicationFrameFactory@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18035417C
 * Callers:
 *     ??$create_and_initialize@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@45@AEAV?$ComPtr@UIApplicationFrameFactory@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@@impl@winrt@@YAPEAUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@56@AEAV?$ComPtr@UIApplicationFrameFactory@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@@Z @ 0x18033F594 (--$create_and_initialize@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800A9A00 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ??0?$producers_base@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@V?$tuple@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180354164 (--0-$producers_base@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winr.c)
 *     ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1803542F8 (--4-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GameBarWindowControlImpl(
        __int64 a1,
        struct IUnknown *a2,
        __int64 *a3,
        __int64 *a4)
{
  void *v8; // r8

  winrt::impl::producers_base<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,std::tuple<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl>>::producers_base<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,std::tuple<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::impl::heap_implements<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::`vftable';
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 105) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_BYTE *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 148) = 0;
  *(_BYTE *)(a1 + 153) = 0;
  *(_BYTE *)(a1 + 155) = 0;
  *(_BYTE *)(a1 + 157) = 0;
  *(_BYTE *)(a1 + 164) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_DWORD *)(a1 + 184) = SHTaskPoolGetUniqueContext();
  winrt::copy_from_abi((winrt *)(a1 + 24), a2, v8);
  wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(a1 + 32, a3);
  wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(a1 + 48, a4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a4);
  return a1;
}
