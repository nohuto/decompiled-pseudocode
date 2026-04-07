/*
 * XREFs of ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D20
 * Callers:
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016C4C (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800A6C70 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x1800DE160 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800E5270 (-CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x180013CDC (-SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180014014 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?SetScale@CVisual@@QEAAXMM@Z @ 0x180014168 (-SetScale@CVisual@@QEAAXMM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CVisual::InitializeVisualTreeClone(__int64 a1, CVisual *a2)
{
  __int64 v4; // r8

  CVisual::SetOffset(a2, (const struct tagPOINT *)(a1 + 56));
  CVisual::SetSize(a2, (const struct tagSIZE *)(a1 + 64));
  CVisual::SetScale(a2, *(float *)(a1 + 104), *(float *)(a1 + 108));
  CVisual::SetRTLMirror(a2, *(_BYTE *)(a1 + 36) & 1);
  CVisual::SetInterpolationMode(a2, *(unsigned int *)(a1 + 124));
  CVisual::SetBorderMode((__int64)a2, *(unsigned int *)(a1 + 128), v4);
  CVisual::SetOpacity(a2, *(double *)(a1 + 112));
  return 0LL;
}
