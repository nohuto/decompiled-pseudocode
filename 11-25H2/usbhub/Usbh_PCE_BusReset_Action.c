/*
 * XREFs of Usbh_PCE_BusReset_Action @ 0x140044D84
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

void __fastcall Usbh_PCE_BusReset_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // r9
  int v7; // r10d
  int v8; // r11d
  int v9; // r8d
  __int64 v10; // rax
  int v11; // r10d
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rax
  int v15; // r10d
  __int64 v16; // rax
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = a3;
  LOBYTE(v17) = 0;
  FdoExt(a1);
  v5 = UsbhLockPcqWithTag(a1, a2, 9, (KIRQL *)&v17, 0);
  Log(a1, 512, 809070640, v5, *(unsigned __int16 *)(a2 + 4));
  if ( v7 > 7 )
  {
    if ( v7 != 11 )
    {
      if ( v7 != 14 )
      {
        if ( v7 != 15 && (unsigned int)(v7 - 16) >= 2 )
        {
LABEL_14:
          Log(a1, v8, 809070680, v6, *(unsigned __int16 *)(a2 + 4));
          v12 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v12 + a2 + 1384) = 19;
          goto LABEL_20;
        }
        v13 = 809070645;
LABEL_16:
        Log(a1, v8, v13, v6, *(unsigned __int16 *)(a2 + 4));
        v14 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v15;
        *(_DWORD *)(v14 + a2 + 1384) = v15;
        goto LABEL_20;
      }
LABEL_17:
      v13 = 809070644;
      goto LABEL_16;
    }
LABEL_18:
    v9 = 809070641;
    goto LABEL_19;
  }
  if ( v7 == 7 )
    goto LABEL_18;
  if ( v7 != 1 )
  {
    if ( v7 != 2 && v7 != 3 && v7 != 4 )
    {
      if ( v7 == 6 )
      {
        v9 = 809070643;
LABEL_19:
        Log(a1, v8, v9, v6, *(unsigned __int16 *)(a2 + 4));
        UsbhiSignalResumeEvent(a1, a2);
        v16 = *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 400) = 0;
        *(_DWORD *)(a2 + 12) = 1;
        *(_DWORD *)(32 * v16 + a2 + 1384) = 1;
        goto LABEL_20;
      }
      goto LABEL_14;
    }
    goto LABEL_17;
  }
  Log(a1, v8, 809070642, v6, *(unsigned __int16 *)(a2 + 4));
  v10 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = v11;
  *(_DWORD *)(v10 + a2 + 1384) = v11;
  UsbhFlushPortChangeQueue(a1, a2);
LABEL_20:
  UsbhUnlockPcqWithTag(a1, a2, v17, 0);
}
