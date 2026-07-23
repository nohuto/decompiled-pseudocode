/*
 * XREFs of RtlIsCapabilitySid @ 0x1800591F0
 * Callers:
 *     RtlCheckTokenCapability @ 0x180059240 (RtlCheckTokenCapability.c)
 * Callees:
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsCapabilitySid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 3;
}
