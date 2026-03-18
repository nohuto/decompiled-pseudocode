/*
 * XREFs of IoGetStackLimits @ 0x140263C80
 * Callers:
 *     EtwpTraceContextRegisters @ 0x1406C4208 (EtwpTraceContextRegisters.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1406C8DE8 (EtwpApplyPayloadFilterInternal.c)
 *     _RegRtlCopyTreeInternal @ 0x14089D400 (_RegRtlCopyTreeInternal.c)
 *     EtwpWriteUserEvent @ 0x140B7D098 (EtwpWriteUserEvent.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140BECDA8 (HalpCheckLowMemoryPreSleep.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140263CC0 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits(LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
