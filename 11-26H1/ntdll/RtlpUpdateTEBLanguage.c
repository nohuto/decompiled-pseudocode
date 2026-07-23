/*
 * XREFs of RtlpUpdateTEBLanguage @ 0x180058F70
 * Callers:
 *     InitializeTEBUserLangList @ 0x180054030 (InitializeTEBUserLangList.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegFreeStringPool @ 0x180059064 (RtlpMuiRegFreeStringPool.c)
 */

__int64 __fastcall RtlpUpdateTEBLanguage(_DWORD *a1, void *a2, int a3)
{
  PVOID *Heap_0; // rax
  PVOID *UserPrefLanguages; // rbx
  int v9; // edi
  PVOID v10; // rcx

  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = (PVOID *)NtCurrentTeb()->UserPrefLanguages;
  }
  else
  {
    Heap_0 = (PVOID *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
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
      v10 = UserPrefLanguages[1];
      if ( v10 )
        RtlpMuiRegFreeStringPool(v10);
      UserPrefLanguages[1] = a2;
      return 0LL;
    }
  }
  else if ( a1 )
  {
    if ( *UserPrefLanguages )
    {
      a1[10] = *((_DWORD *)*UserPrefLanguages + 10);
      RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
    }
    *UserPrefLanguages = a1;
    return 0LL;
  }
  return 3221225485LL;
}
