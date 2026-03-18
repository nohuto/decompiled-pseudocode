/*
 * XREFs of SecureDmaEnabler_Unmap @ 0x140056258
 * Callers:
 *     SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback @ 0x14007F270 (SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall SecureDmaEnabler_Unmap(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+38h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  v9 = 0LL;
  v10 = 0LL;
  v11 = v2;
  v13 = *(_QWORD *)(a2 + 16);
  v12 = 6LL;
  result = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v4 + 112), (GUID *)&v9, 48, 0LL, 0);
  v7 = *(_QWORD *)(a2 + 24);
  if ( v7 )
  {
    result = VslDeleteSecureSection(v7);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 3;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                 v8,
                 18,
                 19,
                 (__int64)&WPP_8d19556b374b3e85e4187adf480561f2_Traceguids,
                 result);
    }
  }
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  return result;
}
