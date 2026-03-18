/*
 * XREFs of Usbh_PCE_ResumeTimeout_Action @ 0x140045688
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140006930 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x140001A1C (UsbhFlushPortChangeQueue.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhiSignalResumeEvent @ 0x1400130A0 (UsbhiSignalResumeEvent.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhUnlockPcqWithTag @ 0x140024D80 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x140025510 (UsbhLockPcqWithTag.c)
 */

void __fastcall Usbh_PCE_ResumeTimeout_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  LOBYTE(v10) = 0;
  FdoExt(a1);
  v5 = (int)UsbhLockPcqWithTag(a1, a2, 14, (KIRQL *)&v10, 0);
  Log(a1, 512, 825520176, v5, *(unsigned __int16 *)(a2 + 4));
  Log(a1, 512, 825520177, v6, *(unsigned __int16 *)(a2 + 4));
  if ( (_DWORD)v5 == 1 )
  {
    Log(a1, 512, 825520178, *(unsigned int *)(a2 + 400), *(unsigned __int16 *)(a2 + 4));
    if ( *(_DWORD *)(a2 + 400) != 5 )
    {
      Log(a1, 512, 825520179, 0LL, *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 1;
      UsbhFlushPortChangeQueue(a1, a2);
      UsbhiSignalResumeEvent(a1, a2);
    }
    Log(a1, 512, 825520180, 0LL, *(unsigned __int16 *)(a2 + 4));
    v9 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(v9 + a2 + 1384) = 1;
  }
  else
  {
    if ( (_DWORD)v5 == 3 || (_DWORD)v5 == 4 || (_DWORD)v5 == 14 )
    {
      if ( *(_BYTE *)(a2 + 2840) )
      {
        *(_BYTE *)(a2 + 2838) = 1;
        UsbhiSignalResumeEvent(a1, a2);
      }
      Log(a1, 512, 825520181, v5, *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 0;
    }
    else
    {
      Log(a1, 512, 825520182, *(unsigned int *)(a2 + 400), *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 1;
      UsbhFlushPortChangeQueue(a1, a2);
      UsbhiSignalResumeEvent(a1, a2);
    }
    v7 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v5;
    v8 = 0;
    *(_DWORD *)(v7 + a2 + 1384) = v5;
  }
  UsbhUnlockPcqWithTag(a1, a2, v10, v8);
}
