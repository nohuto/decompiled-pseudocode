/*
 * XREFs of ??1?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAA@XZ @ 0x18007DF3C
 * Callers:
 *     _CSerialWorkQueue::QueueWaitItemInternal_::_1_::dtor$2 @ 0x1801635E8 (_CSerialWorkQueue--QueueWaitItemInternal_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall std::unique_ptr<_WaitTask>::~unique_ptr<_WaitTask>(PTP_WAIT **a1)
{
  if ( *a1 )
    std::default_delete<_WaitTask>::operator()((__int64)a1, *a1);
}
