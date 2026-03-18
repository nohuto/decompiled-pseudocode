/*
 * XREFs of UsbhSetPdo_AllowIo @ 0x140010690
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x14000EDC0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 *     UsbhPdoPnp_EnablePdo @ 0x140039E34 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhResetNotifyCompletion @ 0x14004C544 (UsbhResetNotifyCompletion.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 */

void __fastcall UsbhSetPdo_AllowIo(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  KIRQL v5; // al
  KIRQL v6; // al
  __int64 v7; // rax
  KIRQL v8; // dl

  v3 = PdoExt(a2);
  v4 = PdoExt(a2) + 944;
  v5 = KeAcquireSpinLockRaiseToDpc(&HubG);
  *(_DWORD *)(v4 + 136) = 1;
  *(_BYTE *)(v4 + 132) = v5;
  *(_DWORD *)(v4 + 88) = 2018460752;
  *(_DWORD *)(v4 + 92) = 12;
  qword_140070600 = v4;
  *(_QWORD *)(v4 + 24) = KeGetCurrentThread();
  if ( *(_DWORD *)(PdoExt(a2) + 1124) == 3 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 1216));
    *(_DWORD *)(v3 + 784) = 1;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 1216), v6);
  }
  v7 = PdoExt(a2);
  *(_DWORD *)(v7 + 1080) = 0;
  qword_140070600 = 0LL;
  v8 = *(_BYTE *)(v7 + 1076);
  *(_DWORD *)(v7 + 1032) = 1734964085;
  KeReleaseSpinLock(&HubG, v8);
}
