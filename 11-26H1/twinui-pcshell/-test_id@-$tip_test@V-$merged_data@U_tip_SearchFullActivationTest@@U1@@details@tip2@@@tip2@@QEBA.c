/*
 * XREFs of ?test_id@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEBA?AU_GUID@@XZ @ 0x1803BDF68
 * Callers:
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@_N@Z @ 0x18023F5D8 (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::test_id(
        __int64 a1,
        _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // [rsp+0h] [rbp-18h]

  if ( *(_QWORD *)a1 )
    v3 = *(_OWORD *)(*(_QWORD *)a1 + 152LL);
  else
    v3 = 0LL;
  result = a2;
  *a2 = v3;
  return result;
}
