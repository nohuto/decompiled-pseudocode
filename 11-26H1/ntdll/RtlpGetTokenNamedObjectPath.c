/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x180058660
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x180059320 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x1800598F0 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlConvertSidToUnicodeString @ 0x18003CD70 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlFreeAnsiString @ 0x180056B20 (RtlFreeAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCchPrintfW @ 0x180059060 (RtlStringCchPrintfW.c)
 *     RtlGetAppContainerSidType @ 0x1800590E0 (RtlGetAppContainerSidType.c)
 *     RtlGetAppContainerParent @ 0x180059570 (RtlGetAppContainerParent.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(__int64 a1, _DWORD *a2, char a3, UNICODE_STRING *a4)
{
  _DWORD *v7; // rdi
  PSID v8; // r12
  char v10; // r15
  int v11; // eax
  int v12; // r14d
  int AppContainerSidType; // ebx
  int v14; // edi
  unsigned int v15; // ebx
  bool v16; // al
  __int64 v17; // r8
  wchar_t *v18; // rdx
  wchar_t v19; // ax
  wchar_t *v20; // rax
  __int64 v21; // rcx
  wchar_t *v22; // rax
  int v23; // esi
  __int64 v24; // rbx
  int v25; // r14d
  size_t v26; // rbx
  wchar_t *Atom; // rax
  wchar_t *v28; // rdi
  const wchar_t *v30; // rcx
  int v31; // eax
  const wchar_t *v32; // rax
  int v33; // eax
  size_t v34; // rax
  wchar_t v35; // ax
  int v36; // eax
  wchar_t *Buffer; // rdi
  size_t v38; // rax
  __int64 v39; // [rsp+20h] [rbp-E0h]
  __int64 v40; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+38h] [rbp-C8h]
  char v44; // [rsp+40h] [rbp-C0h]
  PSID v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+64h] [rbp-9Ch]
  int v52; // [rsp+68h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v54[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v55; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v56; // [rsp+A0h] [rbp-60h] BYREF
  PSID Sid[12]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v58[10]; // [rsp+110h] [rbp+10h] BYREF
  wchar_t v59[264]; // [rsp+160h] [rbp+60h] BYREF
  wchar_t *String; // [rsp+370h] [rbp+270h] BYREF
  char v61; // [rsp+378h] [rbp+278h]
  wchar_t v62[264]; // [rsp+490h] [rbp+390h] BYREF

  v49 = 0;
  v45 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset_thunk_772440563353939046(v58, 0, 0x50uLL);
  v47 = 0;
  v50 = 0;
  memset_thunk_772440563353939046(v59, 0, 0x208uLL);
  memset_thunk_772440563353939046(v62, 0, 0x208uLL);
  memset_thunk_772440563353939046(Sid, 0, 0x58uLL);
  v54[0] = 262146LL;
  v54[1] = L"\\";
  v55 = 0LL;
  if ( !a4 || !a1 )
    return 3221225485LL;
  v44 = 1;
  v51 = a3 & 2;
  v10 = a3 & 1;
  v11 = a3 & 8;
  v12 = a3 & 4;
  v52 = v11;
  v46 = 0;
  v48 = 0;
  *a4 = 0LL;
  UnicodeString = 0LL;
  v56 = 0LL;
  if ( a2 )
  {
    v7 = a2;
    v46 = 1;
  }
  else
  {
    AppContainerSidType = NtQueryInformationToken(a1, 29LL, &v46, 4LL, &v47);
    if ( AppContainerSidType < 0 )
      goto LABEL_48;
    if ( v46 )
    {
      AppContainerSidType = NtQueryInformationToken(a1, 31LL, v58, 80LL, &v47);
      if ( AppContainerSidType < 0 )
        goto LABEL_48;
      v7 = (_DWORD *)v58[0];
      if ( !v58[0] )
      {
        AppContainerSidType = -1073741823;
        goto LABEL_48;
      }
    }
  }
  AppContainerSidType = NtQueryInformationToken(a1, 42LL, &v48, 4LL, &v47);
  if ( AppContainerSidType >= 0 )
  {
    if ( !v48 )
      goto LABEL_7;
    AppContainerSidType = NtQueryInformationToken(a1, 1LL, Sid, 88LL, &v47);
    if ( AppContainerSidType >= 0 )
    {
      AppContainerSidType = RtlConvertSidToUnicodeString(&v56, Sid[0], 1u);
      if ( AppContainerSidType < 0 )
      {
LABEL_45:
        if ( v56.Buffer )
          RtlpSysVolFree((__int64)v56.Buffer);
        if ( AppContainerSidType >= 0 )
          goto LABEL_49;
        goto LABEL_48;
      }
LABEL_7:
      AppContainerSidType = NtQueryInformationToken(a1, 12LL, &v50, 4LL, &v47);
      if ( AppContainerSidType < 0 )
        goto LABEL_45;
      if ( v46 )
      {
        AppContainerSidType = RtlGetAppContainerSidType(v7, &v49);
        if ( AppContainerSidType < 0 )
          goto LABEL_44;
        if ( v49 == 2 )
        {
          AppContainerSidType = RtlConvertSidToUnicodeString(&UnicodeString, v7, 1u);
          if ( AppContainerSidType < 0 )
            goto LABEL_44;
        }
        else
        {
          AppContainerSidType = RtlGetAppContainerParent(v7, &v45);
          if ( AppContainerSidType < 0 )
            goto LABEL_44;
          AppContainerSidType = RtlConvertSidToUnicodeString(&UnicodeString, v45, 1u);
          if ( AppContainerSidType < 0 )
            goto LABEL_44;
          v43 = v7[13];
          v42 = v7[12];
          v41 = v7[11];
          v36 = v7[10];
          Buffer = UnicodeString.Buffer;
          LODWORD(v39) = v36;
          AppContainerSidType = RtlStringCchPrintfW(
                                  v62,
                                  260LL,
                                  L"%s\\%u-%u-%u-%u",
                                  UnicodeString.Buffer,
                                  v39,
                                  v41,
                                  v42,
                                  v43);
          if ( AppContainerSidType < 0 )
            goto LABEL_44;
          if ( Buffer )
            RtlpSysVolFree((__int64)Buffer);
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
      AppContainerSidType = NtQueryInformationToken(a1, 44LL, &String, 288LL, &v47);
      if ( AppContainerSidType >= 0 )
      {
        v14 = v46;
        v15 = v50;
        v16 = !v48 && !v46 && v15 == (unsigned int)RtlGetCurrentServiceSessionId();
        if ( v10 )
        {
          if ( !v12 )
          {
            v32 = L"\\AppContainerNamedObjects";
            if ( !v14 )
              v32 = (const wchar_t *)&unk_180178474;
            v33 = RtlStringCchPrintfW(v59, 260LL, L"Global\\Session\\%ld%s", v15, v32);
            v14 = v46;
            AppContainerSidType = v33;
            goto LABEL_21;
          }
          v17 = 260LL;
          v18 = v59;
          do
          {
            if ( v17 == -2147483386 )
              break;
            v19 = *(wchar_t *)((char *)v18 + (char *)L"AppContainerNamedObjects" - (char *)v59);
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
            LODWORD(v40) = v15;
            v31 = RtlStringCchPrintfW(v59, 260LL, L"%s\\%ld\\%s", L"\\Sessions", v40, v30);
            v14 = v46;
            AppContainerSidType = v31;
            goto LABEL_21;
          }
          v17 = 260LL;
          v18 = v59;
          do
          {
            if ( v17 == -2147483386 )
              break;
            v35 = *(wchar_t *)((char *)v18 + (char *)L"\\BaseNamedObjects" - (char *)v59);
            if ( !v35 )
              break;
            *v18++ = v35;
            --v17;
          }
          while ( v17 );
        }
        v20 = v18 - 1;
        AppContainerSidType = -2147483643;
        if ( v17 )
        {
          v20 = v18;
          AppContainerSidType = 0;
        }
        *v20 = 0;
LABEL_21:
        if ( AppContainerSidType >= 0 )
        {
          v21 = 260LL;
          v22 = v59;
          do
          {
            if ( !*v22 )
              break;
            ++v22;
            --v21;
          }
          while ( v21 );
          AppContainerSidType = -1073741811;
          if ( v21 )
          {
            v23 = v51;
            v24 = 2 * (260 - v21);
            if ( v48 && !v51 )
              v24 = 2 * (260 - v21) + v56.Length + 2;
            if ( v14 )
              v24 += UnicodeString.Length + 2LL;
            v25 = v52;
            if ( v61 && !v52 )
            {
              *(_QWORD *)&v55 = 0LL;
              *((_QWORD *)&v55 + 1) = String;
              if ( String )
              {
                v34 = 2 * wcslen(String);
                if ( v34 >= 0xFFFE )
                  LOWORD(v34) = -4;
                LOWORD(v55) = v34;
                WORD1(v55) = v34 + 2;
              }
              else
              {
                LOWORD(v34) = v55;
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
              AppContainerSidType = RtlAppendUnicodeToString(&a4->Length, v59);
              if ( AppContainerSidType >= 0 )
              {
                if ( !v48
                  || v23
                  || (AppContainerSidType = RtlAppendUnicodeStringToString(a4, v54), AppContainerSidType >= 0)
                  && (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &v56), AppContainerSidType >= 0) )
                {
                  if ( !v46
                    || (AppContainerSidType = RtlAppendUnicodeStringToString(a4, v54), AppContainerSidType >= 0)
                    && (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &UnicodeString),
                        AppContainerSidType >= 0) )
                  {
                    if ( v61 )
                    {
                      if ( !v25 )
                      {
                        AppContainerSidType = RtlAppendUnicodeStringToString(a4, v54);
                        if ( AppContainerSidType >= 0 )
                          AppContainerSidType = RtlAppendUnicodeStringToString(a4, &v55);
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
      }
LABEL_44:
      v8 = v45;
      goto LABEL_45;
    }
  }
LABEL_48:
  RtlFreeAnsiString(a4);
LABEL_49:
  if ( v44 && UnicodeString.Buffer )
    RtlpSysVolFree((__int64)UnicodeString.Buffer);
  if ( v8 )
    RtlFreeHeap_0();
  return (unsigned int)AppContainerSidType;
}
