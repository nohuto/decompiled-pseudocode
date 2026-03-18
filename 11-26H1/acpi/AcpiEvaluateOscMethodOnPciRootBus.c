/*
 * XREFs of AcpiEvaluateOscMethodOnPciRootBus @ 0x140048A6C
 * Callers:
 *     AcpiEvaluateBiosMethodsOnPciRootBusOnResume @ 0x1400498D8 (AcpiEvaluateBiosMethodsOnPciRootBusOnResume.c)
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x140065844 (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateOsc @ 0x1400CD900 (ACPIAmliEvaluateOsc.c)
 */

__int64 __fastcall AcpiEvaluateOscMethodOnPciRootBus(__int64 a1, unsigned __int8 a2, int a3, _DWORD *a4, int *a5)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // edx
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v11[2]; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 760);
  v7 = a2;
  v8 = *a5 | *a4;
  v11[0] = v7;
  v11[1] = PciRootBusFeaturesSupported;
  v12 = v8;
  v10 = PCI_ROOT_BUS_OSC_UUID;
  result = ACPIAmliEvaluateOsc(v6, (int)&v10, a3, 3, v11);
  if ( (int)result >= 0 )
  {
    if ( (!*a5 || (v12 & *a5) == *a5) && (v12 | *a4) == *a4 )
    {
      *a5 = v12;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
