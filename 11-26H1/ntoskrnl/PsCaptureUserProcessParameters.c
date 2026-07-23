/*
 * XREFs of PsCaptureUserProcessParameters @ 0x140A72380
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PspCaptureUserProcessParameters @ 0x140A72430 (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PsCaptureUserProcessParameters(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return PspCaptureUserProcessParameters(a1, a2, 0LL, 3LL, CurrentServerSilo);
}
