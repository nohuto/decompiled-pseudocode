/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800E9D40
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x18005C6F8 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18006AAA8 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180086744 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__(wil *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned int v3; // r9d

  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_enabledStateManager[0] = 0;
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
      (wil::details::EnabledStateManager *)wil::details::g_enabledStateManager,
      v1,
      v2,
      v3);
  }
  else
  {
    wil::details::EnabledStateManager::~EnabledStateManager((struct _TP_TIMER **)wil::details::g_enabledStateManager);
  }
}
