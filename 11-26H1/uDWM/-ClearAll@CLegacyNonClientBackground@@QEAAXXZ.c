/*
 * XREFs of ?ClearAll@CLegacyNonClientBackground@@QEAAXXZ @ 0x18005EA38
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180023778 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18007EA04 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?ClearBorder@CLegacyNonClientBackground@@QEAAXXZ @ 0x18000B308 (-ClearBorder@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CLegacyNonClientBackground::ClearAll(CBaseObject **this)
{
  struct CVisual *v2; // rdx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CLegacyNonClientBackground::ClearBorder((CLegacyNonClientBackground *)this);
  v2 = this[24];
  if ( v2 )
  {
    v3 = CContainerVisual::RemoveChild((CContainerVisual *)this, v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4F,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
        (const char *)(unsigned int)v3,
        v4);
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(this + 24);
  }
}
