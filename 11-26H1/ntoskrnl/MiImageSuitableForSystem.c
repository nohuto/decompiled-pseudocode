/*
 * XREFs of MiImageSuitableForSystem @ 0x140B510D0
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageSuitableForSystem(__int64 a1, _DWORD *a2)
{
  if ( !*(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32) )
  {
    *a2 = 0;
    return 0LL;
  }
  *a2 = 1;
  if ( (*(_DWORD *)(a1 + 56) & 0x8000) == 0 || (*(_DWORD *)(a1 + 56) & 0x20) == 0 )
    return 0LL;
  return *(_QWORD *)(*(_QWORD *)a1 + 32LL);
}
