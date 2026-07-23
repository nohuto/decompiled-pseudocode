/*
 * XREFs of HvlAddSecureHvPagesCallbackRoutine @ 0x1405C2720
 * Callers:
 *     <none>
 * Callees:
 *     IoIsPartialDumpRetry @ 0x140503934 (IoIsPartialDumpRetry.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1405C2774 (HvlAddSecurePagesCallbackRoutine.c)
 */

void __fastcall HvlAddSecureHvPagesCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  int v4; // eax
  char v5; // cl

  if ( ((__int64)VslpReservedTransferLock.Queue & 1) != 0
    || ((v4 = ReasonSpecificData[3], v5 = 0, v4 == 131073) || v4 == 395) && !IoIsPartialDumpRetry() )
  {
    v5 = 1;
  }
  BYTE4(VslpReservedTransferLock.Queue) = v5;
  HvlAddSecurePagesCallbackRoutine(v5 != 0 ? 2 : 8, Record, ReasonSpecificData, ReasonSpecificData);
}
