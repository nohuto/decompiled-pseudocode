/*
 * XREFs of UsbhBusSuspend_Action @ 0x14004178C
 * Callers:
 *     UsbhReleaseBusStateLock @ 0x140001008 (UsbhReleaseBusStateLock.c)
 *     UsbhDispatch_BusEvent @ 0x14000DD84 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     UsbhLatchPdo @ 0x1400082B0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhPCE_Suspend @ 0x140035154 (UsbhPCE_Suspend.c)
 */

void __fastcall UsbhBusSuspend_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbp
  int v5; // r9d
  __int16 v6; // r12
  unsigned __int16 v7; // di
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // [rsp+90h] [rbp+18h] BYREF
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = 0;
  v12 = 0;
  v4 = FdoExt(a1);
  Log(a1, 2048, 1114862963, 0LL, 0LL);
  if ( v4[1054] != v5 )
  {
    v6 = v5 + 1;
    v7 = v5 + 1;
    if ( *((_BYTE *)FdoExt(a1) + 2938) >= (unsigned __int8)(v5 + 1) )
    {
      do
      {
        v8 = UsbhQueryPortState(a1, v7, (__int64)&v12, &v13);
        if ( v8 < 0 )
        {
          if ( !Usb_Disconnected(v8) )
          {
            UsbhException(a1, v7, 78, 0LL, 0, v11, v13, usbfile_busm_c, 1198, 0);
            v4[1054] = 2;
          }
        }
        else if ( (v12 & 7) == 3 )
        {
          if ( (v9 = UsbhLatchPdo(a1, v7, 0LL, 0x46644433u), (v10 = v9) != 0) && PdoExt(v9)[700]
            || (UsbhPCE_Suspend(a1, a2, v7), v10) )
          {
            UsbhUnlatchPdo(a1, v10, 0LL, 0x46644433u);
          }
        }
        v7 += v6;
      }
      while ( v7 <= *((unsigned __int8 *)FdoExt(a1) + 2938) );
    }
  }
}
