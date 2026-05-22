/*
 * XREFs of ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18006C500
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A9A0 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 *     _PointerInputMediator::RoutePointers_::_1_::dtor$0 @ 0x1801D7802 (_PointerInputMediator--RoutePointers_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall std::unique_lock<std::mutex>::~unique_lock<std::mutex>(__int64 a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 8) )
    return _Mtx_unlock(*(_Mtx_t *)a1);
  return result;
}
