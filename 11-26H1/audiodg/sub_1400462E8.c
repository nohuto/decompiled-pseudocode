/*
 * XREFs of sub_1400462E8 @ 0x1400462E8
 * Callers:
 *     sub_14004615C @ 0x14004615C (sub_14004615C.c)
 *     sub_1400AB8A0 @ 0x1400AB8A0 (sub_1400AB8A0.c)
 *     sub_1400B4375 @ 0x1400B4375 (sub_1400B4375.c)
 * Callees:
 *     sub_14003F5A0 @ 0x14003F5A0 (sub_14003F5A0.c)
 */

__int64 __fastcall sub_1400462E8(__int64 a1)
{
  ULONGLONG TickCount64; // rax

  *(_QWORD *)a1 = off_1400BB048;
  TickCount64 = GetTickCount64();
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    if ( TickCount64 - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
      sub_14003F5A0(a1, 1);
  }
  return sub_140046338(a1);
}
