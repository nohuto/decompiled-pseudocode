/*
 * XREFs of sub_18006D0E4 @ 0x18006D0E4
 * Callers:
 *     sub_18006D1CC @ 0x18006D1CC (sub_18006D1CC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_18006CFC8 @ 0x18006CFC8 (sub_18006CFC8.c)
 */

// Hidden C++ exception states: #wind=1
signed __int64 __fastcall sub_18006D0E4(__int64 *a1, __int64 a2, unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  signed __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( result >= 32 )
  {
    v6 = (__int64 *)(a2 - 16);
    v7 = -8LL - (_QWORD)a1;
    v8 = 16LL - (_QWORD)a1;
    do
    {
      if ( (__int64)(((unsigned __int64)v6 + v8) & 0xFFFFFFFFFFFFFFF0uLL) >= 32 )
      {
        v9 = *v6;
        v10 = v6[1];
        *v6 = 0LL;
        v6[1] = 0LL;
        sub_180011F5C(v6, a1);
        sub_18006CFC8((__int64)a1, 0LL, ((__int64)v6 + v7 + 8) >> 4, &v9, a3);
        if ( v10 )
          sub_180010EC8(v10);
      }
      v6 -= 2;
      result = ((unsigned __int64)v6 + v8) & 0xFFFFFFFFFFFFFFF0uLL;
    }
    while ( result >= 32 );
  }
  return result;
}
