/*
 * XREFs of SepDereferenceSidValuesBlock @ 0x140B0E95C
 * Callers:
 *     SepDeleteLogonSessionSidValues @ 0x1408150DC (SepDeleteLogonSessionSidValues.c)
 *     SepSetTokenUserAndGroups @ 0x140A802F4 (SepSetTokenUserAndGroups.c)
 * Callees:
 *     SepLogTokenSidManagement @ 0x140B2B4E0 (SepLogTokenSidManagement.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepDereferenceSidValuesBlock(volatile signed __int64 *P, int a2, __int64 a3)
{
  signed __int64 v4; // rax
  bool v5; // cc
  signed __int64 v6; // rax

  if ( P )
  {
    v4 = _InterlockedExchangeAdd64(P + 1, 0xFFFFFFFFFFFFFFFFuLL);
    v5 = v4 <= 1;
    v6 = v4 - 1;
    if ( v5 )
    {
      if ( v6 )
        __fastfail(0xEu);
      SepLogTokenSidManagement(5, (_DWORD)P, 0, a2, a3);
      ExFreePoolWithTag((PVOID)P, 0);
    }
  }
}
