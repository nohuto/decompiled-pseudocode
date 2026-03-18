/*
 * XREFs of strtol @ 0x1404FAF08
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x14049D200 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x1404FACE0 (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
