/*
 * XREFs of NtLoadKeyEx @ 0x14093D390
 * Callers:
 *     DifNtLoadKeyExWrapper @ 0x14067E560 (DifNtLoadKeyExWrapper.c)
 *     NtLoadKey @ 0x14093C0F0 (NtLoadKey.c)
 * Callees:
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 */

NTSTATUS __cdecl NtLoadKeyEx(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        HANDLE TrustClassKey,
        HANDLE Event,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  return CmLoadDifferencingKey(
           TargetKey,
           (__int64)TrustClassKey,
           (__int64)Event,
           DesiredAccess,
           (__int64)RootHandle,
           (int)Reserved,
           0LL,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}
