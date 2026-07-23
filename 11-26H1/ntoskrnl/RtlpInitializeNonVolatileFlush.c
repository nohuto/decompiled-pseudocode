/*
 * XREFs of RtlpInitializeNonVolatileFlush @ 0x14050FBA0
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 */

NTSTATUS RtlpInitializeNonVolatileFlush()
{
  NTSTATUS result; // eax
  _OWORD SystemInformation[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  result = ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
  {
    if ( (BYTE8(SystemInformation[0]) & 1) != 0 )
      RtlpIsFlushRequired = 0;
    if ( (SystemInformation[0] & 4) != 0 )
    {
      RtlpOptimalFlushMethod = 2;
    }
    else
    {
      if ( (SystemInformation[0] & 2) == 0 )
      {
LABEL_9:
        result = DWORD1(SystemInformation[0]);
        RtlpClFlushSize = DWORD1(SystemInformation[0]);
        return result;
      }
      RtlpOptimalFlushMethod = 3;
    }
    RtlpIsDrainRequired = 1;
    goto LABEL_9;
  }
  return result;
}
