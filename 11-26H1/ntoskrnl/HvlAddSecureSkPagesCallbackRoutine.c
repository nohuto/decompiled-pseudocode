/*
 * XREFs of HvlAddSecureSkPagesCallbackRoutine @ 0x1405C0130
 * Callers:
 *     <none>
 * Callees:
 *     IoIsPartialDumpRetry @ 0x140509E84 (IoIsPartialDumpRetry.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1405BFF04 (HvlAddSecurePagesCallbackRoutine.c)
 */

void __fastcall HvlAddSecureSkPagesCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  unsigned __int8 v4; // cl

  if ( (VslpReservedTransferLock.ApcStateFill[32] & 1) != 0
    || (v4 = 0, ReasonSpecificData[3] == 395) && !IoIsPartialDumpRetry() )
  {
    v4 = 1;
  }
  VslpReservedTransferLock.ApcStateFill[36] = v4;
  HvlAddSecurePagesCallbackRoutine(
    v4 != 0 ? 1 : 16,
    (int)Record,
    (__int64)ReasonSpecificData,
    (__int64)ReasonSpecificData);
}
