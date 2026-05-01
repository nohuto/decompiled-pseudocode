/*
 * XREFs of ??1ApplicationViewHistory@SnapEducationHandler@@QEAA@XZ @ 0x18005F1D8
 * Callers:
 *     _SnapEducationHandler::WindowFocusChanged_::_1_::dtor$2 @ 0x1806A7144 (_SnapEducationHandler--WindowFocusChanged_--_1_--dtor$2.c)
 * Callees:
 *     ?_Tidy@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXXZ @ 0x18005F234 (-_Tidy@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@.c)
 */

void __fastcall SnapEducationHandler::ApplicationViewHistory::~ApplicationViewHistory(
        SnapEducationHandler::ApplicationViewHistory *this)
{
  void **v1; // rbx
  void *v2; // rcx

  v1 = (void **)((char *)this + 16);
  std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Tidy((char *)this + 16);
  v2 = *v1;
  *v1 = 0LL;
  operator delete(v2, (const struct std::nothrow_t *)0x10);
}
