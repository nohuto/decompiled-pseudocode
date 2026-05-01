/*
 * XREFs of ?RegisterFlyoutWindow@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAXPEAPEAX@Z @ 0x1805F6860
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?RegisterFlyoutWindow@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@56@AEBUWindowId@WindowManagement@ApplicationModel@456@AEBUhstring@6@@Z @ 0x1805F68CC (-RegisterFlyoutWindow@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUIIn.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::IMeetAndChatManager>::RegisterFlyoutWindow(
        __int64 a1,
        int a2,
        __int64 a3,
        HRESULT (__stdcall **a4)(IInspectable *This, const IID *const riid, void **ppvObject))
{
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *v5; // rcx
  struct IInspectable v6; // rax
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h]

  v11 = a3;
  v10 = a2;
  *a4 = 0LL;
  v5 = (winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((a1 - 8) & -(__int64)(a1 != 0));
  try
  {
    v6.lpVtbl = winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::RegisterFlyoutWindow(
                  v5,
                  (const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId *)&v9,
                  (const struct winrt::hstring *)&v10).lpVtbl;
    QueryInterface = v6.lpVtbl->QueryInterface;
    v6.lpVtbl->QueryInterface = 0LL;
    *a4 = QueryInterface;
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
