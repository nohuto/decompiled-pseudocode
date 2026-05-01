/*
 * XREFs of ??0?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAA@$$QEAV01@@Z @ 0x1801B6D2C
 * Callers:
 *     ??$_Emplace_front_internal@UApplicationViewHistory@SnapEducationHandler@@@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@AEAAX$$QEAUApplicationViewHistory@SnapEducationHandler@@@Z @ 0x1801B6C70 (--$_Emplace_front_internal@UApplicationViewHistory@SnapEducationHandler@@@-$deque@UApplicationVi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v4 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(16LL);
  v4[1] = 0LL;
  *a1 = v4;
  *v4 = a1;
  v5 = (_QWORD *)*a1;
  *a1 = *a2;
  *a2 = v5;
  if ( *a1 )
    *(_QWORD *)*a1 = a1;
  if ( *a2 )
    *(_QWORD *)*a2 = a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  result = a1;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[4] = 0LL;
  return result;
}
