/*
 * XREFs of HviGetHypervisorVersion @ 0x1406E0A60
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1405BB9E0 (HvlpHvIdentityInfoCallback.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x140722F40 (SpcIsHyperVCr3RspErrataPresent.c)
 *     HvlQueryDetailInfo @ 0x140779AFC (HvlQueryDetailInfo.c)
 *     HvlPhase0Initialize @ 0x14079419C (HvlPhase0Initialize.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1406E0BE4 (HviIsHypervisorMicrosoftCompatible.c)
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
