/*
 * XREFs of ??0?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1802168B0
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180601CC0 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
        _QWORD *a1,
        volatile int *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rcx

  v2 = a1;
  v3 = *(_QWORD *)a2;
  *v2 = *(_QWORD *)a2;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 116), a2);
  return v2;
}
