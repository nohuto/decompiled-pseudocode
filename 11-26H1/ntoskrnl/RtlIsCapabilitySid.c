/*
 * XREFs of RtlIsCapabilitySid @ 0x140ADE2C4
 * Callers:
 *     RtlCheckTokenCapability @ 0x1404CFDA0 (RtlCheckTokenCapability.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}
