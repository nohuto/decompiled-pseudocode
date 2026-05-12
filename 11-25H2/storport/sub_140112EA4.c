/*
 * XREFs of sub_140112EA4 @ 0x140112EA4
 * Callers:
 *     sub_140113264 @ 0x140113264 (sub_140113264.c)
 * Callees:
 *     sub_1400DB064 @ 0x1400DB064 (sub_1400DB064.c)
 *     sub_1400E1168 @ 0x1400E1168 (sub_1400E1168.c)
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 */

__int64 __fastcall sub_140112EA4(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  bool v6; // cf
  PVOID v9; // r8
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v6 = *a3 < 0xCu;
  v12 = 0LL;
  if ( v6 )
  {
    sub_140112680(a2, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  else
  {
    *(_BYTE *)(a4 + 6) = *(_BYTE *)(a4 + 6) & 0x40 | 0x23;
    *(_DWORD *)a4 = 134217775;
    *(_WORD *)(a4 + 4) = 0;
    *(_DWORD *)(a4 + 7) = -16777212;
    sub_1400E1168(*(_QWORD *)(a1 + 16), a2, 2u, 0x200u, 0LL, v11, 1, &v12, 0LL, 0LL);
    if ( v12 )
    {
      *(_BYTE *)(a4 + 10) = sub_1400DB064(*(unsigned __int8 *)(v12 + 1) | (*(unsigned __int8 *)(v12 + 2) << 8));
      ExFreePoolWithTag(v9, 0x52436152u);
    }
    *a3 = 12;
    *(_BYTE *)(a2 + 3) = 1;
  }
  return v4;
}
