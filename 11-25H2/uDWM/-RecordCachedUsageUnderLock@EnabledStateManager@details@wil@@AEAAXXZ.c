/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18007B388
 * Callers:
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18007B330 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180094F64 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800EDD70 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     wil_details_RecordCachedUsage @ 0x18007B3F4 (wil_details_RecordCachedUsage.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18007B540 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int *v5; // rsi
  unsigned int *v6; // rbx
  const char *v7; // [rsp+20h] [rbp-8h]

  v5 = (unsigned int *)*((_QWORD *)this + 7);
  v6 = (unsigned int *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v5 - (char *)v6) >= 0x10 )
  {
    while ( v6 != v5 )
    {
      wil_details_RecordCachedUsage(*v6, *((_QWORD *)v6 + 1));
      v6 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, a4, v7);
  }
}
