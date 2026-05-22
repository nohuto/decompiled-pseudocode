/*
 * XREFs of ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800683E8
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A9A0 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 * Callees:
 *     ?pop_front@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x1800101AC (-pop_front@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMe.c)
 *     ?pop_back@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x180085154 (-pop_back@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 *     ??$move@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x1800F4AB4 (--$move@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerI.c)
 *     ??$move_backward@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x1800F4B74 (--$move_backward@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame.c)
 */

__int64 *__fastcall std::deque<PointerInputMediator::PointerFrame>::erase(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // r10
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rdi
  __int64 *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int64 *v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  _BYTE v19[16]; // [rsp+50h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a3 + 16);
  v6 = *(_QWORD *)(a4 + 16);
  v7 = PointerInputMediator::s_frameQueue;
  v8 = v4 - qword_180253F40;
  v9 = v6 - v4;
  if ( v6 == v4 )
  {
    a2[1] = 0LL;
    *a2 = v7;
    a2[2] = v4;
  }
  else
  {
    if ( PointerInputMediator::s_frameQueue )
    {
      v10 = *(__int64 **)PointerInputMediator::s_frameQueue;
      v11 = *(_QWORD *)PointerInputMediator::s_frameQueue;
    }
    else
    {
      v10 = 0LL;
      v11 = 0LL;
    }
    v14[0] = v11;
    v14[1] = v6;
    if ( v8 >= qword_180253F40 + qword_180253F48 - v6 )
    {
      v17 = v10;
      v18 = v4;
      v16 = qword_180253F40 + qword_180253F48;
      v15 = &PointerInputMediator::s_frameQueue;
      ((void (__fastcall *)(_BYTE *, _QWORD *, __int64 **, __int64 **))std::move<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>>)(
        v19,
        v14,
        &v15,
        &v17);
      do
      {
        std::deque<PointerInputMediator::PointerFrame>::pop_back(&PointerInputMediator::s_frameQueue);
        --v9;
      }
      while ( v9 );
    }
    else
    {
      v15 = v10;
      v16 = v4;
      v17 = &PointerInputMediator::s_frameQueue;
      v18 = qword_180253F40;
      ((void (__fastcall *)(_BYTE *, __int64 **, __int64 **, _QWORD *))std::move_backward<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>>)(
        v19,
        &v17,
        &v15,
        v14);
      do
      {
        std::deque<PointerInputMediator::PointerFrame>::pop_front(&PointerInputMediator::s_frameQueue);
        --v9;
      }
      while ( v9 );
    }
    v12 = qword_180253F40;
    *a2 = PointerInputMediator::s_frameQueue;
    a2[1] = 0LL;
    a2[2] = v12 + v8;
  }
  return a2;
}
