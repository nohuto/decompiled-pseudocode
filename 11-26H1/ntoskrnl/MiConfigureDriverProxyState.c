/*
 * XREFs of MiConfigureDriverProxyState @ 0x14086AD90
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     RtlLookupImageSectionByName @ 0x1404DE250 (RtlLookupImageSectionByName.c)
 *     VslDriverProxyCreateStateFromImage @ 0x1405C5470 (VslDriverProxyCreateStateFromImage.c)
 */

__int64 __fastcall MiConfigureDriverProxyState(__int64 a1)
{
  unsigned int v2; // ecx
  PIMAGE_NT_HEADERS v3; // rax
  const char *v4; // rax

  if ( (stru_140E366D8.QuantumTarget & 0x200000000LL) == 0 || _bittest16((const signed __int16 *)(a1 + 110), 9u) )
  {
    return 0;
  }
  else
  {
    v3 = RtlImageNtHeader(*(PVOID *)(a1 + 48));
    v4 = RtlLookupImageSectionByName((__int64)v3, ".shsept");
    v2 = 0;
    if ( v4 )
      return (unsigned int)VslDriverProxyCreateStateFromImage(a1, *(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 48));
  }
  return v2;
}
