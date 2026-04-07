/*
 * XREFs of ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800CD780
 * Callers:
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800CD000 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z @ 0x180082BF4 (--$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800CD850 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 */

void __fastcall CTouchPressHoldVisual::Stop(CBaseObject **this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CContainerVisual::RemoveAllChildren((CContainerVisual *)this);
  *((_BYTE *)this + 260) = 0;
  v2 = CSpriteVisual::SetBrush<std::nullptr_t>((__int64)this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB2,
      (int)"clientcore\\windows\\dwm\\udwm\\touchpressholdvisual.cpp",
      (const char *)(unsigned int)v2);
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(this + 38);
  CTouchPressHoldVisual::StopTimer((CTouchPressHoldVisual *)this);
  CTouchPressHoldVisual::SetETWAnimation((__int64)this, 0);
}
