/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController_winrt::Windows::Foundation::IInspectable___lambda_a7fe895307a8c6dca783ef8ed4834783___::Invoke @ 0x180389620
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_query@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIStartExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801E5230 (--$try_query@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UIWeakRefe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController_winrt::Windows::Foundation::IInspectable___lambda_a7fe895307a8c6dca783ef8ed4834783___::Invoke(
        __int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IStartExperienceManager>(
    (__int64 *)(a1 + 24),
    &v5);
  if ( v5 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 560LL) + 48LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 560LL),
           1026LL,
           *(_QWORD *)(a1 + 16),
           0LL);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x60B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v5);
  return 0LL;
}
