/*
 * XREFs of Usbh_PCE_BusDisconnect_Action @ 0x1400446B8
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x140002710 (UsbhLockPcqWithTag.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhiSignalResumeEvent @ 0x14000B4D8 (UsbhiSignalResumeEvent.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_Disconnect_PdoEvent @ 0x14002350C (Usbh_Disconnect_PdoEvent.c)
 */

void __fastcall Usbh_PCE_BusDisconnect_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r11d
  KIRQL v10; // r8
  __int64 v11; // rax
  int v12; // r10d
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // rax
  __int64 v19; // rbx
  _DWORD *v20; // rax
  KIRQL v21; // [rsp+48h] [rbp+10h] BYREF

  v21 = 0;
  FdoExt(a1);
  v6 = UsbhLockPcqWithTag(a1, a2, 11, &v21, 0);
  Log(a1, 512, 825323568, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v8 == 1 || v8 == 2 || v8 == 6 )
  {
    Log(a1, v9, 825323569, v7, *(unsigned __int16 *)(a2 + 4));
    v16 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v17;
    *(_DWORD *)(v16 + a2 + 1384) = v17;
  }
  else
  {
    if ( v8 != 7 && v8 != 11 )
    {
      Log(a1, v9, 825323608, v7, *(unsigned __int16 *)(a2 + 4));
      v10 = v21;
      v11 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v12;
      *(_DWORD *)(v11 + a2 + 1384) = v12;
      UsbhUnlockPcqWithTag(a1, a2, v10, 0);
      return;
    }
    Log(a1, v9, 825323570, v7, *(unsigned __int16 *)(a2 + 4));
    UsbhiSignalResumeEvent(a1, a2, v13, v14);
    v15 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(v15 + a2 + 1384) = 1;
  }
  UsbhUnlockPcqWithTag(a1, a2, v21, 0);
  v18 = UsbhLatchPdo(a1, *(_WORD *)(a2 + 4), 0LL, 0x7250444Fu);
  v19 = v18;
  if ( v18 )
  {
    if ( (PdoExt(v18)[355] & 0x4000000) != 0 )
    {
      v20 = PdoExt(v19);
      KeSetEvent((PRKEVENT)(v20 + 730), 0, 0);
    }
    UsbhUnlatchPdo(a1, v19, 0LL, 0x7250444Fu);
    Usbh_Disconnect_PdoEvent(a1, v19, 24, a3);
  }
}
