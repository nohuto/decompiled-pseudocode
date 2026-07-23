/*
 * XREFs of HalpTimerUpdateApiConsumers @ 0x14059BF00
 * Callers:
 *     HalpPrepareForBugcheck @ 0x1405877E0 (HalpPrepareForBugcheck.c)
 *     HalpRestoreHvEnlightenment @ 0x1405884D0 (HalpRestoreHvEnlightenment.c)
 *     HalpSaveAndDisableEnlightenment @ 0x140588870 (HalpSaveAndDisableEnlightenment.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpTimerUpdateApiConsumers()
{
  char result; // al
  __int64 v1; // rdx
  _QWORD *v2; // rbx
  char v3; // di

  result = HalpDisableInterrupts();
  v2 = (_QWORD *)HalpTimerHvApicCallbackList;
  v3 = result;
  while ( v2 )
  {
    result = guard_dispatch_icall_no_overrides(5LL, v1);
    v2 = (_QWORD *)*v2;
  }
  if ( v3 )
    _enable();
  return result;
}
