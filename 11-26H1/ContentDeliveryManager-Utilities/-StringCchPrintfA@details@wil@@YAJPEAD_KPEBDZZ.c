/*
 * XREFs of ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x18003BC58
 * Callers:
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180028FF8 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 * Callees:
 *     ?WilStringVPrintfWorkerA@details@wil@@YAJPEAD_KPEA_KPEBD0@Z @ 0x18003D310 (-WilStringVPrintfWorkerA@details@wil@@YAJPEAD_KPEA_KPEBD0@Z.c)
 *     ?WilStringValidateDestA@details@wil@@YAJPEBD_K_K@Z @ 0x18003D374 (-WilStringValidateDestA@details@wil@@YAJPEBD_K_K@Z.c)
 */

__int64 wil::details::StringCchPrintfA(wil::details *this, char *a2, unsigned __int64 a3, const char *a4, ...)
{
  __int64 result; // rax
  unsigned __int64 *v5; // r8
  char *v6; // r10
  wil::details *v7; // r11
  char *v8; // [rsp+28h] [rbp-20h]
  const char *v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = a4;
  result = wil::details::WilStringValidateDestA(this, a2, a3, (unsigned __int64)a4);
  if ( (int)result >= 0 )
    return wil::details::WilStringVPrintfWorkerA(v7, v6, (unsigned __int64)v5, v5, (va_list)&v9, v8);
  if ( v6 )
    *(_BYTE *)v7 = 0;
  return result;
}
