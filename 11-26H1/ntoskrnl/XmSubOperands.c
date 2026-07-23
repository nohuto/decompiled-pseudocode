/*
 * XREFs of XmSubOperands @ 0x1404A1170
 * Callers:
 *     XmSubOp @ 0x1404A1130 (XmSubOp.c)
 *     XmDecOp @ 0x1404A1150 (XmDecOp.c)
 *     XmCmpxchgOp @ 0x1405AF2D0 (XmCmpxchgOp.c)
 *     XmNegOp @ 0x1405AF340 (XmNegOp.c)
 *     XmSbbOp @ 0x1405AF370 (XmSbbOp.c)
 * Callees:
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 */

__int64 __fastcall XmSubOperands(_DWORD *a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  char v4; // bl
  _DWORD *v5; // r10
  int v6; // r11d
  int v7; // eax
  char v8; // di
  unsigned __int8 v9; // cl
  int v10; // r11d
  __int64 v11; // rdx
  int v12; // eax
  int v13; // esi
  __int64 result; // rax
  unsigned int v15; // r8d
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // cx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // [rsp+38h] [rbp+10h]

  v2 = a1[30];
  v3 = 0;
  v20 = 0;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  if ( v2 )
  {
    if ( v2 == 3 )
    {
      v18 = a1[26];
      v8 = 31;
      v19 = a1[27];
      LOBYTE(v6) = v18 < a2;
      LOBYTE(v3) = v18 - a2 < v19;
      v10 = v3 | v6;
      v11 = v18 - a2 - v19;
      goto LABEL_4;
    }
    v16 = *((_WORD *)a1 + 52);
    v8 = 15;
    v17 = *((_WORD *)a1 + 54);
    LOBYTE(v6) = (unsigned __int16)(v16 - a2) < v17;
    LOBYTE(v3) = v16 < (unsigned __int16)a2;
    v10 = v3 | v6;
    LOWORD(v20) = v16 - a2 - v17;
  }
  else
  {
    v7 = *((unsigned __int8 *)a1 + 104);
    v8 = 7;
    v9 = *((_BYTE *)a1 + 108);
    LOBYTE(v6) = (unsigned __int8)(v7 - a2) < v9;
    LOBYTE(v3) = (unsigned __int8)v7 < (unsigned __int8)a2;
    v10 = v3 | v6;
    LOBYTE(v20) = v7 - a2 - v9;
  }
  v11 = v20;
LABEL_4:
  v12 = v5[31];
  if ( v12 != 13 && v12 != 87 )
    XmStoreResult(v5, v11);
  v13 = v5[31];
  if ( v13 != 31 )
    v5[4] = v10 | v5[4] & 0xFFFFFFFE;
  result = v5[27] & 0xF;
  v15 = v5[4] ^ ((unsigned __int8)v5[4] ^ (unsigned __int8)(4
                                                          * ~(*((_BYTE *)XmBitCount + (v11 & 0xF))
                                                            + *((_BYTE *)XmBitCount + ((unsigned __int8)v11 >> 4))))) & 4 ^ (*((_BYTE *)v5 + 16) ^ ((unsigned __int8)v5[4] ^ (unsigned __int8)(4 * ~(*((_BYTE *)XmBitCount + (v11 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v11 >> 4))))) & 4 ^ (unsigned __int8)((v5[26] & 0xF) - result - v4)) & 0x10;
  v5[4] = v15;
  if ( v13 != 87 )
  {
    result = (unsigned int)-(int)v11;
    v15 = ((_DWORD)v11 == 0 ? 0x40 : 0) | v15 & 0xFFFFFFBF;
    v5[4] = v15;
  }
  v5[4] = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)((unsigned __int8)((unsigned int)v11 >> v8) << 7)) & 0x80 ^ ((unsigned __int16)(v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)((unsigned __int8)((unsigned int)v11 >> v8) << 7)) & 0x80) ^ (unsigned __int16)(((unsigned __int16)v10 ^ (unsigned __int16)(((unsigned int)v11 ^ v5[26] ^ v5[27]) >> v8)) << 11)) & 0x800;
  return result;
}
