/*
 * XREFs of ?GetPosition@CWinRTApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180134F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___ @ 0x18013526C (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_45f761d2d247477984b20.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_3244086198da98ac0fb1ddcbac704197___ @ 0x180135378 (ShellPositionerHelpers--PerformCallbackOnView__lambda_3244086198da98ac0fb1ddcbac704197___.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::GetPosition(IUnknown *this, const struct _GUID *a2, void **a3)
{
  int v3; // ebx
  IUnknown *v4; // rcx
  IUnknown *punk[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]
  void **v8; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a3 = 0LL;
  punk[1] = this;
  v7 = (__int128)*a2;
  v8 = a3;
  punk[0] = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___(punk);
  v3 = ShellPositionerHelpers::PerformCallbackOnView__lambda_3244086198da98ac0fb1ddcbac704197___(punk[0]);
  v4 = punk[0];
  if ( punk[0] )
  {
    punk[0] = 0LL;
    ((void (__fastcall *)(IUnknown *))v4->lpVtbl->Release)(v4);
  }
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEA,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
