/*
 * XREFs of sub_18006C480 @ 0x18006C480
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001892C @ 0x18001892C (sub_18001892C.c)
 */

bool __fastcall sub_18006C480(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  if ( a1 == a2 )
    return 1;
  v3 = _RTtypeid(a1);
  v4 = _RTtypeid(a2);
  return !sub_18001892C(v3, v4);
}
