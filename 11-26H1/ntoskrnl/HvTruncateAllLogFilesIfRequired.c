/*
 * XREFs of HvTruncateAllLogFilesIfRequired @ 0x140AA89CC
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     CmpDoFileSetSizeEx @ 0x140AA7F58 (CmpDoFileSetSizeEx.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140AA8CA4 (HvGetEffectiveLogSizeCapForHive.c)
 */

__int64 __fastcall HvTruncateAllLogFilesIfRequired(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  if ( *(_DWORD *)(a1 + 168) == 1 )
  {
    result = HvGetEffectiveLogSizeCapForHive(a1);
    if ( *(_QWORD *)(a1 + 1816) <= (unsigned __int64)(unsigned int)result )
      return result;
    v3 = 1LL;
    return CmpDoFileSetSizeEx(a1, v3, 0LL, 0);
  }
  if ( *(_QWORD *)(a1 + 1816) > (unsigned __int64)(unsigned int)HvGetEffectiveLogSizeCapForHive(a1) )
    CmpDoFileSetSizeEx(a1, 4LL, 0LL, 0);
  result = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_QWORD *)(a1 + 1824) > (unsigned __int64)(unsigned int)result )
  {
    v3 = 5LL;
    return CmpDoFileSetSizeEx(a1, v3, 0LL, 0);
  }
  return result;
}
