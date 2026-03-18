/*
 * XREFs of AcpiEvaluateOscMethodOnCxlBus @ 0x140065908
 * Callers:
 *     AcpiEvaluateBiosMethodsOnPciRootBusOnResume @ 0x1400498D8 (AcpiEvaluateBiosMethodsOnPciRootBusOnResume.c)
 *     AcpiEvaluateBiosMethodsOnCxlBus @ 0x140065744 (AcpiEvaluateBiosMethodsOnCxlBus.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateOsc @ 0x1400CD900 (ACPIAmliEvaluateOsc.c)
 */

__int64 __fastcall AcpiEvaluateOscMethodOnCxlBus(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        int *a4,
        int *a5,
        __int64 a6,
        _DWORD *a7,
        int *a8)
{
  int v9; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 result; // rax
  int v14; // edx
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v16[2]; // [rsp+40h] [rbp-28h] BYREF
  int v17; // [rsp+48h] [rbp-20h]
  int v18; // [rsp+4Ch] [rbp-1Ch]
  int v19; // [rsp+50h] [rbp-18h]

  v9 = *a4;
  v16[0] = a2;
  v11 = *a5 | v9;
  v16[1] = PciRootBusFeaturesSupported;
  v18 = CxlBusFeaturesSupported;
  v19 = *a8 | *a7;
  v17 = v11;
  v12 = *(_QWORD *)(a1 + 760);
  v15 = CXL_BUS_OSC_UUID;
  result = ACPIAmliEvaluateOsc(v12, (int)&v15, a1, 5, v16);
  if ( (int)result >= 0 )
  {
    if ( (!*a5 || (v17 & *a5) == *a5)
      && ((v14 = v19, !*a8) || (v19 & *a8) == *a8)
      && (v17 | *a4) == *a4
      && (v19 | *a7) == *a7 )
    {
      *a5 = v17;
      result = 0LL;
      *a8 = v14;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
