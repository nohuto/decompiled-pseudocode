/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x180073DA0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x18013A290 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x180074CE8 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 */

NTSTATUS __cdecl RtlDestroyQueryDebugBuffer(PRTL_DEBUG_INFORMATION Buffer)
{
  RtlpChangeQueryDebugBufferTarget(Buffer, 0LL, 0LL, 0LL);
  NtClose(Buffer->SectionHandleClient);
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, Buffer);
  return 0;
}
