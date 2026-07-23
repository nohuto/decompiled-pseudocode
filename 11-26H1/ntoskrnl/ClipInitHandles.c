/*
 * XREFs of ClipInitHandles @ 0x1406D1060
 * Callers:
 *     sub_140A83AB0 @ 0x140A83AB0 (sub_140A83AB0.c)
 * Callees:
 *     sub_140886700 @ 0x140886700 (sub_140886700.c)
 */

__int64 ClipInitHandles()
{
  ExpPlatformBinaryLock.InGlobalForegroundList = (unsigned __int64)ExUpdateLicenseData;
  ExpPlatformBinaryLock.ReadOperationCount = (__int64)ntoskrnl_27;
  ExpPlatformBinaryLock.WriteOperationCount = (__int64)ExUpdateOsPfnInRegistry;
  ExpPlatformBinaryLock.OtherOperationCount = (__int64)SeExports;
  ClipSpInitialize(0LL, &ExpPlatformBinaryLock.600);
  return sub_140886700();
}
