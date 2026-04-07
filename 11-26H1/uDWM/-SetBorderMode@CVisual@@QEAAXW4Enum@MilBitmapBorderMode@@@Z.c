/*
 * XREFs of ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x180013CDC
 * Callers:
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18000FC00 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D20 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x1800C9A60 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@06$00@@YA?AVDirtyFlags@@XZ @ 0x1800166D8 (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@06$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetBorderMode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rax
  __int64 v4; // r9
  char v5; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 128) != (_DWORD)a2 )
  {
    *(_DWORD *)(a1 + 128) = a2;
    v3 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__06_00__YA_AVDirtyFlags__XZ(
                           &v5,
                           a2,
                           a3,
                           a1);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, *v3);
  }
}
