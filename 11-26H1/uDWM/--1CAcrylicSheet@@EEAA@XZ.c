/*
 * XREFs of ??1CAcrylicSheet@@EEAA@XZ @ 0x1800956B8
 * Callers:
 *     ??_GCAcrylicSheet@@EEAAPEAXI@Z @ 0x1800957B0 (--_GCAcrylicSheet@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800401D0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18005E508 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CAcrylicSheet::~CAcrylicSheet(CBaseObject **this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *this = (CBaseObject *)&CAcrylicSheet::`vftable';
  v2 = CAcrylicSheet::StopAnimations((CAcrylicSheet *)this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x32,
      (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v2);
  std::_Func_class<void,>::_Tidy((__int64)(this + 36), v3);
  std::_Func_class<void,>::_Tidy((__int64)(this + 28), v4);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 27);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 26);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 25);
  CContainerVisual::~CContainerVisual((CContainerVisual *)this);
}
