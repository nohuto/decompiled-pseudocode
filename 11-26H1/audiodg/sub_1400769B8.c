/*
 * XREFs of sub_1400769B8 @ 0x1400769B8
 * Callers:
 *     sub_140079E40 @ 0x140079E40 (sub_140079E40.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_140075EC0 @ 0x140075EC0 (sub_140075EC0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400769B8(int *a1, __int64 a2, __int64 a3, __int64 ***a4)
{
  int v7; // ebx
  __int64 v8; // rdi
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v7 = *a1;
  if ( *a1 >= 0 )
  {
    v12 = 0LL;
    v8 = *(_QWORD *)(*(_QWORD *)a3 + 40LL);
    sub_1400125D4(&v12);
    v7 = sub_1400B6010(v8);
    if ( v7 >= 0 )
      v7 = sub_1400B6010(v12);
    sub_1400125D4(&v12);
    sub_140075EC0(&v12, a2);
    if ( a1[1] != (_DWORD)v12 )
    {
      *a1 = -2147483636;
      if ( v7 < 0 )
      {
        RoTransformError((unsigned int)v7, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v9 = **a4;
        v10 = *v9;
        *v9 = 0LL;
        if ( v10 )
          sub_1400B6010(v10);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v7, 0LL);
  }
  return (unsigned int)v7;
}
