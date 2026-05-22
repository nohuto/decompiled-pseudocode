/*
 * XREFs of ??$_Destroy_range@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@GestureHandler@@QEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x180144250
 * Callers:
 *     ??1GestureHandler@@QEAA@XZ @ 0x1801449F8 (--1GestureHandler@@QEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAPEAUGestureClient@GestureHandler@@QEAU12@0PEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x18014933C (--$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V-$allocator@UGestureClient@GestureHand.c)
 *     ??1_Reallocation_guard@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@QEAA@XZ @ 0x1801495DC (--1_Reallocation_guard@-$vector@UGestureClient@GestureHandler@@V-$allocator@UGestureClient@Gestu.c)
 *     ?RemoveGestureClient@GestureHandler@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x180149C88 (-RemoveGestureClient@GestureHandler@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 *     ?_Change_array@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@AEAAXQEAUGestureClient@GestureHandler@@_K1@Z @ 0x18014A018 (-_Change_array@-$vector@UGestureClient@GestureHandler@@V-$allocator@UGestureClient@GestureHandle.c)
 * Callees:
 *     ??1GestureClient@GestureHandler@@QEAA@XZ @ 0x180144988 (--1GestureClient@GestureHandler@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<GestureHandler::GestureClient>>(
        GestureHandler::GestureClient *this,
        GestureHandler::GestureClient *a2)
{
  GestureHandler::GestureClient *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      GestureHandler::GestureClient::~GestureClient(v3);
      v3 = (GestureHandler::GestureClient *)((char *)v3 + 40);
    }
    while ( v3 != a2 );
  }
}
