/*
 * XREFs of sub_14006425C @ 0x14006425C
 * Callers:
 *     sub_1400645F8 @ 0x1400645F8 (sub_1400645F8.c)
 * Callees:
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_140038A9C @ 0x140038A9C (sub_140038A9C.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_140063688 @ 0x140063688 (sub_140063688.c)
 *     sub_140063C84 @ 0x140063C84 (sub_140063C84.c)
 */

__int64 __fastcall sub_14006425C(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  const char *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // r8d
  unsigned int v13; // r14d
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r10
  unsigned int v19; // edx
  unsigned __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rcx
  int v24; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *i; // [rsp+28h] [rbp-20h] BYREF

  v8 = sub_140063688((__int64 *)a1);
  if ( *a4 > 0x1000 )
    return (unsigned int)-2147024774;
  if ( (unsigned int)sub_140038A9C((void *)(*a3 + *a4), 4096 - *a4, "NODE", 5uLL) )
    return (unsigned int)-2147024774;
  v9 = *a4 + 5;
  *a4 = v9;
  if ( (unsigned int)v9 > 0x1000 )
    return (unsigned int)-2147024774;
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( v8[v11] );
  if ( (unsigned int)sub_140038A9C((void *)(*a3 + v9), (unsigned int)(4096 - v9), v8, (unsigned int)(v11 + 1)) )
    return (unsigned int)-2147024774;
  do
    ++v10;
  while ( v8[v10] );
  v12 = *a4 + 1 + v10;
  *a4 = v12;
  v24 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  if ( v12 > 0x1000 )
    return (unsigned int)-2147024774;
  if ( (unsigned int)sub_140038A9C((void *)(*a3 + v12), 4096 - v12, &v24, 4uLL) )
    return (unsigned int)-2147024774;
  v13 = *a4 + 4;
  *a4 = v13;
  v14 = 0;
  v24 = sub_140063C84(a1);
  if ( v13 > 0x1000 )
    return (unsigned int)-2147024774;
  if ( (unsigned int)sub_140038A9C((void *)(*a3 + v13), 4096 - v13, &v24, 4uLL) )
    return (unsigned int)-2147024774;
  v15 = *a4 + 4;
  *a4 = v15;
  v24 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)v15 > 0x1000
    || (unsigned int)sub_140038A9C((void *)(*a3 + v15), (unsigned int)(4096 - v15), &v24, 4uLL) )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    *a4 += 4;
    v17 = *(_QWORD **)(a1 + 8);
    for ( i = v17; v17; v17 = i )
    {
      v18 = *sub_1400265D8(v16, &i);
      v14 = -2147023728;
      v19 = 0;
      v20 = *(_QWORD *)(a2 + 16);
      if ( v20 )
      {
        v21 = 0LL;
        do
        {
          v22 = *(_QWORD **)a2;
          if ( !*(_QWORD *)a2 )
            goto LABEL_29;
          if ( v21 )
          {
            do
            {
              v22 = (_QWORD *)*v22;
              --v21;
            }
            while ( v21 );
            if ( !v22 )
LABEL_29:
              sub_14004639C(-2147467259);
          }
          if ( v18 == v22[2] )
          {
            v24 = v19;
            v14 = 0;
          }
          v21 = ++v19;
        }
        while ( v19 < v20 );
      }
      if ( v14 < 0 )
        break;
      if ( *a4 > 0x1000 || (unsigned int)sub_140038A9C((void *)(*a3 + *a4), 4096 - *a4, &v24, 4uLL) )
        return (unsigned int)-2147024774;
      *a4 += 4;
    }
  }
  return (unsigned int)v14;
}
