/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x1404E6318
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1405B9170 (HvlpHvIdentityInfoCallback.c)
 *     HvlGetSystemPasidCapabilities @ 0x1405BD1B0 (HvlGetSystemPasidCapabilities.c)
 *     HviGetIptFeatures @ 0x1406DC8A8 (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x140776C54 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404E63D0 (HviIsAnyHypervisorPresent.c)
 */

__int64 __fastcall HviGetHypervisorVendorAndMaxFunction(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsAnyHypervisorPresent();
  if ( (_BYTE)result )
  {
    _RAX = 0x40000000LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
