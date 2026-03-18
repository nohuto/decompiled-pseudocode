/*
 * XREFs of PfTFreeTraceDump @ 0x1404E0A08
 * Callers:
 *     PfGetCompletedTrace @ 0x140A538E4 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x140AF610C (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x140B26E10 (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(__int64 a1, _DWORD *a2)
{
  if ( a2[7] == 1 )
    PfpRepurposeNameLoggingTrace();
  else
    ExFreePoolWithTag(a2, 0);
}
