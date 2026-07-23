/*
 * XREFs of strtol @ 0x140537C6C
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x1404B5690 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x140537A3C (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
