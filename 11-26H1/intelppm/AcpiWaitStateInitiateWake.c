/*
 * XREFs of AcpiWaitStateInitiateWake @ 0x140009AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall AcpiWaitStateInitiateWake(__int64 a1)
{
  **(_BYTE **)(a1 + 40) = 1;
  return 0;
}
