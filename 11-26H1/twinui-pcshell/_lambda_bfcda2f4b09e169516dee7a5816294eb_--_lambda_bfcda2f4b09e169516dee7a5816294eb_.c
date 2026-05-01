/*
 * XREFs of _lambda_bfcda2f4b09e169516dee7a5816294eb_::_lambda_bfcda2f4b09e169516dee7a5816294eb_ @ 0x1805745AC
 * Callers:
 *     ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180575AA0 (-UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_bfcda2f4b09e169516dee7a5816294eb_::_lambda_bfcda2f4b09e169516dee7a5816294eb_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  v6 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 8) = v6;
  v7 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = *a5;
  result = a1;
  *(_DWORD *)(a1 + 32) = *a6;
  return result;
}
