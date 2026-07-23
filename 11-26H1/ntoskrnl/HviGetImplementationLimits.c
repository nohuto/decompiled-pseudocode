/*
 * XREFs of HviGetImplementationLimits @ 0x1406E0AA8
 * Callers:
 *     HvlIsSingleGroupRequired @ 0x1405BB054 (HvlIsSingleGroupRequired.c)
 *     HvlpSelectLpSet @ 0x1405BCF2C (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1405BD36C (HvlpSelectVpSet.c)
 *     HvlQueryDetailInfo @ 0x140779AFC (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1406E0BE4 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetImplementationLimits(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741829LL;
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
