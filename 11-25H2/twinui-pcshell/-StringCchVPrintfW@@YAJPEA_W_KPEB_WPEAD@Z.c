/*
 * XREFs of ?StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z @ 0x180447DFC
 * Callers:
 *     ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x180447CEC (-LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ.c)
 *     ??$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_WPEADAEBV_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@Z @ 0x18068ACE0 (--$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@-$NativeString@V-$CoTaskMemPol.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x1801D375C (StringVPrintfWorkerW.c)
 */

HRESULT __fastcall StringCchVPrintfW(wchar_t *a1, size_t a2, wchar_t *a3, va_list argList)
{
  HRESULT result; // eax

  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringVPrintfWorkerW(a1, a2, (size_t *)a3, a3, argList);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
