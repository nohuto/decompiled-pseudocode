/*
 * XREFs of RtlpUpdateTEBLanguage @ 0x18000D840
 * Callers:
 *     InitializeTEBUserLangList @ 0x180008900 (InitializeTEBUserLangList.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x180006B20 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegFreeStringPool @ 0x18000D934 (RtlpMuiRegFreeStringPool.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall RtlpUpdateTEBLanguage(__int64 a1, __int64 a2, int a3)
{
  __int64 *Heap_0; // rax
  __int64 *UserPrefLanguages; // rbx
  int v9; // edi

  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = (__int64 *)NtCurrentTeb()->UserPrefLanguages;
  }
  else
  {
    Heap_0 = (__int64 *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 16LL);
    UserPrefLanguages = Heap_0;
    if ( !Heap_0 )
      return 3221225495LL;
    *Heap_0 = 0LL;
    Heap_0[1] = 0LL;
    NtCurrentTeb()->UserPrefLanguages = Heap_0;
  }
  v9 = a3 - 4;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 0LL;
    if ( a2 )
    {
      if ( UserPrefLanguages[1] )
        RtlpMuiRegFreeStringPool();
      UserPrefLanguages[1] = a2;
      return 0LL;
    }
  }
  else if ( a1 )
  {
    if ( *UserPrefLanguages )
    {
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(*UserPrefLanguages + 40);
      RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
    }
    *UserPrefLanguages = a1;
    return 0LL;
  }
  return 3221225485LL;
}
