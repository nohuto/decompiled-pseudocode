/*
 * XREFs of HviGetHypervisorVersion @ 0x1406DC7C0
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1405B9170 (HvlpHvIdentityInfoCallback.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x14071E2B0 (SpcIsHyperVCr3RspErrataPresent.c)
 *     HvlQueryDetailInfo @ 0x140776C54 (HvlQueryDetailInfo.c)
 *     HvlPhase0Initialize @ 0x14079166C (HvlPhase0Initialize.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1406DC944 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetHypervisorVersion(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741826LL;
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
