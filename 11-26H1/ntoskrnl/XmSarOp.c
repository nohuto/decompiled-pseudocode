/*
 * XREFs of XmSarOp @ 0x1405AF8D0
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 */

_WORD *__fastcall XmSarOp(_DWORD *a1)
{
  int v1; // eax
  int v2; // r11d
  int v3; // r9d
  int v4; // r8d
  unsigned int v5; // edx

  v1 = a1[27];
  v2 = a1[30];
  v3 = a1[26];
  if ( v1 )
  {
    v4 = v3 >> (v1 - 1);
    if ( v2 == 3 )
    {
      v3 >>= v1;
    }
    else if ( v2 == 1 )
    {
      v3 = (unsigned __int16)(v3 << 16 >> (v1 + 16));
    }
    else
    {
      v3 = (unsigned __int8)(v3 << 24 >> (v1 + 24));
    }
    v5 = (v4 & 1 ^ a1[4] & 0xFFFFF7FE) & 0xFFFFFFFB;
    a1[4] = ((v3 == 0 ? 0x40 : 0) | (v5 ^ (4
                                         * (((*((_BYTE *)XmBitCount + (v3 & 0xF))
                                            + *((_BYTE *)XmBitCount + ((unsigned __int8)v3 >> 4))) & 1) == 0))) & 0xFFFFFFBF) ^ ((unsigned __int8)((v3 == 0 ? 0x40 : 0) | (v5 ^ (4 * (((*((_BYTE *)XmBitCount + (v3 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v3 >> 4))) & 1) == 0))) & 0xBF) ^ (unsigned __int8)((unsigned __int8)(v3 >> (8 * v2 + 7)) << 7)) & 0x80;
  }
  return XmStoreResult((__int64)a1, v3);
}
