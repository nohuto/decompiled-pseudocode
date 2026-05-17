/*
 * XREFs of LdrpConstructModernAppKeyName @ 0x1800C1CE4
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1800C24B0 (RtlQueryPackageClaims.c)
 *     RtlStringCbPrintfExW @ 0x1800C27B4 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpConstructModernAppKeyName(wchar_t *Buffer)
{
  __int64 result; // rax
  __int64 v3; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v4[144]; // [rsp+60h] [rbp-A0h] BYREF
  char v5[256]; // [rsp+F0h] [rbp-10h] BYREF

  v3 = 256LL;
  memset_thunk_772440563353939046(v5, 0, 0x100uLL);
  memset_thunk_772440563353939046(v4, 0, 0x84uLL);
  result = RtlQueryPackageClaims(-4LL, v5, &v3);
  if ( (int)result >= 0 )
    return RtlStringCbPrintfExW(Buffer, 0, (wchar_t *)L"%s!%s", (char)v5);
  return result;
}
