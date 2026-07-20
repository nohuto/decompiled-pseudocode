/*
 * XREFs of SmscpLoadSubSystemsForMuSession @ 0x140002580
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmscpLoadSubSystem @ 0x140002D40 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140003090 (SmpExecuteImage.c)
 *     SmpInternalLogFailure @ 0x1400036FC (SmpInternalLogFailure.c)
 *     SmpParseCommandLine @ 0x140004FD0 (SmpParseCommandLine.c)
 *     SmpNtSerializeBoot @ 0x14000D628 (SmpNtSerializeBoot.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpInvokeAutoChk @ 0x140015CB8 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall SmscpLoadSubSystemsForMuSession(int a1)
{
  char v2; // si
  NTSTATUS v3; // eax
  unsigned int v4; // ebx
  int v6; // eax
  char *v7; // rcx
  int v8; // r15d
  _DWORD *v9; // r14
  char *v10; // r12
  __int64 v11; // r8
  signed __int64 v12; // rcx
  _WORD *v13; // rdx
  __int16 v14; // ax
  _WORD *v15; // rax
  char *v16; // r8
  unsigned int *v17; // r12
  char *v18; // r13
  unsigned int i; // r14d
  int v20; // ebx
  char *v21; // rdx
  int v22; // eax
  int v23; // r15d
  signed int v24; // eax
  int v25; // r9d
  signed int v26; // r15d
  signed int v27; // eax
  _DWORD *v28; // r14
  char *v29; // r15
  int v30; // esi
  int v31; // eax
  int v32; // r9d
  int v33; // r12d
  unsigned int v34; // r9d
  unsigned int v35; // edx
  int SubSystem; // eax
  signed __int32 v37[8]; // [rsp+0h] [rbp-100h] BYREF
  struct _UNICODE_STRING *v38; // [rsp+20h] [rbp-E0h]
  __int64 SystemInformation; // [rsp+40h] [rbp-C0h] BYREF
  char *v40; // [rsp+48h] [rbp-B8h]
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING v45; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING v46; // [rsp+90h] [rbp-70h] BYREF
  PVOID ReturnedState; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING String1; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING v49; // [rsp+B8h] [rbp-48h] BYREF
  struct _UNICODE_STRING v50; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v51[64]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v52[160]; // [rsp+120h] [rbp+20h] BYREF

  ReturnedState = 0LL;
  SystemInformation = 0LL;
  v40 = 0LL;
  v2 = 0;
  String1 = 0LL;
  v3 = RtlAcquirePrivilege((PULONG)&SmpSessionCreatePrivilege, 1u, 2u, &ReturnedState);
  v4 = v3;
  if ( v3 < 0 )
  {
    SmpLogFailure("SmscpLoadSubSystemsForMuSession", 814LL, (unsigned int)v3);
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v37, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 816;
    *((_DWORD *)SmscpSharedWindow + 1) = v4;
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpLoadSubSystemsForMuSession;
    return v4;
  }
  if ( !a1 && SmpSerializeBoot == 1 )
  {
    v6 = SmpNtSerializeBoot();
    v4 = v6;
    if ( v6 >= 0 )
    {
      v2 = 1;
    }
    else
    {
      SmpLogFailure("SmscpLoadSubSystemsForMuSession", 839LL, (unsigned int)v6);
      *(_DWORD *)SmscpSharedWindow = 1;
      _InterlockedOr(v37, 0);
      *((_DWORD *)SmscpSharedWindow + 2) = 841;
      *((_DWORD *)SmscpSharedWindow + 1) = v4;
      *((_QWORD *)SmscpSharedWindow + 2) = NtSerializeBoot;
    }
  }
  v7 = (char *)SmpMappedView;
  v8 = 0;
  v9 = (char *)SmpMappedView + 64;
  v10 = (char *)SmpMappedView + *((_QWORD *)SmpMappedView + 7);
  if ( *((_DWORD *)SmpMappedView + 16) )
  {
    while ( 1 )
    {
      v40 = &v7[*(_QWORD *)&v10[16 * v8]];
      WORD1(SystemInformation) = *(_WORD *)&v10[16 * v8 + 8];
      LOWORD(SystemInformation) = WORD1(SystemInformation);
      v4 = NtSetSystemInformation(SystemExtendServiceTableInformation, &SystemInformation, 0x10u);
      if ( (v4 & 0x80000000) != 0 )
        break;
      if ( (unsigned int)++v8 >= *v9 )
        break;
      v7 = (char *)SmpMappedView;
    }
  }
  RtlReleasePrivilege(ReturnedState);
  if ( (v4 & 0x80000000) != 0 )
  {
    memset_0(v51, 0, 0xE0uLL);
    if ( v40 )
    {
      v11 = 64LL;
      v12 = v40 - v52;
      v13 = v52;
      do
      {
        if ( v11 == -2147483582 )
          break;
        v14 = *(_WORD *)((char *)v13 + v12);
        if ( !v14 )
          break;
        *v13++ = v14;
        --v11;
      }
      while ( v11 );
      v15 = v13 - 1;
      if ( v11 )
        v15 = v13;
      *v15 = 0;
    }
    SmpInternalLogFailure("SmscpLoadSubSystemsForMuSession", 880LL, v4, v51);
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v37, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 882;
    *((_DWORD *)SmscpSharedWindow + 1) = v4;
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpLoadSubSystemsForMuSession;
    return v4;
  }
  v16 = (char *)SmpMappedView;
  v17 = (unsigned int *)((char *)SmpMappedView + 80);
  v18 = (char *)SmpMappedView + *((_QWORD *)SmpMappedView + 9);
  for ( i = 0; ; i += 2 )
  {
    while ( 1 )
    {
      if ( i >= *v17 )
      {
        v28 = v16 + 96;
        v29 = &v16[*((_QWORD *)v16 + 11)];
        v30 = 0;
        if ( !*((_DWORD *)v16 + 24) )
          return v4;
        while ( 1 )
        {
          v42 = 0;
          Source = 0LL;
          v40 = &v16[*(_QWORD *)&v29[16 * v30]];
          WORD1(SystemInformation) = *(_WORD *)&v29[16 * v30 + 8];
          LOWORD(SystemInformation) = WORD1(SystemInformation);
          v38 = &v50;
          v46 = 0LL;
          v50 = 0LL;
          v31 = SmpParseCommandLine(&SystemInformation, &v42, &Source, &v46);
          v33 = v31;
          if ( v31 >= 0 )
            break;
          v34 = v31;
          v35 = 10121;
LABEL_74:
          SmpLogFailureString((__int64)"SmpExecuteCommand", v35, (__int64)v40, v34);
LABEL_75:
          if ( (unsigned int)++v30 >= *v28 )
            return v4;
          v16 = (char *)SmpMappedView;
        }
        if ( (v42 & 4) != 0 )
        {
          if ( SmpSoftBoot && !SmpBugcheckRecovery )
          {
LABEL_72:
            RtlFreeUnicodeString(&Source);
            RtlFreeUnicodeString(&v50);
            RtlFreeUnicodeString(&v46);
            if ( v33 >= 0 )
              goto LABEL_75;
            goto LABEL_73;
          }
          SubSystem = SmpInvokeAutoChk(&Source);
        }
        else if ( (v42 & 8) != 0 )
        {
          if ( SmpPrimarySmss )
            SubSystem = SmpLoadSubSystem(
                          (unsigned int)&Source,
                          (unsigned int)&v46,
                          (unsigned int)&SystemInformation,
                          a1,
                          (_DWORD)v38,
                          v42);
          else
            SubSystem = SmscpLoadSubSystem(
                          (unsigned int)&Source,
                          (unsigned int)&v46,
                          (unsigned int)&SystemInformation,
                          a1,
                          v42);
        }
        else
        {
          if ( (v42 & 0x10) != 0 )
          {
            v33 = -1073741772;
            SmpLogFailureString((__int64)"SmpExecuteCommand", 0x27AFu, (__int64)Source.Buffer, 0xC0000034);
            RtlFreeUnicodeString(&Source);
            RtlFreeUnicodeString(&v50);
            RtlFreeUnicodeString(&v46);
LABEL_73:
            v34 = v33;
            v35 = 10186;
            goto LABEL_74;
          }
          SubSystem = SmpExecuteImage(
                        (unsigned int)&Source,
                        (unsigned int)&v46,
                        (unsigned int)&SystemInformation,
                        v32,
                        0LL,
                        v42,
                        0LL);
        }
        v33 = SubSystem;
        goto LABEL_72;
      }
      v20 = 12296;
      v21 = &v18[16 * i];
      String1.Buffer = (PWSTR)&v16[*(_QWORD *)v21];
      String1.MaximumLength = *((_WORD *)v21 + 4);
      String1.Length = String1.MaximumLength;
      v40 = &v16[*((_QWORD *)v21 + 2)];
      WORD1(SystemInformation) = *((_WORD *)v21 + 12);
      LOWORD(SystemInformation) = WORD1(SystemInformation);
      if ( a1 )
        v20 = 4104;
      if ( RtlEqualUnicodeString(&String1, &SmpDebugKeyword, 1u) )
        v20 |= 1u;
      if ( !v2 && a1 == 1 && SmpSerializeBoot == 2 )
      {
        v22 = SmpNtSerializeBoot();
        v23 = v22;
        if ( v22 >= 0 )
        {
          v2 = 1;
        }
        else
        {
          SmpLogFailure("SmscpLoadSubSystemsForMuSession", 941LL, (unsigned int)v22);
          *(_DWORD *)SmscpSharedWindow = 1;
          _InterlockedOr(v37, 0);
          *((_DWORD *)SmscpSharedWindow + 2) = 943;
          *((_DWORD *)SmscpSharedWindow + 1) = v23;
          *((_QWORD *)SmscpSharedWindow + 2) = NtSerializeBoot;
        }
      }
      v41 = v20;
      UnicodeString = 0LL;
      v45 = 0LL;
      v49 = 0LL;
      if ( (v20 & 1) == 0 )
        break;
      v16 = (char *)SmpMappedView;
      v4 = 0;
      i += 2;
    }
    v38 = &v49;
    v24 = SmpParseCommandLine(&SystemInformation, &v41, &UnicodeString, &v45);
    v26 = v24;
    if ( v24 < 0 )
      break;
    if ( (v41 & 4) != 0 )
    {
      if ( !SmpSoftBoot || SmpBugcheckRecovery )
      {
        v27 = SmpInvokeAutoChk(&UnicodeString);
        goto LABEL_50;
      }
      goto LABEL_51;
    }
    if ( (v41 & 8) != 0 )
    {
      if ( SmpPrimarySmss )
        v27 = SmpLoadSubSystem(
                (unsigned int)&UnicodeString,
                (unsigned int)&v45,
                (unsigned int)&SystemInformation,
                a1,
                (_DWORD)v38,
                v41);
      else
        v27 = SmscpLoadSubSystem(
                (unsigned int)&UnicodeString,
                (unsigned int)&v45,
                (unsigned int)&SystemInformation,
                a1,
                v41);
LABEL_50:
      v26 = v27;
LABEL_51:
      RtlFreeUnicodeString(&UnicodeString);
      RtlFreeUnicodeString(&v49);
      RtlFreeUnicodeString(&v45);
      if ( v26 >= 0 )
        goto LABEL_53;
      goto LABEL_52;
    }
    if ( (v41 & 0x10) == 0 )
    {
      v27 = SmpExecuteImage(
              (unsigned int)&UnicodeString,
              (unsigned int)&v45,
              (unsigned int)&SystemInformation,
              v25,
              0LL,
              v41,
              0LL);
      goto LABEL_50;
    }
    v26 = -1073741772;
    SmpLogFailureString((__int64)"SmpExecuteCommand", 0x27AFu, (__int64)UnicodeString.Buffer, 0xC0000034);
    RtlFreeUnicodeString(&UnicodeString);
    RtlFreeUnicodeString(&v49);
    RtlFreeUnicodeString(&v45);
LABEL_52:
    SmpLogFailureString((__int64)"SmpExecuteCommand", 0x27CAu, (__int64)v40, v26);
LABEL_53:
    v4 = v26;
    if ( v26 < 0 )
      goto LABEL_56;
    v16 = (char *)SmpMappedView;
  }
  SmpLogFailureString((__int64)"SmpExecuteCommand", 0x2789u, (__int64)v40, v24);
LABEL_56:
  SmpLogFailureString((__int64)"SmscpLoadSubSystemsForMuSession", 0x3BEu, (__int64)String1.Buffer, v26);
  *(_DWORD *)SmscpSharedWindow = 1;
  _InterlockedOr(v37, 0);
  *((_DWORD *)SmscpSharedWindow + 2) = 960;
  *((_DWORD *)SmscpSharedWindow + 1) = v26;
  *((_QWORD *)SmscpSharedWindow + 2) = SmscpLoadSubSystemsForMuSession;
  return (unsigned int)v26;
}
