/*
 * XREFs of ?SetBorderMode@CVisualProxy@@QEAAJW4Enum@MilBitmapBorderMode@@@Z @ 0x180081104
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18000B780 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetBorderMode(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(*(_QWORD *)(a1 + 24));
}
