/*
 * XREFs of UsbhSetPdo_AllowIo @ 0x140017608
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1400089B0 (UsbhPdoInternalDeviceControl.c)
 *     UsbhPdoPnp_StartDevice @ 0x140017090 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_EnablePdo @ 0x14003A400 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhResetNotifyCompletion @ 0x14004C970 (UsbhResetNotifyCompletion.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 */

void __fastcall UsbhSetPdo_AllowIo(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v3; // rdi
  _DWORD *v4; // rbx
  KIRQL v5; // al
  _DWORD *v6; // rax
  KIRQL v7; // dl

  v3 = (KSPIN_LOCK *)PdoExt(a2);
  v4 = PdoExt(a2) + 236;
  *((_BYTE *)v4 + 132) = KeAcquireSpinLockRaiseToDpc(&HubG);
  v4[34] = 1;
  v4[22] = 2018460752;
  v4[23] = 12;
  qword_14006F5A0 = (__int64)v4;
  *((_QWORD *)v4 + 3) = KeGetCurrentThread();
  if ( PdoExt(a2)[281] == 3 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(v3 + 152);
    *((_DWORD *)v3 + 196) = 1;
    KeReleaseSpinLock(v3 + 152, v5);
  }
  v6 = PdoExt(a2);
  v6[270] = 0;
  qword_14006F5A0 = 0LL;
  v7 = *((_BYTE *)v6 + 1076);
  v6[258] = 1734964085;
  KeReleaseSpinLock(&HubG, v7);
}
