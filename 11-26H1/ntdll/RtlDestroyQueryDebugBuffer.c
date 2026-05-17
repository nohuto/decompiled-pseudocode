/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x18008F390
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x18013A520 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x18008FF88 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(HANDLE *a1)
{
  RtlpChangeQueryDebugBufferTarget(a1, 0LL, 0LL, 0LL);
  NtClose(*a1);
  NtUnmapViewOfSection(-1LL, a1);
  return 0LL;
}
