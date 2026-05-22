/*
 * XREFs of std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_PointerInputMediator::PointerFrame_______lambda_b7bb5d1243db4af2adae27fbd398c724___ @ 0x18008B3FC
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A9A0 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 * Callees:
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEBAAEAUPointerFrame@PointerInputMediator@@XZ @ 0x1800628F0 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMe.c)
 */

__int64 **__fastcall std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_PointerInputMediator::PointerFrame_______lambda_b7bb5d1243db4af2adae27fbd398c724___(
        __int64 **a1,
        __int64 **a2,
        __int64 a3)
{
  __int64 *v3; // rbx
  __int64 *v5; // r10
  __int64 **v7; // r11
  __int64 v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // r9
  __int64 **result; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a2;
  v5 = a2[2];
  v7 = a1;
  if ( *a2 )
    v8 = *v3;
  else
    v8 = 0LL;
  v12[0] = v8;
  while ( 1 )
  {
    v12[1] = v5;
    if ( v5 == *(__int64 **)(a3 + 16) )
      break;
    v9 = (_DWORD *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::operator*((__int64)v12);
    if ( *v9 == *v10 )
      break;
    v5 = (__int64 *)((char *)v5 + 1);
  }
  result = v7;
  *v7 = v3;
  a2[2] = v5;
  v7[1] = 0LL;
  v7[2] = v5;
  return result;
}
