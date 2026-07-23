/*
 * XREFs of XmShrOp @ 0x1405AFB10
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 */

_WORD *__fastcall XmShrOp(_DWORD *a1)
{
  int v1; // r10d
  unsigned int v3; // r8d
  int v4; // ecx
  unsigned int v5; // r11d
  unsigned int v6; // edx
  unsigned int v7; // r8d
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // edx

  v1 = a1[30];
  v3 = a1[26];
  v4 = a1[27];
  if ( v4 )
  {
    v5 = v3 >> v4;
    v6 = v3 >> (v4 - 1);
    if ( v1 == 3 )
    {
      v7 = v3 >> 31;
    }
    else if ( v1 == 1 )
    {
      v7 = v3 >> 15;
    }
    else
    {
      v7 = v3 >> 7;
    }
    v8 = a1[4] ^ ((unsigned __int8)v6 ^ (unsigned __int8)a1[4]) & 1;
    v9 = (v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)((_WORD)v7 << 11)) & 0x800) & 0xFFFFFFFB ^ (4 * (((*((_BYTE *)XmBitCount + (v5 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v5 >> 4))) & 1) == 0));
    v3 = v5;
    v10 = (v5 == 0 ? 0x40 : 0) | v9 & 0xFFFFFFBF;
    a1[4] = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)((unsigned __int8)(v5 >> (8 * v1 + 7)) << 7)) & 0x80;
  }
  return XmStoreResult((__int64)a1, v3);
}
