/*
 * XREFs of RtlSizeOfRetpolineIndirectFixup @ 0x1404737AC
 * Callers:
 *     RtlpConstructIndirectRelocationFixup @ 0x140472F40 (RtlpConstructIndirectRelocationFixup.c)
 *     RtlCreateRetpolineRelocationInformation @ 0x1404732EC (RtlCreateRetpolineRelocationInformation.c)
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
