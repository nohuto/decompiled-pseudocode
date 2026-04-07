/*
 * XREFs of ?InitializeVisualTreeClone@CWindowBackgroundTreatmentVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180023554
 * Callers:
 *     ?CloneVisualTree@CWindowBackgroundTreatmentVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180023490 (-CloneVisualTree@CWindowBackgroundTreatmentVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016C4C (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ @ 0x18007530C (-EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowBackgroundTreatmentVisual::InitializeVisualTreeClone(
        __int64 a1,
        CContainerVisual *a2,
        unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CContainerVisual::InitializeVisualTreeClone(a1, a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowbackgroundtreatmentvisual.cpp",
      (const char *)(unsigned int)v5,
      v8);
    return v6;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 184) )
      CWindowBackgroundTreatmentVisual::EnableTreatment(a2);
    return 0LL;
  }
}
