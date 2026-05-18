/*
 * XREFs of sub_1800217C0 @ 0x1800217C0
 * Callers:
 *     sub_180021944 @ 0x180021944 (sub_180021944.c)
 *     sub_1800219C0 @ 0x1800219C0 (sub_1800219C0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800217C0(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  unsigned int i; // esi
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned __int64 v13; // r10
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned __int8 v16; // cl

  v5 = a2 / 3;
  v6 = a2 % 3;
  if ( a2 % 3 )
    v7 = (v6 != 1) + 2LL;
  else
    v7 = 0LL;
  v8 = v7 + 4 * v5 + 1;
  if ( v8 <= 0x81 )
  {
    v9 = 0LL;
    for ( i = 0; i < v5; LOBYTE(v8) = i )
    {
      ++i;
      v11 = a1[2];
      v8 = *a1;
      v12 = a1[1];
      a1 += 3;
      *(_BYTE *)(v9 + a3) = aAbcdefghijklmn[v8 >> 2];
      *(_BYTE *)(v9 + a3 + 1) = aAbcdefghijklmn[((unsigned __int64)v12 >> 4) | (unsigned __int8)(16 * (v8 & 3))];
      *(_BYTE *)(v9 + a3 + 2) = aAbcdefghijklmn[((unsigned __int64)v11 >> 6) | (unsigned __int8)(4 * (v12 & 0xF))];
      *(_BYTE *)(v9 + a3 + 3) = aAbcdefghijklmn[v11 & 0x3F];
      v9 += 4LL;
    }
    v13 = v6 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
LABEL_12:
        *(_BYTE *)(v9 + a3) = 0;
        return v8;
      }
      v14 = a1[1];
      v15 = (unsigned __int8)(16 * (*a1 & 3));
      *(_BYTE *)(v9 + a3) = aAbcdefghijklmn[(unsigned __int64)*a1 >> 2];
      *(_BYTE *)(v9 + a3 + 1) = aAbcdefghijklmn[((unsigned __int64)v14 >> 4) | v15];
      LOBYTE(v8) = aAbcdefghijklmn[(unsigned __int8)(4 * (v14 & 0xF))];
      *(_BYTE *)(v9 + a3 + 2) = v8;
      *(_BYTE *)(v9 + a3 + 3) = 61;
    }
    else
    {
      v16 = 16 * (*a1 & 3);
      *(_BYTE *)(v9 + a3) = aAbcdefghijklmn[(unsigned __int64)*a1 >> 2];
      LOBYTE(v8) = aAbcdefghijklmn[v16];
      *(_BYTE *)(v9 + a3 + 1) = v8;
      *(_WORD *)(v9 + a3 + 2) = 15677;
    }
    v9 += 4LL;
    goto LABEL_12;
  }
  return v8;
}
