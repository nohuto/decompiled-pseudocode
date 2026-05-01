/*
 * XREFs of ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180063D14
 * Callers:
 *     ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180063AF8 (-SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilter.c)
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x180064048 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ?HideTabProxyWindowFromAltTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXUguid@6@_N@Z @ 0x1800A36C8 (-HideTabProxyWindowFromAltTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXUguid.c)
 *     ?ToggleAltTabVisibility@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x18055EF80 (-ToggleAltTabVisibility@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AB23C (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AB7B0 (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHICON__@@@Z @ 0x1801C9EC4 (-reset@-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIcon@@YAH0@ZU-$int.c)
 *     ?SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801E0F54 (-SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 *     ?SetAndCreateIconFromGlyphAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1802D0EE0 (-SetAndCreateIconFromGlyphAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        char a2)
{
  HWND v3; // rcx
  char v4; // di
  int v5; // eax
  char v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 != (*((_BYTE *)this + 184) == 0) )
  {
    v3 = (HWND)*((_QWORD *)this + 4);
    if ( a2 )
    {
      SetPropW(v3, (LPCWSTR)0xA921, HANDLE_FLAG_INHERIT);
      *((_BYTE *)this + 184) = 0;
      SendMessageW(*((HWND *)this + 4), 0x80u, 0LL, 0LL);
      SendMessageW(*((HWND *)this + 4), 0x80u, 1uLL, 0LL);
      wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::reset(
        (char *)this + 88,
        0LL);
      wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::reset(
        (char *)this + 96,
        0LL);
      return;
    }
    RemovePropW(v3, (LPCWSTR)0xA921);
    v4 = 1;
    *((_BYTE *)this + 184) = 1;
    if ( *(_QWORD *)winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
                      (char *)this + 48,
                      &v8) )
    {
      if ( *(_QWORD *)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
                        (char *)this + 48,
                        &v6) )
      {
        v4 = 0;
LABEL_11:
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
LABEL_12:
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
        if ( v4 )
          winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync(this, &v7);
        else
          winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync(this, &v7);
        return;
      }
      v5 = 2;
    }
    else
    {
      v5 = 0;
    }
    if ( !v5 )
      goto LABEL_12;
    goto LABEL_11;
  }
}
