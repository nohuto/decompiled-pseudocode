/*
 * XREFs of _lambda_3244086198da98ac0fb1ddcbac704197_::_lambda_3244086198da98ac0fb1ddcbac704197_ @ 0x18030A87C
 * Callers:
 *     ?GetPosition@CWinRTApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008B710 (-GetPosition@CWinRTApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008B980 (-GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_3244086198da98ac0fb1ddcbac704197_::_lambda_3244086198da98ac0fb1ddcbac704197_(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        _QWORD *a4)
{
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 24) = *a4;
  return a1;
}
