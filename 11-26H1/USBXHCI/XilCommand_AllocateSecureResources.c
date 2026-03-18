/*
 * XREFs of XilCommand_AllocateSecureResources @ 0x14003F5CC
 * Callers:
 *     XilCommand_AllocateResources @ 0x14003F568 (XilCommand_AllocateResources.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall XilCommand_AllocateSecureResources(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // edx
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  __int128 v9; // [rsp+38h] [rbp-48h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int128 v12; // [rsp+58h] [rbp-28h] BYREF
  __int128 v13; // [rsp+68h] [rbp-18h]

  DWORD1(v12) = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(v2 + 112);
  v8 = 0LL;
  v9 = 0LL;
  v11 = 13LL;
  v12 = 0LL;
  v10 = v3;
  v13 = 0LL;
  v6 = SecureChannel_SendRequestSynchronously(v4, (GUID *)&v8, 40, (__int64)&v12, 32);
  if ( v6 >= 0 )
  {
    v6 = v12;
    if ( (int)v12 >= 0 )
    {
      *(_QWORD *)(a1 + 40) = *((_QWORD *)&v12 + 1);
      *(_QWORD *)(a1 + 48) = v13;
      *(_DWORD *)(a1 + 56) = DWORD2(v13);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          v5,
          7,
          14,
          (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
          v12);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but CommandAllocateResources failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        214);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), v5, 7, 13, (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids, v6);
  }
  return (unsigned int)v6;
}
