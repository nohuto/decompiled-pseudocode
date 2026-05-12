/*
 * XREFs of sub_1400AE984 @ 0x1400AE984
 * Callers:
 *     sub_1400AFDF4 @ 0x1400AFDF4 (sub_1400AFDF4.c)
 * Callees:
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 */

bool __fastcall sub_1400AE984(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( !*(_BYTE *)(a1 + 5360) && (*(_BYTE *)(a1 + 5344) & 0xC) != 0xC && *(_DWORD *)(a1 + 4276) == 17 )
    return sub_140056088(a1);
  return v1;
}
