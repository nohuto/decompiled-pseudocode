/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x180042BE0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1800438A0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x180043E70 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     RtlConvertSidToUnicodeString @ 0x1800272E0 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlFreeAnsiString @ 0x1800410A0 (RtlFreeAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x180043340 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCchPrintfW @ 0x1800435E0 (RtlStringCchPrintfW.c)
 *     RtlGetAppContainerSidType @ 0x180043660 (RtlGetAppContainerSidType.c)
 *     RtlGetAppContainerParent @ 0x180043AF0 (RtlGetAppContainerParent.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(
        HANDLE TokenHandle,
        _DWORD *AppContainerSid,
        char a3,
        _UNICODE_STRING *a4)
{
  _DWORD *v7; // rdi
  PSID v8; // r12
  char v10; // r15
  int v11; // eax
  int v12; // r14d
  NTSTATUS AppContainerParent; // ebx
  int v14; // edi
  unsigned int v15; // ebx
  bool v16; // al
  __int64 v17; // r8
  WCHAR *v18; // rdx
  WCHAR v19; // ax
  WCHAR *v20; // rax
  __int64 v21; // rcx
  WCHAR *v22; // rax
  int v23; // esi
  __int64 v24; // rbx
  int v25; // r14d
  SIZE_T v26; // rbx
  wchar_t *Atom; // rax
  wchar_t *v28; // rdi
  const wchar_t *v30; // rcx
  NTSTATUS v31; // eax
  const wchar_t *v32; // rax
  NTSTATUS v33; // eax
  size_t v34; // rax
  WCHAR v35; // ax
  int v36; // eax
  wchar_t *Buffer; // rdi
  size_t v38; // rax
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+38h] [rbp-C8h]
  char v44; // [rsp+40h] [rbp-C0h]
  PSID AppContainerSidParent; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v47; // [rsp+54h] [rbp-ACh] BYREF
  int TokenInformation; // [rsp+58h] [rbp-A8h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+64h] [rbp-9Ch]
  int v52; // [rsp+68h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v54; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v55; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v56; // [rsp+A0h] [rbp-60h] BYREF
  PSID Sid[12]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v58[10]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR Source[264]; // [rsp+160h] [rbp+60h] BYREF
  wchar_t *String; // [rsp+370h] [rbp+270h] BYREF
  char v61; // [rsp+378h] [rbp+278h]
  wchar_t v62[264]; // [rsp+490h] [rbp+390h] BYREF

  AppContainerSidType = NotAppContainerSidType;
  AppContainerSidParent = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset_thunk_772440563353939046(v58, 0, 0x50uLL);
  v47 = 0;
  v50 = 0;
  memset_thunk_772440563353939046(Source, 0, 0x208uLL);
  memset_thunk_772440563353939046(v62, 0, 0x208uLL);
  memset_thunk_772440563353939046(Sid, 0, 0x58uLL);
  *(_QWORD *)&v54.Length = 262146LL;
  v54.Buffer = (wchar_t *)L"\\";
  v55 = 0LL;
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  v44 = 1;
  v51 = a3 & 2;
  v10 = a3 & 1;
  v11 = a3 & 8;
  v12 = a3 & 4;
  v52 = v11;
  v46 = 0;
  TokenInformation = 0;
  *a4 = 0LL;
  UnicodeString = 0LL;
  v56 = 0LL;
  if ( AppContainerSid )
  {
    v7 = AppContainerSid;
    v46 = 1;
  }
  else
  {
    AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Du, &v46, 4u, &v47);
    if ( AppContainerParent < 0 )
      goto LABEL_48;
    if ( v46 )
    {
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Fu, v58, 0x50u, &v47);
      if ( AppContainerParent < 0 )
        goto LABEL_48;
      v7 = (_DWORD *)v58[0];
      if ( !v58[0] )
      {
        AppContainerParent = -1073741823;
        goto LABEL_48;
      }
    }
  }
  AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Au, &TokenInformation, 4u, &v47);
  if ( AppContainerParent >= 0 )
  {
    if ( !TokenInformation )
      goto LABEL_7;
    AppContainerParent = NtQueryInformationToken(TokenHandle, 1u, Sid, 0x58u, &v47);
    if ( AppContainerParent >= 0 )
    {
      AppContainerParent = RtlConvertSidToUnicodeString(&v56, Sid[0], 1u);
      if ( AppContainerParent < 0 )
      {
LABEL_45:
        if ( v56.Buffer )
          RtlpSysVolFree(v56.Buffer);
        if ( AppContainerParent >= 0 )
          goto LABEL_49;
        goto LABEL_48;
      }
LABEL_7:
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0xCu, &v50, 4u, &v47);
      if ( AppContainerParent < 0 )
        goto LABEL_45;
      if ( v46 )
      {
        AppContainerParent = RtlGetAppContainerSidType(v7, &AppContainerSidType);
        if ( AppContainerParent < 0 )
          goto LABEL_44;
        if ( AppContainerSidType == ParentAppContainerSidType )
        {
          AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, v7, 1u);
          if ( AppContainerParent < 0 )
            goto LABEL_44;
        }
        else
        {
          AppContainerParent = RtlGetAppContainerParent(v7, &AppContainerSidParent);
          if ( AppContainerParent < 0 )
            goto LABEL_44;
          AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, AppContainerSidParent, 1u);
          if ( AppContainerParent < 0 )
            goto LABEL_44;
          v43 = v7[13];
          v42 = v7[12];
          v41 = v7[11];
          v36 = v7[10];
          Buffer = UnicodeString.Buffer;
          LODWORD(ReturnLength) = v36;
          AppContainerParent = RtlStringCchPrintfW(
                                 v62,
                                 260LL,
                                 L"%s\\%u-%u-%u-%u",
                                 UnicodeString.Buffer,
                                 ReturnLength,
                                 v41,
                                 v42,
                                 v43);
          if ( AppContainerParent < 0 )
            goto LABEL_44;
          if ( Buffer )
            RtlpSysVolFree(Buffer);
          *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
          UnicodeString.Buffer = v62;
          v38 = 2 * wcslen(v62);
          v44 = 0;
          if ( v38 >= 0xFFFE )
            LOWORD(v38) = -4;
          UnicodeString.Length = v38;
          UnicodeString.MaximumLength = v38 + 2;
        }
      }
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Cu, &String, 0x120u, &v47);
      if ( AppContainerParent >= 0 )
      {
        v14 = v46;
        v15 = v50;
        v16 = !TokenInformation && !v46 && v15 == RtlGetCurrentServiceSessionId();
        if ( v10 )
        {
          if ( !v12 )
          {
            v32 = L"\\AppContainerNamedObjects";
            if ( !v14 )
              v32 = &word_1801762D4;
            v33 = RtlStringCchPrintfW(Source, 260LL, L"Global\\Session\\%ld%s", v15, v32);
            v14 = v46;
            AppContainerParent = v33;
            goto LABEL_21;
          }
          v17 = 260LL;
          v18 = Source;
          do
          {
            if ( v17 == -2147483386 )
              break;
            v19 = *(WCHAR *)((char *)v18 + (char *)L"AppContainerNamedObjects" - (char *)Source);
            if ( !v19 )
              break;
            *v18++ = v19;
            --v17;
          }
          while ( v17 );
        }
        else
        {
          if ( !v16 )
          {
            v30 = L"AppContainerNamedObjects";
            if ( !v14 )
              v30 = L"BaseNamedObjects";
            LODWORD(ReturnLengtha) = v15;
            v31 = RtlStringCchPrintfW(Source, 260LL, L"%s\\%ld\\%s", L"\\Sessions", ReturnLengtha, v30);
            v14 = v46;
            AppContainerParent = v31;
            goto LABEL_21;
          }
          v17 = 260LL;
          v18 = Source;
          do
          {
            if ( v17 == -2147483386 )
              break;
            v35 = *(WCHAR *)((char *)v18 + (char *)L"\\BaseNamedObjects" - (char *)Source);
            if ( !v35 )
              break;
            *v18++ = v35;
            --v17;
          }
          while ( v17 );
        }
        v20 = v18 - 1;
        AppContainerParent = -2147483643;
        if ( v17 )
        {
          v20 = v18;
          AppContainerParent = 0;
        }
        *v20 = 0;
LABEL_21:
        if ( AppContainerParent >= 0 )
        {
          v21 = 260LL;
          v22 = Source;
          do
          {
            if ( !*v22 )
              break;
            ++v22;
            --v21;
          }
          while ( v21 );
          AppContainerParent = -1073741811;
          if ( v21 )
          {
            v23 = v51;
            v24 = 2 * (260 - v21);
            if ( TokenInformation && !v51 )
              v24 = 2 * (260 - v21) + v56.Length + 2;
            if ( v14 )
              v24 += UnicodeString.Length + 2LL;
            v25 = v52;
            if ( v61 && !v52 )
            {
              *(_QWORD *)&v55.Length = 0LL;
              v55.Buffer = String;
              if ( String )
              {
                v34 = 2 * wcslen(String);
                if ( v34 >= 0xFFFE )
                  LOWORD(v34) = -4;
                v55.Length = v34;
                v55.MaximumLength = v34 + 2;
              }
              else
              {
                LOWORD(v34) = v55.Length;
              }
              v24 += (unsigned __int16)v34 + 2LL;
            }
            v26 = v24 + 2;
            Atom = (wchar_t *)RtlpAllocateAtom(v26);
            v28 = Atom;
            if ( Atom )
            {
              memset_thunk_772440563353939046(Atom, 0, v26);
              *a4 = 0LL;
              a4->MaximumLength = v26;
              a4->Buffer = v28;
              AppContainerParent = RtlAppendUnicodeToString(a4, Source);
              if ( AppContainerParent >= 0 )
              {
                if ( !TokenInformation
                  || v23
                  || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v54), AppContainerParent >= 0)
                  && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v56), AppContainerParent >= 0) )
                {
                  if ( !v46
                    || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v54), AppContainerParent >= 0)
                    && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &UnicodeString), AppContainerParent >= 0) )
                  {
                    if ( v61 )
                    {
                      if ( !v25 )
                      {
                        AppContainerParent = RtlAppendUnicodeStringToString(a4, &v54);
                        if ( AppContainerParent >= 0 )
                          AppContainerParent = RtlAppendUnicodeStringToString(a4, &v55);
                      }
                    }
                  }
                }
              }
            }
            else
            {
              AppContainerParent = -1073741670;
            }
          }
        }
      }
LABEL_44:
      v8 = AppContainerSidParent;
      goto LABEL_45;
    }
  }
LABEL_48:
  RtlFreeAnsiString(a4);
LABEL_49:
  if ( v44 && UnicodeString.Buffer )
    RtlpSysVolFree(UnicodeString.Buffer);
  if ( v8 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
  return (unsigned int)AppContainerParent;
}
