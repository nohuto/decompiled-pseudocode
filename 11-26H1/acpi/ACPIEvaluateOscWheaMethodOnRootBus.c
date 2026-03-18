/*
 * XREFs of ACPIEvaluateOscWheaMethodOnRootBus @ 0x1400B9984
 * Callers:
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateOsc @ 0x1400CD900 (ACPIAmliEvaluateOsc.c)
 */

__int64 __fastcall ACPIEvaluateOscWheaMethodOnRootBus(__int64 a1, __int64 a2, int a3, __int64 a4, int *a5)
{
  __int64 v5; // rcx
  __int64 result; // rax
  int v7[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]

  v8[1] = AcpiRootWheaFeaturesSupported;
  v9 = AcpiRootWheaFeaturesControl;
  v8[0] = 0;
  v5 = *(_QWORD *)(RootDeviceExtension + 760);
  *(_OWORD *)v7 = SB_OSC_WHEA_UUID;
  result = ACPIAmliEvaluateOsc(v5, (int)v7, a3, 3, v8);
  if ( (int)result >= 0 )
  {
    if ( (!*a5 || (v9 & *a5) == *a5) && (v9 | AcpiRootWheaFeaturesControl) == AcpiRootWheaFeaturesControl )
    {
      *a5 = v9;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
