/*
 * XREFs of ViDifCheckCallbackInterception @ 0x140B7A878
 * Callers:
 *     VfDifCaptureIoCallbacks @ 0x14049F4E8 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14049F548 (VfDifCaptureDriverEntry.c)
 * Callees:
 *     VfUtilEqualUnicodeString @ 0x140B73248 (VfUtilEqualUnicodeString.c)
 */

bool __fastcall ViDifCheckCallbackInterception(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 48) + 24LL;
  return !VfUtilEqualUnicodeString((const void **)&VfRdbssServiceName, v1)
      && !VfUtilEqualUnicodeString((const void **)&VfMupServiceName, v1)
      && !VfUtilEqualUnicodeString((const void **)&VfCscServiceName, v1)
      && !VfUtilEqualUnicodeString((const void **)&VfAmdkmpagServiceName, v1);
}
