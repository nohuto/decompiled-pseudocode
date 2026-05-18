/*
 * XREFs of sub_1800D30E0 @ 0x1800D30E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F8FC @ 0x18001F8FC (sub_18001F8FC.c)
 *     sub_1800D1ECC @ 0x1800D1ECC (sub_1800D1ECC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800D30E0(_QWORD **a1, __int64 *a2)
{
  __int64 *v4; // rbx
  __int64 **v5; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v9[4]; // [rsp+28h] [rbp-20h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = (__int64 *)*a1[18];
  while ( !*((_BYTE *)v4 + 25) )
  {
    ((void (__fastcall *)(_QWORD **, __int64 *, __int64 *))(*a1)[25])(a1, v9, v4 + 4);
    sub_1800D1ECC(a2, a2[1], v9[0], (v9[1] - v9[0]) >> 5);
    sub_18001F8FC((__int64)v9);
    v5 = (__int64 **)v4[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v4 = i;
      v4 = i;
    }
    else
    {
      v4 = (__int64 *)v4[2];
      for ( j = *v5; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v4 = j;
    }
  }
  return a2;
}
