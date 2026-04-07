/*
 * XREFs of ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x180016A78
 * Callers:
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x180011894 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180014634 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016920 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::SetBorderMode(__int64 *a1, int a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( *((_DWORD *)a1 + 34) != a2 )
  {
    v2 = *a1;
    *((_DWORD *)a1 + 34) = a2;
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(v2 + 24))(a1, 128LL);
  }
  return result;
}
