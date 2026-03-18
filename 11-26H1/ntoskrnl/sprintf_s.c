/*
 * XREFs of sprintf_s @ 0x14053C4C0
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x140491C30 (RtlIpv6AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x140491D50 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1404A9830 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv4AddressToStringA @ 0x1404ABE00 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x14061D8A0 (RtlEthernetAddressToStringA.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140853E00 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1408566EC (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x14085F13C (CmpFindControlSet.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140862B64 (CmpAddRemoveContainerToCLFSLog.c)
 *     HdlspDispatch @ 0x140C4C320 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140C4CAA8 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140C4CFF0 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x140C4D528 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140CECA48 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x14053C4F0 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, va);
}
