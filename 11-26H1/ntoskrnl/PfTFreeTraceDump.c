/*
 * XREFs of PfTFreeTraceDump @ 0x1404DA0E8
 * Callers:
 *     PfGetCompletedTrace @ 0x140A5CBD4 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x140AF87AC (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x140B29070 (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(__int64 a1, _DWORD *a2)
{
  if ( a2[7] == 1 )
    PfpRepurposeNameLoggingTrace();
  else
    ExFreePoolWithTag(a2, 0);
}
