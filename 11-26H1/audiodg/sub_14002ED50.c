/*
 * XREFs of sub_14002ED50 @ 0x14002ED50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002ED50(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = a1 + 16;
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
  {
    result = sub_1400B6010(v2);
    *(_QWORD *)(v1 + 56) = 0LL;
  }
  return result;
}
