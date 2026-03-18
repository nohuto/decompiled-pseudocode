/*
 * XREFs of RtlStringLengthFromUser @ 0x14077F668
 * Callers:
 *     AslpFileQueryExportName @ 0x14088EF6C (AslpFileQueryExportName.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     RtlStringLengthFromUser$thunk$15459119532556569191 @ 0x140C610C0 (RtlStringLengthFromUser$thunk$15459119532556569191.c)
 * Callees:
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 */

__int64 __fastcall RtlStringLengthFromUser(char *a1)
{
  char *v1; // rbx
  __int64 v2; // rdi

  v1 = a1;
  v2 = 0LL;
  while ( RtlReadUCharFromUser(a1) )
  {
    ++v2;
    a1 = ++v1;
  }
  return v2;
}
