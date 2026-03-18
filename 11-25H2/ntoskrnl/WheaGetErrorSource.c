/*
 * XREFs of WheaGetErrorSource @ 0x140353D00
 * Callers:
 *     WheaRemoveErrorSourceDeviceDriver @ 0x1407B7800 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     WheapGetErrorSource @ 0x1403541D8 (WheapGetErrorSource.c)
 */

__int64 __fastcall WheaGetErrorSource(unsigned int a1)
{
  __int64 ErrorSource; // rax

  ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, a1);
  return (ErrorSource + 96) & -(__int64)(ErrorSource != 0);
}
