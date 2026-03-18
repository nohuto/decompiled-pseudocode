/*
 * XREFs of ACPICMButtonStart @ 0x1400AE5E4
 * Callers:
 *     ACPICMExperienceButtonStart @ 0x1400AE670 (ACPICMExperienceButtonStart.c)
 *     ACPICMLidStart @ 0x1400AE7C0 (ACPICMLidStart.c)
 *     ACPICMPowerButtonStart @ 0x1400AE7E0 (ACPICMPowerButtonStart.c)
 *     ACPICMSleepButtonStart @ 0x1400AE800 (ACPICMSleepButtonStart.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1400420EC (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPICMButtonStart(ULONG_PTR a1, __int64 a2, int a3)
{
  __int64 DeviceExtension; // rbx
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
  *(_DWORD *)(DeviceExtension + 200) = a3;
  result = ACPIInitStartDevice(
             a1,
             0LL,
             (void (__fastcall *)(__int64, __int64, _QWORD))ACPICMButtonStartCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
