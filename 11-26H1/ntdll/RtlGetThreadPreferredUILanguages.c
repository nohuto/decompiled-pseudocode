/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x180052AB0
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800206B0 (RtlGetFileMUIPath.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180052280 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x180053860 (LdrpSetThreadPreferredLangList.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18008F9D0 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlpLangNameInMultiSzString_Size @ 0x180024F90 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlIntegerToUnicode @ 0x180027580 (RtlIntegerToUnicode.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     LdrpMergeLangFallbackLists @ 0x18004F000 (LdrpMergeLangFallbackLists.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlpAddNeutralsToMergedList @ 0x180050260 (RtlpAddNeutralsToMergedList.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpInitMuiCriticalSection @ 0x1800537F0 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     InitializeTEBUserLangList @ 0x180054030 (InitializeTEBUserLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800545D0 (RtlpSetProcUserMachineLangList.c)
 *     RtlpComputeLangListCheckSum @ 0x180054740 (RtlpComputeLangListCheckSum.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180055F40 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180056670 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegDupLanguageList @ 0x18008FB80 (RtlpMuiRegDupLanguageList.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800DAA84 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800DAB40 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x180101EEC (RtlpSetProcMergedLangList.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlGetThreadPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  char v4; // r14
  ULONG v5; // r12d
  _WORD *MergedPrefLanguages; // rsi
  ULONG v7; // edi
  PVOID v8; // r13
  NTSTATUS PreferredUILanguages; // ebx
  NTSTATUS result; // eax
  __int64 v11; // rax
  char v12; // r11
  unsigned int v13; // r12d
  ULONG v14; // r8d
  PULONG v15; // rdx
  unsigned __int16 v16; // r15
  unsigned int v17; // r9d
  int v18; // edi
  __int128 *v19; // r14
  unsigned __int16 *v20; // rdx
  int v21; // ecx
  unsigned int v22; // r14d
  int v23; // eax
  size_t v24; // rdx
  unsigned int v25; // r14d
  wchar_t *v26; // r10
  __int64 v27; // rcx
  PULONG v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  LCID v31; // ecx
  void *Buffer; // rax
  size_t Length; // rdx
  unsigned int v34; // r14d
  int v35; // r12d
  void *v36; // r15
  __int64 v37; // r14
  char *v38; // rax
  int v39; // eax
  void *v40; // r14
  char v41; // cl
  NTSTATUS v42; // eax
  unsigned int v43; // ecx
  NTSTATUS v44; // eax
  int v45; // edx
  __int64 *v46; // r15
  __int64 v47; // rax
  PULONG v48; // rax
  __int64 v49; // rax
  wchar_t *v50; // rcx
  size_t v51; // rax
  char v52; // [rsp+50h] [rbp-B0h] BYREF
  char v53; // [rsp+51h] [rbp-AFh]
  char v54; // [rsp+52h] [rbp-AEh]
  PVOID v55; // [rsp+58h] [rbp-A8h] BYREF
  DWORD Lcid[2]; // [rsp+60h] [rbp-A0h] BYREF
  size_t v57; // [rsp+68h] [rbp-98h] BYREF
  __int64 v58; // [rsp+70h] [rbp-90h]
  wchar_t *String1; // [rsp+78h] [rbp-88h]
  _UNICODE_STRING v60; // [rsp+80h] [rbp-80h] BYREF
  ULONG v61; // [rsp+90h] [rbp-70h]
  unsigned int v62; // [rsp+94h] [rbp-6Ch]
  void *PreferredLanguages; // [rsp+98h] [rbp-68h]
  __int64 v64; // [rsp+A0h] [rbp-60h]
  ULONG v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h]
  void *Src; // [rsp+B8h] [rbp-48h]
  PULONG v68; // [rsp+C0h] [rbp-40h]
  PVOID BaseAddress; // [rsp+C8h] [rbp-38h]
  PVOID Heap_0; // [rsp+D0h] [rbp-30h]
  PULONG v71; // [rsp+D8h] [rbp-28h]
  __int128 v72; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v73; // [rsp+F0h] [rbp-10h]
  int v74; // [rsp+F8h] [rbp-8h]
  wchar_t String[4]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v76; // [rsp+108h] [rbp+8h]

  v68 = ReturnLength;
  String1 = Languages;
  v4 = 0;
  v71 = NumberOfLanguages;
  v65 = 0;
  v5 = Flags & 0x30;
  v62 = 0;
  PreferredLanguages = 0LL;
  MergedPrefLanguages = 0LL;
  v53 = 0;
  v7 = Flags;
  v64 = 0LL;
  v8 = 0LL;
  v58 = 0LL;
  *(_QWORD *)Lcid = 0LL;
  BaseAddress = 0LL;
  v55 = 0LL;
  v54 = 0;
  v66 = 0LL;
  v61 = v5;
  if ( ReturnLength )
    v65 = *ReturnLength;
  if ( (Flags & 0xFFFEFC83) != 0 )
    goto LABEL_176;
  if ( (Flags & 8) != 0 )
  {
    if ( (Flags & 4) != 0 )
    {
      PreferredUILanguages = -1073741811;
      goto LABEL_177;
    }
  }
  else if ( (Flags & 4) == 0 )
  {
    v7 = Flags | 8;
  }
  if ( (v7 & 0x10000) != 0 )
  {
    if ( (v7 & 0x40) != 0 )
    {
      PreferredUILanguages = -1073741811;
      goto LABEL_177;
    }
    if ( (v7 & 0x30) != 0 )
      goto LABEL_176;
    v7 |= 0x30u;
  }
  if ( (v7 & 0x40) == 0 )
  {
    if ( (v7 & 0x10) == 0 && (v7 & 0x20) == 0 )
      v7 |= 0x20u;
    goto LABEL_16;
  }
  if ( (v7 & 0x10) != 0 )
  {
LABEL_176:
    PreferredUILanguages = -1073741811;
    goto LABEL_177;
  }
  if ( (v7 & 0x20) != 0 )
  {
    PreferredUILanguages = -1073741811;
    goto LABEL_177;
  }
LABEL_16:
  if ( !ReturnLength )
  {
    PreferredUILanguages = -1073741811;
    goto LABEL_177;
  }
  if ( *ReturnLength && !Languages )
    return -1073741811;
  if ( (v7 & 0x300) == 0x300 )
  {
    PreferredUILanguages = -1073741811;
    goto LABEL_177;
  }
  result = RtlpCreateProcessRegistryInfo(&v55);
  if ( result >= 0 )
  {
    if ( v5 == 48 )
    {
      v8 = v55;
      if ( *((_DWORD *)v55 + 3) == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo() < 0 )
        goto LABEL_23;
      v55 = 0LL;
      PreferredUILanguages = RtlpCreateProcessRegistryInfo(&v55);
      if ( PreferredUILanguages < 0 )
        goto LABEL_181;
    }
    v8 = v55;
LABEL_23:
    if ( (v7 & 0x10000) == 0 )
    {
      if ( NtCurrentTeb()->PreferredLanguages )
        PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
LABEL_26:
      if ( (v7 & 0x40) == 0 )
      {
        PreferredUILanguages = InitializeTEBUserLangList(0LL, v8);
        if ( PreferredUILanguages < 0
          || ((v64 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages, !*((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1))
            ? (v11 = *((_QWORD *)v8 + 6))
            : (v11 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)),
              v66 = v11,
              PreferredUILanguages = RtlpSetProcUserMachineLangList(v8, 0LL),
              PreferredUILanguages < 0) )
        {
          v4 = 0;
          goto LABEL_177;
        }
        v58 = *((_QWORD *)v8 + 7);
      }
      if ( NtCurrentTeb()->MergedPrefLanguages )
      {
        v53 = 1;
        if ( v5 == 48 )
        {
          if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
            && NtCurrentTeb()->MuiGeneration == *((_DWORD *)v8 + 4) )
          {
            MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
LABEL_37:
            v12 = 0;
            v52 = 0;
            v13 = 0;
            PreferredUILanguages = 0;
            if ( !MergedPrefLanguages )
            {
              v48 = v68;
              if ( String1 )
              {
                if ( *v68 < 2 )
                  PreferredUILanguages = -1073741789;
                else
                  *(_DWORD *)String1 = 0;
              }
              *v48 = 2;
              goto LABEL_73;
            }
            v14 = 0;
            v15 = v68;
            v16 = 0;
            LODWORD(v58) = 0;
            v17 = *v68;
            LODWORD(v55) = *v68;
            if ( !MergedPrefLanguages[2] )
              goto LABEL_67;
            v18 = v7 & 4;
            while ( 1 )
            {
              v72 = 0LL;
              v19 = 0LL;
              v20 = (unsigned __int16 *)(*((_QWORD *)MergedPrefLanguages + 3) + 6LL * v16);
              v73 = 0LL;
              v74 = 0;
              if ( !v20 || !v8 )
                goto LABEL_65;
              v21 = *v20;
              if ( v21 == 1 )
                break;
              v29 = v21 - 2;
              if ( v29 )
              {
                if ( v29 == 1 )
                {
                  WORD3(v72) = v20[2];
                  goto LABEL_44;
                }
              }
              else
              {
                v19 = (__int128 *)(*(_QWORD *)(*((_QWORD *)v8 + 3) + 16LL) + 28LL * (__int16)v20[2]);
              }
LABEL_45:
              Lcid[0] = 0;
              v60 = 0LL;
              if ( !v18 )
              {
                if ( v19 )
                {
                  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
                  if ( Heap_0 )
                  {
                    v30 = *((__int16 *)v19 + 3);
                    if ( (__int16)v30 <= 0 )
                    {
                      v60.Buffer = (wchar_t *)Heap_0;
                      v31 = *((unsigned __int16 *)v19 + 2);
                      *(_DWORD *)&v60.Length = 11141120;
                      if ( RtlLCIDToCultureName(v31, &v60) )
                      {
                        Buffer = v60.Buffer;
                        Src = v60.Buffer;
                        goto LABEL_93;
                      }
                      Lcid[0] = -1073741595;
LABEL_112:
                      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
                      v23 = Lcid[0];
LABEL_113:
                      v12 = v52;
                      v14 = v58;
                      goto LABEL_63;
                    }
                    Buffer = (void *)(*(_QWORD *)(*((_QWORD *)v8 + 4) + 24LL)
                                    + 2LL * *(__int16 *)(*(_QWORD *)(*((_QWORD *)v8 + 4) + 16LL) + 2 * v30));
                    Src = Buffer;
                    if ( Buffer )
                    {
                      Length = 2 * wcslen((const wchar_t *)Buffer);
                      if ( Length >= 0xFFFE )
                        Length = 65532LL;
                      Buffer = Src;
                      v60.MaximumLength = Length + 2;
                    }
                    else
                    {
LABEL_93:
                      Length = v60.Length;
                    }
                    v57 = Length;
                    if ( v13 && v13 <= (unsigned int)v55 )
                    {
                      if ( (unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, (wchar_t *)Buffer, v13) )
                        goto LABEL_112;
                      LOWORD(Length) = v57;
                    }
                    LODWORD(v57) = v13 + ((unsigned __int16)Length >> 1);
                    v34 = v57 + 1;
                    if ( String1 && v13 < v34 )
                    {
                      if ( v34 < (unsigned int)v55 )
                      {
                        memmove(&String1[v13], Src, (unsigned __int16)Length);
                        String1[(unsigned int)v57] = 0;
                        goto LABEL_111;
                      }
                    }
                    else if ( v34 < (unsigned int)v55 || !String1 )
                    {
                      goto LABEL_111;
                    }
                    Lcid[0] = -1073741789;
LABEL_111:
                    v13 = v34;
                    goto LABEL_112;
                  }
                  v23 = -1073741801;
                  goto LABEL_148;
                }
                goto LABEL_151;
              }
              *(_QWORD *)String = 0LL;
              v76 = 0;
              if ( !v19 )
                goto LABEL_151;
              if ( *((_WORD *)v19 + 2) )
              {
                v22 = *((unsigned __int16 *)v19 + 2);
                goto LABEL_49;
              }
              v49 = *((__int16 *)v19 + 3);
              if ( (__int16)v49 > 0 )
              {
                v50 = (wchar_t *)(*(_QWORD *)(*((_QWORD *)v8 + 4) + 24LL)
                                + 2LL * *(__int16 *)(*(_QWORD *)(*((_QWORD *)v8 + 4) + 16LL) + 2 * v49));
                v60.Buffer = v50;
                if ( v50 )
                {
                  v51 = 2 * wcslen(v50);
                  if ( v51 >= 0xFFFE )
                    LOWORD(v51) = -4;
                  v60.Length = v51;
                  v60.MaximumLength = v51 + 2;
                }
                if ( RtlCultureNameToLCID(&v60, Lcid) )
                {
                  v22 = Lcid[0];
LABEL_49:
                  v23 = RtlIntegerToUnicode(v22, 0x10u, -4, (char *)String);
                  Lcid[0] = v23;
                  if ( v23 < 0 )
                    goto LABEL_113;
                  *(_QWORD *)&v60.Length = 0LL;
                  v60.Buffer = String;
                  v24 = 2 * wcslen(String);
                  if ( v24 >= 0xFFFE )
                    v24 = 65532LL;
                  Src = (void *)v24;
                  v60.MaximumLength = v24 + 2;
                  if ( v22 == 4096 || !v13 || v13 > (unsigned int)v55 )
                    goto LABEL_57;
                  if ( !(unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, String, v13) )
                  {
                    LOWORD(v24) = (_WORD)Src;
LABEL_57:
                    LODWORD(v57) = v13 + ((unsigned __int16)v24 >> 1);
                    v25 = v57 + 1;
                    if ( String1 && v13 < v25 )
                    {
                      if ( v25 < (unsigned int)v55 )
                      {
                        memmove(&String1[v13], String, (unsigned __int16)v24);
                        String1[(unsigned int)v57] = 0;
                        goto LABEL_61;
                      }
LABEL_201:
                      v23 = -1073741789;
                    }
                    else
                    {
                      if ( v25 >= (unsigned int)v55 && String1 )
                        goto LABEL_201;
LABEL_61:
                      v23 = Lcid[0];
                    }
                    v14 = v58;
                    v13 = v25;
                    v12 = v52;
                    goto LABEL_63;
                  }
                  v23 = Lcid[0];
LABEL_148:
                  v14 = v58;
                  v12 = v52;
                  goto LABEL_63;
                }
                v14 = v58;
                v12 = v52;
LABEL_151:
                v23 = -1073741811;
                goto LABEL_63;
              }
              v23 = -1073741595;
LABEL_63:
              if ( v23 < 0 )
              {
                if ( v23 != -1073741789 )
                  goto LABEL_65;
                v12 = 1;
                v52 = 1;
              }
              LODWORD(v58) = ++v14;
LABEL_65:
              if ( ++v16 >= MergedPrefLanguages[2] )
              {
                v15 = v68;
                v17 = (unsigned int)v55;
LABEL_67:
                v26 = String1;
                if ( String1 )
                {
                  if ( v13 >= v17 )
                    v12 = 1;
                  else
                    String1[v13] = 0;
                }
                v27 = v13 + 1;
                if ( !v14 )
                {
                  if ( v26 )
                  {
                    if ( (unsigned int)v27 >= v17 )
                      v12 = 1;
                    else
                      v26[v27] = 0;
                  }
                  LODWORD(v27) = v13 + 2;
                }
                v28 = v71;
                *v15 = v27;
                PreferredUILanguages = v12 != 0 ? 0xC0000023 : 0;
                if ( v28 )
                  *v28 = v14;
LABEL_73:
                if ( ((int)(PreferredUILanguages + 0x80000000) < 0 || PreferredUILanguages == -1073741789) && v61 == 48 )
                {
                  if ( !MergedPrefLanguages[22] )
                    RtlpComputeLangListCheckSum(MergedPrefLanguages);
                  if ( !v53 )
                  {
                    if ( (MergedPrefLanguages[20] & 0x40) == 0 )
                    {
                      RtlpMUIRegPatchLicenseInfortmation(MergedPrefLanguages);
                      if ( !PreferredLanguages && (*(_BYTE *)(v64 + 40) & 0x40) != 0 && v66 == *((_QWORD *)v8 + 6) )
                        RtlpSetProcMergedLangList(v8, MergedPrefLanguages);
                    }
                    v43 = v62;
                    NtCurrentTeb()->MergedPrefLanguages = MergedPrefLanguages;
                    NtCurrentTeb()->MuiGeneration = v43;
                  }
                  goto LABEL_78;
                }
LABEL_143:
                if ( MergedPrefLanguages )
                {
                  if ( MergedPrefLanguages == NtCurrentTeb()->MergedPrefLanguages )
                    NtCurrentTeb()->MergedPrefLanguages = 0LL;
                  RtlpMuiRegFreeLanguageList(MergedPrefLanguages);
                }
LABEL_78:
                if ( PreferredUILanguages >= 0 )
                {
                  v4 = v54;
                  goto LABEL_80;
                }
LABEL_197:
                v4 = v54;
LABEL_177:
                if ( String1 && v65 )
                {
                  if ( v65 == 1 )
                    *String1 = 0;
                  else
                    *(_DWORD *)String1 = 0;
                }
LABEL_80:
                if ( v4 && v8 )
                  RtlpMuiFreeLangRegistryInfo(v8);
                if ( BaseAddress )
                {
                  if ( (*((_BYTE *)BaseAddress + 40) & 0x40) == 0 )
                    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
                }
                return PreferredUILanguages;
              }
            }
            WORD2(v72) = v20[2];
LABEL_44:
            v19 = &v72;
            goto LABEL_45;
          }
          v53 = 0;
          RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
          v35 = v7 & 0x40;
          NtCurrentTeb()->MergedPrefLanguages = 0LL;
LABEL_118:
          if ( (v7 & 0x10000) == 0 )
          {
            RtlpInitMuiCriticalSection();
            RtlEnterCriticalSection(&RegistryInfoCritSect);
            v36 = (void *)RtlpMuiRegDupLanguageList(*((_QWORD *)v8 + 9));
            BaseAddress = v36;
            v62 = *((_DWORD *)v8 + 4);
            RtlLeaveCriticalSection(&RegistryInfoCritSect);
            v37 = v58;
LABEL_120:
            if ( !v8 )
            {
              PreferredUILanguages = -1073741811;
              goto LABEL_143;
            }
            v38 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xD6uLL);
            MergedPrefLanguages = v38;
            if ( v38 )
            {
              *(_DWORD *)v38 = 214;
              *((_DWORD *)v38 + 1) = 1638400;
              v38[8] = 0;
              *((_QWORD *)v38 + 3) = v38 + 64;
              *((_DWORD *)v38 + 10) = 0;
              *((_QWORD *)v38 + 2) = v8;
            }
            else
            {
              MergedPrefLanguages = 0LL;
            }
            v57 = (size_t)MergedPrefLanguages;
            if ( !MergedPrefLanguages )
            {
              PreferredUILanguages = -1073741801;
              goto LABEL_78;
            }
            if ( v35 )
            {
              v44 = LdrpMergeLangFallbackLists(v7, (__int64)v8, &v57, PreferredLanguages, 0LL, v64, v37, v66, 0);
              MergedPrefLanguages = (_WORD *)v57;
              PreferredUILanguages = v44;
            }
            else
            {
              *(_QWORD *)Lcid = RtlpMuiRegCreateLanguageList(25LL, 0LL, v8);
              v39 = LdrpMergeLangFallbackLists(v7, (__int64)v8, Lcid, PreferredLanguages, v36, v64, v37, v66, 0);
              v40 = *(void **)Lcid;
              PreferredUILanguages = v39;
              if ( v39 >= 0 )
              {
                v41 = v61 == 48 || (v7 & 0x10) != 0;
                v42 = RtlpAddNeutralsToMergedList(v41, (__int64)v8, *(__int64 *)Lcid, &v57);
                MergedPrefLanguages = (_WORD *)v57;
                PreferredUILanguages = v42;
              }
              RtlpMuiRegFreeLanguageList(v40);
            }
            if ( PreferredUILanguages < 0 )
              goto LABEL_143;
            goto LABEL_37;
          }
          v37 = v58;
LABEL_160:
          v36 = 0LL;
          goto LABEL_120;
        }
      }
      else
      {
        v53 = 0;
      }
      v35 = v7 & 0x40;
      if ( v61 == 48 && !PreferredLanguages )
      {
        v47 = *((_QWORD *)v8 + 12);
        if ( v47 )
        {
          if ( v64 && (*(_BYTE *)(v64 + 40) & 0x40) != 0 && *(char *)(v47 + 40) >= 0 )
          {
            MergedPrefLanguages = (_WORD *)*((_QWORD *)v8 + 12);
            NtCurrentTeb()->MuiGeneration = *((_DWORD *)v8 + 4);
            goto LABEL_37;
          }
        }
      }
      goto LABEL_118;
    }
    v52 = 0;
    PreferredLanguages = 0LL;
    if ( *((_DWORD *)v8 + 3) == MEMORY[0x7FFE03A4] )
      goto LABEL_26;
    v55 = 0LL;
    PreferredUILanguages = RtlpMuiRegCreateAndLoadRegistryInfo(&v55);
    if ( PreferredUILanguages >= 0 )
    {
      v8 = v55;
      v4 = 1;
      v46 = (__int64 *)((char *)v55 + 56);
      v54 = 1;
      if ( !*((_QWORD *)v55 + 7) )
      {
        PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                 (_DWORD)v55,
                                 v45,
                                 0,
                                 3,
                                 (__int64)&v52,
                                 (__int64)v55 + 56);
        if ( PreferredUILanguages < 0 && !v52 )
          goto LABEL_177;
      }
      if ( !*((_QWORD *)v8 + 8) )
      {
        v52 = 0;
        PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                 (_DWORD)v8,
                                 v45,
                                 1,
                                 3,
                                 (__int64)&v52,
                                 (__int64)v8 + 64);
        if ( PreferredUILanguages < 0 && !v52 )
          goto LABEL_197;
      }
      v37 = *v46;
      v35 = v7 & 0x40;
      v64 = *((_QWORD *)v8 + 8);
      goto LABEL_160;
    }
LABEL_181:
    v8 = v55;
    goto LABEL_177;
  }
  return result;
}
