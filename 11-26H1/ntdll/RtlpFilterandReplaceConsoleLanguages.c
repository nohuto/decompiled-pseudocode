/*
 * XREFs of RtlpFilterandReplaceConsoleLanguages @ 0x180001AEC
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 * Callees:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x180001794 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     GetNameFromLangListNode @ 0x1800027E0 (GetNameFromLangListNode.c)
 *     LdrpLangFallbackListAppendNode @ 0x180004E90 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180006B20 (RtlpMuiRegFreeLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x180039130 (LdrpCreateLangFallbackList.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFilterandReplaceConsoleLanguages(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int16 a4,
        __int64 a5)
{
  unsigned int v8; // edi
  __int64 v10; // rdx
  int v11; // ebx
  int NameFromLangListNode; // eax
  wchar_t *String; // rbx
  int appended; // eax
  __int64 v15; // rdi
  unsigned int i; // r15d
  bool v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t *String2[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v22; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[176]; // [rsp+60h] [rbp-A0h] BYREF

  v8 = 0;
  v21 = 0LL;
  memset_thunk_772440563353939046(v23, 0, 0xAAuLL);
  *(_DWORD *)(&v22.MaximumLength + 1) = 0;
  LOWORD(v19) = 0;
  v18 = 0;
  *(_OWORD *)String2 = 0LL;
  if ( !a1 || !a2 || !a5 || !*(_QWORD *)a5 )
    return 3221225485LL;
  v11 = LdrpCreateLangFallbackList(&v21, a2, 25LL, 0LL);
  if ( v11 < 0 )
  {
LABEL_20:
    v15 = v21;
  }
  else
  {
    v10 = 0LL;
    while ( v8 < *(unsigned __int16 *)(a1 + 4) )
    {
      LODWORD(String2[0]) = 11141120;
      String2[1] = (wchar_t *)v23;
      NameFromLangListNode = GetNameFromLangListNode(a2, *(_QWORD *)(a1 + 24) + 6LL * v8, String2);
      v10 = 0LL;
      v11 = NameFromLangListNode;
      if ( NameFromLangListNode < 0 )
        goto LABEL_20;
      String = String2[1];
      v22.Buffer = 0LL;
      *(_DWORD *)&v22.Length = 0;
      if ( (int)RtlpConsoleFallbackNameFromLocaleName(String2[1], a3, &v18, &v22, a2, a4) >= 0 && v18 )
        appended = LdrpLangFallbackListAppendNode((int)&v21, a2, 0, (int)&v19, v22.Buffer);
      else
        appended = LdrpLangFallbackListAppendNode(a5, a2, 0, (int)&v19, String);
      v10 = 0LL;
      v11 = appended;
      if ( appended < 0 )
        goto LABEL_20;
      ++v8;
    }
    v15 = v21;
    for ( i = 0; i < *(unsigned __int16 *)(v15 + 4); ++i )
    {
      LODWORD(String2[0]) = 11141120;
      String2[1] = (wchar_t *)v23;
      v11 = GetNameFromLangListNode(a2, *(_QWORD *)(v15 + 24) + 6LL * i, String2);
      if ( v11 < 0 )
        break;
      v11 = LdrpLangFallbackListAppendNode(a5, a2, 0, (int)&v19, String2[1]);
    }
  }
  if ( v15 )
    RtlpMuiRegFreeLanguageList(v15, v10);
  if ( v11 < 0 )
  {
    if ( *(_QWORD *)a5 )
      *(_WORD *)(*(_QWORD *)a5 + 4LL) = 0;
  }
  return (unsigned int)v11;
}
