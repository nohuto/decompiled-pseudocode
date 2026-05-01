/*
 * XREFs of ?GetPosition@CWinRTApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008B710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___ @ 0x18008BA2C (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_45f761d2d247477984b20.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_3244086198da98ac0fb1ddcbac704197___ @ 0x18008BB38 (ShellPositionerHelpers--PerformCallbackOnView__lambda_3244086198da98ac0fb1ddcbac704197___.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _lambda_3244086198da98ac0fb1ddcbac704197_::_lambda_3244086198da98ac0fb1ddcbac704197_ @ 0x18030A87C (_lambda_3244086198da98ac0fb1ddcbac704197_--_lambda_3244086198da98ac0fb1ddcbac704197_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::GetPosition(
        CWinRTApplicationView *this,
        const struct _GUID *a2,
        IUnknown *a3)
{
  int v3; // ebx
  IUnknown *v4; // rcx
  IUnknown *punk; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  punk = a3;
  a3->lpVtbl = 0LL;
  ((void (__fastcall *)(__int64 *, CWinRTApplicationView *, const struct _GUID *, IUnknown **))lambda_3244086198da98ac0fb1ddcbac704197_::_lambda_3244086198da98ac0fb1ddcbac704197_)(
    &v7,
    this,
    a2,
    &punk);
  punk = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___(&punk);
  v3 = ShellPositionerHelpers::PerformCallbackOnView__lambda_3244086198da98ac0fb1ddcbac704197___(punk);
  v4 = punk;
  if ( punk )
  {
    punk = 0LL;
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
