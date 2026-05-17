/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x180007380
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180006B50 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x180008130 (LdrpSetThreadPreferredLangList.c)
 *     RtlGetFileMUIPath @ 0x180035550 (RtlGetFileMUIPath.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006F580 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlpAddNeutralsToMergedList @ 0x180004B30 (RtlpAddNeutralsToMergedList.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180006B20 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpInitMuiCriticalSection @ 0x1800080C0 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     InitializeTEBUserLangList @ 0x180008900 (InitializeTEBUserLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180008EA0 (RtlpSetProcUserMachineLangList.c)
 *     RtlpComputeLangListCheckSum @ 0x180009010 (RtlpComputeLangListCheckSum.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18000A810 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18000AF40 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000BB60 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003AA20 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlIntegerToUnicode @ 0x18003D010 (RtlIntegerToUnicode.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpMuiRegDupLanguageList @ 0x18006F730 (RtlpMuiRegDupLanguageList.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800DDB14 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800DDBD0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x18010279C (RtlpSetProcMergedLangList.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlGetThreadPreferredUILanguages(int a1, _DWORD *a2, wchar_t *a3, _DWORD *a4)
{
  char v4; // r14
  int v5; // r12d
  _WORD *MergedPrefLanguages; // rsi
  int v7; // edi
  __int64 v8; // r13
  signed int PreferredUILanguages; // ebx
  __int64 result; // rax
  __int64 v11; // rax
  char v12; // r11
  unsigned int v13; // r12d
  int v14; // r8d
  _DWORD *v15; // rdx
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
  _DWORD *v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  unsigned int v31; // ecx
  wchar_t *v32; // rax
  size_t v33; // rdx
  unsigned int v34; // r14d
  int v35; // r12d
  __int64 v36; // r15
  __int64 v37; // r14
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // r14
  char v41; // cl
  signed int v42; // eax
  unsigned int v43; // ecx
  signed int v44; // eax
  int v45; // edx
  __int64 *v46; // r15
  __int64 v47; // rax
  _DWORD *v48; // rax
  __int64 v49; // rax
  wchar_t *v50; // rcx
  size_t v51; // rax
  char v52; // [rsp+50h] [rbp-B0h] BYREF
  char v53; // [rsp+51h] [rbp-AFh]
  char v54; // [rsp+52h] [rbp-AEh]
  __int64 v55; // [rsp+58h] [rbp-A8h] BYREF
  __int64 LanguageList; // [rsp+60h] [rbp-A0h] BYREF
  size_t v57; // [rsp+68h] [rbp-98h] BYREF
  __int64 v58; // [rsp+70h] [rbp-90h]
  wchar_t *String1; // [rsp+78h] [rbp-88h]
  wchar_t *String2[2]; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+90h] [rbp-70h]
  unsigned int v62; // [rsp+94h] [rbp-6Ch]
  void *PreferredLanguages; // [rsp+98h] [rbp-68h]
  __int64 v64; // [rsp+A0h] [rbp-60h]
  int v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h]
  void *Src; // [rsp+B8h] [rbp-48h]
  _DWORD *v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  wchar_t *Heap_0; // [rsp+D0h] [rbp-30h]
  _DWORD *v71; // [rsp+D8h] [rbp-28h]
  __int128 v72; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v73; // [rsp+F0h] [rbp-10h]
  int v74; // [rsp+F8h] [rbp-8h]
  wchar_t String[4]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v76; // [rsp+108h] [rbp+8h]

  v68 = a4;
  String1 = a3;
  v4 = 0;
  v71 = a2;
  v65 = 0;
  v5 = a1 & 0x30;
  v62 = 0;
  PreferredLanguages = 0LL;
  MergedPrefLanguages = 0LL;
  v53 = 0;
  v7 = a1;
  v64 = 0LL;
  v8 = 0LL;
  v58 = 0LL;
  LanguageList = 0LL;
  v69 = 0LL;
  v55 = 0LL;
  v54 = 0;
  v66 = 0LL;
  v61 = v5;
  if ( a4 )
    v65 = *a4;
  if ( (a1 & 0xFFFEFC83) != 0 )
    goto LABEL_176;
  if ( (a1 & 8) != 0 )
  {
    if ( (a1 & 4) != 0 )
    {
      PreferredUILanguages = -1073741811;
      goto LABEL_177;
    }
  }
  else if ( (a1 & 4) == 0 )
  {
    v7 = a1 | 8;
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
  if ( !a4 )
  {
    PreferredUILanguages = -1073741811;
    goto LABEL_177;
  }
  if ( *a4 && !a3 )
    return (unsigned int)-1073741811;
  if ( (v7 & 0x300) == 0x300 )
  {
    PreferredUILanguages = -1073741811;
    goto LABEL_177;
  }
  result = RtlpCreateProcessRegistryInfo(&v55);
  if ( (int)result >= 0 )
  {
    if ( v5 == 48 )
    {
      v8 = v55;
      if ( *(_DWORD *)(v55 + 12) == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo() < 0 )
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
            ? (v11 = *(_QWORD *)(v8 + 48))
            : (v11 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)),
              v66 = v11,
              PreferredUILanguages = RtlpSetProcUserMachineLangList(v8, 0LL),
              PreferredUILanguages < 0) )
        {
          v4 = 0;
          goto LABEL_177;
        }
        v58 = *(_QWORD *)(v8 + 56);
      }
      if ( NtCurrentTeb()->MergedPrefLanguages )
      {
        v53 = 1;
        if ( v5 == 48 )
        {
          if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
            && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v8 + 16) )
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
                if ( *v68 < 2u )
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
                v19 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 16LL) + 28LL * (__int16)v20[2]);
              }
LABEL_45:
              LODWORD(LanguageList) = 0;
              *(_OWORD *)String2 = 0LL;
              if ( !v18 )
              {
                if ( v19 )
                {
                  Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 170LL);
                  if ( Heap_0 )
                  {
                    v30 = *((__int16 *)v19 + 3);
                    if ( (__int16)v30 <= 0 )
                    {
                      String2[1] = Heap_0;
                      v31 = *((unsigned __int16 *)v19 + 2);
                      LODWORD(String2[0]) = 11141120;
                      if ( (unsigned __int8)RtlLCIDToCultureName(v31, (__int64)String2) )
                      {
                        v32 = String2[1];
                        Src = String2[1];
                        goto LABEL_93;
                      }
                      LODWORD(LanguageList) = -1073741595;
LABEL_112:
                      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, Heap_0);
                      v23 = LanguageList;
LABEL_113:
                      v12 = v52;
                      v14 = v58;
                      goto LABEL_63;
                    }
                    v32 = (wchar_t *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 24LL)
                                    + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 16LL) + 2 * v30));
                    Src = v32;
                    if ( v32 )
                    {
                      v33 = 2 * wcslen(v32);
                      if ( v33 >= 0xFFFE )
                        v33 = 65532LL;
                      v32 = (wchar_t *)Src;
                      WORD1(String2[0]) = v33 + 2;
                    }
                    else
                    {
LABEL_93:
                      v33 = LOWORD(String2[0]);
                    }
                    v57 = v33;
                    if ( v13 && v13 <= (unsigned int)v55 )
                    {
                      if ( (unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, v32) )
                        goto LABEL_112;
                      LOWORD(v33) = v57;
                    }
                    LODWORD(v57) = v13 + ((unsigned __int16)v33 >> 1);
                    v34 = v57 + 1;
                    if ( String1 && v13 < v34 )
                    {
                      if ( v34 < (unsigned int)v55 )
                      {
                        memmove(&String1[v13], Src, (unsigned __int16)v33);
                        String1[(unsigned int)v57] = 0;
                        goto LABEL_111;
                      }
                    }
                    else if ( v34 < (unsigned int)v55 || !String1 )
                    {
                      goto LABEL_111;
                    }
                    LODWORD(LanguageList) = -1073741789;
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
                v50 = (wchar_t *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 24LL)
                                + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 16LL) + 2 * v49));
                String2[1] = v50;
                if ( v50 )
                {
                  v51 = 2 * wcslen(v50);
                  if ( v51 >= 0xFFFE )
                    LOWORD(v51) = -4;
                  LOWORD(String2[0]) = v51;
                  WORD1(String2[0]) = v51 + 2;
                }
                if ( RtlCultureNameToLCID((unsigned __int16 *)String2, (int *)&LanguageList) )
                {
                  v22 = LanguageList;
LABEL_49:
                  v23 = RtlIntegerToUnicode(v22, 16LL, 4294967292LL, String);
                  LODWORD(LanguageList) = v23;
                  if ( v23 < 0 )
                    goto LABEL_113;
                  String2[0] = 0LL;
                  String2[1] = String;
                  v24 = 2 * wcslen(String);
                  if ( v24 >= 0xFFFE )
                    v24 = 65532LL;
                  Src = (void *)v24;
                  WORD1(String2[0]) = v24 + 2;
                  if ( v22 == 4096 || !v13 || v13 > (unsigned int)v55 )
                    goto LABEL_57;
                  if ( !(unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, String) )
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
                      v23 = LanguageList;
                    }
                    v14 = v58;
                    v13 = v25;
                    v12 = v52;
                    goto LABEL_63;
                  }
                  v23 = LanguageList;
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
                v17 = v55;
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
                      if ( !PreferredLanguages && (*(_BYTE *)(v64 + 40) & 0x40) != 0 && v66 == *(_QWORD *)(v8 + 48) )
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
                  RtlpMuiRegFreeLanguageList((__int64)MergedPrefLanguages);
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
                if ( v69 )
                {
                  if ( (*(_BYTE *)(v69 + 40) & 0x40) == 0 )
                    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v69);
                }
                return (unsigned int)PreferredUILanguages;
              }
            }
            WORD2(v72) = v20[2];
