/*
 * XREFs of RtlpSetInstallLanguage @ 0x180142B80
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18000C970 (OpenGlobalizationUserSettingsKey.c)
 *     LdrpOpenKey @ 0x1800DC350 (LdrpOpenKey.c)
 *     RtlStringCchCopyW @ 0x1800DEAA8 (RtlStringCchCopyW.c)
 *     RtlUnicodeStringToLcid @ 0x1801148C4 (RtlUnicodeStringToLcid.c)
 *     RtlpGetCompleteLanguageFallback @ 0x180142724 (RtlpGetCompleteLanguageFallback.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x180142888 (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpGetInstalledLanguageType @ 0x180142A60 (RtlpGetInstalledLanguageType.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtDeleteKey @ 0x180160AB0 (NtDeleteKey.c)
 *     ZwDeleteValueKey @ 0x180160B10 (ZwDeleteValueKey.c)
 *     NtFlushInstallUILanguage @ 0x180160D30 (NtFlushInstallUILanguage.c)
 *     NtIsUILanguageComitted @ 0x1801610B0 (NtIsUILanguageComitted.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
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
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-98h] BYREF
  __int64 v14; // [rsp+78h] [rbp-90h] BYREF
  __int16 *v15; // [rsp+80h] [rbp-88h] BYREF
  HANDLE v16; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v17; // [rsp+90h] [rbp-78h] BYREF
  __int16 *v18; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString[88]; // [rsp+B8h] [rbp-50h] BYREF
  _WORD v21[88]; // [rsp+168h] [rbp+60h] BYREF
  _WORD v22[176]; // [rsp+218h] [rbp+110h] BYREF
  _WORD v23[264]; // [rsp+378h] [rbp+270h] BYREF

  Handle = 0LL;
  v2 = 0;
  v16 = 0LL;
  v3 = 0;
  LODWORD(v11[0]) = 0;
  LODWORD(v12) = 0;
  LODWORD(v14) = 0;
  v4 = (WCHAR *)a2;
  v13 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)&v11[1] = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    InstalledLanguageType = RtlUnicodeStringToLcid(&DestinationString.Length, (int *)v11);
    if ( InstalledLanguageType < 0 )
      return (unsigned int)InstalledLanguageType;
    v17.Buffer = SourceString;
    v17.MaximumLength = 172;
    if ( !(unsigned __int8)RtlLCIDToCultureName(v11[0], (__int64)&v17) )
      return (unsigned int)-1073741811;
    v4 = SourceString;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return (unsigned int)-1073741811;
    RtlInitUnicodeString(&v17, a2);
    if ( !RtlCultureNameToLCID(&v17.Length, (int *)v11) )
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
  InstalledLanguageType = RtlpGetDefaultLanguageBaseOrParent(
                            v13,
                            (__int64)v15,
                            &v18,
                            (__int64)SourceString,
                            0x55u,
                            0LL,
                            0LL);
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
  RtlInitUnicodeString(&v17, v4);
  if ( !RtlCultureNameToLCID(&v17.Length, (int *)v11) )
    return (unsigned int)-1073741811;
  InstalledLanguageType = NtFlushInstallUILanguage(LOWORD(v11[0]), 0LL);
  if ( InstalledLanguageType >= 0 )
  {
    if ( v2 )
    {
      RtlpSetPreferredUILanguages(1032LL, v23, &v12);
    }
    else
    {
      RtlInitUnicodeString(
        (PUNICODE_STRING)&v11[1],
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      if ( (int)LdrpOpenKey((__int64)&v11[1], 0LL, 0xF003Fu, &Handle) >= 0 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)&v11[1], L"InstallLanguageFallback");
        ZwDeleteValueKey(Handle, &v11[1]);
        NtClose(Handle);
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
        (PUNICODE_STRING)&v11[1],
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      if ( (int)LdrpOpenKey((__int64)&v11[1], 0LL, 0xF003Fu, &Handle) >= 0 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)&v11[1], L"PreferredUILanguages");
        ZwDeleteValueKey(Handle, &v11[1]);
        NtClose(Handle);
        RtlInitUnicodeString(
          (PUNICODE_STRING)&v11[1],
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        if ( (int)LdrpOpenKey((__int64)&v11[1], 0LL, 0xF003Fu, &Handle) >= 0 )
        {
          NtDeleteKey(Handle);
          NtClose(Handle);
        }
        if ( (int)OpenGlobalizationUserSettingsKey(0x2000000LL, v8, &Handle) >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)&v11[1], L"Control Panel\\Desktop\\MuiCached");
          if ( (int)LdrpOpenKey((__int64)&v11[1], (__int64)Handle, 0xF003Fu, &v16) >= 0 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)&v11[1], L"MachinePreferredUILanguages");
            ZwDeleteValueKey(v16, &v11[1]);
            RtlInitUnicodeString((PUNICODE_STRING)&v11[1], L"MachineLanguageConfiguration");
            ZwDeleteValueKey(v16, &v11[1]);
            NtClose(v16);
          }
          NtClose(Handle);
        }
      }
    }
  }
  else if ( (unsigned int)NtIsUILanguageComitted() )
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)InstalledLanguageType;
}
