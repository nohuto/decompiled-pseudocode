/*
 * XREFs of XmCompareOperands @ 0x1405B0388
 * Callers:
 *     XmCmpsOp @ 0x1405B02E0 (XmCmpsOp.c)
 *     XmScasOp @ 0x1405B0600 (XmScasOp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmCompareOperands(_DWORD *a1)
{
  int v1; // eax
  int v2; // r9d
  int v4; // edi
  unsigned int v5; // r10d
  unsigned int v6; // r11d
  unsigned int v7; // r8d
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  bool v11; // zf
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  __int64 result; // rax

  v1 = a1[30];
  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  LOBYTE(v7) = 0;
  if ( !v1 )
  {
    v14 = *((unsigned __int8 *)a1 + 104);
    v15 = *((unsigned __int8 *)a1 + 108);
    v7 = (unsigned __int8)(v15 - v14);
    v5 = ((v14 ^ v7) >> 7) & ((v15 ^ v7) >> 7);
    v6 = v7 >> 7;
    LOBYTE(v4) = (unsigned __int8)v15 < (unsigned __int8)v14;
    v11 = (_BYTE)v15 == (unsigned __int8)v14;
    goto LABEL_7;
  }
  v8 = v1 - 1;
  if ( !v8 )
  {
    v12 = *((unsigned __int16 *)a1 + 52);
    v13 = *((unsigned __int16 *)a1 + 54);
    v7 = (unsigned __int16)(v13 - v12);
    v5 = ((v12 ^ v7) >> 15) & ((v13 ^ v7) >> 15);
    v6 = v7 >> 15;
    LOBYTE(v4) = (unsigned __int16)v13 < (unsigned __int16)v12;
    v11 = (_WORD)v13 == (unsigned __int16)v12;
    goto LABEL_7;
  }
  if ( v8 == 2 )
  {
    v9 = a1[26];
    v10 = a1[27];
    LOBYTE(v7) = v10 - v9;
    v5 = ((v9 ^ (v10 - v9)) >> 31) & ((v10 ^ (v10 - v9)) >> 31);
    v6 = (v10 - v9) >> 31;
    LOBYTE(v4) = v10 < v9;
    v11 = v10 == v9;
LABEL_7:
    LOBYTE(v2) = v11;
  }
  result = 2 * v6;
  a1[4] = (v5 << 11) | (((unsigned int)result | v2 & 0xFFFFFFFD) << 6) & 0xFFFFF7FF | ((a1[26] & 0xF) + (a1[27] & 0xF)) & 0xFFFFF730 | ((v4 & 0xFFFFFFFB | a1[4] & 0xFFFFFFFA) ^ (4 * (((*((_BYTE *)XmBitCount + (v7 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v7 >> 4))) & 1) == 0))) & 0xFFFFF72F;
  return result;
}
