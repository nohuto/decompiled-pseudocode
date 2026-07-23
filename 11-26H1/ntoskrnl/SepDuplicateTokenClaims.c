/*
 * XREFs of SepDuplicateTokenClaims @ 0x140AFDAB8
 * Callers:
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 * Callees:
 *     SepDuplicateClaimAttributes @ 0x140AFDB28 (SepDuplicateClaimAttributes.c)
 */

__int64 __fastcall SepDuplicateTokenClaims(__int64 a1, __int64 a2)
{
  bool v2; // zf
  _QWORD *v3; // r8
  __int64 result; // rax
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(_DWORD *)(a1 + 200) & 0x8000) == 0;
  v3 = (_QWORD *)(a1 + 1096);
  v8 = 0LL;
  if ( v2 || !*v3 )
  {
    *(_QWORD *)(a2 + 1096) = *v3;
    return 0LL;
  }
  else
  {
    result = SepDuplicateClaimAttributes(*v3, &v8);
    v6 = result;
    if ( (int)result >= 0 )
    {
      v7 = v8;
      *(_DWORD *)(a2 + 200) |= 0x8000u;
      *(_QWORD *)(a2 + 1096) = v7;
      return v6;
    }
  }
  return result;
}
