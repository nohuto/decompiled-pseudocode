/*
 * XREFs of _dynamic_atexit_destructor_for__g_PoTimerCookie__ @ 0x18016CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z @ 0x18001C238 (--R-$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__g_PoTimerCookie__(__int64 a1)
{
  if ( g_PoTimerCookie )
    std::default_delete<_RecurringTask>::operator()(a1, g_PoTimerCookie);
}
