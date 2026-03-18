/*
 * XREFs of RIMSetDeviceInputMode @ 0x1401BC3F0
 * Callers:
 *     ?RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z @ 0x14017B9D8 (-RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z.c)
 *     _lambda_015c32a42809731270cc377abf7a5008_::operator() @ 0x1402114BC (_lambda_015c32a42809731270cc377abf7a5008_--operator().c)
 * Callees:
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x14008D0F8 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 *     RIMIsWakeCapableDevice @ 0x140095FA0 (RIMIsWakeCapableDevice.c)
 *     ?SetDeviceInputMode@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4_WIN32K_INPUT_MODE@@@Z @ 0x1400A1D14 (-SetDeviceInputMode@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMUpdateDeviceForInputMode @ 0x1400F2534 (RIMUpdateDeviceForInputMode.c)
 *     Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline @ 0x140206360 (Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RIMSetDeviceInputMode(struct RIMDEV *a1, unsigned int a2)
{
  unsigned int v4; // esi

  InputTraceLogging::RIM::SetDeviceInputMode((__int64)a1, a2);
  if ( a2 == 1 || a2 == 2 && !(unsigned int)RIMIsWakeCapableDevice((__int64)a1) )
    rimInvalidateInputs(a1);
  v4 = RIMUpdateDeviceForInputMode(a1, a2);
  if ( (unsigned int)Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline()
    && a2 == 1
    && *((_DWORD *)a1 + 326) != 1 )
  {
    *((LARGE_INTEGER *)a1 + 164) = KeQueryPerformanceCounter(0LL);
  }
  *((_DWORD *)a1 + 326) = a2;
  return v4;
}
