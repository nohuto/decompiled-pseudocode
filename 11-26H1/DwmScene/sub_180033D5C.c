/*
 * XREFs of sub_180033D5C @ 0x180033D5C
 * Callers:
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 *     sub_180035030 @ 0x180035030 (sub_180035030.c)
 *     sub_1800351DC @ 0x1800351DC (sub_1800351DC.c)
 *     sub_18003587C @ 0x18003587C (sub_18003587C.c)
 *     sub_180035A5C @ 0x180035A5C (sub_180035A5C.c)
 *     sub_180035EE0 @ 0x180035EE0 (sub_180035EE0.c)
 *     sub_1800369D4 @ 0x1800369D4 (sub_1800369D4.c)
 *     sub_180036EBC @ 0x180036EBC (sub_180036EBC.c)
 *     sub_180036FAC @ 0x180036FAC (sub_180036FAC.c)
 *     sub_180037410 @ 0x180037410 (sub_180037410.c)
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 *     sub_180063CC0 @ 0x180063CC0 (sub_180063CC0.c)
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180033D5C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 976);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a2 = *(_QWORD *)(a1 + 968);
  a2[1] = *(_QWORD *)(a1 + 976);
  return a2;
}
