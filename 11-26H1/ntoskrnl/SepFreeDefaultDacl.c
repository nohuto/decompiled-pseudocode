/*
 * XREFs of SepFreeDefaultDacl @ 0x140AFD348
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1404050D0 (SepAppendAceToTokenDefaultDacl.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SepFreeDefaultDacl(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 *v3; // rdx
  unsigned __int8 *v4; // rcx

  result = *(_QWORD *)(a1 + 184);
  if ( result )
  {
    result = *(unsigned __int16 *)(result + 2);
    *(_DWORD *)(a1 + 140) += result;
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  v3 = *(unsigned __int8 **)(a1 + 168);
  v4 = *(unsigned __int8 **)(a1 + 176);
  if ( v4 != v3 )
  {
    memmove(v4, v3, 4LL * v3[1] + 8);
    result = *(_QWORD *)(a1 + 176);
    *(_QWORD *)(a1 + 168) = result;
  }
  return result;
}
