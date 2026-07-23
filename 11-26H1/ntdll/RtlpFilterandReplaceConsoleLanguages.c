/*
 * XREFs of RtlpFilterandReplaceConsoleLanguages @ 0x18004D21C
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18004F000 (LdrpMergeLangFallbackLists.c)
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x1800236A0 (LdrpCreateLangFallbackList.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18004CECC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     GetNameFromLangListNode @ 0x18004DF10 (GetNameFromLangListNode.c)
 *     LdrpLangFallbackListAppendNode @ 0x1800505C0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFilterandReplaceConsoleLanguages(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int16 a4,
        __int64 a5)
{
  unsigned int v8; // edi
  int NameFromLangListNode; // ebx
  wchar_t *String; // rbx
  int appended; // eax
  _QWORD *v13; // rdi
  unsigned int v14; // r15d
  bool v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t *String2[2]; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING v20; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[176]; // [rsp+60h] [rbp-A0h] BYREF

  v8 = 0;
  BaseAddress = 0LL;
  memset_thunk_772440563353939046(v21, 0, 0xAAuLL);
  *(_DWORD *)(&v20.MaximumLength + 1) = 0;
  LOWORD(v17) = 0;
  v16 = 0;
  *(_OWORD *)String2 = 0LL;
  if ( !a1 || !a2 || !a5 || !*(_QWORD *)a5 )
    return 3221225485LL;
  NameFromLangListNode = LdrpCreateLangFallbackList(&BaseAddress, a2, 25, 0);
  if ( NameFromLangListNode < 0 )
  {
LABEL_19:
    v13 = BaseAddress;
  }
  else
  {
    while ( v8 < *(unsigned __int16 *)(a1 + 4) )
    {
      LODWORD(String2[0]) = 11141120;
      String2[1] = (wchar_t *)v21;
      NameFromLangListNode = GetNameFromLangListNode(a2, *(_QWORD *)(a1 + 24) + 6LL * v8, String2);
      if ( NameFromLangListNode < 0 )
        goto LABEL_19;
      String = String2[1];
      v20.Buffer = 0LL;
      *(_DWORD *)&v20.Length = 0;
      if ( (int)RtlpConsoleFallbackNameFromLocaleName(String2[1], a3, &v16, &v20, a2, a4) >= 0 && v16 )
        appended = LdrpLangFallbackListAppendNode((int)&BaseAddress, a2, 0, (int)&v17, v20.Buffer);
      else
        appended = LdrpLangFallbackListAppendNode(a5, a2, 0, (int)&v17, String);
      NameFromLangListNode = appended;
      if ( appended < 0 )
        goto LABEL_19;
      ++v8;
    }
    v13 = BaseAddress;
    v14 = 0;
    if ( *((_WORD *)BaseAddress + 2) )
    {
      do
      {
        LODWORD(String2[0]) = 11141120;
        String2[1] = (wchar_t *)v21;
        NameFromLangListNode = GetNameFromLangListNode(a2, v13[3] + 6LL * v14, String2);
        if ( NameFromLangListNode < 0 )
          break;
        NameFromLangListNode = LdrpLangFallbackListAppendNode(a5, a2, 0, (int)&v17, String2[1]);
        ++v14;
      }
      while ( v14 < *((unsigned __int16 *)v13 + 2) );
    }
  }
  if ( v13 )
    RtlpMuiRegFreeLanguageList(v13);
  if ( NameFromLangListNode < 0 )
  {
    if ( *(_QWORD *)a5 )
      *(_WORD *)(*(_QWORD *)a5 + 4LL) = 0;
  }
  return (unsigned int)NameFromLangListNode;
}
