/*
 * XREFs of CmpWalkPath @ 0x140860270
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x14085F688 (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CEBDA4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140CEC3D8 (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x1408602B8 (CmpWalkUnicodeStringPath.c)
 */

__int64 __fastcall CmpWalkPath(ULONG_PTR BugCheckParameter3, __int64 a2, const WCHAR *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  return CmpWalkUnicodeStringPath(BugCheckParameter3);
}
