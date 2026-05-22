/*
 * XREFs of ??0?$atomic@W4DeviceState@PnpDevice@@@std@@QEAA@W4DeviceState@PnpDevice@@@Z @ 0x18009951C
 * Callers:
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x18001ED5C (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ??0PnpDevice@@AEAA@XZ @ 0x180068320 (--0PnpDevice@@AEAA@XZ.c)
 * Callees:
 *     ??0?$_Atomic_integral_facade@K@std@@QEAA@AEBK@Z @ 0x180099544 (--0-$_Atomic_integral_facade@K@std@@QEAA@AEBK@Z.c)
 */

__int64 __fastcall std::atomic<enum PnpDevice::DeviceState>::atomic<enum PnpDevice::DeviceState>(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0;
  std::_Atomic_integral_facade<unsigned long>::_Atomic_integral_facade<unsigned long>(a1, v3);
  return v1;
}
