/*
 * XREFs of sub_140046234 @ 0x140046234
 * Callers:
 *     sub_14004615C @ 0x14004615C (sub_14004615C.c)
 *     sub_1400AB860 @ 0x1400AB860 (sub_1400AB860.c)
 *     sub_1400B438E @ 0x1400B438E (sub_1400B438E.c)
 * Callees:
 *     sub_14003F5A0 @ 0x14003F5A0 (sub_14003F5A0.c)
 */

__int64 __fastcall sub_140046234(__int64 a1)
{
  ULONGLONG TickCount64; // rax

  *(_QWORD *)a1 = off_1400BAFB0;
  TickCount64 = GetTickCount64();
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    if ( TickCount64 - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
      sub_14003F5A0(a1, 1);
  }
  return sub_140046284(a1);
}
