/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1408AED58
 * Callers:
 *     _RtlpRemovePendingDeleteLanguages @ 0x140725134 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1408AEC08 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 * Callees:
 *     RtlpMuiRegGetOrAddString @ 0x1408AF03C (RtlpMuiRegGetOrAddString.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByName(__int64 a1, __int64 a2, __int64 a3, _WORD *a4)
{
  char v5; // bl
  __int64 v6; // rsi
  int i; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int16 v10; // r8
  __int16 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0;
  v5 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 24);
  if ( (int)RtlpMuiRegGetOrAddString(a1, a2, 0LL, &v12) < 0 )
    return 3221225524LL;
  for ( i = 0; i < *(unsigned __int16 *)(v6 + 6); ++i )
  {
    v8 = 28LL * i;
    v9 = *(_QWORD *)(v6 + 16);
    if ( *(_WORD *)(v8 + v9 + 6) == v12 )
    {
      v10 = *(_WORD *)(v8 + v9);
      if ( (v10 & 0x1020) == 0x20 )
      {
        if ( a4 )
        {
          *a4 = i;
          return 0LL;
        }
      }
      else if ( (v10 & 0x1000) != 0 )
      {
        v5 = 1;
      }
    }
  }
  return v5 != 0 ? -1073741637 : -1073741772;
}
