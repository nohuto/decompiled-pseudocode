/*
 * XREFs of ??$ActivateInstance@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@3@XZ @ 0x18027AC74
 * Callers:
 *     ??0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ @ 0x1801B3BD4 (--0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_6642fb088f192eae1a0f474d97eaf06a_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1805DD980 (-_lambda_invoker_cdecl_@_lambda_6642fb088f192eae1a0f474d97eaf06a_@@CA@AEBUIActivationFactory@Fou.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, void **); // rbx
  void **v5; // rax
  unsigned int v6; // eax
  void (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rax
  int v9; // [rsp+28h] [rbp-18h] BYREF
  __int128 v10; // [rsp+30h] [rbp-10h]
  void (__fastcall ***v11)(_QWORD, void *, struct IUnknown **); // [rsp+60h] [rbp+20h] BYREF
  struct IUnknown *v12; // [rsp+68h] [rbp+28h] BYREF

  v12 = a2;
  v11 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v3 = *a1;
  v4 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)*a1 + 48LL);
  v5 = winrt::put_abi((winrt *)&v11, a2);
  v6 = v4(v3, v5);
  winrt::check_hresult(&v12, v6, &v9);
  v7 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v11;
  if ( v11 )
  {
    v12 = 0LL;
    (**v11)(v11, &winrt::impl::guid_v<winrt::SystemSettings::Desktop::Taskbar::IDesktopTaskbarDaSetting>, &v12);
    a2->lpVtbl = (struct IUnknownVtbl *)v12;
    v7 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v11;
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
  return a2;
}
