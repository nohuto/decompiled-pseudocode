/*
 * XREFs of SepConvertToOwnTokenClaims @ 0x1404DFD60
 * Callers:
 *     SepStopReferencingLogonSession @ 0x140B223FC (SepStopReferencingLogonSession.c)
 * Callees:
 *     SepDuplicateClaimAttributes @ 0x140AFDB28 (SepDuplicateClaimAttributes.c)
 */

__int64 __fastcall SepConvertToOwnTokenClaims(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(_DWORD *)(a1 + 200) & 0x8000) == 0;
  v7 = 0LL;
  if ( !v1 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 1096);
  if ( !v3 )
    return 0LL;
  result = SepDuplicateClaimAttributes(v3, &v7);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = v7;
    *(_DWORD *)(a1 + 200) |= 0x8000u;
    *(_QWORD *)(a1 + 1096) = v6;
    return v5;
  }
  return result;
}
