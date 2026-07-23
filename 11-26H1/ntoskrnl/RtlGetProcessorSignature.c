/*
 * XREFs of RtlGetProcessorSignature @ 0x140C050BC
 * Callers:
 *     KiGetProcessorSignature @ 0x1405F962C (KiGetProcessorSignature.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x140814DEC (RtlpInitFunctionOverrideCapabilities.c)
 *     RtlDetectProcessorFeatures @ 0x140C048AC (RtlDetectProcessorFeatures.c)
 *     RtlGetCpuMaxPhysicalBits @ 0x140C04F34 (RtlGetCpuMaxPhysicalBits.c)
 *     SpcDetectKvaLeakage @ 0x140C0808C (SpcDetectKvaLeakage.c)
 * Callees:
 *     RtlGetCpuVendor @ 0x140C04FE0 (RtlGetCpuVendor.c)
 */

__int64 __fastcall RtlGetProcessorSignature(char *a1, int *a2, int *a3, _DWORD *a4)
{
  char CpuVendor; // r10
  __int64 result; // rax
  int v14; // edx
  int v15; // ecx

  CpuVendor = RtlGetCpuVendor();
  _RAX = 1LL;
  __asm { cpuid }
  v14 = BYTE1(result) & 0xF;
  if ( v14 == 15 )
  {
    v14 = (unsigned __int8)((unsigned int)result >> 20) + 15;
    v15 = (unsigned __int64)(result & 0xF0 | ((unsigned int)result >> 8) & 0xF00) >> 4;
  }
  else
  {
    v15 = (unsigned __int8)result >> 4;
  }
  if ( (CpuVendor == 2 || CpuVendor == 3) && v14 == 6 )
    v15 |= ((unsigned int)result >> 12) & 0xF0;
  if ( a1 )
    *a1 = CpuVendor;
  if ( a2 )
    *a2 = v14;
  if ( a3 )
    *a3 = v15;
  if ( a4 )
    *a4 = result & 0xF;
  return (unsigned int)result;
}
