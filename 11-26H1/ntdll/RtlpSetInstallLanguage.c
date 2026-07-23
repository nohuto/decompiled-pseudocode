/*
 * XREFs of RtlpSetInstallLanguage @ 0x180142A80
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1800580A0 (OpenGlobalizationUserSettingsKey.c)
 *     LdrpOpenKey @ 0x1800D92C0 (LdrpOpenKey.c)
 *     RtlStringCchCopyW @ 0x1800DBA18 (RtlStringCchCopyW.c)
 *     RtlUnicodeStringToLcid @ 0x1801140C0 (RtlUnicodeStringToLcid.c)
 *     RtlpGetCompleteLanguageFallback @ 0x180142624 (RtlpGetCompleteLanguageFallback.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x180142788 (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpGetInstalledLanguageType @ 0x180142960 (RtlpGetInstalledLanguageType.c)
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtDeleteKey @ 0x1801609B0 (NtDeleteKey.c)
 *     ZwDeleteValueKey @ 0x180160A10 (ZwDeleteValueKey.c)
 *     NtFlushInstallUILanguage @ 0x180160C30 (NtFlushInstallUILanguage.c)
 *     NtIsUILanguageComitted @ 0x180160FB0 (NtIsUILanguageComitted.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpSetInstallLanguage(char a1, const WCHAR *a2)
{
  char v2; // r15
  char v3; // r12
  WCHAR *v4; // rdi
  int InstalledLanguageType; // ebx
  __int16 *v6; // r14
  __int16 *v7; // rdx
  __int64 v8; // rdx
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD Lcid[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-98h] BYREF
  __int64 v14; // [rsp+78h] [rbp-90h] BYREF
  __int16 *v15; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  _UNICODE_STRING String; // [rsp+90h] [rbp-78h] BYREF
  __int16 *v18; // [rsp+A0h] [rbp-68h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString[88]; // [rsp+B8h] [rbp-50h] BYREF
  _WORD v21[88]; // [rsp+168h] [rbp+60h] BYREF
  _WORD v22[176]; // [rsp+218h] [rbp+110h] BYREF
  _WORD v23[264]; // [rsp+378h] [rbp+270h] BYREF

  KeyHandle = 0LL;
  v2 = 0;
  Handle = 0LL;
  v3 = 0;
  LODWORD(Lcid[0]) = 0;
  LODWORD(v12) = 0;
  LODWORD(v14) = 0;
  v4 = (WCHAR *)a2;
  v13 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  String = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)&Lcid[1] = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    InstalledLanguageType = RtlUnicodeStringToLcid(&DestinationString, (PULONG)Lcid);
    if ( InstalledLanguageType < 0 )
      return (unsigned int)InstalledLanguageType;
    String.Buffer = SourceString;
    String.MaximumLength = 172;
    if ( !RtlLCIDToCultureName(Lcid[0], &String) )
      return (unsigned int)-1073741811;
    v4 = SourceString;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return (unsigned int)-1073741811;
    RtlInitUnicodeString(&String, a2);
    if ( !RtlCultureNameToLCID(&String, (PLCID)Lcid) )
      return (unsigned int)-1073741811;
  }
  InstalledLanguageType = RtlpCreateProcessRegistryInfo(&v13);
  if ( InstalledLanguageType < 0 )
    return (unsigned int)InstalledLanguageType;
  if ( !v13 )
    return (unsigned int)-1073741823;
  InstalledLanguageType = RtlpGetInstalledLanguageType(v13, v4, (int *)&v14, &v15);
  if ( InstalledLanguageType < 0 )
    return (unsigned int)InstalledLanguageType;
  if ( (_DWORD)v14 == 1 )
    goto LABEL_23;
  if ( (_DWORD)v14 == 2 )
  {
    v7 = v15;
    v2 = 1;
LABEL_22:
    InstalledLanguageType = RtlpGetCompleteLanguageFallback(v13, v7, 0LL, v23, 0x102u);
    if ( InstalledLanguageType < 0 )
      return (unsigned int)InstalledLanguageType;
    goto LABEL_23;
  }
  if ( (_DWORD)v14 != 4 )
    return (unsigned int)-1073741811;
  v3 = 1;
  memset_thunk_772440563353939046(v21, 0, 0xACuLL);
  RtlStringCchCopyW(v21, 85LL, (__int64)v4);
  v4 = SourceString;
  memset_thunk_772440563353939046(SourceString, 0, 0xACuLL);
  InstalledLanguageType = RtlpGetDefaultLanguageBaseOrParent(v13, (__int64)v15, &v18, SourceString, 0x55u, 0LL, 0LL);
  if ( InstalledLanguageType < 0 )
    return (unsigned int)InstalledLanguageType;
  v6 = v18;
  if ( !v18 )
    return (unsigned int)-1073741637;
  InstalledLanguageType = RtlpGetCompleteLanguageFallback(v13, v15, (__int64)v21, v22, 0xACu);
  if ( InstalledLanguageType < 0 )
    return (unsigned int)InstalledLanguageType;
  if ( (*(_BYTE *)v6 & 2) != 0 )
  {
    v2 = 1;
    v7 = v6;
    goto LABEL_22;
  }
LABEL_23:
  RtlInitUnicodeString(&String, v4);
  if ( !RtlCultureNameToLCID(&String, (PLCID)Lcid) )
    return (unsigned int)-1073741811;
  InstalledLanguageType = NtFlushInstallUILanguage(Lcid[0], 0);
  if ( InstalledLanguageType >= 0 )
  {
    if ( v2 )
    {
      RtlpSetPreferredUILanguages(1032LL, v23, &v12);
    }
    else
    {
      RtlInitUnicodeString(
        (PUNICODE_STRING)&Lcid[1],
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      if ( LdrpOpenKey((_UNICODE_STRING *)&Lcid[1], 0LL, 0xF003Fu, &KeyHandle) >= 0 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)&Lcid[1], L"InstallLanguageFallback");
        ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&Lcid[1]);
        NtClose(KeyHandle);
      }
    }
    if ( v3 )
    {
      RtlpSetPreferredUILanguages(32776LL, v21, &v12);
      RtlpSetPreferredUILanguages(36872LL, v22, &v12);
    }
    else
    {
      RtlInitUnicodeString(
        (PUNICODE_STRING)&Lcid[1],
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      if ( LdrpOpenKey((_UNICODE_STRING *)&Lcid[1], 0LL, 0xF003Fu, &KeyHandle) >= 0 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)&Lcid[1], L"PreferredUILanguages");
        ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&Lcid[1]);
        NtClose(KeyHandle);
        RtlInitUnicodeString(
          (PUNICODE_STRING)&Lcid[1],
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        if ( LdrpOpenKey((_UNICODE_STRING *)&Lcid[1], 0LL, 0xF003Fu, &KeyHandle) >= 0 )
        {
          NtDeleteKey(KeyHandle);
          NtClose(KeyHandle);
        }
        if ( OpenGlobalizationUserSettingsKey(0x2000000LL, v8, &KeyHandle) >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)&Lcid[1], L"Control Panel\\Desktop\\MuiCached");
          if ( LdrpOpenKey((_UNICODE_STRING *)&Lcid[1], KeyHandle, 0xF003Fu, &Handle) >= 0 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)&Lcid[1], L"MachinePreferredUILanguages");
            ZwDeleteValueKey(Handle, (PUNICODE_STRING)&Lcid[1]);
            RtlInitUnicodeString((PUNICODE_STRING)&Lcid[1], L"MachineLanguageConfiguration");
            ZwDeleteValueKey(Handle, (PUNICODE_STRING)&Lcid[1]);
            NtClose(Handle);
          }
          NtClose(KeyHandle);
        }
      }
    }
  }
  else if ( NtIsUILanguageComitted() )
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)InstalledLanguageType;
}
