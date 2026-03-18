/*
 * XREFs of SepDeleteLogonSessionClaims @ 0x140AFE77C
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140AFE360 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x140B7CDEC (SepDeReferenceLogonSession.c)
 * Callees:
 *     SepDeleteClaimAttributes @ 0x140B215F0 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepDeleteLogonSessionClaims(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 120);
  if ( v2 )
  {
    result = SepDeleteClaimAttributes(v2);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return result;
}
