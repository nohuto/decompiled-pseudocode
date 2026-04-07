/*
 * XREFs of ?InitializeVisualTreeClone@CNineGridVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18004F058
 * Callers:
 *     ?InitializeVisualTreeClone@CImage@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800B6CD8 (-InitializeVisualTreeClone@CImage@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CNineGridVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800BBA80 (-CloneVisualTree@CNineGridVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800500A0 (-InitializeVisualTreeClone@CRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ??$GetBrush@UICompositionBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x18005013C (--$GetBrush@UICompositionBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionB.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CNineGridVisual::InitializeVisualTreeClone(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v13 = 0LL;
  v4 = CRectangleVisual::InitializeVisualTreeClone();
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 25LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\ninegridvisual.cpp",
      (const char *)(unsigned int)v4,
      v10);
LABEL_13:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v13);
    return v5;
  }
  v7 = v13;
  v13 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v4 = CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionBrush>(a1, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 26LL;
    goto LABEL_7;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a2 + 16) + 40LL) + 56LL))(
         *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL),
         v13);
  v5 = v8;
  if ( v8 >= 0 )
  {
    v5 = 0;
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\SpriteVisual.h",
    (const char *)(unsigned int)v8,
    v10);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\ninegridvisual.cpp",
    (const char *)v5,
    v11);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v5;
}
