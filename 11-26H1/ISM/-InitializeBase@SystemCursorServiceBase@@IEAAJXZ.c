/*
 * XREFs of ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x1800922A8
 * Callers:
 *     ?Initialize@DesktopSystemCursorService@@QEAAJXZ @ 0x18008DD8C (-Initialize@DesktopSystemCursorService@@QEAAJXZ.c)
 *     ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x1800FBD44 (-Initialize@SystemCursorService2@@QEAAJK@Z.c)
 * Callees:
 *     ?CreateInteropCompositor@WindowsCompositionGlobals@SystemCursors@@SAJPEAPEAUICompositor@Composition@UI@Windows@@@Z @ 0x18007D788 (-CreateInteropCompositor@WindowsCompositionGlobals@SystemCursors@@SAJPEAPEAUICompositor@Composit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009236C (-reset@-$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VWindowsCompositionGlobals@SystemCursors@@U?$default_delete@VWindowsCompositionGlobals@SystemCursors@@@std@@@std@@QEAA@XZ @ 0x1800995EC (--1-$unique_ptr@VWindowsCompositionGlobals@SystemCursors@@U-$default_delete@VWindowsCompositionG.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??R?$default_delete@VWindowsCompositionGlobals@SystemCursors@@@std@@QEBAXPEAVWindowsCompositionGlobals@SystemCursors@@@Z @ 0x1800FAC38 (--R-$default_delete@VWindowsCompositionGlobals@SystemCursors@@@std@@QEBAXPEAVWindowsCompositionG.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorServiceBase::InitializeBase(SystemCursorServiceBase *this)
{
  struct Windows::UI::Composition::ICompositor **v2; // rbx
  int InteropCompositor; // eax
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::ICompositor **v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct Windows::UI::Composition::ICompositor **)operator new(8uLL);
  *v2 = 0LL;
  v9 = v2;
  wil::com_ptr_t<Windows::UI::Composition::IVisual,wil::err_returncode_policy>::reset(v2);
  InteropCompositor = SystemCursors::WindowsCompositionGlobals::CreateInteropCompositor(v2);
  v4 = InteropCompositor;
  if ( InteropCompositor >= 0 )
  {
    v9 = 0LL;
    v7 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v2;
    if ( v7 )
      ((void (*)(void))std::default_delete<SystemCursors::WindowsCompositionGlobals>::operator())();
    std::unique_ptr<SystemCursors::WindowsCompositionGlobals>::~unique_ptr<SystemCursors::WindowsCompositionGlobals>(&v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
      (const char *)(unsigned int)InteropCompositor);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)v4);
    std::default_delete<SystemCursors::WindowsCompositionGlobals>::operator()(v5, v2);
    return v4;
  }
}
