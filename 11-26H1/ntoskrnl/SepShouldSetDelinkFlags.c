/*
 * XREFs of SepShouldSetDelinkFlags @ 0x140AD1140
 * Callers:
 *     SepInternalSetSecurityAttributesToken @ 0x1403AFC1C (SepInternalSetSecurityAttributesToken.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 * Callees:
 *     SepPotentialGlobalTableAttribute @ 0x1403B1CA0 (SepPotentialGlobalTableAttribute.c)
 */

char __fastcall SepShouldSetDelinkFlags(_DWORD *a1, __int64 a2)
{
  char v2; // bl
  unsigned int i; // edi
  const UNICODE_STRING *v5; // rcx

  v2 = 0;
  if ( *a1 == 1 )
    return 1;
  for ( i = 0; i < *(_DWORD *)(a2 + 4); ++i )
  {
    v5 = (const UNICODE_STRING *)(*(_QWORD *)(a2 + 8) + 40LL * i);
    if ( v5 && SepPotentialGlobalTableAttribute(v5) )
      return 1;
  }
  return v2;
}
