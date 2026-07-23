/*
 * XREFs of ViDifCheckCallbackInterception @ 0x140C26288
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x1403C1800 (VfDifCaptureDriverEntry.c)
 *     VfDifCaptureIoCallbacks @ 0x1403C186C (VfDifCaptureIoCallbacks.c)
 * Callees:
 *     VfUtilEqualUnicodeString @ 0x140C262F4 (VfUtilEqualUnicodeString.c)
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
