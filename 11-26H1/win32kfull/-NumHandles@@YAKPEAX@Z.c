/*
 * XREFs of ?NumHandles@@YAKPEAX@Z @ 0x140138D5C
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NumHandles(void *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 UserSessionState; // rax
  _OWORD ObjectInformation[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+60h] [rbp-18h]

  v6 = 0LL;
  memset(ObjectInformation, 0, sizeof(ObjectInformation));
  if ( !a1 || ZwQueryObject(a1, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL) )
    return 0LL;
  result = DWORD2(ObjectInformation[0]);
  if ( DWORD2(ObjectInformation[0]) > 1 )
  {
    UserSessionState = W32GetUserSessionState(v2, v1);
    *(_DWORD *)(UserSessionState + 68928) |= 0x400000u;
    return DWORD2(ObjectInformation[0]);
  }
  return result;
}
