/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18007B7DC
 * Callers:
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18007B6EC (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082D78 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800BF610 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_414dbc0e41b953f3a8115f76f732fa65__void_::_Do_call @ 0x1800C0700 (std--_Func_impl_no_alloc__lambda_414dbc0e41b953f3a8115f76f732fa65__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_cdb0f08b28984f73e7eac4a3e56158cb__void_::_Do_call @ 0x1800D6390 (std--_Func_impl_no_alloc__lambda_cdb0f08b28984f73e7eac4a3e56158cb__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_2651c229b598cc9102028192151d000a__void_::_Do_call @ 0x180100610 (std--_Func_impl_no_alloc__lambda_2651c229b598cc9102028192151d000a__void_--_Do_call.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B85DC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9DD, v2, v3);
}
