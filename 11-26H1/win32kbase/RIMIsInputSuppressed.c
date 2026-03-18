/*
 * XREFs of RIMIsInputSuppressed @ 0x140098E80
 * Callers:
 *     rimSignalReadComplete @ 0x140098988 (rimSignalReadComplete.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     RIMIsWakeCapableDevice @ 0x140095FA0 (RIMIsWakeCapableDevice.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline @ 0x140206360 (Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RIMIsInputSuppressed(__int64 a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  int v3; // ecx
  unsigned int v4; // ebx
  LARGE_INTEGER v5; // rbp
  unsigned __int64 v6; // rcx

  IsEnabledDeviceUsageNoInline = Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline();
  v3 = *(_DWORD *)(a1 + 1304);
  v4 = 0;
  if ( !IsEnabledDeviceUsageNoInline )
  {
    if ( v3 != 1 && (v3 != 2 || (unsigned int)RIMIsWakeCapableDevice(a1)) )
      return v4;
    return 1;
  }
  if ( v3 == 1 )
    return 1;
  if ( v3 != 2 )
    return v4;
  v5 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(a1 + 1312));
  if ( !(unsigned int)RIMIsWakeCapableDevice(a1) )
    return 1;
  if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 && (unsigned int)RIMIsTouchPointerDevice(*(_QWORD *)(a1 + 456)) )
    v6 = 3000 * gliQpcFreq.QuadPart;
  else
    v6 = 1000 * gliQpcFreq.QuadPart;
  LOBYTE(v4) = v5.QuadPart < v6 / 0x3E8;
  return v4;
}
