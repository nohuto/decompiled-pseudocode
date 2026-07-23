/*
 * XREFs of XmShldOp @ 0x1405AF9C0
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 */

_WORD *__fastcall XmShldOp(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // r11d
  unsigned int v3; // r9d
  unsigned int v4; // ebx
  unsigned int v5; // r11d

  v1 = *(unsigned __int8 *)(a1 + 144);
  v2 = *(_DWORD *)(a1 + 108);
  v3 = *(_DWORD *)(a1 + 104);
  if ( *(_BYTE *)(a1 + 144) )
  {
    if ( *(_DWORD *)(a1 + 120) == 3 )
    {
      if ( v1 == 1 )
        *(_DWORD *)(a1 + 16) ^= ((unsigned __int16)*(_DWORD *)(a1 + 16) ^ ((v3 ^ (v3 >> 1)) >> 19)) & 0x800;
      v4 = v3 >> (32 - v1);
      v3 = (v3 << v1) | (v2 >> (32 - v1));
      v5 = v3 >> 31;
    }
    else
    {
      if ( v1 == 1 )
      {
        *(_DWORD *)(a1 + 16) ^= ((unsigned __int16)*(_DWORD *)(a1 + 16) ^ (unsigned __int16)((v3 ^ (v3 >> 1)) >> 3)) & 0x800;
      }
      else if ( v1 > 0x10 )
      {
        LOBYTE(v1) = v1 - 16;
        v3 = (unsigned __int16)v2;
        v2 = 0;
      }
      v4 = v3 >> (16 - v1);
      v3 = (unsigned __int16)((v3 << v1) | (v2 >> (16 - v1)));
      v5 = v3 >> 15;
    }
    *(_DWORD *)(a1 + 16) = (v5 << 7) | (v3 == 0 ? 0x40 : 0) | ((*(_DWORD *)(a1 + 16) ^ ((unsigned __int8)v4 ^ (unsigned __int8)*(_DWORD *)(a1 + 16)) & 1) & 0xFFFFFFFB ^ (4 * (((*((_BYTE *)XmBitCount + (v3 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v3 >> 4))) & 1) == 0))) & 0xFFFFFF3F;
  }
  return XmStoreResult(a1, v3);
}
