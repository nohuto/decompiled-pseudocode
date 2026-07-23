/*
 * XREFs of RtlpSetPreferredUILanguages @ 0x1801430B0
 * Callers:
 *     RtlpSetInstallLanguage @ 0x180142A80 (RtlpSetInstallLanguage.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlUnicodeStringToInteger @ 0x180052020 (RtlUnicodeStringToInteger.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x180053F48 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180056350 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1800580A0 (OpenGlobalizationUserSettingsKey.c)
 *     LdrpOpenKey @ 0x1800D92C0 (LdrpOpenKey.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800DAA84 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800DAB40 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x1800ECFE0 (RtlpInitializeLangRegistryInfo.c)
 *     LdrpCreateKey @ 0x180141D10 (LdrpCreateKey.c)
 *     RtlStringCchCatW @ 0x180141D6C (RtlStringCchCatW.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x180141E20 (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801423F0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetMultiStringLength @ 0x1801429FC (RtlpGetMultiStringLength.c)
 *     RtlpSetInstallLanguage @ 0x180142A80 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x180142F3C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x18014D39C (RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwSetValueKey @ 0x18015FA30 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x180160E10 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1801619D0 (NtQueryInstallUILanguage.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpSetPreferredUILanguages(int a1, char *a2, _DWORD *a3)
{
  void *v3; // rax
  char *v4; // r12
  __int16 v5; // di
  unsigned int v6; // r15d
  unsigned int v7; // esi
  unsigned int v8; // r14d
  void *v9; // r13
  int InstallUILanguage; // ebx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // cx
  __int16 v14; // si
  int v15; // eax
  __int64 Buffer; // rdx
  __int64 v17; // rdx
  wchar_t *Heap_0; // rax
  wchar_t *v19; // r13
  unsigned __int64 v20; // r14
  int v21; // esi
  char *v22; // r13
  unsigned __int16 v23; // r15
  unsigned int v24; // esi
  const WCHAR *v25; // r14
  unsigned int v26; // ecx
  int v27; // eax
  unsigned __int16 v28; // si
  __int64 v29; // rax
  unsigned int v30; // ecx
  int FallbackInstalledLanguageInfoByLangId; // eax
  __int128 *v32; // rax
  _WORD *v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rax
  unsigned int v36; // esi
  PVOID v37; // rcx
  int v38; // eax
  const WCHAR *v39; // r14
  _WORD *v40; // rsi
  unsigned int i; // r15d
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  char *v47; // rcx
  __int16 v48; // si
  HANDLE v49; // rcx
  __int64 v50; // rax
  NTSTATUS v51; // eax
  char *v52; // rcx
  __int64 v53; // rax
  unsigned int v55; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v56[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v57[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v58; // [rsp+3Ch] [rbp-C4h]
  void *v59; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING String; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v61; // [rsp+58h] [rbp-A8h]
  ULONG Value; // [rsp+5Ch] [rbp-A4h] BYREF
  LANGID InstallUILanguageId[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v64; // [rsp+64h] [rbp-9Ch]
  PVOID Data[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v66; // [rsp+80h] [rbp-80h]
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-60h] BYREF
  int v69; // [rsp+A8h] [rbp-58h]
  unsigned int v70; // [rsp+ACh] [rbp-54h]
  int v71; // [rsp+B0h] [rbp-50h]
  __int128 *v72; // [rsp+B8h] [rbp-48h]
  HANDLE v73; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE v74; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v75; // [rsp+D0h] [rbp-30h]
  PVOID v76; // [rsp+D8h] [rbp-28h]
  HANDLE v77; // [rsp+E0h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+E8h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t *v80; // [rsp+F8h] [rbp-8h]
  _DWORD *v81; // [rsp+100h] [rbp+0h]
  __int128 v82; // [rsp+108h] [rbp+8h] BYREF
  __int64 v83; // [rsp+118h] [rbp+18h]
  int v84; // [rsp+120h] [rbp+20h]

  v81 = a3;
  v3 = 0LL;
  v77 = 0LL;
  v74 = 0LL;
  v73 = 0LL;
  Handle = 0LL;
  v4 = a2;
  v66 = 0;
  LOBYTE(v5) = a1;
  v64 = 0;
  v6 = 0;
  v70 = 0;
  v7 = 0;
  v55 = 0;
  v8 = 0;
  v56[0] = 0;
  v9 = 0LL;
  Value = 0;
  v57[0] = 0;
  v72 = 0LL;
  v83 = 0LL;
  v84 = 0;
  v76 = 0LL;
  v58 = 0;
  v59 = 0LL;
  v75 = 0LL;
  BaseAddress = 0LL;
  InstallUILanguageId[0] = 0;
  v80 = 0LL;
  KeyHandle = 0LL;
  String = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)Data = 0LL;
  v82 = 0LL;
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
    v15 = RtlpCreateProcessRegistryInfo(&v59);
  else
    v15 = RtlpInitializeLangRegistryInfo(&v59);
  InstallUILanguage = v15;
  if ( v15 >= 0 )
  {
    if ( !v4 )
    {
      v23 = 4;
      LODWORD(Data[0]) = 262146;
      v22 = (char *)&unk_18018A44C;
      v5 = v14;
      Data[1] = &unk_18018A44C;
      v69 = 2;
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
      InstallUILanguage = NtQueryInstallUILanguage(InstallUILanguageId);
      if ( InstallUILanguage < 0 )
        goto LABEL_175;
      Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
      v80 = Heap_0;
      v19 = Heap_0;
      if ( !Heap_0 )
      {
        InstallUILanguage = -1073741801;
        v9 = 0LL;
        goto LABEL_175;
      }
      String.Buffer = Heap_0;
      *(_DWORD *)&String.Length = 11141120;
      if ( !RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_171;
      }
      v20 = (unsigned __int64)String.Length >> 1;
      if ( (v14 & 4) != 0 )
      {
        InstallUILanguage = RtlpConvertLCIDsToCultureNames((WCHAR *)v4, &BaseAddress);
        if ( InstallUILanguage < 0 )
          goto LABEL_168;
        v4 = (char *)BaseAddress;
        v5 = v14 & 0xFFF3 | 8;
      }
      InstallUILanguage = RtlpGetMultiStringLength(v4, v56, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_168;
      memmove(&v19[v20 + 1], v4, 2LL * ((unsigned int)v56[0] + 1));
      InstallUILanguage = RtlpAutoCompleteLanguageFallback((__int64)v59, v19);
      if ( InstallUILanguage < 0 )
        goto LABEL_168;
      v4 = (char *)v19;
    }
    InstallUILanguage = RtlpGetMultiStringLength(v4, Data, &v55);
    if ( InstallUILanguage < 0 )
      goto LABEL_168;
    v21 = LOWORD(Data[0]);
    LOWORD(v21) = 2 * LOWORD(Data[0]);
    Data[1] = v4;
    v69 = v21;
    v22 = v4;
    LOWORD(Data[0]) *= 2;
    v23 = v21 + 2;
    v24 = v55;
    WORD1(Data[0]) = v23;
    if ( v55 - 1 > 2 )
      goto LABEL_85;
    v25 = (const WCHAR *)v4;
    v75 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
    if ( !v75 )
    {
      InstallUILanguage = -1073741801;
      goto LABEL_168;
    }
    v26 = 0;
    v27 = v5 & 4;
    v71 = v27;
    while ( 1 )
    {
      v61 = v26;
      if ( v26 >= v24 )
      {
        if ( !v27 || (v5 & 0x10) != 0 )
          goto LABEL_110;
        v36 = v58 + 1;
        v58 = v36;
        if ( v36 <= 0xFFFF )
        {
          v37 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v36);
          v76 = v37;
          if ( !v37 )
          {
LABEL_90:
            InstallUILanguage = -1073741670;
            goto LABEL_168;
          }
          v38 = (unsigned __int16)v36;
          Data[1] = v37;
          LOWORD(v38) = 2 * v36;
          v39 = (const WCHAR *)v4;
          v69 = v38;
          v4 = (char *)v37;
          LOWORD(Data[0]) = 2 * v36;
          v22 = (char *)v37;
          v71 = v38;
          v40 = v37;
          WORD1(Data[0]) = v38;
          for ( i = 0; i < v55; ++i )
          {
            RtlInitUnicodeString(&DestinationString, v39);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              goto LABEL_85;
            DestinationString.Buffer = (wchar_t *)v75;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
              goto LABEL_85;
            if ( (int)RtlStringCchCatW((__int64)v40, v58, (__int64)DestinationString.Buffer) < 0 )
              goto LABEL_90;
            Buffer = -1LL;
            v42 = -1LL;
            do
              ++v42;
            while ( v40[v42] );
            v58 += -1 - v42;
            if ( v40 )
            {
              v43 = -1LL;
              do
                ++v43;
              while ( v40[v43] );
              v40 += v43 + 1;
            }
            else
            {
              v40 = 0LL;
            }
            if ( v39 )
            {
              v44 = -1LL;
              do
                ++v44;
              while ( v39[v44] );
              v39 += v44 + 1;
            }
            else
            {
              v39 = 0LL;
            }
          }
          v23 = v71;
          *v40 = 0;
LABEL_110:
          v8 = v55;
LABEL_111:
          if ( (v5 & 0x400) != 0 )
          {
            RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
            InstallUILanguage = LdrpCreateKey(&String, 0LL, 0, 0x20006u, &KeyHandle);
            if ( InstallUILanguage >= 0 )
            {
              RtlInitUnicodeString(&String, L"InstallLanguageFallback");
              v45 = -1LL;
              do
                ++v45;
              while ( *(_WORD *)&v22[2 * v45] );
              WORD1(Data[0]) = -2 - 2 * v45 + v23;
              if ( v22 )
              {
                v46 = -1LL;
                do
                  ++v46;
                while ( *(_WORD *)&v22[2 * v46] );
                v47 = &v22[2 * v46 + 2];
              }
              else
              {
                v47 = 0LL;
              }
              Data[1] = v47;
              InstallUILanguage = RtlpGetMultiStringLength(v47, Data, &v55);
              if ( InstallUILanguage >= 0 )
              {
                v48 = (__int16)Data[0];
                v22 = (char *)Data[1];
                InstallUILanguage = ZwSetValueKey(KeyHandle, &String, 0, 7u, Data[1], 2 * LOWORD(Data[0]));
                if ( InstallUILanguage >= 0 )
                {
                  v8 = v55;
                  v23 = WORD1(Data[0]);
                  v70 = v55;
                  goto LABEL_125;
                }
              }
            }
LABEL_168:
            if ( BaseAddress )
              RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
            v19 = v80;
            if ( v80 )
LABEL_171:
              RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v19);
            if ( v75 )
              RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v75);
            v9 = v76;
LABEL_175:
            if ( Handle )
            {
              NtClose(Handle);
              Handle = 0LL;
            }
            if ( v73 )
            {
              NtClose(v73);
              v73 = 0LL;
            }
            if ( v74 )
            {
              NtClose(v74);
              v74 = 0LL;
            }
            if ( v77 )
            {
              NtClose(v77);
              v77 = 0LL;
            }
            if ( v9 )
              RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v9);
            v6 = v66;
            v7 = v64;
LABEL_186:
            v3 = v59;
LABEL_187:
            if ( (v5 & 0x80u) != 0 && v3 )
              RtlpMuiFreeLangRegistryInfo(v3);
            *v81 = v6 + v7 + v70;
            return (unsigned int)InstallUILanguage;
          }
          v48 = v69;
LABEL_125:
          if ( (v5 & 0x10) != 0 )
          {
            InstallUILanguage = RtlpSetInstallLanguage(v5, (const WCHAR *)v4);
            if ( InstallUILanguage < 0 )
              goto LABEL_168;
            v70 = v8;
          }
          if ( (v5 & 0x4000) == 0 )
            goto LABEL_143;
          InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000LL, Buffer, &v77);
          if ( InstallUILanguage < 0 )
            goto LABEL_168;
          RtlInitUnicodeString(&String, L"Control Panel\\Desktop");
          InstallUILanguage = LdrpOpenKey(&String, v77, 0xF003Fu, &v73);
          if ( InstallUILanguage < 0 )
            goto LABEL_168;
          if ( (v5 & 0x800) != 0 )
          {
            RtlInitUnicodeString(&String, L"PreferredUILanguagesPending");
            v49 = v73;
            goto LABEL_141;
          }
          if ( v8 >= 2 )
          {
            RtlInitUnicodeString(&String, L"LanguageConfigurationPending");
            InstallUILanguage = LdrpCreateKey(&String, v73, 0, 0xF003Fu, &Handle);
            if ( InstallUILanguage < 0 )
              goto LABEL_168;
            RtlInitUnicodeString(&String, (PCWSTR)v4);
            if ( v4 )
            {
              v50 = -1LL;
              do
                ++v50;
              while ( *(_WORD *)&v4[2 * v50] );
              v22 = &v4[2 * v50 + 2];
              Data[1] = v22;
            }
            else
            {
              v22 = 0LL;
              Data[1] = 0LL;
            }
            v23 -= String.MaximumLength;
            v49 = Handle;
            WORD1(Data[0]) = v23;
            LOWORD(Data[0]) = v48 - String.MaximumLength;
LABEL_141:
            InstallUILanguage = ZwSetValueKey(v49, &String, 0, 7u, v22, v23);
            if ( InstallUILanguage < 0 )
              goto LABEL_168;
            v66 = v8;
LABEL_143:
            if ( Handle )
            {
              NtClose(Handle);
              Handle = 0LL;
            }
            if ( v5 < 0 && (v5 & 0x800) != 0 )
            {
              DestinationString = *(_UNICODE_STRING *)Data;
              InstallUILanguage = RtlpSetMachineUILanguagesImmediate((__int64)&DestinationString);
              v64 = v8;
            }
            if ( (v5 & 0x2000) == 0 && ((v5 & 0x8000) == 0 || (v5 & 0x1000) == 0) )
            {
              if ( InstallUILanguage < 0 )
                goto LABEL_168;
LABEL_165:
              if ( (v5 & 0xE410) != 0 )
              {
                ZwGetMUIRegistryInfo(8u, 0LL, 0LL);
                if ( (v5 & 0x8410) != 0 )
                  RtlUpdateProcessRegistryInfo();
              }
              goto LABEL_168;
            }
            RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
            InstallUILanguage = LdrpCreateKey(&String, 0LL, 0, 0xF003Fu, &v74);
            if ( InstallUILanguage < 0 )
              goto LABEL_168;
            if ( (v5 & 0x800) != 0 )
            {
              RtlInitUnicodeString(&String, L"PreferredUILanguages");
              v51 = ZwSetValueKey(v74, &String, 0, 7u, v22, v23);
LABEL_163:
              InstallUILanguage = v51;
              if ( v51 < 0 )
                goto LABEL_168;
              v64 = v8;
              goto LABEL_165;
            }
            if ( v8 >= 2 )
            {
              RtlInitUnicodeString(&String, L"LanguageConfiguration");
              InstallUILanguage = LdrpCreateKey(&String, v74, 0, 0xF003Fu, &Handle);
              if ( InstallUILanguage < 0 )
                goto LABEL_168;
              RtlInitUnicodeString(&String, (PCWSTR)v4);
              v52 = 0LL;
              if ( v4 )
              {
                v53 = -1LL;
                do
                  ++v53;
                while ( *(_WORD *)&v4[2 * v53] );
                v52 = &v4[2 * v53 + 2];
              }
              v51 = ZwSetValueKey(Handle, &String, 0, 7u, v52, (unsigned __int16)(v23 - String.MaximumLength));
              goto LABEL_163;
            }
          }
        }
LABEL_85:
        InstallUILanguage = -1073741811;
        goto LABEL_168;
      }
      if ( v27 )
      {
        RtlInitUnicodeString(&DestinationString, v25);
        if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
          goto LABEL_85;
        v28 = Value;
        if ( ((Value - 4096) & 0xFFFFFBFF) == 0 )
          goto LABEL_85;
        DestinationString.Buffer = (wchar_t *)v75;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( !RtlLCIDToCultureName(Value, &DestinationString) )
          goto LABEL_85;
        Buffer = (__int64)DestinationString.Buffer;
        v29 = -1LL;
        do
          ++v29;
        while ( DestinationString.Buffer[v29] );
        v58 += v29 + 1;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, v25);
        if ( !RtlCultureNameToLCID(&DestinationString, &Value) )
          goto LABEL_85;
        v28 = Value;
        if ( ((Value - 4096) & 0xFFFFFBFF) == 0 )
          goto LABEL_85;
        Buffer = (__int64)DestinationString.Buffer;
      }
      v30 = v61;
      if ( v61 )
      {
        if ( v61 == 1 )
        {
          if ( (v5 & 0x810) != 0 || (*(_BYTE *)v72 & 1) != 0 )
            goto LABEL_85;
          if ( (*(_BYTE *)v72 & 2) != 0 )
          {
            v33 = v56;
          }
          else
          {
            if ( (*(_BYTE *)v72 & 4) == 0 || v55 > 2 )
              goto LABEL_85;
            v33 = v57;
          }
          FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                    (_DWORD)v59,
                                                    (_DWORD)v72,
                                                    v28,
                                                    (unsigned int)&v82,
                                                    (__int64)v33);
        }
        else
        {
          if ( v61 != 2 )
            goto LABEL_79;
          FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                    (_DWORD)v59,
                                                    (_DWORD)v72,
                                                    v28,
                                                    (unsigned int)&v82,
                                                    (__int64)v56);
        }
        if ( FallbackInstalledLanguageInfoByLangId < 0 )
          goto LABEL_85;
        v32 = &v82;
      }
      else
      {
        v34 = (__int64)v59;
        if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v59, (wchar_t *)Buffer, 1, v57) < 0 )
          goto LABEL_85;
        v32 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v34 + 24) + 16LL) + 28LL * v57[0]);
      }
      v30 = v61;
      v72 = v32;
LABEL_79:
      if ( v25 )
      {
        v35 = -1LL;
        Buffer = 0LL;
        do
          ++v35;
        while ( v25[v35] );
        v25 += v35 + 1;
      }
      else
      {
        v25 = 0LL;
      }
      v27 = v71;
      v26 = v30 + 1;
      v24 = v55;
    }
  }
  return (unsigned int)InstallUILanguage;
}
