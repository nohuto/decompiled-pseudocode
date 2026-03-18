/*
 * XREFs of ViDifCheckCallbackInterception @ 0x140C2027C
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x1403B7900 (VfDifCaptureDriverEntry.c)
 *     VfDifCaptureIoCallbacks @ 0x1403B796C (VfDifCaptureIoCallbacks.c)
 * Callees:
 *     VfUtilEqualUnicodeString @ 0x140C202E8 (VfUtilEqualUnicodeString.c)
 */

bool __fastcall ViDifCheckCallbackInterception(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 48) + 24LL;
  return !(unsigned int)VfUtilEqualUnicodeString(&VfRdbssServiceName, v1)
      && !(unsigned int)VfUtilEqualUnicodeString(&VfMupServiceName, v1)
      && !(unsigned int)VfUtilEqualUnicodeString(&VfCscServiceName, v1)
      && (unsigned int)VfUtilEqualUnicodeString(&VfAmdkmpagServiceName, v1) == 0;
}
