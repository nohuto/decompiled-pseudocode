/*
 * XREFs of RtlpSetPreferredUILanguages @ 0x1801431B0
 * Callers:
 *     RtlpSetInstallLanguage @ 0x180142B80 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlUnicodeStringToInteger @ 0x1800068F0 (RtlUnicodeStringToInteger.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x180008818 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18000C970 (OpenGlobalizationUserSettingsKey.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpOpenKey @ 0x1800DC350 (LdrpOpenKey.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800DDB14 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800DDBD0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x1800ED7C0 (RtlpInitializeLangRegistryInfo.c)
 *     LdrpCreateKey @ 0x180141E10 (LdrpCreateKey.c)
 *     RtlStringCchCatW @ 0x180141E6C (RtlStringCchCatW.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x180141F20 (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801424F0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetMultiStringLength @ 0x180142AFC (RtlpGetMultiStringLength.c)
 *     RtlpSetInstallLanguage @ 0x180142B80 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x18014303C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x18014D4EC (RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwSetValueKey @ 0x18015FB30 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x180160F10 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x180161AD0 (NtQueryInstallUILanguage.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpSetPreferredUILanguages(int a1, char *a2, _DWORD *a3)
{
  __int64 v3; // rax
  char *v4; // r12
  __int16 v5; // di
  unsigned int v6; // r15d
  unsigned int v7; // esi
  unsigned int v8; // r14d
  __int64 v9; // r13
  int InstallUILanguage; // ebx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // cx
  __int16 v14; // si
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  wchar_t *Heap_0; // rax
  const wchar_t *v21; // r13
  unsigned __int64 v22; // r14
  int Length; // esi
  char *Buffer; // r13
  unsigned __int16 MaximumLength; // r15
  unsigned int v26; // esi
  const WCHAR *v27; // r14
  unsigned int v28; // ecx
  int v29; // eax
  unsigned __int16 v30; // si
  __int64 v31; // rax
  unsigned int v32; // ecx
  int FallbackInstalledLanguageInfoByLangId; // eax
  __int128 *v34; // rax
  _WORD *v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rax
  unsigned int v38; // esi
  __int64 v39; // rcx
  int v40; // eax
  const WCHAR *v41; // r14
  _WORD *v42; // rsi
  unsigned int i; // r15d
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  wchar_t *v49; // rcx
  __int16 v50; // si
  HANDLE v51; // rcx
  __int64 v52; // rax
  int v53; // eax
  char *v54; // rcx
  __int64 v55; // rax
  unsigned int v57; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v58[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v59[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v60; // [rsp+3Ch] [rbp-C4h]
  __int64 v61; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v62; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v63; // [rsp+58h] [rbp-A8h]
  unsigned int v64; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int16 v65[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v66; // [rsp+64h] [rbp-9Ch]
  UNICODE_STRING v67; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v68; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-60h] BYREF
  int v71; // [rsp+A8h] [rbp-58h]
  unsigned int v72; // [rsp+ACh] [rbp-54h]
  int v73; // [rsp+B0h] [rbp-50h]
  __int128 *v74; // [rsp+B8h] [rbp-48h]
  HANDLE v75; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE v76; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t *v77; // [rsp+D0h] [rbp-30h]
  __int64 v78; // [rsp+D8h] [rbp-28h]
  HANDLE v79; // [rsp+E0h] [rbp-20h] BYREF
  char *v80; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v81; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t *v82; // [rsp+F8h] [rbp-8h]
  _DWORD *v83; // [rsp+100h] [rbp+0h]
  __int128 v84; // [rsp+108h] [rbp+8h] BYREF
  __int64 v85; // [rsp+118h] [rbp+18h]
  int v86; // [rsp+120h] [rbp+20h]

  v83 = a3;
  v3 = 0LL;
  v79 = 0LL;
  v76 = 0LL;
  v75 = 0LL;
  Handle = 0LL;
  v4 = a2;
  v68 = 0;
  LOBYTE(v5) = a1;
  v66 = 0;
  v6 = 0;
  v72 = 0;
  v7 = 0;
  v57 = 0;
  v8 = 0;
  v58[0] = 0;
  v9 = 0LL;
  v64 = 0;
  v59[0] = 0;
  v74 = 0LL;
  v85 = 0LL;
  v86 = 0;
  v78 = 0LL;
  v60 = 0;
  v61 = 0LL;
  v77 = 0LL;
  v80 = 0LL;
  v65[0] = 0;
  v82 = 0LL;
  v81 = 0LL;
  v62 = 0LL;
  DestinationString = 0LL;
  v67 = 0LL;
  v84 = 0LL;
  if ( !a3 )
  {
    InstallUILanguage = -1073741811;
    goto LABEL_187;
  }
  v11 = 18440;
  if ( a1 )
    v11 = a1;
  LOBYTE(v5) = v11;
  if ( (v11 & 0xFFFF0363) != 0
    || (v11 & 0x400) != 0 && (!a2 || (v11 & 0xFFFFFBF3) != 0)
    || (v11 & 0x8000) != 0 && (!a2 || (v11 & 0xFFFF6773) != 0)
    || (v11 & 0xC) == 0xC
    || (v11 & 0x1800) == 0x1800
    || (v11 & 0x10) != 0 && (v11 & 0x7080) != 0 )
  {
    InstallUILanguage = -1073741811;
    goto LABEL_186;
  }
  v12 = v11 | 8;
  if ( (v11 & 0xC) != 0 )
    v12 = v11;
  v13 = v12 | 0x4000;
  if ( (v12 & 0xE410) != 0 )
    v13 = v12;
  v14 = v13 | 0x800;
  if ( (v13 & 0x1C00) != 0 )
    v14 = v13;
  if ( (v14 & 0x80u) == 0 )
    v15 = RtlpCreateProcessRegistryInfo(&v61);
  else
    v15 = RtlpInitializeLangRegistryInfo(&v61);
  InstallUILanguage = v15;
  if ( v15 >= 0 )
  {
    if ( !v4 )
    {
      MaximumLength = 4;
      *(_DWORD *)&v67.Length = 262146;
      Buffer = (char *)&unk_18018B4DC;
      v5 = v14;
      v67.Buffer = (wchar_t *)&unk_18018B4DC;
      v71 = 2;
      goto LABEL_111;
    }
    if ( (v14 & 4) != 0 )
      v17 = 4LL;
    else
      v17 = 85LL;
    if ( (int)RtlpCheckMuiMultiStringSafe(v4, v17) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter: %s, for function: %s is not a valid multi-string!\n",
        v4,
        "RtlpSetPreferredUILanguages");
    v5 = v14;
    if ( (v14 & 0x400) != 0 )
    {
      InstallUILanguage = NtQueryInstallUILanguage(v65, v18, v19);
      if ( InstallUILanguage < 0 )
        goto LABEL_175;
      Heap_0 = (wchar_t *)RtlAllocateHeap_0();
      v82 = Heap_0;
      v21 = Heap_0;
      if ( !Heap_0 )
      {
        InstallUILanguage = -1073741801;
        v9 = 0LL;
        goto LABEL_175;
      }
      v62.Buffer = Heap_0;
      *(_DWORD *)&v62.Length = 11141120;
      if ( !(unsigned __int8)RtlLCIDToCultureName(v65[0], (__int64)&v62) )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_171;
      }
      v22 = (unsigned __int64)v62.Length >> 1;
      if ( (v14 & 4) != 0 )
      {
        InstallUILanguage = RtlpConvertLCIDsToCultureNames((WCHAR *)v4, (__int64 *)&v80);
        if ( InstallUILanguage < 0 )
          goto LABEL_168;
        v4 = v80;
        v5 = v14 & 0xFFF3 | 8;
      }
      InstallUILanguage = RtlpGetMultiStringLength(v4, v58, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_168;
      memmove((void *)&v21[v22 + 1], v4, 2LL * ((unsigned int)v58[0] + 1));
      InstallUILanguage = RtlpAutoCompleteLanguageFallback(v61, v21);
      if ( InstallUILanguage < 0 )
        goto LABEL_168;
      v4 = (char *)v21;
    }
    InstallUILanguage = RtlpGetMultiStringLength(v4, &v67, &v57);
    if ( InstallUILanguage < 0 )
      goto LABEL_168;
    Length = v67.Length;
    LOWORD(Length) = 2 * v67.Length;
    v67.Buffer = (wchar_t *)v4;
    v71 = Length;
    Buffer = v4;
    v67.Length *= 2;
    MaximumLength = Length + 2;
    v26 = v57;
    v67.MaximumLength = MaximumLength;
    if ( v57 - 1 > 2 )
      goto LABEL_85;
    v27 = (const WCHAR *)v4;
    v77 = (wchar_t *)RtlAllocateHeap_0();
    if ( !v77 )
    {
      InstallUILanguage = -1073741801;
      goto LABEL_168;
    }
    v28 = 0;
    v29 = v5 & 4;
    v73 = v29;
    while ( 1 )
    {
      v63 = v28;
      if ( v28 >= v26 )
      {
        if ( !v29 || (v5 & 0x10) != 0 )
          goto LABEL_110;
        v38 = v60 + 1;
        v60 = v38;
        if ( v38 <= 0xFFFF )
        {
          v39 = RtlAllocateHeap_0();
          v78 = v39;
          if ( !v39 )
          {
LABEL_90:
            InstallUILanguage = -1073741670;
            goto LABEL_168;
          }
          v40 = (unsigned __int16)v38;
          v67.Buffer = (wchar_t *)v39;
          LOWORD(v40) = 2 * v38;
          v41 = (const WCHAR *)v4;
          v71 = v40;
          v4 = (char *)v39;
          v67.Length = 2 * v38;
          Buffer = (char *)v39;
          v73 = v40;
          v42 = (_WORD *)v39;
          v67.MaximumLength = v40;
          for ( i = 0; i < v57; ++i )
          {
            RtlInitUnicodeString(&DestinationString, v41);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v64) < 0 )
              goto LABEL_85;
            DestinationString.Buffer = v77;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !(unsigned __int8)RtlLCIDToCultureName(v64, (__int64)&DestinationString) )
              goto LABEL_85;
            if ( (int)RtlStringCchCatW((__int64)v42, v60, (__int64)DestinationString.Buffer) < 0 )
              goto LABEL_90;
            v16 = -1LL;
            v44 = -1LL;
            do
              ++v44;
            while ( v42[v44] );
            v60 += -1 - v44;
            if ( v42 )
            {
              v45 = -1LL;
              do
                ++v45;
              while ( v42[v45] );
              v42 += v45 + 1;
            }
            else
            {
              v42 = 0LL;
            }
            if ( v41 )
            {
              v46 = -1LL;
              do
                ++v46;
              while ( v41[v46] );
              v41 += v46 + 1;
            }
            else
            {
              v41 = 0LL;
            }
          }
          MaximumLength = v73;
          *v42 = 0;
LABEL_110:
          v8 = v57;
LABEL_111:
          if ( (v5 & 0x400) != 0 )
          {
            RtlInitUnicodeString(&v62, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
            InstallUILanguage = LdrpCreateKey((__int64)&v62, 0LL, 0, 0x20006u, &v81);
            if ( InstallUILanguage >= 0 )
            {
              RtlInitUnicodeString(&v62, L"InstallLanguageFallback");
              v47 = -1LL;
              do
                ++v47;
              while ( *(_WORD *)&Buffer[2 * v47] );
              v67.MaximumLength = -2 - 2 * v47 + MaximumLength;
              if ( Buffer )
              {
                v48 = -1LL;
                do
                  ++v48;
                while ( *(_WORD *)&Buffer[2 * v48] );
                v49 = (wchar_t *)&Buffer[2 * v48 + 2];
              }
              else
              {
                v49 = 0LL;
              }
              v67.Buffer = v49;
              InstallUILanguage = RtlpGetMultiStringLength(v49, &v67, &v57);
              if ( InstallUILanguage >= 0 )
              {
                v50 = v67.Length;
                Buffer = (char *)v67.Buffer;
                InstallUILanguage = ZwSetValueKey(v81, &v62, 0LL, 7LL, v67.Buffer, 2 * (unsigned int)v67.Length);
                if ( InstallUILanguage >= 0 )
                {
                  v8 = v57;
                  MaximumLength = v67.MaximumLength;
                  v72 = v57;
                  goto LABEL_125;
                }
              }
            }
LABEL_168:
            if ( v80 )
              RtlFreeHeap_0();
            if ( v82 )
LABEL_171:
              RtlFreeHeap_0();
            if ( v77 )
              RtlFreeHeap_0();
            v9 = v78;
LABEL_175:
            if ( Handle )
            {
              NtClose(Handle);
              Handle = 0LL;
            }
            if ( v75 )
            {
              NtClose(v75);
              v75 = 0LL;
            }
            if ( v76 )
            {
              NtClose(v76);
              v76 = 0LL;
            }
            if ( v79 )
            {
              NtClose(v79);
              v79 = 0LL;
            }
            if ( v9 )
              RtlFreeHeap_0();
            v6 = v68;
            v7 = v66;
LABEL_186:
            v3 = v61;
LABEL_187:
            if ( (v5 & 0x80u) != 0 && v3 )
              RtlpMuiFreeLangRegistryInfo(v3);
            *v83 = v6 + v7 + v72;
            return (unsigned int)InstallUILanguage;
          }
          v50 = v71;
LABEL_125:
          if ( (v5 & 0x10) != 0 )
          {
            InstallUILanguage = RtlpSetInstallLanguage(v5, (const WCHAR *)v4);
            if ( InstallUILanguage < 0 )
              goto LABEL_168;
            v72 = v8;
          }
          if ( (v5 & 0x4000) == 0 )
            goto LABEL_143;
          InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000LL, v16, &v79);
          if ( InstallUILanguage < 0 )
            goto LABEL_168;
          RtlInitUnicodeString(&v62, L"Control Panel\\Desktop");
          InstallUILanguage = LdrpOpenKey((__int64)&v62, (__int64)v79, 0xF003Fu, &v75);
          if ( InstallUILanguage < 0 )
            goto LABEL_168;
          if ( (v5 & 0x800) != 0 )
          {
            RtlInitUnicodeString(&v62, L"PreferredUILanguagesPending");
            v51 = v75;
            goto LABEL_141;
          }
          if ( v8 >= 2 )
          {
            RtlInitUnicodeString(&v62, L"LanguageConfigurationPending");
            InstallUILanguage = LdrpCreateKey((__int64)&v62, (__int64)v75, 0, 0xF003Fu, &Handle);
            if ( InstallUILanguage < 0 )
              goto LABEL_168;
            RtlInitUnicodeString(&v62, (PCWSTR)v4);
            if ( v4 )
            {
              v52 = -1LL;
              do
                ++v52;
              while ( *(_WORD *)&v4[2 * v52] );
              Buffer = &v4[2 * v52 + 2];
              v67.Buffer = (wchar_t *)Buffer;
            }
            else
            {
              Buffer = 0LL;
              v67.Buffer = 0LL;
            }
            MaximumLength -= v62.MaximumLength;
            v51 = Handle;
            v67.MaximumLength = MaximumLength;
            v67.Length = v50 - v62.MaximumLength;
LABEL_141:
            InstallUILanguage = ZwSetValueKey(v51, &v62, 0LL, 7LL, Buffer, MaximumLength);
            if ( InstallUILanguage < 0 )
              goto LABEL_168;
            v68 = v8;
LABEL_143:
            if ( Handle )
            {
              NtClose(Handle);
              Handle = 0LL;
            }
            if ( v5 < 0 && (v5 & 0x800) != 0 )
            {
              DestinationString = v67;
              InstallUILanguage = RtlpSetMachineUILanguagesImmediate((__int64)&DestinationString);
              v66 = v8;
            }
            if ( (v5 & 0x2000) == 0 && ((v5 & 0x8000) == 0 || (v5 & 0x1000) == 0) )
            {
              if ( InstallUILanguage < 0 )
                goto LABEL_168;
LABEL_165:
              if ( (v5 & 0xE410) != 0 )
              {
                ZwGetMUIRegistryInfo(8LL, 0LL, 0LL);
                if ( (v5 & 0x8410) != 0 )
                  RtlUpdateProcessRegistryInfo();
              }
              goto LABEL_168;
            }
            RtlInitUnicodeString(&v62, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
            InstallUILanguage = LdrpCreateKey((__int64)&v62, 0LL, 0, 0xF003Fu, &v76);
            if ( InstallUILanguage < 0 )
              goto LABEL_168;
            if ( (v5 & 0x800) != 0 )
            {
              RtlInitUnicodeString(&v62, L"PreferredUILanguages");
              v53 = ZwSetValueKey(v76, &v62, 0LL, 7LL, Buffer, MaximumLength);
LABEL_163:
              InstallUILanguage = v53;
              if ( v53 < 0 )
                goto LABEL_168;
              v66 = v8;
              goto LABEL_165;
            }
            if ( v8 >= 2 )
            {
              RtlInitUnicodeString(&v62, L"LanguageConfiguration");
              InstallUILanguage = LdrpCreateKey((__int64)&v62, (__int64)v76, 0, 0xF003Fu, &Handle);
              if ( InstallUILanguage < 0 )
                goto LABEL_168;
              RtlInitUnicodeString(&v62, (PCWSTR)v4);
              v54 = 0LL;
              if ( v4 )
              {
                v55 = -1LL;
                do
                  ++v55;
                while ( *(_WORD *)&v4[2 * v55] );
                v54 = &v4[2 * v55 + 2];
              }
              v53 = ZwSetValueKey(Handle, &v62, 0LL, 7LL, v54, (unsigned __int16)(MaximumLength - v62.MaximumLength));
              goto LABEL_163;
            }
          }
        }
LABEL_85:
        InstallUILanguage = -1073741811;
        goto LABEL_168;
      }
      if ( v29 )
      {
        RtlInitUnicodeString(&DestinationString, v27);
        if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v64) < 0 )
          goto LABEL_85;
        v30 = v64;
        if ( ((v64 - 4096) & 0xFFFFFBFF) == 0 )
          goto LABEL_85;
        DestinationString.Buffer = v77;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( !(unsigned __int8)RtlLCIDToCultureName(v64, (__int64)&DestinationString) )
          goto LABEL_85;
        v16 = (__int64)DestinationString.Buffer;
        v31 = -1LL;
        do
          ++v31;
        while ( DestinationString.Buffer[v31] );
        v60 += v31 + 1;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, v27);
        if ( !RtlCultureNameToLCID(&DestinationString.Length, (int *)&v64) )
          goto LABEL_85;
        v30 = v64;
        if ( ((v64 - 4096) & 0xFFFFFBFF) == 0 )
          goto LABEL_85;
        v16 = (__int64)DestinationString.Buffer;
      }
      v32 = v63;
      if ( v63 )
      {
        if ( v63 == 1 )
        {
          if ( (v5 & 0x810) != 0 || (*(_BYTE *)v74 & 1) != 0 )
            goto LABEL_85;
          if ( (*(_BYTE *)v74 & 2) != 0 )
          {
            v35 = v58;
          }
          else
          {
            if ( (*(_BYTE *)v74 & 4) == 0 || v57 > 2 )
              goto LABEL_85;
            v35 = v59;
          }
          FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                    v61,
                                                    (_DWORD)v74,
                                                    v30,
                                                    (unsigned int)&v84,
                                                    (__int64)v35);
        }
        else
        {
          if ( v63 != 2 )
            goto LABEL_79;
          FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                    v61,
                                                    (_DWORD)v74,
                                                    v30,
                                                    (unsigned int)&v84,
                                                    (__int64)v58);
        }
        if ( FallbackInstalledLanguageInfoByLangId < 0 )
          goto LABEL_85;
        v34 = &v84;
      }
      else
      {
        v36 = v61;
        if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v61, (const wchar_t *)v16, 1, v59) < 0 )
          goto LABEL_85;
        v34 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v36 + 24) + 16LL) + 28LL * v59[0]);
      }
      v32 = v63;
      v74 = v34;
LABEL_79:
      if ( v27 )
      {
        v37 = -1LL;
        v16 = 0LL;
        do
          ++v37;
        while ( v27[v37] );
        v27 += v37 + 1;
      }
      else
      {
        v27 = 0LL;
      }
      v29 = v73;
      v28 = v32 + 1;
      v26 = v57;
    }
  }
  return (unsigned int)InstallUILanguage;
}
