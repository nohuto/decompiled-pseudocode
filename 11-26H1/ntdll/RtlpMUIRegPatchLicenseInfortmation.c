/*
 * XREFs of RtlpMUIRegPatchLicenseInfortmation @ 0x18000A810
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlpIsALicensedRegularLanguage @ 0x18000AB10 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpLangNameInMultiSzString @ 0x18000AEC0 (RtlpLangNameInMultiSzString.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall RtlpMUIRegPatchLicenseInfortmation(__int64 a1)
{
  bool v2; // cc
  wchar_t *v3; // r8
  int v4; // edx
  int v5; // edi
  char v6; // si
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int16 *v9; // rcx
  int v10; // eax
  wchar_t *Buffer; // r15
  __int64 v12; // r8
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  size_t v19; // rax
  __int64 v20; // r13
  wchar_t *v21; // rcx
  wchar_t *v22; // rcx
  int InstalledLanguageIndexByName; // eax
  unsigned int v25; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  __int16 v27; // [rsp+70h] [rbp+8h] BYREF
  __int64 Heap_0; // [rsp+78h] [rbp+10h]

  v27 = 0;
  DestinationString = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v2 = *(_WORD *)(a1 + 4) <= 0x40u;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( !v2 )
    return 3221225473LL;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 170LL);
  v3 = (wchar_t *)Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  v4 = *(unsigned __int16 *)(a1 + 4);
  v5 = v4 - 1;
  if ( v4 - 1 >= 0 )
  {
    v6 = v4 - 1;
    v7 = 6LL * *(unsigned __int16 *)(a1 + 4) - 6;
    while ( 1 )
    {
      v8 = 1LL << v6;
      v9 = (unsigned __int16 *)(v7 + *(_QWORD *)(a1 + 24));
      v10 = *v9;
      if ( (_WORD)v10 )
        break;
LABEL_24:
      --v6;
      v7 -= 6LL;
      if ( --v5 < 0 )
        goto LABEL_25;
    }
    Buffer = v3;
    DestinationString.Buffer = v3;
    v12 = g_RegInfo;
    v13 = 0;
    *(_DWORD *)&DestinationString.Length = 11141120;
    if ( !g_RegInfo || !v9 )
    {
LABEL_23:
      v3 = (wchar_t *)Heap_0;
      goto LABEL_24;
    }
    switch ( v10 )
    {
      case 2:
        v14 = 28LL * (__int16)v9[2];
        v15 = *(_QWORD *)(*(_QWORD *)(g_RegInfo + 24) + 16LL);
        v16 = *(__int16 *)(v14 + v15 + 6);
        if ( (__int16)v16 > 0 )
        {
          v12 = *(_QWORD *)(g_RegInfo + 32);
          *(_QWORD *)&DestinationString.Length = 0LL;
          v17 = *(__int16 *)(*(_QWORD *)(v12 + 16) + 2 * v16);
          v18 = *(_QWORD *)(v12 + 24);
          Buffer = (wchar_t *)(v18 + 2 * v17);
          if ( Buffer )
          {
            v19 = 2 * wcslen((const wchar_t *)(v18 + 2 * v17));
            if ( v19 >= 0xFFFE )
              LOWORD(v19) = -4;
            DestinationString.Length = v19;
            DestinationString.MaximumLength = v19 + 2;
          }
LABEL_15:
          if ( v13 >= 0 )
          {
            if ( *(_DWORD *)(g_RegInfo + 120) < 0x3E8u )
            {
              LOBYTE(v12) = 1;
              InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(g_RegInfo, Buffer, v12, &v27);
              v3 = (wchar_t *)Heap_0;
              if ( InstalledLanguageIndexByName >= 0 )
                *(_QWORD *)(a1 + 32) |= v8;
              goto LABEL_24;
            }
            if ( (int)RtlpIsALicensedRegularLanguage(g_RegInfo, Buffer) >= 0
              || (v20 = g_RegInfo) != 0
              && ((v21 = *(wchar_t **)(g_RegInfo + 136)) == 0LL
               || !(unsigned __int8)RtlpLangNameInMultiSzString(v21, Buffer))
              && ((v22 = *(wchar_t **)(v20 + 152)) == 0LL || !(unsigned __int8)RtlpLangNameInMultiSzString(v22, Buffer)) )
            {
              *(_QWORD *)(a1 + 32) |= v8;
            }
          }
          goto LABEL_23;
        }
        if ( !*(_WORD *)(v14 + v15 + 4) )
        {
LABEL_32:
          v13 = -1073741595;
          goto LABEL_15;
        }
        v25 = *(unsigned __int16 *)(v14 + v15 + 4);
        break;
      case 1:
        v25 = (__int16)v9[2];
        break;
      case 3:
        RtlInitUnicodeString(
          &DestinationString,
          (PCWSTR)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 32) + 24LL)
                 + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 32) + 16LL) + 2LL * (__int16)v9[2])));
        goto LABEL_37;
      default:
        goto LABEL_32;
    }
    if ( !(unsigned __int8)RtlLCIDToCultureName(v25, (__int64)&DestinationString) )
    {
      Buffer = DestinationString.Buffer;
      goto LABEL_32;
    }
LABEL_37:
    Buffer = DestinationString.Buffer;
    goto LABEL_15;
  }
LABEL_25:
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v3);
  return 0LL;
}
