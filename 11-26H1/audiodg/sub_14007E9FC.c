/*
 * XREFs of sub_14007E9FC @ 0x14007E9FC
 * Callers:
 *     sub_14007E828 @ 0x14007E828 (sub_14007E828.c)
 *     sub_14007E8FC @ 0x14007E8FC (sub_14007E8FC.c)
 * Callees:
 *     sub_140058B20 @ 0x140058B20 (sub_140058B20.c)
 */

char __fastcall sub_14007E9FC(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rax
  _QWORD *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (_QWORD *)(a1 + 40);
  *a2 = 0LL;
  v5 = *(_QWORD **)(a1 + 40);
  v6 = 0LL;
  v9 = v5;
  while ( v6 < (v4[1] - (_QWORD)v5) >> 4 )
  {
    v10 = v6 + 1;
    if ( !*v9 )
    {
      v11 = 2 * v6;
      v5[v11] = a3;
      v5[v11 + 1] = a4;
      *a2 = v10;
      return v11;
    }
    ++v6;
    v9 += 2;
  }
  v13[0] = a3;
  v13[1] = a4;
  LOBYTE(v11) = sub_140058B20(v4, (__int64)v13, 0x10uLL);
  if ( (_BYTE)v11 )
  {
    v11 = (v4[1] - *v4) >> 4;
    *a2 = v11;
  }
  return v11;
}
