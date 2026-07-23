/*
 * XREFs of PpLastGoodDoBootProcessing @ 0x140CCADCC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PiLastGoodCopyKeyContents @ 0x140CCA8EC (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140CCAB88 (PiLastGoodRevertLastKnownDirectory.c)
 *     IopFileUtilRename @ 0x140CCDA20 (IopFileUtilRename.c)
 *     CmIsLastKnownGoodBoot @ 0x140CEF608 (CmIsLastKnownGoodBoot.c)
 */

void PpLastGoodDoBootProcessing()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // eax
  UNICODE_STRING v3; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v5; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v6; // [rsp+50h] [rbp-10h] BYREF

  DestinationString = 0LL;
  v6 = 0LL;
  v3 = 0LL;
  v5 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\LastGood");
  RtlInitUnicodeString(&v3, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood");
  RtlInitUnicodeString(&v6, L"\\SystemRoot\\LastGood.Tmp");
  RtlInitUnicodeString(&v5, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood.Tmp");
  if ( (unsigned __int8)CmIsLastKnownGoodBoot(v1, v0) )
  {
    PiLastGoodRevertLastKnownDirectory((__int64)&DestinationString, &v3);
    PiLastGoodRevertLastKnownDirectory((__int64)&v6, &v5);
  }
  else if ( !InitSafeBootMode )
  {
    v2 = IopFileUtilRename(&DestinationString, &v6, 0LL);
    if ( (int)(v2 + 0x80000000) < 0 || v2 == -1073741772 )
      PiLastGoodCopyKeyContents(&v3, &v5);
  }
}
