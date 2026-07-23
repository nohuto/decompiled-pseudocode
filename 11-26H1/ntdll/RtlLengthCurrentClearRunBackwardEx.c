/*
 * XREFs of RtlLengthCurrentClearRunBackwardEx @ 0x180141320
 * Callers:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1800706FC (RtlCSparseBitmapFindBitSetCapped.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlLengthCurrentClearRunBackwardEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _DWORD *v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v7; // r11d
  _DWORD *v8; // r9
  unsigned __int64 v9; // r8
  char v10; // dl
  unsigned __int64 v12; // r8

  v3 = *(_DWORD **)(a1 + 8);
  v4 = a2 >> 5;
  v5 = a2 & 0x1F;
  v7 = 31 - v5;
  v8 = &v3[v4];
  LODWORD(a1) = *v8 & dword_18017D250[v5];
  v9 = 0LL;
  while ( !(_DWORD)a1 )
  {
    v9 += 32LL;
    if ( v9 >= a3 && v9 - v7 >= a3 || v8 == v3 )
      goto LABEL_10;
    LODWORD(a1) = *--v8;
  }
  v10 = -1;
  if ( _BitScanReverse64((unsigned __int64 *)&a1, (unsigned int)a1) )
    v10 = a1;
  v9 += (unsigned int)(31 - v10);
LABEL_10:
  v12 = v9 - v7;
  if ( v12 > a3 )
    return a3;
  return v12;
}