LABEL_44:
            v19 = &v72;
            goto LABEL_45;
          }
          v53 = 0;
          RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->MergedPrefLanguages);
          v35 = v7 & 0x40;
          NtCurrentTeb()->MergedPrefLanguages = 0LL;
LABEL_118:
          if ( (v7 & 0x10000) == 0 )
          {
            RtlpInitMuiCriticalSection();
            RtlEnterCriticalSection(&RegistryInfoCritSect);
            v36 = RtlpMuiRegDupLanguageList(*(_QWORD *)(v8 + 72));
            v69 = v36;
            v62 = *(_DWORD *)(v8 + 16);
            RtlLeaveCriticalSection(&RegistryInfoCritSect);
            v37 = v58;
LABEL_120:
            if ( !v8 )
            {
              PreferredUILanguages = -1073741811;
              goto LABEL_143;
            }
            v38 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 214LL);
            MergedPrefLanguages = (_WORD *)v38;
            if ( v38 )
            {
              *(_DWORD *)v38 = 214;
              *(_DWORD *)(v38 + 4) = 1638400;
              *(_BYTE *)(v38 + 8) = 0;
              *(_QWORD *)(v38 + 24) = v38 + 64;
              *(_DWORD *)(v38 + 40) = 0;
              *(_QWORD *)(v38 + 16) = v8;
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
              v44 = LdrpMergeLangFallbackLists(v7, v8, &v57, PreferredLanguages, 0LL, v64, v37, v66, 0);
              MergedPrefLanguages = (_WORD *)v57;
              PreferredUILanguages = v44;
            }
            else
            {
              LanguageList = RtlpMuiRegCreateLanguageList(25LL, 0LL, v8);
              v39 = LdrpMergeLangFallbackLists(v7, v8, &LanguageList, PreferredLanguages, v36, v64, v37, v66, 0);
              v40 = LanguageList;
              PreferredUILanguages = v39;
              if ( v39 >= 0 )
              {
                v41 = v61 == 48 || (v7 & 0x10) != 0;
                v42 = RtlpAddNeutralsToMergedList(v41, v8, LanguageList, &v57);
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
        v47 = *(_QWORD *)(v8 + 96);
        if ( v47 )
        {
          if ( v64 && (*(_BYTE *)(v64 + 40) & 0x40) != 0 && *(char *)(v47 + 40) >= 0 )
          {
            MergedPrefLanguages = *(_WORD **)(v8 + 96);
            NtCurrentTeb()->MuiGeneration = *(_DWORD *)(v8 + 16);
            goto LABEL_37;
          }
        }
      }
      goto LABEL_118;
    }
    v52 = 0;
    PreferredLanguages = 0LL;
    if ( *(_DWORD *)(v8 + 12) == MEMORY[0x7FFE03A4] )
      goto LABEL_26;
    v55 = 0LL;
    PreferredUILanguages = RtlpMuiRegCreateAndLoadRegistryInfo(&v55);
    if ( PreferredUILanguages >= 0 )
    {
      v8 = v55;
      v4 = 1;
      v46 = (__int64 *)(v55 + 56);
      v54 = 1;
      if ( !*(_QWORD *)(v55 + 56) )
      {
        PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(v55, v45, 0, 3, (__int64)&v52, v55 + 56);
        if ( PreferredUILanguages < 0 && !v52 )
          goto LABEL_177;
      }
      if ( !*(_QWORD *)(v8 + 64) )
      {
        v52 = 0;
        PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(v8, v45, 1, 3, (__int64)&v52, v8 + 64);
        if ( PreferredUILanguages < 0 && !v52 )
          goto LABEL_197;
      }
      v37 = *v46;
      v35 = v7 & 0x40;
      v64 = *(_QWORD *)(v8 + 64);
      goto LABEL_160;
    }
LABEL_181:
    v8 = v55;
    goto LABEL_177;
  }
  return result;
}
