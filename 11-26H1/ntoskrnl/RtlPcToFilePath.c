/*
 * XREFs of RtlPcToFilePath @ 0x140B129A0
 * Callers:
 *     KitLogFeatureUsage @ 0x1406D6580 (KitLogFeatureUsage.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     MmLockLoadedDataTableEntryShared @ 0x1404D2978 (MmLockLoadedDataTableEntryShared.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x140701EA0 (MmUnlockLoadedDataTableEntryShared.c)
 */

__int64 __fastcall RtlPcToFilePath(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx

  v3 = MmLockLoadedDataTableEntryShared(a1);
  v4 = v3;
  if ( !v3 )
    return 3221226021LL;
  RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v3 + 72));
  MmUnlockLoadedDataTableEntryShared(v4);
  return 0LL;
}
