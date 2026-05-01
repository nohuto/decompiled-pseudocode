/*
 * XREFs of ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008B980
 * Callers:
 *     <none>
 * Callees:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___ @ 0x18008BA2C (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_45f761d2d247477984b20.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_4cc743d1a7d2ab9cdba1fde245759aa2___ @ 0x18030A688 (ShellPositionerHelpers--PerformCallbackOnView__lambda_4cc743d1a7d2ab9cdba1fde245759aa2___.c)
 *     _lambda_3244086198da98ac0fb1ddcbac704197_::_lambda_3244086198da98ac0fb1ddcbac704197_ @ 0x18030A87C (_lambda_3244086198da98ac0fb1ddcbac704197_--_lambda_3244086198da98ac0fb1ddcbac704197_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::GetPosition(
        CWin32ApplicationView *this,
        const struct _GUID *a2,
        IUnknown *a3)
{
  unsigned int v3; // esi
  int v4; // ebx
  IUnknown *v5; // rcx
  IUnknown *punk; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF

  punk = a3;
  v3 = 0;
  a3->lpVtbl = 0LL;
  ((void (__fastcall *)(__int64 *, CWin32ApplicationView *, const struct _GUID *, IUnknown **))lambda_3244086198da98ac0fb1ddcbac704197_::_lambda_3244086198da98ac0fb1ddcbac704197_)(
    &v8,
    this,
    a2,
    &punk);
  punk = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___(&punk);
  v4 = ShellPositionerHelpers::PerformCallbackOnView__lambda_4cc743d1a7d2ab9cdba1fde245759aa2___(punk);
  v5 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v5->lpVtbl->Release)(v5);
  }
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v3;
}
