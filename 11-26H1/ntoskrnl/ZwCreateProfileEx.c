/*
 * XREFs of ZwCreateProfileEx @ 0x140729820
 * Callers:
 *     DifZwCreateProfileExWrapper @ 0x1406A4E60 (DifZwCreateProfileExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateProfileEx(
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
  _disable();
  __readeflags();
  return KiServiceInternal(ProfileHandle);
}
