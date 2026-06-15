/*
 * XREFs of sub_14001FC5C @ 0x14001FC5C
 * Callers:
 *     sub_14000655C @ 0x14000655C (sub_14000655C.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004A7C4 @ 0x14004A7C4 (sub_14004A7C4.c)
 *     sub_1400693A0 @ 0x1400693A0 (sub_1400693A0.c)
 */

__int64 sub_14001FC5C(_BYTE *a1, unsigned __int64 a2, _QWORD *a3, unsigned __int64 *a4, int a5, const char *a6, ...)
{
  int v7; // ebx
  const char *v9; // r8
  _BYTE *v10; // r13
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  int v13; // eax
  _BYTE *v15; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-10h] BYREF
  unsigned __int64 *v18; // [rsp+A8h] [rbp+60h]
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, a6);
  v18 = a4;
  v7 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !a1 && a2 || a2 > 0x7FFFFFFF )
      v7 = -2147024809;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    v7 = -2147024809;
  }
  if ( v7 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v9 = a6;
    v10 = a1;
    v15 = a1;
    v11 = a2;
    v16 = a2;
    if ( (a5 & 0x100) != 0 && !a6 )
      v9 = (const char *)&unk_1400C67A8;
    v7 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v7 = -2147024809;
      if ( a2 )
        *a1 = 0;
    }
    else if ( a2 )
    {
      v12 = a2 - 1;
      v16 = 0LL;
      v13 = sub_14004A7C4(a1, a2 - 1, v9, va);
      if ( v13 < 0 || v13 > v12 )
      {
        a1[v12] = 0;
        v7 = -2147024774;
      }
      else if ( v13 == v12 )
      {
        a1[v12] = 0;
      }
      else
      {
        v12 = v13;
      }
      v11 = a2 - v12;
      v10 = &a1[v12];
      v15 = &a1[v12];
      v16 = a2 - v12;
      if ( v7 >= 0 )
      {
        if ( (a5 & 0x200) != 0 && v11 > 1 )
          memset(v10 + 1, (unsigned __int8)a5, v11 - 1);
        goto LABEL_20;
      }
    }
    else
    {
      if ( !*v9 )
        goto LABEL_21;
      v7 = a1 != 0LL ? -2147024774 : -2147024809;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      sub_1400693A0(a1, a2, v9, &v15, &v16, a5);
      v10 = v15;
      v11 = v16;
    }
    if ( v7 == -2147024774 )
    {
LABEL_20:
      a4 = v18;
LABEL_21:
      if ( a3 )
        *a3 = v10;
      if ( a4 )
        *a4 = v11;
    }
  }
  return (unsigned int)v7;
}
