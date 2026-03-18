/*
 * XREFs of AcpiArblibUnpackRequirement @ 0x1400AD790
 * Callers:
 *     AcpiArblibScoreRequirement @ 0x1400AD6E0 (AcpiArblibScoreRequirement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiArblibUnpackRequirement(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        ULONGLONG *a4,
        unsigned __int64 *Alignment)
{
  char v5; // al

  v5 = *(_BYTE *)(a1 + 1);
  if ( v5 == 3 || v5 == 7 || v5 == 1 )
  {
    *a4 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)a1, Alignment, a2, a3);
    if ( !*Alignment )
      *Alignment = 1LL;
  }
  else
  {
    if ( v5 != 6 )
      return 3221225508LL;
    *a2 = *(unsigned int *)(a1 + 12);
    *a3 = *(unsigned int *)(a1 + 16);
    *a4 = *(unsigned int *)(a1 + 8);
    *Alignment = 1LL;
  }
  if ( *(_BYTE *)(a1 + 1) == 3 && (*(_BYTE *)(a1 + 4) & 0x10) != 0 && *(__int64 *)(a1 + 24) > 0xFFFFFF )
    *a3 = 0xFFFFFFLL;
  return 0LL;
}
