/*
 * XREFs of SbpResolveBasedOnName @ 0x180064918
 * Callers:
 *     SbSelectProcedure @ 0x1800631F0 (SbSelectProcedure.c)
 *     SbpUpdateCache @ 0x180063EC0 (SbpUpdateCache.c)
 * Callees:
 *     LdrLoadDll @ 0x180043A10 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x1800511B0 (LdrGetDllHandleEx.c)
 *     RtlInitUnicodeStringEx @ 0x1800A4880 (RtlInitUnicodeStringEx.c)
 *     SbpLookup @ 0x1801595D8 (SbpLookup.c)
 *     SbpParseFuncName @ 0x1801596D8 (SbpParseFuncName.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall SbpResolveBasedOnName(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v6; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v7[512]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v8[2048]; // [rsp+250h] [rbp+150h] BYREF

  v3 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a1
    && (unsigned int)SbpParseFuncName(a1, v7, a3, v8)
    && (int)RtlInitUnicodeStringEx(&v6, v7) >= 0
    && ((int)LdrGetDllHandleEx(1, 1LL, 0LL, (__int64)&v6, &v5) >= 0 || (int)LdrLoadDll(0LL, 0LL, (__int64)&v6, &v5) >= 0) )
  {
    return SbpLookup(v5, v8);
  }
  return v3;
}
