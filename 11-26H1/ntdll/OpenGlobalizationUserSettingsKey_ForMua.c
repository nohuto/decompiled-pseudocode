/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x18000B504
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000BB60 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18000C970 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x18000CA10 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800DB8B0 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18000B81C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlConvertSidToUnicodeString @ 0x18003CD70 (RtlConvertSidToUnicodeString.c)
 *     RtlGetPersistedStateLocation @ 0x18003E210 (RtlGetPersistedStateLocation.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x1800A4880 (RtlInitUnicodeStringEx.c)
 *     IdnaMemAlloc @ 0x1800ABC20 (IdnaMemAlloc.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // edi
  __int64 v6; // r14
  int v7; // r13d
  PSID *v8; // r15
  NTSTATUS InformationToken; // ebx
  __int64 v10; // rcx
  _BYTE *v12; // rax
  unsigned __int16 v13; // bx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int16 v16; // r14
  unsigned __int64 v17; // rbx
  void *v18; // r12
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  HANDLE Handle[2]; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  __int128 v25; // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  _BYTE Src[528]; // [rsp+B0h] [rbp-50h] BYREF

  v22 = a3;
  v4 = a1;
  *(_QWORD *)&v27 = 0LL;
  DWORD2(v27) = 0;
  v6 = a3;
  UnicodeString = 0LL;
  v7 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v8 = (PSID *)IdnaMemAlloc(84LL);
  if ( v8 )
  {
    LODWORD(Handle[0]) = 0;
    InformationToken = NtQueryInformationToken(-6LL, 1LL, v8, 84LL, Handle);
    if ( InformationToken < 0 )
      goto LABEL_10;
    v12 = *v8;
    if ( *((_BYTE *)*v8 + 1) < 2u || v12[1] == 5 && *((_DWORD *)v12 + 2) == 21 && *((_DWORD *)v12 + 6) == 503 )
    {
      *a4 = 0;
      goto LABEL_9;
    }
    InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, *v8, 1u);
    if ( InformationToken < 0 )
    {
LABEL_8:
      if ( !v7 )
      {
LABEL_10:
        RtlpSysVolFree(v8);
        return (unsigned int)InformationToken;
      }
LABEL_9:
      InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(v4, v6);
      goto LABEL_10;
    }
    LODWORD(Handle[0]) = 0;
    InformationToken = RtlGetPersistedStateLocation((wchar_t *)L"GlobalizationUserSettings", Src, 520, (__int64)Handle);
    if ( InformationToken < 0 )
    {
LABEL_6:
      if ( UnicodeString.Buffer )
        RtlpSysVolFree(UnicodeString.Buffer);
      goto LABEL_8;
    }
    v13 = LOWORD(Handle[0]) + UnicodeString.Length + 4;
    v14 = IdnaMemAlloc(v13);
    v15 = v14;
    if ( !v14 )
    {
      InformationToken = -1073741801;
      goto LABEL_5;
    }
    v20 = 0LL;
    WORD1(v20) = v13;
    v21 = v14;
    *(_OWORD *)Handle = 0LL;
    if ( (int)RtlInitUnicodeStringEx(Handle, Src) < 0 )
    {
      InformationToken = -1073741789;
      goto LABEL_4;
    }
    v16 = (__int16)Handle[0];
    if ( LOWORD(Handle[0]) + (unsigned int)(unsigned __int16)v20 > WORD1(v20) )
    {
      InformationToken = -1073741789;
    }
    else
    {
      v17 = LOWORD(Handle[0]);
      v18 = (void *)(v21 + 2 * ((unsigned __int64)(unsigned __int16)v20 >> 1));
      memmove(v18, Src, LOWORD(Handle[0]));
      LOWORD(v20) = v16 + v20;
      if ( (unsigned int)(unsigned __int16)v20 + 1 < WORD1(v20) )
        *((_WORD *)v18 + (v17 >> 1)) = 0;
      InformationToken = RtlAppendUnicodeToString(&v20, L"\\");
      if ( InformationToken >= 0 )
      {
        InformationToken = RtlAppendUnicodeStringToString(&v20, &UnicodeString);
        if ( InformationToken >= 0 )
        {
          LODWORD(v25) = 48;
          *(_QWORD *)&v26 = &v20;
          *((_QWORD *)&v25 + 1) = 0LL;
          DWORD2(v26) = 576;
          Handle[0] = 0LL;
          v27 = 0LL;
          if ( (int)NtOpenKey(Handle, 131097LL, &v25) >= 0 )
          {
            NtClose(Handle[0]);
            v6 = v22;
            v10 = v22;
            *a4 = 2;
            InformationToken = NtOpenKey(v10, a1, &v25);
LABEL_4:
            RtlpSysVolFree(v15);
LABEL_5:
            v4 = a1;
            goto LABEL_6;
          }
          *a4 = 1;
          v7 = 1;
        }
      }
    }
    v6 = v22;
    goto LABEL_4;
  }
  return (unsigned int)-1073741801;
}
