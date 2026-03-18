/*
 * XREFs of WheaGetErrorSource @ 0x1403DE800
 * Callers:
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140847DC0 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     WheapGetErrorSource @ 0x1403DE1E0 (WheapGetErrorSource.c)
 */

__int64 __fastcall WheaGetErrorSource(unsigned int a1)
{
  __int64 *ErrorSource; // rax

  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, a1);
  return (unsigned __int64)(ErrorSource + 12) & -(__int64)(ErrorSource != 0LL);
}
