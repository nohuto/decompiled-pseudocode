/*
 * XREFs of RtlGetProcessorSignature @ 0x140BFEEB4
 * Callers:
 *     KiGetProcessorSignature @ 0x1405F6C6C (KiGetProcessorSignature.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x14080F35C (RtlpInitFunctionOverrideCapabilities.c)
 *     RtlDetectProcessorFeatures @ 0x140BFE6A4 (RtlDetectProcessorFeatures.c)
 *     RtlGetCpuMaxPhysicalBits @ 0x140BFED2C (RtlGetCpuMaxPhysicalBits.c)
 *     SpcDetectKvaLeakage @ 0x140C01E7C (SpcDetectKvaLeakage.c)
 * Callees:
 *     RtlGetCpuVendor @ 0x140BFEDD8 (RtlGetCpuVendor.c)
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
