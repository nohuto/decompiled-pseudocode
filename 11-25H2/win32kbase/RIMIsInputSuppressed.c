/*
 * XREFs of RIMIsInputSuppressed @ 0x140035E74
 * Callers:
 *     rimSignalReadComplete @ 0x140035980 (rimSignalReadComplete.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     rimApplyPointerDevicePolicies @ 0x1401842B0 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     RIMIsWakeCapableDevice @ 0x1400991E8 (RIMIsWakeCapableDevice.c)
 *     Feature_InputWakeGuardInterval__private_IsEnabledDeviceUsageNoInline @ 0x1401E7550 (Feature_InputWakeGuardInterval__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RIMIsInputSuppressed(__int64 a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  int v3; // ecx
  unsigned int v4; // ebx
  unsigned int v5; // edx
  int v6; // ecx

  IsEnabledDeviceUsageNoInline = Feature_InputWakeGuardInterval__private_IsEnabledDeviceUsageNoInline();
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
  if ( !(unsigned int)RIMIsWakeCapableDevice(a1) )
    return 1;
  v5 = 0;
  if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 24LL);
    if ( (unsigned int)(v6 - 1) <= 2 || v6 == 4 )
      return *(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(a1 + 1312) < 2000 * gliQpcFreq.QuadPart / 0x3E8uLL;
  }
  return v5;
}
