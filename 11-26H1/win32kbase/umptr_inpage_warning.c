/*
 * XREFs of umptr_inpage_warning @ 0x1401F0FC0
 * Callers:
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1400C1800 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1400C2360 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 *     umptr_r__POINTL_::enumerate__POINTFIX__vOffsetPoints_::_2_::_lambda_1___ @ 0x1400C246C (umptr_r__POINTL_--enumerate__POINTFIX__vOffsetPoints_--_2_--_lambda_1___.c)
 *     umptr_r__POINTL_::enumerate__POINTFIX__EXFORMOBJR::bXformRound_::_8_::_lambda_1___ @ 0x1400C2524 (umptr_r__POINTL_--enumerate__POINTFIX__EXFORMOBJR--bXformRound_--_8_--_lambda_1___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall umptr_inpage_warning(__int64 a1)
{
  __int64 result; // rax

  result = W32GetSessionState(a1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(result + 88) + 2312LL));
  return result;
}
