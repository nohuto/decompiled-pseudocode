/*
 * XREFs of ??0GestureClient@GestureHandler@@QEAA@$$QEAU01@@Z @ 0x180149434
 * Callers:
 *     ??$_Emplace_reallocate@UGestureClient@GestureHandler@@@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@AEAAPEAUGestureClient@GestureHandler@@QEAU23@$$QEAU23@@Z @ 0x1801491DC (--$_Emplace_reallocate@UGestureClient@GestureHandler@@@-$vector@UGestureClient@GestureHandler@@V.c)
 *     ??$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAPEAUGestureClient@GestureHandler@@QEAU12@0PEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x18014933C (--$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V-$allocator@UGestureClient@GestureHand.c)
 *     ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x180149700 (-AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z.c)
 * Callees:
 *     ??0?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x180013ADC (--0-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 __fastcall GestureHandler::GestureClient::GestureClient(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v4; // rdx
  __int64 *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 result; // rax

  v2 = *a2;
  v4 = a1 + 1;
  *a1 = v2;
  a1[1] = 0LL;
  v6 = a2 + 1;
  if ( v4 != a2 + 1 )
  {
    *v4 = *v6;
    *v6 = 0LL;
  }
  Microsoft::WRL::ComPtr<InputSite>::ComPtr<InputSite>(a1 + 2, a2 + 2);
  Microsoft::WRL::ComPtr<InputSite>::ComPtr<InputSite>((_QWORD *)(v8 + 24), (_QWORD *)(v7 + 24));
  result = v10;
  *(_BYTE *)(v10 + 32) = *(_BYTE *)(v9 + 32);
  return result;
}
