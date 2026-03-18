/*
 * XREFs of Controller_DestroySecureObject @ 0x1400759D8
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x140044470 (Controller_WdfEvtCleanupCallback.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall Controller_DestroySecureObject(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  result = *(_QWORD *)(a1 + 1016);
  if ( result )
  {
    v3 = *(_QWORD *)(a1 + 112);
    v4 = 0LL;
    v5 = 0LL;
    v7 = 2LL;
    v6 = result;
    result = SecureChannel_SendRequestSynchronously(v3, (GUID *)&v4, 40, 0LL, 0);
    *(_QWORD *)(a1 + 1016) = 0LL;
  }
  return result;
}
