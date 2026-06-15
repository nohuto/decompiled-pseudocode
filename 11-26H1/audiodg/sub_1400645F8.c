/*
 * XREFs of sub_1400645F8 @ 0x1400645F8
 * Callers:
 *     sub_1400644A8 @ 0x1400644A8 (sub_1400644A8.c)
 * Callees:
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_140038A9C @ 0x140038A9C (sub_140038A9C.c)
 *     sub_14006425C @ 0x14006425C (sub_14006425C.c)
 */

__int64 __fastcall sub_1400645F8(__int64 a1, __int64 *a2, unsigned int *a3)
{
  __int64 v3; // rbp
  int v5; // esi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdi
  __int64 *v12; // rax
  _QWORD *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v5 = 0;
  v8 = (unsigned int)(v3 + 4);
  *a3 = v8;
  LODWORD(v14) = *(_DWORD *)(a1 + 16);
  if ( (unsigned int)v8 > 0x1000
    || (unsigned int)sub_140038A9C((void *)(*a2 + v8), (unsigned int)(4092 - v3), &v14, 4uLL) )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    *a3 += 4;
    v10 = *(_QWORD **)a1;
    v14 = *(_QWORD **)a1;
    while ( 1 )
    {
      v11 = *a3;
      if ( !v10 )
        break;
      *a3 = v11 + 4;
      v12 = sub_1400265D8(v9, &v14);
      v5 = sub_14006425C(*v12, a1, a2, a3);
      if ( v5 < 0 )
        return (unsigned int)v5;
      v9 = *a2;
      v10 = v14;
      *(_DWORD *)(v11 + *a2) = *a3 - v11;
    }
    *(_DWORD *)(v3 + *a2) = v11 - v3;
  }
  return (unsigned int)v5;
}
