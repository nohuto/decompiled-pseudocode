/*
 * XREFs of ?SetInterpolationMode@CVisualProxy@@QEAAJW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18003C7BC
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x18003C6A8 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetInterpolationMode(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 88LL))(*(_QWORD *)(a1 + 32));
}
