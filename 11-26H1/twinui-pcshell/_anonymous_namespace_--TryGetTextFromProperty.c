/*
 * XREFs of _anonymous_namespace_::TryGetTextFromProperty @ 0x180029018
 * Callers:
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180279994 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryLookupStringProperty @ 0x1805D9460 (_anonymous_namespace_--TryLookupStringProperty.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetString@?$consume_Windows_Foundation_IPropertyValue@UIPropertyValue@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800281CC (-GetString@-$consume_Windows_Foundation_IPropertyValue@UIPropertyValue@Foundation@Windows@winrt@.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002824C (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18002843C (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
winrt::hstring *__fastcall anonymous_namespace_::TryGetTextFromProperty(
        winrt::hstring *this,
        void (__fastcall ****a2)(_QWORD, void *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v4)(_QWORD, void *, __int64 *); // rbx
  __int64 v5; // rax
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  __int64 v7; // rdi
  __int64 v8; // r14
  _DWORD *v10; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v11[4]; // [rsp+30h] [rbp-20h] BYREF
  const unsigned __int16 *v12; // [rsp+40h] [rbp-10h]
  void (__fastcall ***v13)(_QWORD, void *, __int64 *); // [rsp+88h] [rbp+38h] BYREF
  void (__fastcall ***v14)(_QWORD, void *, __int64 *); // [rsp+90h] [rbp+40h] BYREF
  __int64 v15; // [rsp+98h] [rbp+48h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v13 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, (__int64 *)&v13);
    v4 = v13;
    v5 = (__int64)v13;
  }
  else
  {
    v4 = 0LL;
    v5 = 0LL;
  }
  v14 = v4;
  if ( !v5 )
  {
LABEL_11:
    winrt::hstring::hstring(this, &pvData);
    goto LABEL_15;
  }
  v11[0] = 1;
  v11[1] = 5;
  v12 = L"#text";
  v10 = v11;
  v6 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
                                                             &v14,
                                                             (winrt *)&v15,
                                                             &v10);
  if ( v6 )
  {
    v13 = 0LL;
    (**v6)(v6, &winrt::impl::guid_v<winrt::Windows::Foundation::IPropertyValue>, (__int64 *)&v13);
    v7 = (__int64)v13;
    v8 = (__int64)v13;
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
  }
  v13 = (void (__fastcall ***)(_QWORD, void *, __int64 *))v7;
  if ( v15 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
  if ( !v8
    || (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View((__int64 *)&v13) != 12 )
  {
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
    goto LABEL_11;
  }
  winrt::impl::consume_Windows_Foundation_IPropertyValue<winrt::Windows::Foundation::IPropertyValue>::GetString(
    (__int64 *)&v13,
    this);
  if ( v13 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
LABEL_15:
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v14);
  return this;
}
