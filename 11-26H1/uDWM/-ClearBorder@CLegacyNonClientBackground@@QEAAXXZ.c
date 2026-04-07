/*
 * XREFs of ?ClearBorder@CLegacyNonClientBackground@@QEAAXXZ @ 0x18000B308
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18000ACD4 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ClearAll@CLegacyNonClientBackground@@QEAAXXZ @ 0x18005EA38 (-ClearAll@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ?EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x180081CD0 (-EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CLegacyNonClientBackground::ClearBorder(CLegacyNonClientBackground *this)
{
  char *v1; // rbx
  struct CVisual *v2; // rdx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this + 200;
  v2 = (struct CVisual *)*((_QWORD *)this + 25);
  if ( v2 )
  {
    v3 = CContainerVisual::RemoveChild(this, v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x58,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
        (const char *)(unsigned int)v3,
        v4);
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(v1);
  }
}
