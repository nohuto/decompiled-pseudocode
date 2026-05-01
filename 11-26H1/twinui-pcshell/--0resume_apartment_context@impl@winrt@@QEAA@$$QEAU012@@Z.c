/*
 * XREFs of ??0resume_apartment_context@impl@winrt@@QEAA@$$QEAU012@@Z @ 0x18018A9B4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___ @ 0x18018A940 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--MenuI.c)
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___ @ 0x18059B510 (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_3415c00afb73.c)
 *     winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___ @ 0x1805FFEE8 (winrt--impl--make_delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::resume_apartment_context::resume_apartment_context(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *a2 = 0LL;
  *(_QWORD *)a1 = v2;
  LODWORD(v2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = -1;
  *(_DWORD *)(a1 + 8) = v2;
  return a1;
}
