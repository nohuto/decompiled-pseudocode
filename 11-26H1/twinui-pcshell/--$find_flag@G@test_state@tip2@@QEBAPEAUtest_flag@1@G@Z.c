/*
 * XREFs of ??$find_flag@G@test_state@tip2@@QEBAPEAUtest_flag@1@G@Z @ 0x18028C224
 * Callers:
 *     ?find_flags_match@details@tip2@@YAPEBUtest_requirement@2@AEBVtest_state@2@PEBU32@_N@Z @ 0x18028C1E8 (-find_flags_match@details@tip2@@YAPEBUtest_requirement@2@AEBVtest_state@2@PEBU32@_N@Z.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall tip2::test_state::find_flag<unsigned short>(__int64 a1, __int16 a2)
{
  _WORD *result; // rax
  _WORD *v3; // r8

  result = *(_WORD **)(a1 + 112);
  v3 = &result[52 * *(_QWORD *)(a1 + 128)];
  while ( result != v3 )
  {
    if ( *result == a2 )
      return result;
    result += 52;
  }
  return 0LL;
}
