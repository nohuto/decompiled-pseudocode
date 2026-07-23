/*
 * XREFs of SepDeleteLogonSessionSidValues @ 0x14081B290
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140B003D0 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x140B8585C (SepDeReferenceLogonSession.c)
 * Callees:
 *     SepDereferenceSidValuesBlock @ 0x140B1018C (SepDereferenceSidValuesBlock.c)
 */

__int64 __fastcall SepDeleteLogonSessionSidValues(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 128);
  if ( v2 )
  {
    result = SepDereferenceSidValuesBlock(v2);
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  return result;
}
