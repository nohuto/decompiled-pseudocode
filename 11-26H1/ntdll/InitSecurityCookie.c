/*
 * XREFs of InitSecurityCookie @ 0x1800DCC70
 * Callers:
 *     LdrpInitialize @ 0x1800CE998 (LdrpInitialize.c)
 * Callees:
 *     LdrInitSecurityCookie @ 0x180080840 (LdrInitSecurityCookie.c)
 *     LdrpGenRandom @ 0x1800DCCEC (LdrpGenRandom.c)
 *     ZwDelayExecution @ 0x18015F5C0 (ZwDelayExecution.c)
 */

__int64 __fastcall InitSecurityCookie(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r9
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)_InterlockedIncrement(&SecurityCookieInitCount);
  if ( (_DWORD)result == 1 )
  {
    v4 = LdrpGenRandom(a1, a2, a3, (unsigned int)dword_1801E34F8);
    result = LdrInitSecurityCookie(0LL, 0, &_security_cookie, v4 ^ v5, 0LL);
    _InterlockedOr(v6, 0);
    SecurityCookieInitialized = 1;
  }
  else
  {
    v7 = -300000LL;
    while ( !SecurityCookieInitialized )
      result = ZwDelayExecution(0LL, &v7);
  }
  return result;
}
