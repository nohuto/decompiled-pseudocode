/*
 * XREFs of KeRequestTerminationProcess @ 0x1407B9F48
 * Callers:
 *     PsForceCrashForInvalidAccess @ 0x1407FD140 (PsForceCrashForInvalidAccess.c)
 *     MiCommitRequestFailed @ 0x140B61778 (MiCommitRequestFailed.c)
 * Callees:
 *     KeRequestTerminationThread @ 0x1402C5B58 (KeRequestTerminationThread.c)
 */

void __fastcall KeRequestTerminationProcess(__int64 a1, int a2)
{
  signed __int32 i; // r8d
  signed __int32 v3; // eax

  for ( i = *(_DWORD *)(a1 + 120); (i & 0xC0000) == 0; i = v3 )
  {
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 120), (a2 << 18) | i, i);
    if ( i == v3 )
    {
      KeRequestTerminationThread(a1);
      return;
    }
  }
}
