/*
 * XREFs of ZwCreateProfile @ 0x140729800
 * Callers:
 *     DifZwCreateProfileWrapper @ 0x1406A5050 (DifZwCreateProfileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateProfile(
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
  _disable();
  __readeflags();
  return KiServiceInternal(ProfileHandle);
}
