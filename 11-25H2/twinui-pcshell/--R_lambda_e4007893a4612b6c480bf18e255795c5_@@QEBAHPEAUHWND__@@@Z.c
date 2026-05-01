/*
 * XREFs of ??R_lambda_e4007893a4612b6c480bf18e255795c5_@@QEBAHPEAUHWND__@@@Z @ 0x1801ED318
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_e4007893a4612b6c480bf18e255795c5_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x180221DA0 (--$LambdaEnumWindowsProc@V_lambda_e4007893a4612b6c480bf18e255795c5_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall _lambda_e4007893a4612b6c480bf18e255795c5_::operator()(__int64 a1, HWND a2)
{
  HANDLE PropW; // rax
  WCHAR ClassName[256]; // [rsp+30h] [rbp-218h] BYREF

  if ( GetClassNameW(a2, ClassName, 256) <= 0
    || !IsWindowVisible(a2)
    || CompareStringOrdinal(ClassName, -1, L"Shell_TrayWnd", -1, 1) != 2
    && CompareStringOrdinal(ClassName, -1, L"Shell_SecondaryTrayWnd", -1, 1) != 2 )
  {
    return 1LL;
  }
  PropW = GetPropW(a2, L"TaskbarMonitor");
  if ( !PropW || *(HANDLE *)(a1 + 8) != PropW )
    return 1LL;
  **(_QWORD **)a1 = a2;
  return 0LL;
}
