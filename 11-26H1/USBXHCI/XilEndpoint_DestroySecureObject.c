/*
 * XREFs of XilEndpoint_DestroySecureObject @ 0x1400479E0
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x140002480 (Endpoint_EvtEndpointCleanupCallback.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall XilEndpoint_DestroySecureObject(__int64 *a1)
{
  __int64 v1; // r8
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  __int64 v8; // [rsp+50h] [rbp-18h]

  v1 = *a1;
  if ( *a1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1[4] + 112LL);
    v5 = 0LL;
    v6 = 0LL;
    v7 = v1;
    v8 = 34LL;
    result = SecureChannel_SendRequestSynchronously(v3, (GUID *)&v5, 40, 0LL, 0);
    *a1 = 0LL;
  }
  return result;
}
