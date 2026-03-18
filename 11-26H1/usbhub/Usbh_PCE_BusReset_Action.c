/*
 * XREFs of Usbh_PCE_BusReset_Action @ 0x1400448AC
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x140001CC8 (UsbhFlushPortChangeQueue.c)
 *     UsbhLockPcqWithTag @ 0x140002710 (UsbhLockPcqWithTag.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhiSignalResumeEvent @ 0x14000B4D8 (UsbhiSignalResumeEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

void __fastcall Usbh_PCE_BusReset_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // r9
  int v7; // r10d
  int v8; // r11d
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rax
  int v16; // r10d
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // [rsp+50h] [rbp+18h] BYREF

  v20 = a3;
  LOBYTE(v20) = 0;
  FdoExt(a1);
  v5 = UsbhLockPcqWithTag(a1, a2, 9, (KIRQL *)&v20, 0);
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
          v13 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v13 + a2 + 1384) = 19;
          goto LABEL_20;
        }
        v14 = 809070645;
LABEL_16:
        Log(a1, v8, v14, v6, *(unsigned __int16 *)(a2 + 4));
        v15 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v16;
        *(_DWORD *)(v15 + a2 + 1384) = v16;
        goto LABEL_20;
      }
LABEL_17:
      v14 = 809070644;
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
        UsbhiSignalResumeEvent(a1, a2, v17, v18);
        v19 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 400) = 0;
        *(_DWORD *)(a2 + 12) = 1;
        *(_DWORD *)(v19 + a2 + 1384) = 1;
        goto LABEL_20;
      }
      goto LABEL_14;
    }
    goto LABEL_17;
  }
  Log(a1, v8, 809070642, v6, *(unsigned __int16 *)(a2 + 4));
  v10 = *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = 1;
  *(_DWORD *)(32 * v10 + a2 + 1384) = 1;
  UsbhFlushPortChangeQueue(a1, a2, v11, v12);
LABEL_20:
  UsbhUnlockPcqWithTag(a1, a2, v20, 0);
}
