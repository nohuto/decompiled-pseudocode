/*
 * XREFs of ??0PnpDevice@@AEAA@XZ @ 0x180068320
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z @ 0x1800E5D0C (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$atomic@PEAX@std@@QEAA@QEAX@Z @ 0x1800683C4 (--0-$atomic@PEAX@std@@QEAA@QEAX@Z.c)
 *     ??0?$atomic@W4DeviceState@PnpDevice@@@std@@QEAA@W4DeviceState@PnpDevice@@@Z @ 0x18009951C (--0-$atomic@W4DeviceState@PnpDevice@@@std@@QEAA@W4DeviceState@PnpDevice@@@Z.c)
 */

PnpDevice *__fastcall PnpDevice::PnpDevice(PnpDevice *this)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r8
  PnpDevice *result; // rax
  __int64 v5; // r9

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &PnpDevice::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  std::atomic<void *>::atomic<void *>((char *)this + 40, -1LL, this);
  *(_QWORD *)(v1 + 48) = v2;
  *(GUID *)(v1 + 56) = GUID_NULL;
  *(GUID *)(v1 + 72) = GUID_NULL;
  *(_QWORD *)(v1 + 104) = v2;
  *(_QWORD *)(v1 + 112) = v2;
  *(GUID *)(v1 + 88) = GUID_NULL;
  *(_DWORD *)(v1 + 120) = v2;
  std::atomic<enum PnpDevice::DeviceState>::atomic<enum PnpDevice::DeviceState>(v1 + 124);
  result = (PnpDevice *)v3;
  *(_BYTE *)(v3 + 128) = v5;
  *(_QWORD *)(v3 + 132) = v5;
  *(_QWORD *)(v3 + 144) = v5;
  return result;
}
