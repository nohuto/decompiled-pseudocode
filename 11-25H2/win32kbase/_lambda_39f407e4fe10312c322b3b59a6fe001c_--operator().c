/*
 * XREFs of _lambda_39f407e4fe10312c322b3b59a6fe001c_::operator() @ 0x1400AAA58
 * Callers:
 *     ?ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1400AC970 (-ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     FastGetProfileDwordEx @ 0x1400A97B0 (FastGetProfileDwordEx.c)
 */

__int64 __fastcall lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(const UNICODE_STRING ***a1, __int64 a2)
{
  const UNICODE_STRING *v3; // rcx
  int v4; // r9d
  const WCHAR *v5; // r8
  __int64 result; // rax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v3 = **a1;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(const WCHAR **)a2;
  LODWORD(v7) = 0;
  FastGetProfileDwordEx(v3, 12LL, v5, v4, 0, &v7, 0LL);
  result = (unsigned int)v7;
  if ( (unsigned int)v7 >= *(_DWORD *)(a2 + 12) && (unsigned int)v7 <= *(_DWORD *)(a2 + 16) )
    *(_DWORD *)(a2 + 8) = v7;
  return result;
}
