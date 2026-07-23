/*
 * XREFs of NtLoadKey2 @ 0x140B3AB00
 * Callers:
 *     DifNtLoadKey2Wrapper @ 0x14067E210 (DifNtLoadKey2Wrapper.c)
 * Callees:
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 */

NTSTATUS __cdecl NtLoadKey2(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile, ULONG Flags)
{
  return CmLoadDifferencingKey(
           TargetKey,
           SourceFile,
           Flags,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0,
           0LL,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}
