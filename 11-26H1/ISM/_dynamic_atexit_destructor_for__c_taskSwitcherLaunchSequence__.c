/*
 * XREFs of _dynamic_atexit_destructor_for__c_taskSwitcherLaunchSequence__ @ 0x1801DDAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__c_taskSwitcherLaunchSequence__()
{
  if ( qword_180254050 )
  {
    std::_Deallocate<16>(
      (void *)qword_180254050,
      (struct std::nothrow_t *)((*((_QWORD *)&xmmword_180254058 + 1) - qword_180254050) & 0xFFFFFFFFFFFFFFFCuLL));
    qword_180254050 = 0LL;
    xmmword_180254058 = 0LL;
  }
}
