/*
 * XREFs of ??$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAPEAUGestureClient@GestureHandler@@QEAU12@0PEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x18014933C
 * Callers:
 *     ??$_Emplace_reallocate@UGestureClient@GestureHandler@@@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@AEAAPEAUGestureClient@GestureHandler@@QEAU23@$$QEAU23@@Z @ 0x1801491DC (--$_Emplace_reallocate@UGestureClient@GestureHandler@@@-$vector@UGestureClient@GestureHandler@@V.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@GestureHandler@@QEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x180144250 (--$_Destroy_range@V-$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@G.c)
 *     ??0GestureClient@GestureHandler@@QEAA@$$QEAU01@@Z @ 0x180149434 (--0GestureClient@GestureHandler@@QEAA@$$QEAU01@@Z.c)
 */

GestureHandler::GestureClient *__fastcall std::_Uninitialized_move<GestureHandler::GestureClient *>(
        __int64 a1,
        __int64 a2,
        GestureHandler::GestureClient *a3)
{
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r11

  v4 = a1;
  if ( a1 != a2 )
  {
    do
    {
      GestureHandler::GestureClient::GestureClient(a3, v4);
      a3 = (GestureHandler::GestureClient *)((char *)a3 + 40);
      v4 = v5 + 40;
    }
    while ( v4 != v6 );
  }
  std::_Destroy_range<std::allocator<GestureHandler::GestureClient>>(a3, a3);
  return a3;
}
