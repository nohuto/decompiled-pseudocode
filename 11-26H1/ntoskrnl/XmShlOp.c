/*
 * XREFs of XmShlOp @ 0x1404A0E60
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 */

__int64 __fastcall XmShlOp(_DWORD *a1)
{
  int v1; // eax
  int v3; // ebx
  unsigned int v4; // r9d
  unsigned int v5; // edx
  int v6; // r11d
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  char v10; // cl
  int v11; // ecx
  unsigned int v12; // edx

  v1 = a1[27];
  v3 = a1[30];
  v4 = a1[26];
  if ( v1 )
  {
    v5 = v4 ^ (v4 >> 1);
    v6 = v4 << v1;
    if ( v3 == 3 )
    {
      v7 = v5 >> 30;
      LOBYTE(v8) = v4 >> (32 - v1);
      v4 <<= v1;
    }
    else
    {
      v9 = a1[26];
      if ( v3 == 1 )
      {
        v7 = v5 >> 14;
        v10 = 16;
        v4 = (unsigned __int16)v6;
      }
      else
      {
        v7 = v5 >> 6;
        v10 = 8;
        v4 = (unsigned __int8)v6;
      }
      v8 = v9 >> (v10 - v1);
    }
    v11 = a1[4] ^ ((unsigned __int8)v8 ^ (unsigned __int8)a1[4]) & 1;
    v12 = (v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)((_WORD)v7 << 11)) & 0x800) & 0xFFFFFFFB;
    a1[4] = ((v4 == 0 ? 0x40 : 0) | (v12 ^ (4
                                          * (((*((_BYTE *)XmBitCount + (v4 & 0xF))
                                             + *((_BYTE *)XmBitCount + ((unsigned __int8)v4 >> 4))) & 1) == 0))) & 0xFFFFFFBF) ^ ((unsigned __int8)((v4 == 0 ? 0x40 : 0) | (v12 ^ (4 * (((*((_BYTE *)XmBitCount + (v4 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v4 >> 4))) & 1) == 0))) & 0xBF) ^ (unsigned __int8)((unsigned __int8)(v4 >> (8 * v3 + 7)) << 7)) & 0x80;
  }
  return XmStoreResult(a1, v4);
}
