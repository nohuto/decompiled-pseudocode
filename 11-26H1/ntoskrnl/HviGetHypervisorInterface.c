/*
 * XREFs of HviGetHypervisorInterface @ 0x1406DC778
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1405B9170 (HvlpHvIdentityInfoCallback.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1406DC944 (HviIsHypervisorMicrosoftCompatible.c)
 *     HvlQueryDetailInfo @ 0x140776C54 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404E63D0 (HviIsAnyHypervisorPresent.c)
 */

char __fastcall HviGetHypervisorInterface(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
