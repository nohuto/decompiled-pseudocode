/*
 * XREFs of XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x140047C60
 * Callers:
 *     XilEndpoint_FreeStreamContextArray @ 0x140047A64 (XilEndpoint_FreeStreamContextArray.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall XilEndpoint_SendRequestToFreeSecureStreamContextArray(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _UNKNOWN **result; // rax
  __int64 v5; // rcx
  int v6; // [rsp+28h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-48h]
  __int64 v8; // [rsp+40h] [rbp-38h] BYREF
  __int128 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  v3 = *(_QWORD *)(**(_QWORD **)(a1 + 32) + 112LL);
  v8 = 0LL;
  v9 = 0LL;
  v10 = a2;
  v11 = 38LL;
  result = (_UNKNOWN **)SecureChannel_SendRequestSynchronously(v3, (GUID *)&v8, 40, 0LL, 0);
  if ( (int)result < 0 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = *(_QWORD *)(a1 + 32);
      v7 = *(_DWORD *)(v5 + 152);
      v6 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 143LL);
      return (_UNKNOWN **)WPP_RECORDER_SF_DD(
                            *(_QWORD *)(v5 + 80),
                            2u,
                            0xDu,
                            0xEu,
                            (__int64)&WPP_0fad196ed6f839af1910845e6c92cab5_Traceguids,
                            v6,
                            v7);
    }
  }
  return result;
}
