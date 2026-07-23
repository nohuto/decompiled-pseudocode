/*
 * XREFs of HalpWheaGetBankFromMciStatusIndex @ 0x14044BA94
 * Callers:
 *     HalpHvLpReadMcaStatusMsr @ 0x14044B9F4 (HalpHvLpReadMcaStatusMsr.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 */

__int64 __fastcall HalpWheaGetBankFromMciStatusIndex(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned int v5; // r8d

  if ( (unsigned __int8)HalpGetCpuVendor(a1, 0xFFFFFFFFLL, (unsigned int)a1, a4) == 1 && HalpMcaScalableRasSupported )
  {
    if ( v5 >= 0xC0002000 )
      return (v5 + 1073733632) >> 4;
  }
  else if ( v5 >= 0x401 )
  {
    return (v5 - 1025) >> 2;
  }
  return v4;
}
