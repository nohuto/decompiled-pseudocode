/*
 * XREFs of sub_140112F9C @ 0x140112F9C
 * Callers:
 *     sub_140113264 @ 0x140113264 (sub_140113264.c)
 * Callees:
 *     sub_1400DB064 @ 0x1400DB064 (sub_1400DB064.c)
 *     sub_1400E1168 @ 0x1400E1168 (sub_1400E1168.c)
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 */

__int64 __fastcall sub_140112F9C(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // r8d
  int v9; // esi
  __int64 *v10; // r10
  char v11; // al
  char v12; // al
  char v13; // al
  __int64 v14; // r9
  PVOID v15; // r8
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  v6 = *a3;
  v18 = 0LL;
  v9 = 10;
  if ( v6 >= 0xA )
  {
    v10 = (__int64 *)(a1 + 16);
    v11 = *(_BYTE *)(a4 + 6) & 0x40;
    *(_DWORD *)a4 = 201326605;
    *(_WORD *)(a4 + 4) = 0;
    *(_BYTE *)(a4 + 6) = v11 | 3;
    *(_BYTE *)(a4 + 7) = 2;
    *(_BYTE *)(a4 + 9) = -1;
    if ( v6 > 0x10 )
    {
      *(_WORD *)(a4 + 10) = 256;
      v9 = 16;
      v12 = *(_BYTE *)(a4 + 12) & 0x40;
      *(_BYTE *)(a4 + 13) = 2;
      *(_BYTE *)(a4 + 12) = v12 | 3;
      v13 = sub_1400DB064(*(_WORD *)(*v10 + 56));
      *(_BYTE *)(v14 + 15) = v13;
    }
    sub_1400E1168(*v10, a2, 2u, 0x200u, 0LL, v17, 1, &v18, 0LL, 0LL);
    if ( v18 )
    {
      *(_BYTE *)(a4 + 9) = sub_1400DB064(*(unsigned __int8 *)(v18 + 1) | (*(unsigned __int8 *)(v18 + 2) << 8));
      ExFreePoolWithTag(v15, 0x52436152u);
    }
    *a3 = v9;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    sub_140112680(a2, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  return v4;
}
