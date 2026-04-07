/*
 * XREFs of ?find_flags_match@details@tip2@@YAPEBUtest_requirement@2@AEBVtest_state@2@PEBU32@_N@Z @ 0x1800D791C
 * Callers:
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x1800D7854 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 * Callees:
 *     <none>
 */

const struct tip2::test_requirement *__fastcall tip2::details::find_flags_match(
        tip2::details *this,
        const struct tip2::test_state *a2,
        const struct tip2::test_requirement *a3)
{
  const struct tip2::test_state *v3; // r10
  _WORD *i; // rax

  while ( 1 )
  {
    v3 = a2;
    for ( i = (_WORD *)*((_QWORD *)this + 14);
          i != (_WORD *)(*((_QWORD *)this + 14) + 104LL * *((_QWORD *)this + 16));
          i += 52 )
    {
      if ( *i == *(_WORD *)a2 )
        goto LABEL_6;
    }
    i = 0LL;
LABEL_6:
    if ( (i != 0LL) == (_BYTE)a3 )
      return a2;
    a2 = (const struct tip2::test_state *)((char *)a2 + 16);
    if ( !*((_QWORD *)v3 + 3) )
      return 0LL;
  }
}
