/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x180004B30
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpLoadInstallLanguageFallback @ 0x18000144C (RtlpLoadInstallLanguageFallback.c)
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlGetNeutralFallback @ 0x180004170 (RtlGetNeutralFallback.c)
 *     LdrpLangFallbackListAppendNode @ 0x180004E90 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtIsUILanguageComitted @ 0x1801610B0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180161AD0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int16 v4; // r12
  int v5; // r15d
  int appended; // ebx
  __int64 Heap_0; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  wchar_t *v12; // r14
  unsigned __int16 v13; // ax
  int v14; // esi
  unsigned int i; // r12d
  wchar_t *String; // rsi
  unsigned __int16 *v17; // rdx
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  size_t v25; // rax
  int v27; // ecx
  __int64 v28; // rcx
  int v29; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  wchar_t *v31[2]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v32[2]; // [rsp+58h] [rbp-20h] BYREF
  wchar_t *String2; // [rsp+60h] [rbp-18h]
  unsigned __int16 v35; // [rsp+C0h] [rbp+48h] BYREF

  v4 = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v5 = (int)a4;
  v32[1] = 0;
  LOWORD(v29) = 0;
  appended = 0;
  *(_OWORD *)v31 = 0LL;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 510LL);
  v12 = (wchar_t *)Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  v35 = 0;
  String2 = (wchar_t *)(Heap_0 + 170);
  v13 = *(_WORD *)(a2 + 4);
  v14 = 0;
  v32[0] = 11141120;
  if ( v13 )
  {
    v4 = v13;
  }
  else
  {
    v14 = NtQueryInstallUILanguage(&v35, v10, v11);
    if ( v14 >= 0 )
    {
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        RtlpLoadInstallLanguageFallback(a2, (_WORD *)(a2 + 6), (_WORD *)(a2 + 8));
        *(_WORD *)(a2 + 4) = v35;
      }
      v4 = v35;
    }
  }
  if ( v14 >= 0 && (unsigned __int8)RtlLCIDToCultureName(v4, v32) )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= *(unsigned __int16 *)(a3 + 4) )
        goto LABEL_32;
      String = v12;
      DestinationString.Buffer = v12;
      appended = 0;
      *(_DWORD *)&DestinationString.Length = 11141120;
      v17 = (unsigned __int16 *)(*(_QWORD *)(a3 + 24) + 6LL * i);
      if ( !v17 )
      {
        appended = -1073741811;
        goto LABEL_32;
      }
      v18 = *v17;
      if ( v18 != 2 )
        break;
      v19 = 28LL * (__int16)v17[2];
      v20 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
      v21 = *(__int16 *)(v19 + v20 + 6);
      if ( (__int16)v21 <= 0 )
      {
        if ( *(_WORD *)(v19 + v20 + 4) )
        {
          v28 = *(unsigned __int16 *)(v19 + v20 + 4);
LABEL_37:
          if ( (unsigned __int8)RtlLCIDToCultureName(v28, &DestinationString) )
            goto LABEL_46;
          String = DestinationString.Buffer;
        }
        goto LABEL_39;
      }
      v22 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)&DestinationString.Length = 0LL;
      v23 = *(__int16 *)(*(_QWORD *)(v22 + 16) + 2 * v21);
      v24 = *(_QWORD *)(v22 + 24);
      String = (wchar_t *)(v24 + 2 * v23);
      if ( String )
      {
        v25 = 2 * wcslen((const wchar_t *)(v24 + 2 * v23));
        if ( v25 >= 0xFFFE )
          LOWORD(v25) = -4;
        DestinationString.Length = v25;
        DestinationString.MaximumLength = v25 + 2;
      }
LABEL_22:
      if ( appended < 0 )
        goto LABEL_32;
      appended = LdrpLangFallbackListAppendNode(v5, a2, 0, (int)&v29, String);
      if ( appended < 0 )
        goto LABEL_32;
      if ( a1 || !wcsicmp(String, String2) )
      {
        LOBYTE(v35) = 0;
        v31[1] = v12 + 170;
        LODWORD(v31[0]) = 11141120;
        while ( 1 )
        {
          appended = RtlGetNeutralFallback(a2, String, (UNICODE_STRING *)v31, &v35);
          if ( appended < 0 )
            goto LABEL_32;
          if ( !LOWORD(v31[0]) || (_BYTE)v35 )
            break;
          String = v31[1];
          appended = LdrpLangFallbackListAppendNode(v5, a2, 0, (int)&v29, v31[1]);
          if ( appended < 0 )
            goto LABEL_32;
        }
      }
    }
    v27 = v18 - 1;
    if ( !v27 )
    {
      v28 = (unsigned int)(__int16)v17[2];
      goto LABEL_37;
    }
    if ( v27 == 2 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL) + 2LL * (__int16)v17[2])));
LABEL_46:
      String = DestinationString.Buffer;
      goto LABEL_22;
    }
LABEL_39:
    appended = -1073741595;
    goto LABEL_22;
  }
  appended = -1073741823;
LABEL_32:
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v12);
  return (unsigned int)appended;
}
