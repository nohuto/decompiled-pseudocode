/*
 * XREFs of TR_FreeSecureTransferSegments @ 0x14004BCE0
 * Callers:
 *     TR_Disable_Internal @ 0x14003D720 (TR_Disable_Internal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

void __fastcall TR_FreeSecureTransferSegments(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  int v4; // edx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+38h] [rbp-40h] BYREF
  __int128 v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  v1 = a1[37];
  v6 = 0LL;
  v5 = 0;
  v7 = 0LL;
  v8 = v1;
  v3 = a1[22];
  v9 = 41LL;
  v10 = *(_QWORD *)(v3 + 24);
  if ( (int)SecureChannel_SendRequestSynchronously(*(_QWORD *)(a1[5] + 112LL), (GUID *)&v6, 48, (__int64)&v5, 4) >= 0
    && v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[5] + 72LL),
        v4,
        14,
        28,
        (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
        v5);
    }
    Debug_FreAssertMsg(
      (__int64)"TransferRingFreeSegments Failed",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2402);
  }
}
