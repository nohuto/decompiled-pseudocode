/*
 * XREFs of sub_14000EB88 @ 0x14000EB88
 * Callers:
 *     sub_14000EB88 @ 0x14000EB88 (sub_14000EB88.c)
 *     sub_14001D774 @ 0x14001D774 (sub_14001D774.c)
 *     sub_14001DAA0 @ 0x14001DAA0 (sub_14001DAA0.c)
 * Callees:
 *     sub_14000DEF8 @ 0x14000DEF8 (sub_14000DEF8.c)
 *     sub_14000EB88 @ 0x14000EB88 (sub_14000EB88.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14000EB88(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 result; // rax
  __int64 *v5; // rcx

  while ( *(_QWORD *)(a1 + 16) )
  {
    v5 = *(__int64 **)a1;
    if ( !*(_QWORD *)a1 )
      sub_14004639C(2147500037LL, a2);
    *(_QWORD *)a1 = *v5;
    result = *(_QWORD *)(a1 + 32);
    *v5 = result;
    *(_QWORD *)(a1 + 32) = v5;
    if ( (*(_QWORD *)(a1 + 16))-- == 1LL )
      result = sub_14000EB88(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = *(_QWORD **)(a1 + 24);
  if ( v3 )
  {
    result = sub_14000DEF8(v3);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
