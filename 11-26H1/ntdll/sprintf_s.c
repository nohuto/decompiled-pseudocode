/*
 * XREFs of sprintf_s @ 0x1801339D0
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x1800C6830 (LdrpLogDelayLoadTrigger.c)
 *     RtlIpv4AddressToStringA @ 0x1800E1470 (RtlIpv4AddressToStringA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800E1810 (RtlIpv6AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x1800E1930 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800E6530 (RtlIpv4AddressToStringExA.c)
 *     RtlEthernetAddressToStringA @ 0x180146F60 (RtlEthernetAddressToStringA.c)
 *     __ft_process_marker_get_handle @ 0x180147FA0 (__ft_process_marker_get_handle.c)
 * Callees:
 *     vsprintf_s @ 0x180133A00 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vsprintf_s(Buffer, BufferCount, Format, va);
}
