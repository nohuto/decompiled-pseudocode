/*
 * XREFs of SbpResolveBasedOnName @ 0x180084D68
 * Callers:
 *     SbSelectProcedure @ 0x180083640 (SbSelectProcedure.c)
 *     SbpUpdateCache @ 0x180084310 (SbpUpdateCache.c)
 * Callees:
 *     LdrLoadDll @ 0x18002DF80 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x18003B730 (LdrGetDllHandleEx.c)
 *     RtlInitUnicodeStringEx @ 0x1800A39B0 (RtlInitUnicodeStringEx.c)
 *     SbpLookup @ 0x1801594A8 (SbpLookup.c)
 *     SbpParseFuncName @ 0x1801595A8 (SbpParseFuncName.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall SbpResolveBasedOnName(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  PVOID DllHandle; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR SourceString[256]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v8[2048]; // [rsp+250h] [rbp+150h] BYREF

  v3 = 0LL;
  DllHandle = 0LL;
  DestinationString = 0LL;
  if ( a1
    && (unsigned int)SbpParseFuncName(a1, SourceString, a3, v8)
    && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
    && (LdrGetDllHandleEx(1u, (PWSTR)1, 0LL, &DestinationString, &DllHandle) >= 0
     || LdrLoadDll(0LL, 0LL, &DestinationString, &DllHandle) >= 0) )
  {
    return SbpLookup(DllHandle, v8);
  }
  return v3;
}
