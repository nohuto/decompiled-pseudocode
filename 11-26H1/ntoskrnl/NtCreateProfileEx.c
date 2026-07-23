/*
 * XREFs of NtCreateProfileEx @ 0x14084B730
 * Callers:
 *     DifNtCreateProfileExWrapper @ 0x140676A60 (DifNtCreateProfileExWrapper.c)
 * Callees:
 *     ExpProfileCreate @ 0x14084B100 (ExpProfileCreate.c)
 */

NTSTATUS __cdecl NtCreateProfileEx(
        PHANDLE ProfileHandle,
        HANDLE Process,
        PVOID ProfileBase,
        SIZE_T ProfileSize,
        ULONG BucketSize,
        PULONG Buffer,
        ULONG BufferSize,
        KPROFILE_SOURCE ProfileSource,
        USHORT GroupCount,
        PGROUP_AFFINITY GroupAffinity)
{
  return ExpProfileCreate(
           (__int64)ProfileHandle,
           (__int64)Process,
           (__int64)ProfileBase,
           ProfileSize,
           BucketSize,
           Buffer,
           BufferSize,
           ProfileSource);
}
