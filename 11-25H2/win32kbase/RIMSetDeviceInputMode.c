/*
 * XREFs of RIMSetDeviceInputMode @ 0x140180708
 * Callers:
 *     ?RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z @ 0x1401E74E8 (-RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z.c)
 *     _lambda_015c32a42809731270cc377abf7a5008_::operator() @ 0x1401F649C (_lambda_015c32a42809731270cc377abf7a5008_--operator().c)
 * Callees:
 *     RIMUpdateDeviceForInputMode @ 0x14007A364 (RIMUpdateDeviceForInputMode.c)
 *     RIMIsWakeCapableDevice @ 0x1400991E8 (RIMIsWakeCapableDevice.c)
 *     ?SetDeviceInputMode@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4_WIN32K_INPUT_MODE@@@Z @ 0x1400D6850 (-SetDeviceInputMode@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x14014C410 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 *     Feature_InputWakeGuardInterval__private_IsEnabledDeviceUsageNoInline @ 0x1401E7550 (Feature_InputWakeGuardInterval__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RIMSetDeviceInputMode(struct RIMDEV *a1, unsigned int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // esi

  InputTraceLogging::RIM::SetDeviceInputMode((__int64)a1, a2);
  if ( a2 == 1 || a2 == 2 && !(unsigned int)RIMIsWakeCapableDevice((__int64)a1) )
    rimInvalidateInputs(a1, v4);
  v5 = RIMUpdateDeviceForInputMode(a1, a2);
  if ( (unsigned int)Feature_InputWakeGuardInterval__private_IsEnabledDeviceUsageNoInline()
    && a2 == 2
    && *((_DWORD *)a1 + 326) != 2 )
  {
    *((LARGE_INTEGER *)a1 + 164) = KeQueryPerformanceCounter(0LL);
  }
  *((_DWORD *)a1 + 326) = a2;
  return v5;
}
