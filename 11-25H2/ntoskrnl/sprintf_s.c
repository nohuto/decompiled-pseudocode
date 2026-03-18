/*
 * XREFs of sprintf_s @ 0x1405019F0
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x14045D8E0 (RtlIpv6AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x14045DA10 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x140471780 (RtlIpv4AddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1404724E0 (RtlIpv4AddressToStringExA.c)
 *     RtlEthernetAddressToStringA @ 0x1405E18C0 (RtlEthernetAddressToStringA.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407C55D4 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1407C8190 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x1407D1DE4 (CmpFindControlSet.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407D6518 (CmpAddRemoveContainerToCLFSLog.c)
 *     HdlspDispatch @ 0x140B9D320 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140B9DAA4 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140B9DFDC (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x140B9E528 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140C37E08 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x140501A20 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
