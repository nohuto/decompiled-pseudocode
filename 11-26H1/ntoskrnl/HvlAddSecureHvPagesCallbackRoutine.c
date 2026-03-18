/*
 * XREFs of HvlAddSecureHvPagesCallbackRoutine @ 0x1405BFEB0
 * Callers:
 *     <none>
 * Callees:
 *     IoIsPartialDumpRetry @ 0x140509E84 (IoIsPartialDumpRetry.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1405BFF04 (HvlAddSecurePagesCallbackRoutine.c)
 */

void __fastcall HvlAddSecureHvPagesCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  int v4; // eax
  char v5; // cl

  if ( (VslpReservedTransferLock.ApcStateFill[32] & 1) != 0
    || ((v4 = ReasonSpecificData[3], v5 = 0, v4 == 131073) || v4 == 395) && !IoIsPartialDumpRetry() )
  {
    v5 = 1;
  }
  BYTE4(VslpReservedTransferLock.WaitStatus) = v5;
  HvlAddSecurePagesCallbackRoutine(v5 != 0 ? 2 : 8, Record, ReasonSpecificData, ReasonSpecificData);
}
