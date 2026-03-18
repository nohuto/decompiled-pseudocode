/*
 * XREFs of PsCaptureUserProcessParameters @ 0x140A653B0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     PspCaptureUserProcessParameters @ 0x140A65460 (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PsCaptureUserProcessParameters(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return PspCaptureUserProcessParameters(a1, a2, 0LL, 3LL, CurrentServerSilo);
}
