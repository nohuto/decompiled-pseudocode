/*
 * XREFs of sub_140112A70 @ 0x140112A70
 * Callers:
 *     sub_140111E3C @ 0x140111E3C (sub_140111E3C.c)
 *     sub_1401130D0 @ 0x1401130D0 (sub_1401130D0.c)
 * Callees:
 *     sub_1401016D0 @ 0x1401016D0 (sub_1401016D0.c)
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 */

__int64 __fastcall sub_140112A70(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v6; // r9d
  char v7; // dl
  bool v8; // al
  __int64 v9; // r10
  __int64 v10; // r11
  char v11; // r8
  char v12; // cl
  char v13; // r8
  char v14; // r8
  char v15; // r8

  if ( *a3 >= 8u )
  {
    *(_BYTE *)(a4 + 3) = 4;
    v7 = *(_BYTE *)(a4 + 5) & 0xFC;
    *(_WORD *)a4 = -19968;
    *(_BYTE *)(a4 + 5) = v7;
    *(_BYTE *)(a4 + 5) = v7 & 0x9B | ((*(_BYTE *)(*(_QWORD *)(a1 + 176) + 33LL) & 7) != 1 ? 0 : 4);
    v8 = sub_1401016D0(a1);
    v12 = v11 & 0x7F | (v8 ? 0x80 : 0);
    v13 = *(_BYTE *)(v9 + 6);
    *(_BYTE *)(v9 + 5) = v12;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 176) + 24LL) & 1) != 0 )
    {
      v14 = v13 & 0xF8 | 2;
    }
    else if ( sub_1401016D0(a1) )
    {
      v14 = v15 & 0xF8 | 1;
    }
    else
    {
      v14 = v15 & 0xF8;
    }
    *(_BYTE *)(v9 + 6) = v14;
    *a3 = 8;
    *(_BYTE *)(v10 + 3) = 1;
  }
  else
  {
    sub_140112680(a2, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  return v6;
}
