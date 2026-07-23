/*
 * XREFs of NtCreateProfile @ 0x14084B650
 * Callers:
 *     DifNtCreateProfileWrapper @ 0x140676C50 (DifNtCreateProfileWrapper.c)
 * Callees:
 *     KeQueryGroupAffinity @ 0x140494AA0 (KeQueryGroupAffinity.c)
 *     KeQueryPrimaryGroupThread @ 0x1404B7CEC (KeQueryPrimaryGroupThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExpProfileCreate @ 0x14084B100 (ExpProfileCreate.c)
 */

NTSTATUS __cdecl NtCreateProfile(
        PHANDLE ProfileHandle,
        HANDLE Process,
        PVOID ProfileBase,
        SIZE_T ProfileSize,
        ULONG BucketSize,
        PULONG Buffer,
        ULONG BufferSize,
        KPROFILE_SOURCE ProfileSource,
        KAFFINITY Affinity)
{
  USHORT PrimaryGroupThread; // ax

  PrimaryGroupThread = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
  if ( Affinity == -1LL )
    KeQueryGroupAffinity(PrimaryGroupThread);
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
