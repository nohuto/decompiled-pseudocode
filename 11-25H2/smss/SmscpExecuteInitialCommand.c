/*
 * XREFs of SmscpExecuteInitialCommand @ 0x140003B40
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmscpLoadSubSystem @ 0x140002D40 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140003090 (SmpExecuteImage.c)
 *     SmpParseCommandLine @ 0x140004FD0 (SmpParseCommandLine.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpInvokeAutoChk @ 0x140015CB8 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall SmscpExecuteInitialCommand(int a1, _DWORD *a2, __int64 a3)
{
  int v6; // eax
  signed int v7; // eax
  __int64 v8; // r9
  __int64 v9; // r14
  int v10; // ebx
  __int64 result; // rax
  __int64 v12; // r8
  int SubSystem; // eax
  __int64 v14; // r8
  signed __int32 v15[8]; // [rsp+0h] [rbp-100h] BYREF
  struct _UNICODE_STRING *v16; // [rsp+20h] [rbp-E0h]
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v19; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v20; // [rsp+68h] [rbp-98h] BYREF
  HANDLE ProcessHandle[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v22; // [rsp+90h] [rbp-70h]
  __int128 v23; // [rsp+A0h] [rbp-60h]
  __int128 v24; // [rsp+B0h] [rbp-50h]
  __int128 v25; // [rsp+C0h] [rbp-40h]
  __int128 v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+E0h] [rbp-20h]
  _OWORD v28[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v29; // [rsp+110h] [rbp+10h]
  int v30; // [rsp+118h] [rbp+18h]
  int v31; // [rsp+11Ch] [rbp+1Ch]
  __int128 v32; // [rsp+120h] [rbp+20h]
  __int128 v33; // [rsp+130h] [rbp+30h]
  __int128 v34; // [rsp+140h] [rbp+40h]
  __int128 v35; // [rsp+150h] [rbp+50h]
  __int128 v36; // [rsp+160h] [rbp+60h]
  __int128 v37; // [rsp+170h] [rbp+70h]
  __int64 v38; // [rsp+180h] [rbp+80h]
  char v39; // [rsp+188h] [rbp+88h]
  _BYTE v40[183]; // [rsp+189h] [rbp+89h] BYREF

  memset_0(ProcessHandle, 0, 0x68uLL);
  v6 = 2080;
  if ( (*a2 & 8) != 0 )
  {
    v6 = 10272;
    if ( (*a2 & 6) == 2 )
      v6 = 14368;
  }
  v17 = v6;
  v16 = &v20;
  UnicodeString = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v7 = SmpParseCommandLine(a3, &v17, &UnicodeString, &v19);
  v9 = 0LL;
  v10 = v7;
  if ( v7 < 0 )
  {
    if ( a3 )
      v12 = *(_QWORD *)(a3 + 8);
    else
      v12 = 0LL;
    SmpLogFailureString((__int64)"SmpExecuteCommand", 0x2789u, v12, v7);
    goto LABEL_13;
  }
  if ( (v17 & 4) == 0 )
  {
    if ( (v17 & 8) != 0 )
    {
      if ( SmpPrimarySmss )
        SubSystem = SmpLoadSubSystem((unsigned int)&UnicodeString, (unsigned int)&v19, a3, a1, (_DWORD)v16, v17);
      else
        SubSystem = SmscpLoadSubSystem(&UnicodeString.Length, (int)&v19, a3, a1, v17);
    }
    else
    {
      if ( (v17 & 0x10) != 0 )
      {
        v10 = -1073741772;
        SmpLogFailureString((__int64)"SmpExecuteCommand", 0x27AFu, (__int64)UnicodeString.Buffer, 0xC0000034);
        RtlFreeUnicodeString(&UnicodeString);
        RtlFreeUnicodeString(&v20);
        RtlFreeUnicodeString(&v19);
        goto LABEL_28;
      }
      SubSystem = SmpExecuteImage(&UnicodeString.Length, (__int64)&v19, a3, v8, 0LL, v17, ProcessHandle);
    }
    goto LABEL_31;
  }
  if ( !SmpSoftBoot || SmpBugcheckRecovery )
  {
    SubSystem = SmpInvokeAutoChk(&UnicodeString);
LABEL_31:
    v10 = SubSystem;
  }
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v20);
  RtlFreeUnicodeString(&v19);
  if ( v10 < 0 )
  {
LABEL_28:
    if ( a3 )
      v14 = *(_QWORD *)(a3 + 8);
    else
      v14 = 0LL;
    SmpLogFailureString((__int64)"SmpExecuteCommand", 0x27CAu, v14, v10);
LABEL_13:
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v15, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 1044;
    *((_DWORD *)SmscpSharedWindow + 1) = v10;
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpExecuteInitialCommand;
    if ( a3 )
      v9 = *(_QWORD *)(a3 + 8);
    SmpLogFailureString((__int64)"SmscpExecuteInitialCommand", 0x415u, v9, v10);
    return (unsigned int)v10;
  }
  v28[0] = 0LL;
  *(_DWORD *)SmscpSharedWindow = 2;
  v29 = 0LL;
  v31 = 0;
  v28[1] = 0LL;
  memset_0(v40, 0, 0xAFuLL);
  v32 = *(_OWORD *)ProcessHandle;
  v34 = v23;
  v33 = v22;
  v36 = v25;
  v35 = v24;
  v38 = v27;
  v37 = v26;
  v39 = 0;
  v30 = 3;
  result = RtlSendMsgToSm(SmpApiConnectionPort, v28);
  v10 = result;
  if ( (int)result < 0 )
  {
    SmpLogFailure("SmscpExecuteInitialCommand", 1065LL, (unsigned int)result);
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v15, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 1067;
    *((_DWORD *)SmscpSharedWindow + 1) = v10;
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpExecuteInitialCommand;
    NtTerminateProcess(ProcessHandle[1], v10);
    return (unsigned int)v10;
  }
  return result;
}
