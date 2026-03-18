/*
 * XREFs of UsbhExAddDeviceInit @ 0x1400562F0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 */

void __fastcall UsbhExAddDeviceInit(__int64 a1)
{
  _DWORD *v2; // rax
  _QWORD *v3; // r10

  v2 = FdoExt(a1);
  v2[640] |= 0x2000u;
  Log(a1, 128, 1702379852, 0LL, 0LL);
  v3[608] = v3 + 607;
  v3[607] = v3 + 607;
  KeInitializeSpinLock(v3 + 609);
}
