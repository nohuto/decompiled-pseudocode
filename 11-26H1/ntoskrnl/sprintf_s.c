/*
 * XREFs of sprintf_s @ 0x14053E940
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x14048B780 (RtlIpv6AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x14048B8A0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1404A2EC0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv4AddressToStringA @ 0x1404A5490 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1406208F0 (RtlEthernetAddressToStringA.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14085A110 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x14085CA84 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x14086542C (CmpFindControlSet.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140868F44 (CmpAddRemoveContainerToCLFSLog.c)
 *     HdlspDispatch @ 0x140C52320 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140C52AA8 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140C52FF0 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x140C53528 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140CF2D4C (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x14053E970 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, va);
}
