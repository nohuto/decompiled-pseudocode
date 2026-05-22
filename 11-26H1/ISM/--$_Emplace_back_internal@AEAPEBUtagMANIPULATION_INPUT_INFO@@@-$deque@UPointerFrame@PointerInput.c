/*
 * XREFs of ??$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXAEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18007FB8C
 * Callers:
 *     ??$emplace_back@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAAEAUPointerFrame@PointerInputMediator@@AEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800F4A70 (--$emplace_back@AEAPEBUtagMANIPULATION_INPUT_INFO@@@-$deque@UPointerFrame@PointerInputMediator@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@QEBAAEBUPointerFrame@PointerInputMediator@@_K@Z @ 0x18008B294 (-_Subscript@-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180092BC8 (--0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?_Getblock@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEBA_J_K@Z @ 0x1800C7554 (-_Getblock@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMe.c)
 *     ?_Growmap@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX_K@Z @ 0x1800F4CA0 (-_Growmap@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 */

__int64 __fastcall std::deque<PointerInputMediator::PointerFrame>::_Emplace_back_internal<tagMANIPULATION_INPUT_INFO const * &>(
        __int64 a1,
        const struct tagMANIPULATION_INPUT_INFO **a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  PointerInputMediator::PointerFrame *v7; // rax
  __int64 result; // rax

  v2 = qword_180253F48;
  v4 = qword_180253F38;
  if ( qword_180253F38 <= (unsigned __int64)(qword_180253F48 + 1) )
  {
    std::deque<PointerInputMediator::PointerFrame>::_Growmap(&PointerInputMediator::s_frameQueue);
    v2 = qword_180253F48;
    v4 = qword_180253F38;
  }
  qword_180253F40 &= v4 - 1;
  v5 = qword_180253F40 + v2;
  v6 = std::deque<PointerInputMediator::PointerFrame>::_Getblock(
         &PointerInputMediator::s_frameQueue,
         qword_180253F40 + v2);
  if ( !*(_QWORD *)(qword_180253F30 + 8 * v6) )
    *(_QWORD *)(qword_180253F30 + 8 * v6) = std::_Allocate<16,std::_Default_allocate_traits>(272LL);
  v7 = (PointerInputMediator::PointerFrame *)std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(
                                               &PointerInputMediator::s_frameQueue,
                                               v5);
  result = PointerInputMediator::PointerFrame::PointerFrame(v7, *a2);
  ++qword_180253F48;
  return result;
}
