/*
 * XREFs of ?InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180027914
 * Callers:
 *     ?CloneVisualTree@CMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800270C0 (-CloneVisualTree@CMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CLightMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18006E860 (-CloneVisualTree@CLightMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CAcrylicSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180084D90 (-CloneVisualTree@CAcrylicSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016C4C (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z @ 0x180027A84 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemBackdropVisual::InitializeVisualTreeClone(__int64 a1, CContainerVisual *a2, unsigned int a3)
{
  int v5; // ebx
  __int64 v6; // r8
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CContainerVisual::InitializeVisualTreeClone(a1, a2, a3);
  if ( v5 < 0 )
  {
    v8 = 118LL;
  }
  else
  {
    LOBYTE(v6) = *(_BYTE *)(a1 + 192);
    v5 = CSystemBackdropVisual::SetState(a2, *(unsigned int *)(a1 + 196), v6, 0LL);
    if ( v5 >= 0 )
      return 0LL;
    v8 = 121LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
    (const char *)(unsigned int)v5,
    v9);
  return (unsigned int)v5;
}
