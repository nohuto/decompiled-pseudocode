/*
 * XREFs of SetLastError_0 @ 0x18007027A
 * Callers:
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x180097D70 (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SetLastError_0(DWORD dwErrCode)
{
  SetLastError(dwErrCode);
}
