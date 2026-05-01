/*
 * XREFs of ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x18023FC10
 * Callers:
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180516450 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x180516B40 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct tagRECT *__fastcall JointResize::ComputeExtendedViewRect(
        JointResize *this,
        struct tagRECT *__return_ptr retstr,
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct tagRECT *a4)
{
  __int64 (__fastcall **v5)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int v7; // eax
  struct IApplicationView *v8; // rdx
  __int64 v9; // rbx
  HWND WindowForView; // rax
  int v12[4]; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *retstr = *a4;
  v5 = *a3;
  *(_OWORD *)v12 = 0LL;
  v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), int *))v5[16])(
         a3,
         v12);
  v9 = 0LL;
  if ( v7 >= 0 )
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a3, v8);
    if ( WindowForView )
    {
      Rect = 0LL;
      if ( GetWindowRect(WindowForView, &Rect) )
      {
        do
        {
          *(LONG *)((char *)&retstr->left + v9 * 4) += v12[v9] - *(LONG *)((char *)&Rect.left + v9 * 4);
          ++v9;
        }
        while ( v9 < 4 );
      }
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2EF,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v7);
  }
  return retstr;
}
