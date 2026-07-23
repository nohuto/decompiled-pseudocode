/*
 * XREFs of IoVerifierCheckForSettingsChange @ 0x140C26984
 * Callers:
 *     IoVerifierInit @ 0x140C26A3C (IoVerifierInit.c)
 *     ViSettingsIoCheckForChanges @ 0x140C3F2B0 (ViSettingsIoCheckForChanges.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

void __fastcall IoVerifierCheckForSettingsChange(char a1)
{
  unsigned int i; // eax
  struct _KLOCK_ENTRIES *v2; // rbx
  void *Pool3; // rax
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v4[1] = 32LL;
  v4[0] = 1LL;
  if ( (a1 & 0x10) != 0 )
  {
    _InterlockedExchange(&IovpEnabledInThePast, 1);
    _InterlockedExchange(&IovpDisabledWithoutReboot, 0);
    if ( !IovIrpTraces && IovIrpTracesLength && (VfRuleClasses & 0x400000) == 0 )
    {
      for ( i = 2; i < 0x100000; i *= 2 )
      {
        if ( i >= IovIrpTracesLength )
          break;
      }
      v2 = (struct _KLOCK_ENTRIES *)((unsigned __int64)i << 7);
      IovIrpTracesLength = i;
      Pool3 = (void *)ExAllocatePool3(64LL, v2, 0x54496656u, (__int64)v4, 1u);
      IovIrpTraces = (__int64)Pool3;
      if ( Pool3 )
        memset_0(Pool3, 0, (size_t)v2);
    }
  }
  else
  {
    _InterlockedExchange(&IovpDisabledWithoutReboot, 1);
  }
}
