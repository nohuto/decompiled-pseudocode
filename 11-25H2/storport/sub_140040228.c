/*
 * XREFs of sub_140040228 @ 0x140040228
 * Callers:
 *     sub_14009E468 @ 0x14009E468 (sub_14009E468.c)
 *     sub_14009EC74 @ 0x14009EC74 (sub_14009EC74.c)
 *     sub_140100070 @ 0x140100070 (sub_140100070.c)
 *     sub_140100548 @ 0x140100548 (sub_140100548.c)
 *     sub_140100974 @ 0x140100974 (sub_140100974.c)
 * Callees:
 *     sub_1400A1C9C @ 0x1400A1C9C (sub_1400A1C9C.c)
 *     sub_1400A1D5C @ 0x1400A1D5C (sub_1400A1D5C.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 sub_140040228(_WORD *a1, unsigned __int64 a2, _QWORD *a3, unsigned __int64 *a4, int a5, const int *a6, ...)
{
  int v9; // ebx
  const int *v10; // r9
  _WORD *v11; // r13
  unsigned __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  _WORD *v16; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, a6);
  v9 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !a1 && a2 || a2 > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v10 = a6;
    v11 = a1;
    v16 = a1;
    v12 = a2;
    v17[0] = a2;
    if ( (a5 & 0x100) != 0 && !a6 )
      v10 = &dword_140149108;
    v9 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( a2 )
        *a1 = 0;
    }
    else if ( a2 )
    {
      v17[0] = 0LL;
      v13 = sub_1400A1D5C(a1, a2, v17, v10, va);
      v14 = v17[0];
      v9 = v13;
      v12 = a2 - v17[0];
      v17[0] = a2 - v17[0];
      v11 = &a1[v14];
      v16 = v11;
      if ( v13 >= 0 )
      {
        if ( (a5 & 0x200) != 0 && v12 > 1 && 2 * v12 > 2 )
          memset_0(v11 + 1, (unsigned __int8)a5, 2 * v12 - 2);
        goto LABEL_20;
      }
    }
    else
    {
      if ( !*(_WORD *)v10 )
      {
LABEL_20:
        if ( a3 )
          *a3 = v11;
        if ( a4 )
          *a4 = v12;
        return (unsigned int)v9;
      }
      v9 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      sub_1400A1C9C(a1, 2 * a2, a3, &v16, v17, a5);
      v11 = v16;
      v12 = v17[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_20;
  }
  return (unsigned int)v9;
}
