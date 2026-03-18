/*
 * XREFs of ClipInitHandles @ 0x1406CD030
 * Callers:
 *     sub_140A7DC40 @ 0x140A7DC40 (sub_140A7DC40.c)
 * Callees:
 *     sub_140880300 @ 0x140880300 (sub_140880300.c)
 */

__int64 ClipInitHandles()
{
  *(_QWORD *)&ExpPlatformBinaryLock.ForegroundLossTime = ExUpdateLicenseData;
  ExpPlatformBinaryLock.GlobalForegroundListEntry.Flink = (struct _LIST_ENTRY *)ntoskrnl_27;
  ExpPlatformBinaryLock.InGlobalForegroundList = (unsigned __int64)ExUpdateOsPfnInRegistry;
  ExpPlatformBinaryLock.ReadOperationCount = (__int64)SeExports;
  ClipSpInitialize(0LL, &ExpPlatformBinaryLock.AffinityPrimaryGroup);
  return sub_140880300();
}
