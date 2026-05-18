/*
 * XREFs of sub_180039E8C @ 0x180039E8C
 * Callers:
 *     sub_18003970C @ 0x18003970C (sub_18003970C.c)
 *     sub_18003A0B4 @ 0x18003A0B4 (sub_18003A0B4.c)
 *     sub_18003A374 @ 0x18003A374 (sub_18003A374.c)
 *     sub_180060724 @ 0x180060724 (sub_180060724.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_18003A014 @ 0x18003A014 (sub_18003A014.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180039E8C(__int64 *a1, __int64 *a2, __int64 (__fastcall *a3)(__int64 *, __int64 *))
{
  __int64 *i; // rdi
  __int64 *v7; // r14
  __int64 *v8; // rcx
  __int64 *j; // rbx
  char v11; // al
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v7 = i;
      v12 = *i;
      v13 = i[1];
      *i = 0LL;
      i[1] = 0LL;
      if ( (unsigned __int8)a3(&v12, a1) )
      {
        sub_18003A014(a1, i, i + 2);
        v8 = a1;
      }
      else
      {
        for ( j = i; ; v7 = j )
        {
          j -= 2;
          v11 = a3(&v12, j);
          v8 = v7;
          if ( !v11 )
            break;
          sub_180011F5C(v7, j);
        }
      }
      sub_180011F5C(v8, &v12);
      if ( v13 )
        sub_180010EC8(v13);
    }
  }
  return a2;
}
