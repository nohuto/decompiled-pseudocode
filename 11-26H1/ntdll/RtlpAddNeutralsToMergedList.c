/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x180050260
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18004CB84 (RtlpLoadInstallLanguageFallback.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlGetNeutralFallback @ 0x18004F8A0 (RtlGetNeutralFallback.c)
 *     LdrpLangFallbackListAppendNode @ 0x1800505C0 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtIsUILanguageComitted @ 0x180160FB0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1801619D0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  LANGID v4; // r12
  int v5; // r15d
  int appended; // ebx
  wchar_t *Heap_0; // rax
  wchar_t *v10; // r14
  LANGID v11; // ax
  NTSTATUS v12; // esi
  unsigned int i; // r12d
  wchar_t *Buffer; // rsi
  unsigned __int16 *v15; // rdx
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  size_t v23; // rax
  int v25; // ecx
  LCID v26; // ecx
  int v27; // [rsp+30h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  wchar_t *v29[2]; // [rsp+48h] [rbp-30h] BYREF
  _UNICODE_STRING String; // [rsp+58h] [rbp-20h] BYREF
  LANGID InstallUILanguageId; // [rsp+C0h] [rbp+48h] BYREF

  v4 = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v5 = (int)a4;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  LOWORD(v27) = 0;
  appended = 0;
  *(_OWORD *)v29 = 0LL;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x1FEuLL);
  v10 = Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  InstallUILanguageId = 0;
  String.Buffer = Heap_0 + 85;
  v11 = *(_WORD *)(a2 + 4);
  v12 = 0;
  *(_DWORD *)&String.Length = 11141120;
  if ( v11 )
  {
    v4 = v11;
  }
  else
  {
    v12 = NtQueryInstallUILanguage(&InstallUILanguageId);
    if ( v12 >= 0 )
    {
      if ( NtIsUILanguageComitted() >= 0 )
      {
        RtlpLoadInstallLanguageFallback(a2, (_WORD *)(a2 + 6), (_WORD *)(a2 + 8));
        *(_WORD *)(a2 + 4) = InstallUILanguageId;
      }
      v4 = InstallUILanguageId;
    }
  }
  if ( v12 >= 0 && RtlLCIDToCultureName(v4, &String) )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= *(unsigned __int16 *)(a3 + 4) )
        goto LABEL_32;
      Buffer = v10;
      DestinationString.Buffer = v10;
      appended = 0;
      *(_DWORD *)&DestinationString.Length = 11141120;
      v15 = (unsigned __int16 *)(*(_QWORD *)(a3 + 24) + 6LL * i);
      if ( !v15 )
      {
        appended = -1073741811;
        goto LABEL_32;
      }
      v16 = *v15;
      if ( v16 != 2 )
        break;
      v17 = 28LL * (__int16)v15[2];
      v18 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
      v19 = *(__int16 *)(v17 + v18 + 6);
      if ( (__int16)v19 <= 0 )
      {
        if ( *(_WORD *)(v17 + v18 + 4) )
        {
          v26 = *(unsigned __int16 *)(v17 + v18 + 4);
LABEL_37:
          if ( RtlLCIDToCultureName(v26, &DestinationString) )
            goto LABEL_46;
          Buffer = DestinationString.Buffer;
        }
        goto LABEL_39;
      }
      v20 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)&DestinationString.Length = 0LL;
      v21 = *(__int16 *)(*(_QWORD *)(v20 + 16) + 2 * v19);
      v22 = *(_QWORD *)(v20 + 24);
      Buffer = (wchar_t *)(v22 + 2 * v21);
      if ( Buffer )
      {
        v23 = 2 * wcslen((const wchar_t *)(v22 + 2 * v21));
        if ( v23 >= 0xFFFE )
          LOWORD(v23) = -4;
        DestinationString.Length = v23;
        DestinationString.MaximumLength = v23 + 2;
      }
LABEL_22:
      if ( appended < 0 )
        goto LABEL_32;
      appended = LdrpLangFallbackListAppendNode(v5, a2, 0, (int)&v27, Buffer);
      if ( appended < 0 )
        goto LABEL_32;
      if ( a1 || !wcsicmp(Buffer, String.Buffer) )
      {
        LOBYTE(InstallUILanguageId) = 0;
        v29[1] = v10 + 170;
        LODWORD(v29[0]) = 11141120;
        while ( 1 )
        {
          appended = RtlGetNeutralFallback(a2, Buffer, (_UNICODE_STRING *)v29, &InstallUILanguageId);
          if ( appended < 0 )
            goto LABEL_32;
          if ( !LOWORD(v29[0]) || (_BYTE)InstallUILanguageId )
            break;
          Buffer = v29[1];
          appended = LdrpLangFallbackListAppendNode(v5, a2, 0, (int)&v27, v29[1]);
          if ( appended < 0 )
            goto LABEL_32;
        }
      }
    }
    v25 = v16 - 1;
    if ( !v25 )
    {
      v26 = (__int16)v15[2];
      goto LABEL_37;
    }
    if ( v25 == 2 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL) + 2LL * (__int16)v15[2])));
LABEL_46:
      Buffer = DestinationString.Buffer;
      goto LABEL_22;
    }
LABEL_39:
    appended = -1073741595;
    goto LABEL_22;
  }
  appended = -1073741823;
LABEL_32:
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v10);
  return (unsigned int)appended;
}
