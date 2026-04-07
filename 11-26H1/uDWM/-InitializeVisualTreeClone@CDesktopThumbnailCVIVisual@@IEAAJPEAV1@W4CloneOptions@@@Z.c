/*
 * XREFs of ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800ADDBC
 * Callers:
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800AD6C0 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800500A0 (-InitializeVisualTreeClone@CRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4CVisualBrush@@QEAAAEAV0@AEBV0@@Z @ 0x180095DA0 (--4CVisualBrush@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::InitializeVisualTreeClone(__int64 a1, __int64 *a2, unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  CBaseObject *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CRectangleVisual::InitializeVisualTreeClone(a1, (CRectangleVisual *)a2, a3);
  v6 = v5;
  if ( v5 >= 0 )
  {
    CVisualBrush::operator=(a2 + 28, (__int64 *)(a1 + 224));
    a2[26] = *(_QWORD *)(a1 + 208);
    v8 = *(CBaseObject **)(a1 + 208);
    if ( v8 )
      CBaseObject::AddRef(v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FE,
      (int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
