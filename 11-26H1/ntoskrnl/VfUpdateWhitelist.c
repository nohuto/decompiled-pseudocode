/*
 * XREFs of VfUpdateWhitelist @ 0x1403C24C0
 * Callers:
 *     VfTargetDriversAdd @ 0x1403C1A18 (VfTargetDriversAdd.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 */

char __fastcall VfUpdateWhitelist(wchar_t *Str1, __int64 a2)
{
  char v2; // bl
  unsigned int v5; // edi
  __int64 v6; // r14

  v2 = 0;
  v5 = 0;
  if ( !a2 )
    return 0;
  while ( v5 < 8 )
  {
    v6 = 4LL * v5;
    if ( !wcsicmp(Str1, (&VfLegacyCallWhitelist)[v6]) )
    {
      v2 = 1;
      *(&VfLegacyCallWhitelist + v6 + 1) = *(wchar_t **)a2;
      (&VfLegacyCallWhitelist)[v6 + 1] = *(wchar_t **)(a2 + 8);
      return v2;
    }
    ++v5;
  }
  return v2;
}
