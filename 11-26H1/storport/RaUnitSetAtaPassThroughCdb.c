/*
 * XREFs of RaUnitSetAtaPassThroughCdb @ 0x1400418B4
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x140055654 (RaUnitAtaPassThroughIoctl.c)
 * Callees:
 *     <none>
 */

char __fastcall RaUnitSetAtaPassThroughCdb(__int64 a1, _BYTE *a2)
{
  __int16 v2; // ax
  __int16 v4; // cx
  __int16 v5; // ax
  char v6; // cl
  char v7; // al
  char result; // al

  v2 = *(_WORD *)(a1 + 2);
  v4 = v2 & 2;
  if ( (v2 & 2) != 0 || (v2 & 4) != 0 )
  {
    v5 = v2 & 0x10;
    if ( v4 )
      v6 = v5 != 0 ? 10 : 4;
    else
      v6 = v5 != 0 ? 11 : 5;
  }
  else
  {
    v6 = 3;
  }
  *a2 = -123;
  v7 = *(_BYTE *)(a1 + 2);
  a2[2] |= 7u;
  a2[1] = (2 * v6) & 0x1F | ((v7 & 8) != 0);
  a2[2] = a2[2] & 0x17 | (4 * (*(_BYTE *)(a1 + 2) & 2 | 0xE8));
  a2[3] = *(_BYTE *)(a1 + 32);
  a2[4] = *(_BYTE *)(a1 + 40);
  a2[5] = *(_BYTE *)(a1 + 33);
  a2[6] = *(_BYTE *)(a1 + 41);
  a2[7] = *(_BYTE *)(a1 + 34);
  a2[8] = *(_BYTE *)(a1 + 42);
  a2[9] = *(_BYTE *)(a1 + 35);
  a2[10] = *(_BYTE *)(a1 + 43);
  a2[11] = *(_BYTE *)(a1 + 36);
  a2[12] = *(_BYTE *)(a1 + 44);
  a2[13] = *(_BYTE *)(a1 + 45);
  result = *(_BYTE *)(a1 + 46);
  a2[14] = result;
  return result;
}
