/*
 * XREFs of sub_1400A1F00 @ 0x1400A1F00
 * Callers:
 *     sub_14009DC38 @ 0x14009DC38 (sub_14009DC38.c)
 *     sub_14009F5C4 @ 0x14009F5C4 (sub_14009F5C4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1400A1F00(__int64 a1)
{
  char v1; // dl
  unsigned int i; // r8d

  v1 = 1;
  for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
  {
    if ( *(_QWORD *)(a1 + ((i + 1LL) << 6)) != a1 + ((i + 1LL) << 6) )
      return 0;
  }
  return v1;
}
