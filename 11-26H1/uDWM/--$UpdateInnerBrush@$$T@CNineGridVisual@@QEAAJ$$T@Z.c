/*
 * XREFs of ??$UpdateInnerBrush@$$T@CNineGridVisual@@QEAAJ$$T@Z @ 0x1800BEB14
 * Callers:
 *     ?_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineGridVisual@@@Z @ 0x18004BEFC (-_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineG.c)
 * Callees:
 *     ?EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windows@@@Z @ 0x180009D24 (-EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windo.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CNineGridVisual::UpdateInnerBrush<std::nullptr_t>(CNineGridVisual *a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::ICompositionNineGridBrush *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = CNineGridVisual::EnsureNinegridBrush(a1, &v6);
  v2 = v1;
  if ( v1 >= 0 )
  {
    v1 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *, _QWORD))(*(_QWORD *)v6 + 168LL))(
           v6,
           0LL);
    v2 = v1;
    if ( v1 >= 0 )
    {
      v2 = 0;
      goto LABEL_7;
    }
    v3 = 57LL;
  }
  else
  {
    v3 = 56LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (int)"clientcore\\windows\\dwm\\udwm\\NineGridVisual.h",
    (const char *)(unsigned int)v1);
LABEL_7:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v6);
  return v2;
}
