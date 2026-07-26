/*
 * XREFs of ?AtomCompare@?$KStringAtomTableBase@$00@Rtl@@CAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x14014D414
 * Callers:
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x14014D46C (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Rtl::KStringAtomTableBase<1>::AtomCompare(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rcx
  __int64 v3; // rdx
  int v4; // eax
  int v5; // r8d

  v2 = (unsigned __int16 *)(a1 + 16);
  v3 = a2 - (_QWORD)v2;
  do
  {
    v4 = *(unsigned __int16 *)((char *)v2 + v3);
    v5 = *v2 - v4;
    if ( v5 )
      break;
    ++v2;
  }
  while ( v4 );
  return v5 == 0;
}
