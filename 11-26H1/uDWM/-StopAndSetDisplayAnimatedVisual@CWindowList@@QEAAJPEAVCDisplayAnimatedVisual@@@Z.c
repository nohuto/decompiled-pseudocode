/*
 * XREFs of ?StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z @ 0x18007D360
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::StopAndSetDisplayAnimatedVisual(CWindowList *this, struct CDisplayAnimatedVisual *a2)
{
  CBaseObject *v4; // rcx
  int v5; // eax
  unsigned int v6; // esi
  CBaseObject *v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = (CBaseObject *)*((_QWORD *)this + 70);
  if ( v4 != a2 )
  {
    *((_QWORD *)this + 70) = 0LL;
    v11 = v4;
    if ( v4 )
    {
      v5 = CDisplayAnimatedVisual::Stop(v4, 1LL);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x20C4,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v5,
          v9);
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v11);
        return v6;
      }
      wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(&v11);
    }
    v8 = (CBaseObject *)*((_QWORD *)this + 70);
    *((_QWORD *)this + 70) = a2;
    if ( a2 )
      CBaseObject::AddRef(a2);
    if ( v8 )
      CBaseObject::Release(v8);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v11);
  }
  return 0LL;
}
