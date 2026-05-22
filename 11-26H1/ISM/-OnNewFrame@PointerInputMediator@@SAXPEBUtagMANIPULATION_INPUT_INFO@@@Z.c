/*
 * XREFs of ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180010060
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180010D88 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?pop_front@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x1800101AC (-pop_front@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMe.c)
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x1800101FC (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z @ 0x180010340 (--0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z.c)
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180010598 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@QEBAAEBUPointerFrame@PointerInputMediator@@_K@Z @ 0x18008B294 (-_Subscript@-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@.c)
 *     ??$emplace_back@UPointerFrame@PointerInputMediator@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAAEAUPointerFrame@PointerInputMediator@@$$QEAU23@@Z @ 0x18008B2EC (--$emplace_back@UPointerFrame@PointerInputMediator@@@-$deque@UPointerFrame@PointerInputMediator@.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$emplace_back@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAAEAUPointerFrame@PointerInputMediator@@AEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800F4A70 (--$emplace_back@AEAPEBUtagMANIPULATION_INPUT_INFO@@@-$deque@UPointerFrame@PointerInputMediator@@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PointerInputMediator::OnNewFrame(const struct tagMANIPULATION_INPUT_INFO *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-138h] BYREF
  _BYTE v5[272]; // [rsp+30h] [rbp-128h] BYREF

  v4[0] = a1;
  v4[1] = &PointerInputMediator::s_frameQueueLock;
  std::_Mutex_base::lock((std::_Mutex_base *)&PointerInputMediator::s_frameQueueLock);
  v2 = 0LL;
  if ( qword_180253F20 )
  {
    if ( PointerInputMediator::s_frameLookaside )
      v2 = *(_QWORD *)PointerInputMediator::s_frameLookaside;
    v3 = std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(v2, qword_180253F18);
    PointerInputMediator::PointerFrame::PointerFrame(v5, v3);
    std::deque<PointerInputMediator::PointerFrame>::pop_front(&PointerInputMediator::s_frameLookaside);
    PointerInputMediator::PointerFrame::Initialize((PointerInputMediator::PointerFrame *)v5, a1);
    std::deque<PointerInputMediator::PointerFrame>::emplace_back<PointerInputMediator::PointerFrame>(
      &PointerInputMediator::s_frameQueue,
      v5);
    PointerInputMediator::PointerFrame::~PointerFrame((PointerInputMediator::PointerFrame *)v5);
  }
  else
  {
    std::deque<PointerInputMediator::PointerFrame>::emplace_back<tagMANIPULATION_INPUT_INFO const * &>(0LL, v4);
  }
  _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
}
