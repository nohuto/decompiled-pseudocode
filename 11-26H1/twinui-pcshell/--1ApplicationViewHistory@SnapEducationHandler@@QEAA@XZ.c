/*
 * XREFs of ??1ApplicationViewHistory@SnapEducationHandler@@QEAA@XZ @ 0x1801630E8
 * Callers:
 *     _SnapEducationHandler::WindowFocusChanged_::_1_::dtor$2 @ 0x1806D6D6F (_SnapEducationHandler--WindowFocusChanged_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall SnapEducationHandler::ApplicationViewHistory::~ApplicationViewHistory(
        SnapEducationHandler::ApplicationViewHistory *this)
{
  std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::~deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>((__int64 *)this + 2);
}
