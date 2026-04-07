/*
 * XREFs of ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000FF48
 * Callers:
 *     ?CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18000F9A0 (-CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18000F71C (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18001007C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016C4C (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowBorder::InitializeVisualTreeClone(__int64 a1, __int64 a2, char a3)
{
  int v6; // esi
  __int64 v7; // r8
  CBaseObject **v8; // rax
  CBaseObject *v9; // r8
  CBaseObject *v10; // rcx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = CContainerVisual::InitializeVisualTreeClone();
  if ( v6 < 0 )
  {
    v12 = 579LL;
    goto LABEL_13;
  }
  v7 = *(unsigned int *)(a1 + 276);
  if ( (a3 & 8) != 0 )
    v7 = 1LL;
  v15 = a1 + 260;
  v6 = CWindowBorder::SetBorderParameters(a2, a1 + 232, v7, *(unsigned int *)(a1 + 252));
  if ( v6 < 0 )
  {
    v12 = 594LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v6,
      v15);
    return (unsigned int)v6;
  }
  if ( *(_QWORD *)(a1 + 216) )
  {
    v8 = *(CBaseObject ***)(a2 + 144);
    v9 = *(CBaseObject **)(a2 + 216);
    v10 = *v8;
    *(_QWORD *)(a2 + 216) = *v8;
    if ( v10 )
      CBaseObject::AddRef(v10);
    if ( v9 )
      CBaseObject::Release(v9);
  }
  if ( !*(_QWORD *)(a1 + 208) )
    return 0LL;
  v13 = CWindowBorder::EnableBorder((CVisual **)a2, 1);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25D,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)v13,
    v15);
  return v14;
}
