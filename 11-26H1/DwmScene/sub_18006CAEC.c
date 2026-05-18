/*
 * XREFs of sub_18006CAEC @ 0x18006CAEC
 * Callers:
 *     sub_18006D1CC @ 0x18006D1CC (sub_18006D1CC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 *__fastcall sub_18006CAEC(__int64 *a1, __int64 *a2, __int64 (__fastcall *a3)(__int64 *, __int64 *))
{
  __int64 *i; // rbx
  __int64 *v7; // r14
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  __int64 *v10; // rcx
  char v12; // al
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v7 = i;
      v13 = *i;
      v14 = i[1];
      *i = 0LL;
      i[1] = 0LL;
      v8 = i;
      if ( (unsigned __int8)a3(&v13, a1) )
      {
        if ( i != a1 )
        {
          do
          {
            v9 = v8;
            v8 -= 2;
            sub_180011F5C(v9, v8);
          }
          while ( v8 != a1 );
        }
        v10 = a1;
      }
      else
      {
        while ( 1 )
        {
          v8 -= 2;
          v12 = a3(&v13, v8);
          v10 = v7;
          if ( !v12 )
            break;
          sub_180011F5C(v7, v8);
          v7 = v8;
        }
      }
      sub_180011F5C(v10, &v13);
      if ( v14 )
        sub_180010EC8(v14);
    }
  }
  return a2;
}
