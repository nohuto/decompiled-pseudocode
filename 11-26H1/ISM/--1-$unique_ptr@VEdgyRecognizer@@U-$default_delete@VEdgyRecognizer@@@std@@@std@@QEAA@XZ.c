/*
 * XREFs of ??1?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@std@@QEAA@XZ @ 0x180156904
 * Callers:
 *     ??1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x18015693C (--1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ.c)
 *     ??1EdgyNotificationMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x1801569C8 (--1EdgyNotificationMessageInfo@EdgyProcessor@@QEAA@XZ.c)
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180158E78 (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 *     _std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo_::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo__std::tuple_unsigned_long_const_&__std::tuple___0__::_1_::dtor$5 @ 0x1801DB961 (_std--pair_unsigned_long_const__EdgyProcessor--EdgyDragMessageInfo_--pair_unsigned__ea_1801DB961.c)
 * Callees:
 *     ??R?$default_delete@VEdgyRecognizer@@@std@@QEBAXPEAVEdgyRecognizer@@@Z @ 0x180156AB8 (--R-$default_delete@VEdgyRecognizer@@@std@@QEBAXPEAVEdgyRecognizer@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<EdgyRecognizer>::~unique_ptr<EdgyRecognizer>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<EdgyRecognizer>::operator()();
  return result;
}
