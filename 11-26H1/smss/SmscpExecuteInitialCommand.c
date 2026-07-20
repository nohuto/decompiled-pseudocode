/*
 * XREFs of SmscpExecuteInitialCommand @ 0x140002CA0
 * Callers:
 *     SmscMain @ 0x140001E10 (SmscMain.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpParseCommandLine @ 0x140004280 (SmpParseCommandLine.c)
 *     SmscpLoadSubSystem @ 0x140004C90 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140005010 (SmpExecuteImage.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpInvokeAutoChk @ 0x1400158B8 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x1400169E8 (SmpLoadSubSystem.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall SmscpExecuteInitialCommand(int a1, int *a2, __int64 a3)
{
  int v4; // ecx
  int v5; // eax
  int v7; // eax
  int v8; // r9d
  __int64 v9; // rdi
  int v10; // ebx
  __int64 result; // rax
  int SubSystem; // eax
  __int64 v13; // r8
  unsigned int v14; // edx
  unsigned int v15; // r9d
  signed __int32 v16[8]; // [rsp+0h] [rbp-100h] BYREF
  struct _UNICODE_STRING *v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v20; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v21; // [rsp+68h] [rbp-98h] BYREF
  HANDLE ProcessHandle[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v23; // [rsp+90h] [rbp-70h]
  __int128 v24; // [rsp+A0h] [rbp-60h]
  __int128 v25; // [rsp+B0h] [rbp-50h]
  __int128 v26; // [rsp+C0h] [rbp-40h]
  __int128 v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+E0h] [rbp-20h]
  _OWORD v29[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v30; // [rsp+110h] [rbp+10h]
  int v31; // [rsp+118h] [rbp+18h]
  int v32; // [rsp+11Ch] [rbp+1Ch]
  __int128 v33; // [rsp+120h] [rbp+20h]
  __int128 v34; // [rsp+130h] [rbp+30h]
  __int128 v35; // [rsp+140h] [rbp+40h]
  __int128 v36; // [rsp+150h] [rbp+50h]
  __int128 v37; // [rsp+160h] [rbp+60h]
  __int128 v38; // [rsp+170h] [rbp+70h]
  __int64 v39; // [rsp+180h] [rbp+80h]
  char v40; // [rsp+188h] [rbp+88h]
  _BYTE v41[183]; // [rsp+189h] [rbp+89h] BYREF

  v28 = 0LL;
  v4 = *a2;
  v5 = 2080;
  *(_OWORD *)ProcessHandle = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( (v4 & 8) != 0 )
  {
    v5 = 10272;
    if ( (v4 & 6) == 2 )
      v5 = 14368;
  }
  v18 = v5;
  v17 = &v21;
  UnicodeString = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v7 = SmpParseCommandLine(a3, &v18, &UnicodeString, &v20);
  v9 = 0LL;
  v10 = v7;
  if ( v7 < 0 )
  {
    if ( a3 )
      v13 = *(_QWORD *)(a3 + 8);
    else
      v13 = 0LL;
    v14 = 10119;
    v15 = v7;
    goto LABEL_16;
  }
  if ( (v18 & 4) == 0 )
  {
    if ( (v18 & 8) != 0 )
    {
      if ( SmpPrimarySmss )
        SubSystem = SmpLoadSubSystem((unsigned int)&UnicodeString, (unsigned int)&v20, a3, a1, (_DWORD)v17, v18);
      else
        SubSystem = SmscpLoadSubSystem((unsigned int)&UnicodeString, (unsigned int)&v20, a3, a1, v18);
    }
    else
    {
      if ( (v18 & 0x10) != 0 )
      {
        v10 = -1073741772;
        SmpLogFailureString((__int64)"SmpExecuteCommand", 0x27ADu, (__int64)UnicodeString.Buffer, 0xC0000034);
        RtlFreeUnicodeString(&UnicodeString);
        RtlFreeUnicodeString(&v21);
        RtlFreeUnicodeString(&v20);
        goto LABEL_29;
      }
      SubSystem = SmpExecuteImage(
                    (unsigned int)&UnicodeString,
                    (unsigned int)&v20,
                    a3,
                    v8,
                    0LL,
                    v18,
                    (__int64)ProcessHandle);
    }
    goto LABEL_12;
  }
  if ( !SmpSoftBoot || SmpBugcheckRecovery )
  {
    SubSystem = SmpInvokeAutoChk(&UnicodeString);
LABEL_12:
    v10 = SubSystem;
  }
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v21);
  RtlFreeUnicodeString(&v20);
  if ( v10 < 0 )
  {
LABEL_29:
    v15 = v10;
    if ( a3 )
      v13 = *(_QWORD *)(a3 + 8);
    else
      v13 = 0LL;
    v14 = 10185;
LABEL_16:
    SmpLogFailureString((__int64)"SmpExecuteCommand", v14, v13, v15);
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v16, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 1044;
    *((_DWORD *)SmscpSharedWindow + 1) = v10;
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpExecuteInitialCommand;
    if ( a3 )
      v9 = *(_QWORD *)(a3 + 8);
    SmpLogFailureString((__int64)"SmscpExecuteInitialCommand", 0x415u, v9, v10);
    return (unsigned int)v10;
  }
  v29[0] = 0LL;
  *(_DWORD *)SmscpSharedWindow = 2;
  v30 = 0LL;
  v32 = 0;
  v29[1] = 0LL;
  memset_0(v41, 0, 0xAFuLL);
  v33 = *(_OWORD *)ProcessHandle;
  v35 = v24;
  v34 = v23;
  v37 = v26;
  v36 = v25;
  v39 = v28;
  v38 = v27;
  v40 = 0;
  v31 = 3;
  result = RtlSendMsgToSm(SmpApiConnectionPort, v29);
  v10 = result;
  if ( (int)result < 0 )
  {
    SmpLogFailure("SmscpExecuteInitialCommand", 1065LL, (unsigned int)result);
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v16, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 1067;
    *((_DWORD *)SmscpSharedWindow + 1) = v10;
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpExecuteInitialCommand;
    NtTerminateProcess(ProcessHandle[1], v10);
    return (unsigned int)v10;
  }
  return result;
}
