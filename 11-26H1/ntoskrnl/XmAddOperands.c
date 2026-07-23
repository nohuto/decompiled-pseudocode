/*
 * XREFs of XmAddOperands @ 0x1404A1780
 * Callers:
 *     XmIncOp @ 0x1404A1650 (XmIncOp.c)
 *     XmAdcOp @ 0x1405AF290 (XmAdcOp.c)
 *     XmAddOp @ 0x1405AF2B0 (XmAddOp.c)
 *     XmXaddOp @ 0x1405AF390 (XmXaddOp.c)
 * Callees:
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 */

__int64 __fastcall XmAddOperands(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  unsigned __int16 v4; // di
  int v6; // ebx
  unsigned __int8 v7; // dl
  char v8; // si
  unsigned __int8 v9; // cl
  bool v10; // cf
  __int64 v11; // rdx
  int v12; // ebx
  unsigned int v13; // edx
  _DWORD *v14; // r11
  __int16 v15; // r10
  __int64 result; // rax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // cx
  unsigned int v21; // [rsp+38h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 120);
  v3 = 0;
  v21 = 0;
  v4 = a2;
  v6 = 0;
  if ( !v2 )
  {
    v7 = *(_BYTE *)(a1 + 108) + a2;
    v8 = 7;
    v9 = *(_BYTE *)(a1 + 104);
    LOBYTE(v21) = v9 + v7;
    LOBYTE(v6) = (unsigned __int8)(v9 + v7) < v9;
    v10 = v7 < (unsigned __int8)v4;
LABEL_3:
    v11 = v21;
    goto LABEL_4;
  }
  if ( v2 != 3 )
  {
    v19 = *(_WORD *)(a1 + 108) + a2;
    v8 = 15;
    v20 = *(_WORD *)(a1 + 104);
    LOWORD(v21) = v20 + v19;
    LOBYTE(v6) = (unsigned __int16)(v20 + v19) < v20;
    v10 = v19 < v4;
    goto LABEL_3;
  }
  v17 = *(_DWORD *)(a1 + 104);
  v8 = 31;
  v18 = a2 + *(_DWORD *)(a1 + 108);
  LOBYTE(v6) = v18 < a2;
  v11 = v17 + v18;
  v10 = (unsigned int)v11 < v17;
LABEL_4:
  LOBYTE(v3) = v10;
  v12 = v3 | v6;
  XmStoreResult(a1, v11);
  if ( v14[31] != 30 )
    v14[4] = v12 | v14[4] & 0xFFFFFFFE;
  v15 = v12 ^ ((v13 ^ v14[26] ^ v14[27]) >> v8);
  result = ((v13 == 0 ? 0x40 : 0) | (v14[4] ^ ((unsigned __int8)v14[4] ^ (unsigned __int8)(4
                                                                                         * ~(*((_BYTE *)XmBitCount
                                                                                             + (v13 & 0xF))
                                                                                           + *((_BYTE *)XmBitCount
                                                                                             + ((unsigned __int8)v13 >> 4))))) & 4 ^ (*((_BYTE *)v14 + 16) ^ ((unsigned __int8)v14[4] ^ (unsigned __int8)(4 * ~(*((_BYTE *)XmBitCount + (v13 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v13 >> 4))))) & 4 ^ (unsigned __int8)(v4 + (v14[26] & 0xF) + (v14[27] & 0xF))) & 0x10) & 0xFFFFFFBF) ^ ((unsigned __int8)((v13 == 0 ? 0x40 : 0) | (*((_BYTE *)v14 + 16) ^ (v14[4] ^ (4 * ~(*((_BYTE *)XmBitCount + (v13 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v13 >> 4))))) & 4 ^ (*((_BYTE *)v14 + 16) ^ (v14[4] ^ (4 * ~(*((_BYTE *)XmBitCount + (v13 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v13 >> 4))))) & 4 ^ (v4 + (v14[26] & 0xF) + (v14[27] & 0xF))) & 0x10) & 0xBF) ^ (unsigned __int8)((unsigned __int8)(v13 >> v8) << 7)) & 0x80;
  v14[4] = result ^ ((unsigned __int16)(((v13 == 0 ? 0x40 : 0) | (*((_WORD *)v14 + 8) ^ ((unsigned __int8)v14[4] ^ (unsigned __int8)(4 * ~(*((_BYTE *)XmBitCount + (v13 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v13 >> 4))))) & 4 ^ (*((_BYTE *)v14 + 16) ^ ((unsigned __int8)v14[4] ^ (unsigned __int8)(4 * ~(*((_BYTE *)XmBitCount + (v13 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v13 >> 4))))) & 4 ^ (unsigned __int8)(v4 + (v14[26] & 0xF) + (v14[27] & 0xF))) & 0x10) & 0xFFBF) ^ ((unsigned __int8)((v13 == 0 ? 0x40 : 0) | (*((_BYTE *)v14 + 16) ^ (v14[4] ^ (4 * ~(*((_BYTE *)XmBitCount + (v13 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v13 >> 4))))) & 4 ^ (*((_BYTE *)v14 + 16) ^ (v14[4] ^ (4 * ~(*((_BYTE *)XmBitCount + (v13 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v13 >> 4))))) & 4 ^ (v4 + (v14[26] & 0xF) + (v14[27] & 0xF))) & 0x10) & 0xBF) ^ (unsigned __int8)((unsigned __int8)(v13 >> v8) << 7)) & 0x80) ^ (unsigned __int16)(v15 << 11)) & 0x800;
  return result;
}
