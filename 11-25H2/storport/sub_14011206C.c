/*
 * XREFs of sub_14011206C @ 0x14011206C
 * Callers:
 *     sub_140112294 @ 0x140112294 (sub_140112294.c)
 * Callees:
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 */

__int64 __fastcall sub_14011206C(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  unsigned int v5; // edx
  unsigned int v6; // eax
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned __int16 v10; // [rsp+48h] [rbp+10h]
  unsigned int v11; // [rsp+50h] [rbp+18h]

  HIBYTE(v10) = a3[2];
  LOBYTE(v10) = a3[3];
  HIBYTE(v11) = a3[6];
  BYTE2(v11) = a3[7];
  BYTE1(v11) = a3[8];
  LOBYTE(v11) = a3[9];
  v5 = v11;
  if ( (char)a3[4] < 0 )
    v5 = v11 << 9;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_DWORD *)(a2 + 60);
  else
    v6 = *(_DWORD *)(a2 + 16);
  if ( v6 >= v5 )
  {
    v8 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a4 + 43) = a3[1];
    *(_DWORD *)(a4 + 4) = v8;
    v9 = *(_DWORD *)(a4 + 40) & 0xFF0000FF | (v10 << 8);
    *(_BYTE *)a4 = -126;
    *(_DWORD *)(a4 + 40) = v9;
    result = 259LL;
    *(_DWORD *)(a4 + 44) = v5;
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
