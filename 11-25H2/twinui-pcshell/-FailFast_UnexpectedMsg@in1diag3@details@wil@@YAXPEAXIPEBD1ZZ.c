/*
 * XREFs of ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180297380
 * Callers:
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x180216DA8 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18045FB90 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     ?ShellViewToCoreKeyboardViewType@TouchKeyboardExperienceManager@@AEAA?AW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4ShellView@Shell@6WindowsUdk@winrt@@@Z @ 0x1804646A0 (-ShellViewToCoreKeyboardViewType@TouchKeyboardExperienceManager@@AEAA-AW4CoreKeyboardViewType@Co.c)
 *     ?UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUhstring@7@1@Z @ 0x180471AAC (-UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shel.c)
 *     ?RememberInputAppRequestedShow@InvocationMethodTracker@KeyboardHosting@@QEAA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@0@Z @ 0x180472C0C (-RememberInputAppRequestedShow@InvocationMethodTracker@KeyboardHosting@@QEAA-AV-$basic_string_vi.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1802973B4 (--$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

void __noreturn wil::details::in1diag3::FailFast_UnexpectedMsg(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        const char *a5,
        ...)
{
  int v5; // [rsp+20h] [rbp-48h]
  wil::details *v6; // [rsp+30h] [rbp-38h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  LODWORD(v6) = -2147418113;
  wil::details::ReportFailure_HrMsg<3>((int)this, (int)a2, a3, (int)a4, v5, retaddr, v6, (__int64)a4, (__int64)&a5);
}
