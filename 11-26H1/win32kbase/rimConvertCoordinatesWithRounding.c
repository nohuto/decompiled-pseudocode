/*
 * XREFs of rimConvertCoordinatesWithRounding @ 0x14012CBA0
 * Callers:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1401755E0 (RIMUpdatePointerDeviceScalingInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimConvertCoordinatesWithRounding(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rbp
  int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ecx

  v6 = 0;
  v7 = a3;
  if ( a1 >= a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 63LL);
  if ( (int)v7 >= a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
  v11 = a2 - a1;
  v12 = (a4 - (int)v7) * (__int64)(a5 - a1);
  v13 = 2 * v12;
  if ( v12 <= 0 )
    v14 = v13 - v11;
  else
    v14 = v11 + v13;
  v15 = v7 + v14 / (2LL * v11);
  if ( v15 < (__int64)0xFFFFFFFF80000000uLL || v15 > 0x7FFFFFFF )
  {
    v16 = -2147024362;
    *a6 = -1;
  }
  else
  {
    *a6 = v15;
    v16 = 0;
    if ( (int)v15 >= a4 )
      *a6 = a4 - 1;
  }
  LOBYTE(v6) = v16 == 0;
  return v6;
}
