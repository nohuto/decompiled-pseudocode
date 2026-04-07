/*
 * XREFs of ?InitializeVisualTreeClone@CSolidRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18004FF68
 * Callers:
 *     ?CloneVisualTree@CSolidRectangleVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18004FC60 (-CloneVisualTree@CSolidRectangleVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800500A0 (-InitializeVisualTreeClone@CRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ??$GetBrush@UICompositionBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x18005013C (--$GetBrush@UICompositionBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionB.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSolidRectangleVisual::InitializeVisualTreeClone(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  v4 = CRectangleVisual::InitializeVisualTreeClone();
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\solidrectanglevisual.cpp",
      (const char *)(unsigned int)v4,
      v12);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    return v5;
  }
  v6 = v14;
  v14 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionBrush>(a1, &v14);
  v5 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 26LL;
    goto LABEL_13;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a2 + 16) + 40LL) + 56LL))(
         *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL),
         v14);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\SpriteVisual.h",
      (const char *)(unsigned int)v8,
      v12);
    v10 = v5;
    v11 = 27LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\solidrectanglevisual.cpp",
      (const char *)v10,
      v12);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v14);
    return v5;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return 0LL;
}
