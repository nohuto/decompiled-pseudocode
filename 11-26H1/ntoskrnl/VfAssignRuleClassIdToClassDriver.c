/*
 * XREFs of VfAssignRuleClassIdToClassDriver @ 0x1403C2548
 * Callers:
 *     VfTargetDriversAdd @ 0x1403C1A18 (VfTargetDriversAdd.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 */

char __fastcall VfAssignRuleClassIdToClassDriver(wchar_t *Str1, __int64 a2)
{
  char v2; // bl
  unsigned int v5; // edi
  unsigned int v7; // eax
  int v8; // eax

  v2 = 0;
  v5 = 0;
  if ( !a2 )
    return 0;
  while ( v5 < 7 )
  {
    if ( !wcsicmp(Str1, (&DifClassDriverPlugins)[2 * v5]) )
    {
      _mm_lfence();
      v7 = dword_140E08CDC[4 * v5];
      if ( v7 == -1
        || v7 < 0x40
        && (v8 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)v7 >> 5)), _bittest(
                                                                              &v8,
                                                                              dword_140E08CDC[4 * v5] & 0x1F)) )
      {
        v2 = 1;
        *(_DWORD *)(a2 + 56) = dword_140E08CD8[4 * v5];
      }
      return v2;
    }
    ++v5;
  }
  return v2;
}
