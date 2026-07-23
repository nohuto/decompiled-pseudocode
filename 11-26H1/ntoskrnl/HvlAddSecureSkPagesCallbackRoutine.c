/*
 * XREFs of HvlAddSecureSkPagesCallbackRoutine @ 0x1405C29A0
 * Callers:
 *     <none>
 * Callees:
 *     IoIsPartialDumpRetry @ 0x140503934 (IoIsPartialDumpRetry.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1405C2774 (HvlAddSecurePagesCallbackRoutine.c)
 */

void __fastcall HvlAddSecureSkPagesCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  char v4; // cl

  if ( ((__int64)VslpReservedTransferLock.Queue & 1) != 0
    || (v4 = 0, ReasonSpecificData[3] == 395) && !IoIsPartialDumpRetry() )
  {
    v4 = 1;
  }
  BYTE5(VslpReservedTransferLock.Queue) = v4;
  HvlAddSecurePagesCallbackRoutine(
    v4 != 0 ? 1 : 16,
    (int)Record,
    (__int64)ReasonSpecificData,
    (__int64)ReasonSpecificData);
}
