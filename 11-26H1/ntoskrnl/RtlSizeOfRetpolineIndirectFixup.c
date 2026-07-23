/*
 * XREFs of RtlSizeOfRetpolineIndirectFixup @ 0x14046CF2C
 * Callers:
 *     RtlpConstructIndirectRelocationFixup @ 0x14046C6C0 (RtlpConstructIndirectRelocationFixup.c)
 *     RtlCreateRetpolineRelocationInformation @ 0x14046CA6C (RtlCreateRetpolineRelocationInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSizeOfRetpolineIndirectFixup(unsigned __int16 *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( (v1 & 0x4000) != 0 )
    return (v1 | 0xC000u) >> 13;
  else
    return 5LL;
}
