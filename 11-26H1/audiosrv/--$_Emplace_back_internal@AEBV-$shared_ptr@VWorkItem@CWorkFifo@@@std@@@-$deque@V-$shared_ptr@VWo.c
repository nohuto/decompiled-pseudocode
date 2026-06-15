/*
 * XREFs of ??$_Emplace_back_internal@AEBV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@1@@Z @ 0x18012435C
 * Callers:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082D78 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAX_K@Z @ 0x18012725C (-_Growmap@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@.c)
 */

__int64 __fastcall std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Emplace_back_internal<std::shared_ptr<CWorkFifo::WorkItem> const &>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Growmap();
  v4 = a1[2] - 1LL;
  a1[3] &= v4;
  v5 = a1[4] + a1[3];
  if ( !*(_QWORD *)(a1[1] + 8 * (v4 & v5)) )
    *(_QWORD *)(a1[1] + 8 * (v4 & v5)) = std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL);
  v6 = *(_QWORD **)(a1[1] + 8 * (v5 & (a1[2] - 1LL)));
  *v6 = 0LL;
  v6[1] = 0LL;
  v7 = a2[1];
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  *v6 = *a2;
  result = a2[1];
  v6[1] = result;
  ++a1[4];
  return result;
}
