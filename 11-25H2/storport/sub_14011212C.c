/*
 * XREFs of sub_14011212C @ 0x14011212C
 * Callers:
 *     sub_140112294 @ 0x140112294 (sub_140112294.c)
 * Callees:
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 */

__int64 __fastcall sub_14011212C(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  int v5; // edx
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // [rsp+30h] [rbp-18h]
  unsigned __int16 v10; // [rsp+60h] [rbp+18h]

  v5 = a1;
  if ( (char)a3[4] >= 0 )
  {
    HIBYTE(v10) = a3[2];
    LOBYTE(v10) = a3[3];
    HIBYTE(v9) = a3[6];
    BYTE2(v9) = a3[7];
    BYTE1(v9) = a3[8];
    LOBYTE(v9) = a3[9];
    v7 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a4 + 43) = a3[1];
    *(_DWORD *)(a4 + 4) = v7;
    v8 = *(_DWORD *)(a4 + 40) & 0xFF0000FF | (v10 << 8);
    *(_BYTE *)a4 = -127;
    *(_DWORD *)(a4 + 44) = v9;
    result = 259LL;
    *(_DWORD *)(a4 + 40) = v8;
    *(_BYTE *)(a2 + 3) = 0;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(v5) = 6;
    sub_140112680(a2, v5, (_DWORD)a3, a4, 0);
    return 3221225485LL;
  }
  return result;
}
