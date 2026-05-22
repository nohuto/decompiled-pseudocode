/*
 * XREFs of _GestureHandler::MakeCompletedCallback_::_1_::dtor$0 @ 0x1801D7A12
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x18006B3C8 (--1-$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ.c)
 */

void __fastcall GestureHandler::MakeCompletedCallback_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>(*(_QWORD *)(a2 + 88));
  }
}
