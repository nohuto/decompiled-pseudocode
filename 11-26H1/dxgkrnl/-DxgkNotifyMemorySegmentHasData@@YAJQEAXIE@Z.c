/*
 * XREFs of ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1400347E0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1400348A0 (DpiGetDxgAdapter.c)
 *     ?NotifyMemorySegmentHasData@DXGADAPTER@@QEAAJIE@Z @ 0x140034AA0 (-NotifyMemorySegmentHasData@DXGADAPTER@@QEAAJIE@Z.c)
 */

__int64 __fastcall DxgkNotifyMemorySegmentHasData(void *const a1, unsigned int a2, unsigned __int8 a3)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  return DXGADAPTER::NotifyMemorySegmentHasData(DxgAdapter, a2, a3);
}
