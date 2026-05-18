/*
 * XREFs of sub_180098FF8 @ 0x180098FF8
 * Callers:
 *     sub_180099080 @ 0x180099080 (sub_180099080.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180098FF8(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdi
  void **v4; // rbx
  void *v5; // rcx
  _QWORD *v6; // rdi
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = (void **)(a1 + 8);
  if ( v3 <= 0 )
  {
    v6 = (_QWORD *)(a1 + 16);
  }
  else
  {
    do
    {
      --v3;
      v5 = (void *)*((_QWORD *)*v4 + v3);
      if ( v5 )
        sub_18000E26C(v5, 0x10uLL);
    }
    while ( v3 > 0 );
    v6 = (_QWORD *)(a1 + 16);
  }
  result = sub_18000E26C(*v4, 8LL * *v1);
  *v4 = 0LL;
  *v6 = 0LL;
  return result;
}
