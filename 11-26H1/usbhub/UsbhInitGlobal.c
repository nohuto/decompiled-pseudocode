/*
 * XREFs of UsbhInitGlobal @ 0x140051128
 * Callers:
 *     DriverEntry @ 0x14004F07C (DriverEntry.c)
 * Callees:
 *     memset @ 0x140061FC0 (memset.c)
 */

__int64 UsbhInitGlobal()
{
  __int64 result; // rax

  memset(&HubG, 0, 0x1B8uLL);
  KeInitializeSpinLock(&HubG);
  KeInitializeSpinLock(&SpinLock);
  KeInitializeEvent(&Event, SynchronizationEvent, 1u);
  KeInitializeEvent(&stru_140070710, SynchronizationEvent, 0);
  dword_140070608 = 2017613128;
  dword_140070678 = 1734964085;
  dword_140070648 = 1734964085;
  dword_140070638 = 1734964085;
  dword_140070628 = 1734964085;
  dword_140070654 = 1734964085;
  dword_140070660 = 1734964085;
  dword_14007066C = 1734964085;
  dword_140070680 = 1734964085;
  qword_1400706C0 = (__int64)&qword_1400706B8;
  qword_1400706B8 = (__int64)&qword_1400706B8;
  qword_1400705A8 = (__int64)&qword_1400705A0;
  qword_1400705A0 = (__int64)&qword_1400705A0;
  qword_140070708 = (__int64)&qword_140070700;
  qword_140070700 = (__int64)&qword_140070700;
  result = 2LL;
  dword_1400705BC = 2;
  dword_1400705E8 = 2;
  qword_140070618 = (__int64)&HubG;
  dword_14007060C = 3;
  qword_140070610 = 0LL;
  dword_1400705B0 = 500;
  dword_1400705B4 = 8;
  qword_1400705C8 = 32LL;
  dword_1400705D0 = 1;
  dword_1400705D8 = 0;
  qword_1400705DC = 10LL;
  dword_1400705F4 = 300;
  dword_1400706C8 = 3;
  dword_1400705E4 = 2000;
  dword_1400706D8 = 1;
  dword_140070730 = 25;
  return result;
}
