/*
 * XREFs of HalpTimerClockActivate @ 0x1405810E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     HalpTimerGetInternalData @ 0x140426EC0 (HalpTimerGetInternalData.c)
 *     HalpTimerPrepareClockInterrupt @ 0x140581770 (HalpTimerPrepareClockInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140594700 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerClockActivate(char a1)
{
  bool v1; // al
  int v2; // r8d
  bool v3; // bl
  int v4; // r9d
  __int64 result; // rax
  __int64 InternalData; // rax

  if ( a1 )
  {
    HalpTimerPrepareClockInterrupt();
    v1 = HalpDisableInterrupts();
    LOBYTE(v2) = 13;
    v3 = v1;
    result = HalpInterruptSetIdtEntry(209, (unsigned int)HalpTimerClockInterrupt, v2, v4, -3LL);
    if ( v3 )
      _enable();
  }
  else
  {
    result = *(_DWORD *)(HalpClockTimer + 224) & 0x801;
    if ( (_DWORD)result == 2049 )
    {
      InternalData = HalpTimerGetInternalData(HalpClockTimer);
      return guard_dispatch_icall_no_overrides(InternalData, 209LL);
    }
  }
  return result;
}
