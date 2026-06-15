/*
 * XREFs of sub_140079F14 @ 0x140079F14
 * Callers:
 *     sub_140075E00 @ 0x140075E00 (sub_140075E00.c)
 *     sub_14007F160 @ 0x14007F160 (sub_14007F160.c)
 * Callees:
 *     sub_140045508 @ 0x140045508 (sub_140045508.c)
 *     sub_1400791E0 @ 0x1400791E0 (sub_1400791E0.c)
 *     sub_14007BC30 @ 0x14007BC30 (sub_14007BC30.c)
 *     sub_14007CBB4 @ 0x14007CBB4 (sub_14007CBB4.c)
 */

char __fastcall sub_140079F14(__int64 a1)
{
  char result; // al

  result = sub_140045508(a1);
  if ( !result )
  {
    result = sub_1400791E0((RTL_SRWLOCK *)a1);
    if ( result )
    {
      sub_14007BC30((LPCRITICAL_SECTION)(*(_QWORD *)(a1 + 24) + 200LL), *(PSRWLOCK *)(a1 + 24));
      return sub_14007CBB4(*(PSRWLOCK *)(a1 + 24));
    }
  }
  return result;
}
