/*
 * XREFs of swprintf_s @ 0x180133F00
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x1800AAB80 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x1800AAE20 (RtlIpv6AddressToStringW.c)
 *     RtlCanonicalizeDomainName @ 0x1800AB600 (RtlCanonicalizeDomainName.c)
 *     RtlStringFromGUIDEx @ 0x1800D2C40 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x1800D9E20 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x1800DF990 (RtlIpv4AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x18010C250 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x180133F30 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vswprintf_s(Buffer, BufferCount, Format, va);
}
