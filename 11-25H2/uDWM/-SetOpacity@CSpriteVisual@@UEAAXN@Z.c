/*
 * XREFs of ?SetOpacity@CSpriteVisual@@UEAAXN@Z @ 0x1800799A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003EA28 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A35AC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSpriteVisual::SetOpacity(CSpriteVisual *this, double a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  CVisual::SetOpacity(this, a2);
  v8 = 0LL;
  v3 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 18,
         &v8);
  if ( v3 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x55,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v3,
      v6);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 184LL))(v8);
  if ( v4 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v4,
      v6);
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
