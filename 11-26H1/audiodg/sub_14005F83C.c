/*
 * XREFs of sub_14005F83C @ 0x14005F83C
 * Callers:
 *     sub_14005FB5C @ 0x14005FB5C (sub_14005FB5C.c)
 *     sub_14005FE3C @ 0x14005FE3C (sub_14005FE3C.c)
 *     sub_14006054C @ 0x14006054C (sub_14006054C.c)
 *     sub_1400B4450 @ 0x1400B4450 (sub_1400B4450.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_14005F83C(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        sub_1400B6010(v4);
      }
      v3 += 2;
      result = v3 - 1;
    }
    while ( v3 - 1 != a2 );
  }
  return result;
}
