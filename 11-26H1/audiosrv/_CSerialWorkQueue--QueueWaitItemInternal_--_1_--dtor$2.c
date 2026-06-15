/*
 * XREFs of _CSerialWorkQueue::QueueWaitItemInternal_::_1_::dtor$2 @ 0x1801635E8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::QueueWaitItemInternal_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::unique_ptr<_WaitTask>::~unique_ptr<_WaitTask>((PTP_WAIT **)(a2 + 160));
}
