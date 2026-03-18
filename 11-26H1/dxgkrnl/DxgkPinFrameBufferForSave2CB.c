/*
 * XREFs of DxgkPinFrameBufferForSave2CB @ 0x140034760
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1400348A0 (DpiGetDxgAdapter.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1403D7D20 (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z.c)
 */

__int64 __fastcall DxgkPinFrameBufferForSave2CB(__int64 a1, __int64 a2)
{
  int v3; // ebx
  DXGADAPTER *DxgAdapter; // rax

  v3 = *(_DWORD *)(a2 + 16) & 1;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  return DXGADAPTER::PinFrameBufferForSave(
           DxgAdapter,
           *(_DWORD *)a2,
           *(_QWORD *)(a2 + 8),
           2 * v3,
           0LL,
           (struct _DXGK_ADL **)(a2 + 24));
}
