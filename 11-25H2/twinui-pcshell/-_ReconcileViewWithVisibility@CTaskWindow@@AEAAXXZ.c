/*
 * XREFs of ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x1800146D8
 * Callers:
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800129C0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 *     ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x180306540 (-Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180014E48 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x180014F84 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTaskWindow::_ReconcileViewWithVisibility(struct IImmersiveApplicationInternal **this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( this[7] )
  {
    CTaskWindow::s_UpdateNavigationLevel(this[17], (struct CTaskWindow::TASK_WINDOW *)(this + 5));
    v8 = 0LL;
    v2 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
           this + 7,
           &v8);
    v3 = retaddr;
    if ( v2 < 0 )
    {
      v5 = 1177LL;
    }
    else
    {
      v2 = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v8 + 88LL))(v8, *((_DWORD *)this + 32) == 2);
      v3 = retaddr;
      if ( v2 >= 0 )
        goto LABEL_4;
      v5 = 1181LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v3,
      (void *)v5,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
      (const char *)(unsigned int)v2,
      v6);
LABEL_4:
    v4 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
}
