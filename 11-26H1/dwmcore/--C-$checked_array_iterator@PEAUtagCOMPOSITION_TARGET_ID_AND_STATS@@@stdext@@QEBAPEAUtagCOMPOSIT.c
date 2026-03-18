/*
 * XREFs of ??C?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@QEBAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@XZ @ 0x18022DB50
 * Callers:
 *     ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x180032890 (-ConfirmCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?push_back@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180033608 (-push_back@-$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V-$buffer_impl@UtagCOMPOSITION_T.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  return *a1 + 120 * v1;
}
