/*
 * XREFs of UsbhInitGlobal @ 0x140050C48
 * Callers:
 *     DriverEntry @ 0x14004EBB0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x140061900 (memset.c)
 */

__int64 UsbhInitGlobal()
{
  __int64 result; // rax

  memset(&HubG, 0, 0x1B8uLL);
  KeInitializeSpinLock(&HubG);
  KeInitializeSpinLock(&SpinLock);
  KeInitializeEvent(&Event, SynchronizationEvent, 1u);
  KeInitializeEvent(&stru_14006F6B0, SynchronizationEvent, 0);
  dword_14006F5A8 = 2017613128;
  dword_14006F618 = 1734964085;
  dword_14006F5E8 = 1734964085;
  dword_14006F5D8 = 1734964085;
  dword_14006F5C8 = 1734964085;
  dword_14006F5F4 = 1734964085;
  dword_14006F600 = 1734964085;
  dword_14006F60C = 1734964085;
  dword_14006F620 = 1734964085;
  qword_14006F660 = (__int64)&qword_14006F658;
  qword_14006F658 = (__int64)&qword_14006F658;
  qword_14006F548 = (__int64)&qword_14006F540;
  qword_14006F540 = (__int64)&qword_14006F540;
  qword_14006F6A8 = (__int64)&qword_14006F6A0;
  qword_14006F6A0 = (__int64)&qword_14006F6A0;
  result = 2LL;
  dword_14006F55C = 2;
  dword_14006F588 = 2;
  qword_14006F5B8 = (__int64)&HubG;
  dword_14006F5AC = 3;
  qword_14006F5B0 = 0LL;
  dword_14006F550 = 500;
  dword_14006F554 = 8;
  qword_14006F568 = 32LL;
  dword_14006F570 = 1;
  dword_14006F578 = 0;
  qword_14006F57C = 10LL;
  dword_14006F594 = 300;
  dword_14006F668 = 3;
  dword_14006F584 = 2000;
  dword_14006F678 = 1;
  dword_14006F6D0 = 25;
  return result;
}
