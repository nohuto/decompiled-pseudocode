/*
 * XREFs of sprintf_s @ 0x180133C60
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x1800C9070 (LdrpLogDelayLoadTrigger.c)
 *     RtlIpv4AddressToStringA @ 0x1800E2C10 (RtlIpv4AddressToStringA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800E2FB0 (RtlIpv6AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x1800E30D0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800E7AD0 (RtlIpv4AddressToStringExA.c)
 *     RtlEthernetAddressToStringA @ 0x1801470B0 (RtlEthernetAddressToStringA.c)
 *     __ft_process_marker_get_handle @ 0x1801480F0 (__ft_process_marker_get_handle.c)
 * Callees:
 *     vsprintf_s @ 0x180133C90 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vsprintf_s(Buffer, BufferCount, Format, va);
}
