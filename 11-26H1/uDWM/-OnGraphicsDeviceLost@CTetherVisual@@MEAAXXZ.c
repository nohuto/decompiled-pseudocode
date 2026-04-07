/*
 * XREFs of ?OnGraphicsDeviceLost@CTetherVisual@@MEAAXXZ @ 0x1800C8830
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x1800093C8 (--$GetBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompo.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005451C (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTetherVisual::OnGraphicsDeviceLost(CTetherVisual *this)
{
  int v2; // eax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset(&v5);
  v2 = CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionSurfaceBrush>((__int64)this - 224, &v5);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x45,
      (int)"clientcore\\windows\\dwm\\udwm\\tethervisual.cpp",
      (const char *)(unsigned int)v2);
  if ( v5 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 104LL))(v5, 0LL);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x48,
        (int)"clientcore\\windows\\dwm\\udwm\\tethervisual.cpp",
        (const char *)(unsigned int)v3);
  }
  *((_BYTE *)this + 73) = 0;
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v5);
}
