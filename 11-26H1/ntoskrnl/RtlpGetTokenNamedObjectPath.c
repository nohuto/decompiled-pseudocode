/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x14077E4E0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x140619880 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x140804210 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCchCopyW @ 0x14046AD84 (RtlStringCchCopyW.c)
 *     RtlStringCbLengthW @ 0x14047EE24 (RtlStringCbLengthW.c)
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     RtlStringCchPrintfW @ 0x1404B0AA4 (RtlStringCchPrintfW.c)
 *     RtlGetCurrentServiceSessionId @ 0x1404CAAB0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlGetAppContainerParent @ 0x140804020 (RtlGetAppContainerParent.c)
 *     RtlConvertSidToUnicodeString @ 0x140925970 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     RtlGetAppContainerSidType @ 0x140A2A020 (RtlGetAppContainerSidType.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, char a3, UNICODE_STRING *a4)
{
  PSID v8; // r12
  char v9; // r15
  int v10; // esi
  int v11; // eax
  int v12; // edi
  NTSTATUS AppContainerSidType; // ebx
  int CurrentServiceSessionId; // eax
  int v15; // r9d
  PULONG v16; // rsi
  PULONG v17; // rdi
  PULONG v18; // rbx
  const wchar_t *v19; // r8
  NTSTATUS v20; // eax
  const wchar_t *v21; // r8
  size_t v22; // rbx
  int v23; // r15d
  size_t v24; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v26; // rdi
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-E0h]
  char v30; // [rsp+48h] [rbp-B8h]
  int TokenInformation; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+54h] [rbp-ACh] BYREF
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+5Ch] [rbp-A4h]
  int v36; // [rsp+60h] [rbp-A0h]
  size_t pcbLength; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  int v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+84h] [rbp-7Ch]
  UNICODE_STRING Source; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v43; // [rsp+A8h] [rbp-58h] BYREF
  PSID Sida[12]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v45[10]; // [rsp+120h] [rbp+20h] BYREF
  PCWSTR SourceString; // [rsp+170h] [rbp+70h] BYREF
  char v47; // [rsp+178h] [rbp+78h]
  wchar_t psz[264]; // [rsp+290h] [rbp+190h] BYREF
  wchar_t pszDest[264]; // [rsp+4A0h] [rbp+3A0h] BYREF

  v35 = 0;
  v8 = 0LL;
  memset_0(v45, 0, sizeof(v45));
  v32 = 0;
  v34 = 0;
  memset_0(psz, 0, 0x208uLL);
  memset_0(pszDest, 0, 0x208uLL);
  memset_0(Sida, 0, 0x58uLL);
  *(_QWORD *)&Source.Length = 262146LL;
  Source.Buffer = (wchar_t *)L"\\";
  v43 = 0LL;
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  v9 = 1;
  TokenInformation = 0;
  v30 = 1;
  v33 = 0;
  LODWORD(pcbLength) = a3 & 1;
  v10 = a3 & 2;
  v11 = a3 & 8;
  v40 = v10;
  v12 = a3 & 4;
  v36 = v11;
  v39 = v12;
  *a4 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  if ( Sid )
  {
    v8 = Sid;
    TokenInformation = 1;
  }
  else
  {
    AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &v32);
    if ( AppContainerSidType < 0 )
      goto LABEL_65;
    if ( TokenInformation )
    {
      AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenAppContainerSid, v45, 0x50u, &v32);
      if ( AppContainerSidType < 0 )
        goto LABEL_65;
      v8 = (PSID)v45[0];
      if ( !v45[0] )
      {
        AppContainerSidType = -1073741823;
        goto LABEL_65;
      }
    }
  }
  AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenPrivateNameSpace, &v33, 4u, &v32);
  if ( AppContainerSidType < 0 )
    goto LABEL_65;
  if ( v33 )
  {
    AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenUser, Sida, 0x58u, &v32);
    if ( AppContainerSidType < 0 )
      goto LABEL_65;
    AppContainerSidType = RtlConvertSidToUnicodeString(&UnicodeString, Sida[0], 1u);
    if ( AppContainerSidType < 0 )
      goto LABEL_65;
  }
  AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenSessionId, &v34, 4u, &v32);
  if ( AppContainerSidType < 0 )
    goto LABEL_65;
  if ( TokenInformation )
  {
    AppContainerSidType = RtlGetAppContainerSidType(v8);
    if ( AppContainerSidType < 0 )
      goto LABEL_65;
    if ( v35 == 2 )
    {
      AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, v8, 1u);
      if ( AppContainerSidType < 0 )
        goto LABEL_65;
    }
    else
    {
      AppContainerSidType = RtlGetAppContainerParent(v8);
      if ( AppContainerSidType < 0 )
        goto LABEL_65;
      AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, 0LL, 1u);
      if ( AppContainerSidType < 0 )
        goto LABEL_65;
      v16 = RtlSubAuthoritySid(v8, 0xBu);
      v17 = RtlSubAuthoritySid(v8, 0xAu);
      v18 = RtlSubAuthoritySid(v8, 9u);
      LODWORD(ReturnLength) = *RtlSubAuthoritySid(v8, 8u);
      AppContainerSidType = RtlStringCchPrintfW(
                              pszDest,
                              0x104uLL,
                              L"%s\\%u-%u-%u-%u",
                              DestinationString.Buffer,
                              ReturnLength,
                              *v18,
                              *v17,
                              *v16);
      if ( AppContainerSidType < 0 )
        goto LABEL_65;
      RtlFreeAnsiString(&DestinationString);
      RtlInitUnicodeString(&DestinationString, pszDest);
      v12 = v39;
      v10 = v40;
      v30 = 0;
    }
  }
  AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenBnoIsolation, &SourceString, 0x120u, &v32);
  if ( AppContainerSidType >= 0 )
  {
    if ( v33 || TokenInformation )
    {
      v15 = v34;
    }
    else
    {
      CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
      v15 = v34;
      if ( v34 == CurrentServiceSessionId )
      {
LABEL_30:
        if ( (_BYTE)pcbLength )
        {
          if ( !v12 )
          {
            v20 = RtlStringCchPrintfW(psz, 0x104uLL, L"Global\\Session\\%ld%s");
LABEL_40:
            AppContainerSidType = v20;
            if ( v20 >= 0 )
            {
              pcbLength = 0LL;
              AppContainerSidType = RtlStringCbLengthW(psz, 0x208uLL, &pcbLength);
              if ( AppContainerSidType >= 0 )
              {
                if ( !v33 || v10 )
                  v22 = pcbLength;
                else
                  v22 = UnicodeString.Length + pcbLength + 2;
                if ( TokenInformation )
                  v22 += DestinationString.Length + 2LL;
                v23 = v36;
                if ( v47 && !v36 )
                {
                  RtlInitUnicodeString(&v43, SourceString);
                  v22 += v43.Length + 2LL;
                }
                v24 = v22 + 2;
                Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
                v26 = Pool2;
                if ( Pool2 )
                {
                  memset_0(Pool2, 0, v24);
                  *a4 = 0LL;
                  a4->MaximumLength = v24;
                  a4->Buffer = v26;
                  AppContainerSidType = RtlAppendUnicodeToString(a4, psz);
                  if ( AppContainerSidType >= 0 )
                  {
                    if ( !v33
                      || v10
                      || (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &Source), AppContainerSidType >= 0)
                      && (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &UnicodeString),
                          AppContainerSidType >= 0) )
                    {
                      if ( !TokenInformation
                        || (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &Source), AppContainerSidType >= 0)
                        && (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &DestinationString),
                            AppContainerSidType >= 0) )
                      {
                        if ( v47 )
                        {
                          if ( !v23 )
                          {
                            AppContainerSidType = RtlAppendUnicodeStringToString(a4, &Source);
                            if ( AppContainerSidType >= 0 )
                              AppContainerSidType = RtlAppendUnicodeStringToString(a4, &v43);
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  AppContainerSidType = -1073741670;
                }
              }
            }
            goto LABEL_65;
          }
          v21 = L"AppContainerNamedObjects";
        }
        else
        {
          if ( !v9 )
          {
            v19 = L"AppContainerNamedObjects";
            if ( !TokenInformation )
              v19 = L"BaseNamedObjects";
            LODWORD(ReturnLengtha) = v15;
            v20 = RtlStringCchPrintfW(psz, 0x104uLL, L"%s\\%ld\\%s", L"\\Sessions", ReturnLengtha, v19);
            goto LABEL_40;
          }
          v21 = L"\\BaseNamedObjects";
        }
        v20 = RtlStringCchCopyW(psz, 0x104uLL, v21);
        goto LABEL_40;
      }
    }
    v9 = 0;
    goto LABEL_30;
  }
LABEL_65:
  RtlFreeAnsiString(&UnicodeString);
  if ( AppContainerSidType < 0 )
    RtlFreeAnsiString(a4);
  if ( v30 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)AppContainerSidType;
}
