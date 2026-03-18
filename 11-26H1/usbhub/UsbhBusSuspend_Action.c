/*
 * XREFs of UsbhBusSuspend_Action @ 0x1400412BC
 * Callers:
 *     UsbhReleaseBusStateLock @ 0x1400111B8 (UsbhReleaseBusStateLock.c)
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhPCE_Suspend @ 0x140011294 (UsbhPCE_Suspend.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 */

void __fastcall UsbhBusSuspend_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbp
  int v5; // r9d
  __int16 v6; // r12
  unsigned __int16 v7; // di
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // ecx
  int v13; // [rsp+90h] [rbp+18h] BYREF
  int v14; // [rsp+98h] [rbp+20h] BYREF

  v14 = 0;
  v13 = 0;
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
        v8 = UsbhQueryPortState(a1, v7, (__int64)&v13, &v14);
        if ( v8 < 0 )
        {
          if ( !Usb_Disconnected(v8) )
          {
            UsbhException(a1, v7, 78, 0LL, 0, v12, v14, usbfile_busm_c, 1198, 0);
            v4[1054] = 2;
          }
        }
        else if ( (v13 & 7) == 3 )
        {
          if ( (v9 = UsbhLatchPdo(a1, v7, 0LL, 0x46644433u), (v11 = v9) != 0) && PdoExt(v9)[700]
            || (UsbhPCE_Suspend(a1, a2, v7, v10), v11) )
          {
            UsbhUnlatchPdo(a1, v11, 0LL, 0x46644433u);
          }
        }
        v7 += v6;
      }
      while ( v7 <= *((unsigned __int8 *)FdoExt(a1) + 2938) );
    }
  }
}
