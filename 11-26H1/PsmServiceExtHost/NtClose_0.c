/*
 * XREFs of NtClose_0 @ 0x180070318
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18009801C (RtlQueryResourcePolicy.c)
 *     RtlpDiskSpeedInitialize @ 0x180098250 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x1800983FC (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
