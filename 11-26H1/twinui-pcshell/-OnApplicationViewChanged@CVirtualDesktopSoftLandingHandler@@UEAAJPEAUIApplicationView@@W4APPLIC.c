/*
 * XREFs of ?OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801F3DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddWindow@CVirtualDesktopSoftLandingHandler@@AEAAJPEAUHWND__@@@Z @ 0x1801F3E88 (-AddWindow@CVirtualDesktopSoftLandingHandler@@AEAAJPEAUHWND__@@@Z.c)
 *     ?remove@?$list@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAAXAEBQEAUHWND__@@@Z @ 0x180568968 (-remove@-$list@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAAXAEBQEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::OnApplicationViewChanged(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3,
        const char *a4)
{
  int v6; // r8d
  int v7; // r8d
  int v8; // eax
  struct IApplicationView *v9; // rdx
  HWND WindowForView; // rax
  __int64 result; // rax
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    if ( a3 )
    {
      v6 = a3 - 1;
      if ( !v6 )
        goto LABEL_6;
      v7 = v6 - 9;
      if ( v7 )
      {
        if ( v7 != 1 )
          return 0LL;
LABEL_6:
        v12[0] = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
        if ( v12[0] )
          std::list<HWND__ *>::remove(a1 + 168, v12);
        return 0LL;
      }
    }
    v14 = 0;
    v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), int *))(*a2)[27])(
           a2,
           &v14);
    if ( v8 >= 0 )
    {
      if ( v14 )
      {
        WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v9);
        if ( WindowForView )
          CVirtualDesktopSoftLandingHandler::AddWindow((CVirtualDesktopSoftLandingHandler *)(a1 - 16), WindowForView);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x33,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
        (const char *)(unsigned int)v8);
    }
    return 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x48,
                           (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
                           a4);
  }
  return result;
}
