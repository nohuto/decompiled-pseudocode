/*
 * XREFs of PopIdleWakeFreeWakeSourceDiagnostic @ 0x140B2AE84
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140B2A9B0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopIdleWakeFreeWakeSourceDiagnostic(__int64 a1)
{
  __int64 i; // rdi

  if ( *(_BYTE *)(a1 + 760) )
    ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0x67696450u);
  if ( *(_DWORD *)a1 == 128 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 784); i = (unsigned int)(i + 1) )
    {
      if ( *(_BYTE *)(i + a1 + 840) )
        ExFreePoolWithTag(*(PVOID *)(a1 + 16 * ((unsigned int)i + 1LL) + 784), 0x67696450u);
    }
  }
}
