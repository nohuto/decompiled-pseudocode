/*
 * XREFs of Usbh_CheckPortHwPendingStatus @ 0x140030018
 * Callers:
 *     UsbhResetPort @ 0x14000A2BC (UsbhResetPort.c)
 *     UsbhHubIsr @ 0x14002F9E0 (UsbhHubIsr.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhSignalResumeEvent @ 0x14000BD28 (UsbhSignalResumeEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSignalSuspendEvent @ 0x140022970 (UsbhSignalSuspendEvent.c)
 */

void __fastcall Usbh_CheckPortHwPendingStatus(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al
  int v6; // r9d
  int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  v6 = *(_DWORD *)(a2 + 696);
  if ( !v6 )
    goto LABEL_4;
  v7 = v6 - 2;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
LABEL_4:
      KeReleaseSpinLock(v4, v5);
      return;
    }
    KeReleaseSpinLock(v4, v5);
    Log(a1, 16, 1666207793, a1, *(unsigned __int16 *)(a2 + 4));
    UsbhSignalResumeEvent(a1, a2, v8, v9);
  }
  else
  {
    KeReleaseSpinLock(v4, v5);
    Log(a1, 16, 1666207794, a1, *(unsigned __int16 *)(a2 + 4));
    UsbhSignalSuspendEvent(a1, a2);
  }
}
