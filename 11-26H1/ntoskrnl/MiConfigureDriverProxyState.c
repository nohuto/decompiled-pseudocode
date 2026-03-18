/*
 * XREFs of MiConfigureDriverProxyState @ 0x1408649B0
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     RtlLookupImageSectionByName @ 0x1404E4CB0 (RtlLookupImageSectionByName.c)
 *     VslDriverProxyCreateStateFromImage @ 0x1405C2C00 (VslDriverProxyCreateStateFromImage.c)
 */

__int64 __fastcall MiConfigureDriverProxyState(__int64 a1)
{
  unsigned int v2; // ecx
  _DWORD *v3; // rax
  const char *v4; // rax

  if ( (stru_140E36558.QuantumTarget & 0x200000000LL) == 0 || _bittest16((const signed __int16 *)(a1 + 110), 9u) )
  {
    return 0;
  }
  else
  {
    v3 = RtlImageNtHeader(*(_QWORD *)(a1 + 48));
    v4 = RtlLookupImageSectionByName((__int64)v3, ".shsept");
    v2 = 0;
    if ( v4 )
      return (unsigned int)VslDriverProxyCreateStateFromImage(a1, *(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 48));
  }
  return v2;
}
