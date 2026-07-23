/*
 * XREFs of InitSecurityCookie @ 0x1800D9BE0
 * Callers:
 *     LdrpInitialize @ 0x1800CC108 (LdrpInitialize.c)
 * Callees:
 *     LdrInitSecurityCookie @ 0x180077BE0 (LdrInitSecurityCookie.c)
 *     LdrpGenRandom @ 0x1800D9C5C (LdrpGenRandom.c)
 *     ZwDelayExecution @ 0x18015F4C0 (ZwDelayExecution.c)
 */

signed __int32 __fastcall InitSecurityCookie(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int32 result; // eax
  __int64 v4; // rax
  __int64 v5; // r9
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+40h] [rbp+8h] BYREF

  result = _InterlockedIncrement(&SecurityCookieInitCount);
  if ( result == 1 )
  {
    v4 = LdrpGenRandom(a1, a2, a3, LdrSystemDllInitBlock.RngData);
    result = LdrInitSecurityCookie(0LL, 0, &_security_cookie, v4 ^ v5, 0LL);
    _InterlockedOr(v6, 0);
    SecurityCookieInitialized = 1;
  }
  else
  {
    DelayInterval.QuadPart = -300000LL;
    while ( !SecurityCookieInitialized )
      result = ZwDelayExecution(0, &DelayInterval);
  }
  return result;
}
