/*
 * XREFs of XilUsbDevice_QueryAttributesFromTrustlet @ 0x140039514
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x14003C83C (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     Etw_ReportFatalError @ 0x14003D584 (Etw_ReportFatalError.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     memset @ 0x140059840 (memset.c)
 */

char __fastcall XilUsbDevice_QueryAttributesFromTrustlet(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  int v5; // ecx
  _UNKNOWN **v6; // rdx
  int v7; // r9d
  char v8; // al
  char v9; // cl
  __int64 v11; // [rsp+38h] [rbp-39h] BYREF
  __int128 v12; // [rsp+40h] [rbp-31h]
  __int64 v13; // [rsp+50h] [rbp-21h]
  __int64 v14; // [rsp+58h] [rbp-19h]
  _QWORD v15[10]; // [rsp+68h] [rbp-9h] BYREF

  memset(v15, 0, 0x48uLL);
  Pool2 = *(_QWORD *)(a1 + 672);
  v3 = *(_QWORD *)(Pool2 + 8);
  if ( *(_BYTE *)(a1 + 665) )
  {
    v4 = *(_QWORD *)(v3 + 112);
    Debug_FreAssertMsg(
      (__int64)"Secure channel must not be NULL",
      v4 != 0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
      677);
    v13 = *(_QWORD *)(a1 + 616);
    v11 = 0LL;
    v14 = 45LL;
    v12 = 0LL;
    LODWORD(Pool2) = SecureChannel_SendRequestSynchronously(v4, (GUID *)&v11, 40, (__int64)v15, 72);
    if ( (int)Pool2 >= 0 )
    {
      LOBYTE(Pool2) = v15[0];
      if ( SLODWORD(v15[0]) < 0 )
      {
        v6 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return Pool2;
        v7 = 15;
        goto LABEL_5;
      }
      LOBYTE(v5) = BYTE5(v15[0]);
      if ( WORD2(v15[0]) == 256 )
      {
        Etw_ReportFatalError(v5, v3, 0, 4149, 0LL, 0LL);
        LOBYTE(v5) = BYTE5(v15[0]);
      }
      v8 = BYTE4(v15[0]);
      *(_BYTE *)(a1 + 681) = v5;
      v9 = BYTE6(v15[0]);
      *(_BYTE *)(a1 + 680) = v8;
      LOBYTE(Pool2) = HIBYTE(v15[4]);
      *(_BYTE *)(a1 + 696) = HIBYTE(v15[4]);
      *(_BYTE *)(a1 + 682) = v9;
      if ( v9 )
      {
        Pool2 = *(_QWORD *)(a1 + 688);
        if ( Pool2 || (Pool2 = ExAllocatePool2(64LL, 32LL, 1229146200LL), (*(_QWORD *)(a1 + 688) = Pool2) != 0LL) )
        {
          *(_OWORD *)Pool2 = *(_OWORD *)((char *)v15 + 7);
          *(_OWORD *)(Pool2 + 16) = *(_OWORD *)((char *)&v15[2] + 7);
        }
      }
      if ( *(_BYTE *)(a1 + 682) )
      {
        Pool2 = *(_QWORD *)(a1 + 704);
        if ( Pool2 || (Pool2 = ExAllocatePool2(64LL, 32LL, 1229146200LL), (*(_QWORD *)(a1 + 704) = Pool2) != 0LL) )
        {
          *(_OWORD *)Pool2 = *(_OWORD *)&v15[5];
          *(_OWORD *)(Pool2 + 16) = *(_OWORD *)&v15[7];
        }
      }
    }
    else
    {
      v6 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = 14;
LABEL_5:
        LOBYTE(v6) = 2;
        LOBYTE(Pool2) = WPP_RECORDER_SF_d(
                          *(_QWORD *)(v3 + 72),
                          (_DWORD)v6,
                          12,
                          v7,
                          (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
                          Pool2);
      }
    }
  }
  return Pool2;
}
