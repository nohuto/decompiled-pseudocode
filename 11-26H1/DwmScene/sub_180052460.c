/*
 * XREFs of sub_180052460 @ 0x180052460
 * Callers:
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18004FEA0 @ 0x18004FEA0 (sub_18004FEA0.c)
 *     sub_1800579C0 @ 0x1800579C0 (sub_1800579C0.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_18006AD9C @ 0x18006AD9C (sub_18006AD9C.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_180086A80 @ 0x180086A80 (sub_180086A80.c)
 *     sub_18008720C @ 0x18008720C (sub_18008720C.c)
 *     sub_18008BE80 @ 0x18008BE80 (sub_18008BE80.c)
 *     sub_18008E2D0 @ 0x18008E2D0 (sub_18008E2D0.c)
 *     sub_180091F8C @ 0x180091F8C (sub_180091F8C.c)
 *     sub_1800946C4 @ 0x1800946C4 (sub_1800946C4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_1800521B0 @ 0x1800521B0 (sub_1800521B0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180052460(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // r10
  _DWORD *v5; // r9
  __int64 result; // rax
  __int64 *v7; // rax
  int v8; // r8d
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]

  v3 = a3;
  v5 = *(_DWORD **)(a1 + 112);
  *v5 = *a2;
  v5[1] = a2[1];
  v5[2] = a2[2];
  v5[3] = a2[3];
  v5[4] = a2[4];
  v5[5] = a2[5];
  v5[6] = a2[6];
  v5[7] = a2[7];
  v5[8] = a2[8];
  v5[9] = a2[9];
  v5[10] = a2[10];
  v5[11] = a2[11];
  result = (unsigned int)a2[12];
  v5[12] = result;
  if ( a3 )
    result = sub_180029310(a1, 1, 1);
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    if ( v3 )
    {
      v7 = (__int64 *)sub_180012BF8(v3 + 8, &v13);
      sub_1800521B0(a1, v7);
      if ( v14 )
        sub_180010EC8(v14);
      sub_180029310(a1, 2, 0);
      return sub_180029310(v9, v8 + 4, v8);
    }
    else
    {
      sub_180036040(*(_QWORD *)(a1 + 72), &v15);
      v10 = 0;
      v11 = v15;
      if ( (v16 - v15) >> 4 )
      {
        v12 = 0LL;
        do
        {
          sub_180012C40(&v13, (_QWORD *)(v11 + 16 * v12));
          sub_1800521B0(a1, &v13);
          if ( v14 )
            sub_180010EC8(v14);
          v12 = ++v10;
          v11 = v15;
        }
        while ( v10 < (unsigned __int64)((v16 - v15) >> 4) );
      }
      return sub_1800141F0((__int64)&v15);
    }
  }
  return result;
}
