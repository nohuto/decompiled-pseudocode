/*
 * XREFs of sub_14004F88C @ 0x14004F88C
 * Callers:
 *     sub_14004CA9C @ 0x14004CA9C (sub_14004CA9C.c)
 *     sub_14004F12C @ 0x14004F12C (sub_14004F12C.c)
 *     sub_14004FA80 @ 0x14004FA80 (sub_14004FA80.c)
 * Callees:
 *     sub_14004FA18 @ 0x14004FA18 (sub_14004FA18.c)
 */

__int64 __fastcall sub_14004F88C(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2,
        volatile signed __int32 *a3)
{
  __int64 result; // rax

  result = sub_14004FA18(a1);
  if ( a2 )
  {
    *a1 = a2;
    a1[1] = a3;
    _InterlockedIncrement(a2);
  }
  return result;
}
