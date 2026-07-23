/*
 * XREFs of ExQueryBootEntropyInformation @ 0x140B6FF6C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1409D46E0 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall ExQueryBootEntropyInformation(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Parameter; // [rsp+30h] [rbp+8h] BYREF

  Parameter = a1;
  result = RtlRunOnceExecuteOnce(
             &ExpBootEntropyInit,
             (PRTL_RUN_ONCE_INIT_FN)ExpInitBootEntropyInformation,
             &Parameter,
             0LL);
  if ( result >= 0 && Parameter != -1 )
    return -1073741823;
  return result;
}
