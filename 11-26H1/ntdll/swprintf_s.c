/*
 * XREFs of swprintf_s @ 0x180134190
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x1800ABA50 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x1800ABCF0 (RtlIpv6AddressToStringW.c)
 *     RtlCanonicalizeDomainName @ 0x1800AC4D0 (RtlCanonicalizeDomainName.c)
 *     RtlStringFromGUIDEx @ 0x1800D5C80 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x1800DCEB0 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x1800E20F0 (RtlIpv4AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x18010C700 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x1801341C0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vswprintf_s(Buffer, BufferCount, Format, va);
}
