/*
 * XREFs of ?SetInterpolationMode@CVisualProxy@@QEAAJW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180079E90
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18000B780 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x180090B34 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetInterpolationMode(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 88LL))(*(_QWORD *)(a1 + 24));
}
