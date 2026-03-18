/*
 * XREFs of FontAssocCharsetRoutine @ 0x140311F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FontAssocCharsetRoutine(wchar_t *Str1, __int64 a2, const wchar_t *a3)
{
  char v5; // di
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ebx
  __int64 v9; // rcx

  if ( _wcsicmp(a3, L"YES") )
  {
    v5 = 0;
    if ( _wcsicmp(a3, L"CODEPAGECOMPAT") )
      return 0LL;
  }
  else
  {
    v5 = 1;
  }
  if ( _wcsicmp(Str1, L"ANSI(00)") )
  {
    if ( _wcsicmp(Str1, L"SYMBOL(02)") )
      v8 = _wcsicmp(Str1, L"OEM(FF)") == 0;
    else
      v8 = 4;
  }
  else
  {
    v8 = 2;
  }
  v9 = *(_QWORD *)(W32GetSessionState(v7, v6) + 96);
  if ( v5 )
    *(_DWORD *)(v9 + 18944) |= v8;
  else
    *(_DWORD *)(v9 + 18948) &= ~v8;
  return 0LL;
}
