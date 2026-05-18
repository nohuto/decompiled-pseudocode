/*
 * XREFs of sub_1800CDDC0 @ 0x1800CDDC0
 * Callers:
 *     sub_1800E4FA8 @ 0x1800E4FA8 (sub_1800E4FA8.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_1800CDDC0(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    while ( v1 != v3 )
    {
      v4 = v1[1];
      if ( v4 )
        sub_180010EC8(v4);
      v1 += 2;
    }
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
