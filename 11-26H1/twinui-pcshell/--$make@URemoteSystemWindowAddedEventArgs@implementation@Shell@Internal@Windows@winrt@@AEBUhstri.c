/*
 * XREFs of ??$make@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBUWindowId@UI@56@@winrt@@YA?A_PAEBUhstring@0@AEBUWindowId@UI@Windows@0@@Z @ 0x180646A24
 * Callers:
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x1806524C8 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0RemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBUWindowId@UI@45@@Z @ 0x180667970 (--0RemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstrin.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs,winrt::hstring const &,winrt::Windows::UI::WindowId const &>(
        _QWORD *a1,
        const struct winrt::hstring *a2,
        const struct winrt::Windows::UI::WindowId *a3)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs *v7; // [rsp+40h] [rbp+8h]

  v7 = (winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs *)operator new(0x28uLL);
  winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs::RemoteSystemWindowAddedEventArgs(
    v7,
    a2,
    a3);
  *(_QWORD *)v7 = &winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs::`vftable';
  *a1 = (char *)v7 + 16;
  return a1;
}
