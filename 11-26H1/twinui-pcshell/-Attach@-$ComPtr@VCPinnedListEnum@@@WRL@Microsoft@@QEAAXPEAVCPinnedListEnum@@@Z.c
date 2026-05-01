/*
 * XREFs of ?Attach@?$ComPtr@VCPinnedListEnum@@@WRL@Microsoft@@QEAAXPEAVCPinnedListEnum@@@Z @ 0x18068D630
 * Callers:
 *     ?EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x18068E9C0 (-EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z.c)
 *     ?EnumObjects@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x18068EAB0 (-EnumObjects@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z.c)
 * Callees:
 *     ?Release@CPinnedListEnum@@UEAAKXZ @ 0x180695A60 (-Release@CPinnedListEnum@@UEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<CPinnedListEnum>::Attach(CPinnedListEnum **a1, CPinnedListEnum *a2)
{
  CPinnedListEnum *v4; // rcx
  unsigned int result; // eax

  v4 = *a1;
  if ( v4 )
    result = CPinnedListEnum::Release(v4);
  *a1 = a2;
  return result;
}
