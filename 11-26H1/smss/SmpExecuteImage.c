/*
 * XREFs of SmpExecuteImage @ 0x140005010
 * Callers:
 *     SmscpExecuteInitialCommand @ 0x140002CA0 (SmscpExecuteInitialCommand.c)
 *     SmpExecuteCommand @ 0x1400030A0 (SmpExecuteCommand.c)
 *     SmpStartCsr @ 0x1400032A0 (SmpStartCsr.c)
 *     SmscpLoadSubSystem @ 0x140004C90 (SmscpLoadSubSystem.c)
 *     SmpInvokeAutoChk @ 0x1400158B8 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x1400169E8 (SmpLoadSubSystem.c)
 *     SmpStartServerSilo @ 0x140018B00 (SmpStartServerSilo.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpInternalLogFailure @ 0x140005424 (SmpInternalLogFailure.c)
 *     SmpGetProcessId @ 0x1400078F0 (SmpGetProcessId.c)
 *     SmLogFailureInt @ 0x140007A08 (SmLogFailureInt.c)
 *     SmpEventWriteULONG @ 0x140009220 (SmpEventWriteULONG.c)
 *     SmpEventWriteULONGString @ 0x1400092B0 (SmpEventWriteULONGString.c)
 *     SmpSelectNodeNumber @ 0x140009640 (SmpSelectNodeNumber.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall SmpExecuteImage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, _BYTE *a7)
{
  __int64 v7; // r14
  _BYTE *v11; // r12
  NTSTATUS UserProcess; // ebx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdi
  _WORD *v16; // rcx
  __int16 v17; // ax
  _WORD *v18; // rax
  ULONG v19; // ecx
  int v20; // ebx
  __int64 v21; // r8
  void *v22; // rcx
  int ProcessId; // eax
  int v24; // eax
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // [rsp+60h] [rbp-A0h] BYREF
  int ProcessInformation; // [rsp+68h] [rbp-98h] BYREF
  int v28; // [rsp+6Ch] [rbp-94h]
  _WORD v29[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v30; // [rsp+74h] [rbp-8Ch]
  __int128 v31; // [rsp+84h] [rbp-7Ch]
  __int64 v32; // [rsp+94h] [rbp-6Ch]
  int v33; // [rsp+9Ch] [rbp-64h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  _BYTE v35[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v36; // [rsp+B4h] [rbp-4Ch]
  _BYTE v37[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v38[160]; // [rsp+160h] [rbp+60h] BYREF

  v7 = 0LL;
  ProcessInformation = 0;
  v32 = 0LL;
  v33 = 0;
  v36 = 0;
  v30 = 0LL;
  v31 = 0LL;
  memset_0(v35, 0, 0x64uLL);
  v11 = v35;
  if ( a7 )
    v11 = a7;
  ProcessParameters = 0LL;
  UserProcess = RtlCreateProcessParametersEx(
                  &ProcessParameters,
                  a1,
                  0LL,
                  a2,
                  a3,
                  SmpDefaultEnvironment,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  1);
  if ( UserProcess < 0 )
  {
    if ( a1 )
      v13 = *(_QWORD *)(a1 + 8);
    else
      v13 = 0LL;
    memset_0(v37, 0, 0xE0uLL);
    if ( v13 )
    {
      v14 = 64LL;
      v15 = v13 - (_QWORD)v38;
      v16 = v38;
      do
      {
        if ( v14 == -2147483582 )
          break;
        v17 = *(_WORD *)((char *)v16 + v15);
        if ( !v17 )
          break;
        *v16++ = v17;
        --v14;
      }
      while ( v14 );
      v18 = v16 - 1;
      if ( v14 )
        v18 = v16;
      *v18 = 0;
    }
    SmpInternalLogFailure("SmpExecuteImage", 9897LL, (unsigned int)UserProcess, v37);
    return (unsigned int)UserProcess;
  }
  v19 = SmpDebug;
  if ( (a6 & 1) != 0 )
    v19 = 1;
  ProcessParameters->DebugFlags = v19;
  v28 = a6 & 0x400;
  if ( (a6 & 0x400) != 0 )
  {
    ProcessParameters->Flags |= 0x40000u;
    v20 = SmpSelectNodeNumber() + 1;
  }
  else
  {
    LOWORD(v20) = 0;
  }
  if ( (a6 & 0x1000) != 0 )
    ProcessParameters->Flags |= 0x400000u;
  if ( (a6 & 0x4000) != 0 )
    ProcessParameters->Flags |= 0x800000u;
  if ( (a6 & 0x8000) != 0 )
    ProcessParameters->Flags |= 0x80000000;
  ProcessParameters->Flags |= 0x20000u;
  *(_DWORD *)v11 = 104;
  SmpEventWriteULONGString(&SmssEvt_ExecuteImage_Start);
  v32 = 0LL;
  v33 = 0;
  LOBYTE(v21) = v28 != 0;
  v29[0] = 1;
  v29[1] = v20;
  v30 = 0LL;
  v34 = a5;
  v31 = 0LL;
  UserProcess = RtlCreateUserProcessEx(a1, ProcessParameters, v21, v29, v11);
  RtlDestroyProcessParameters(ProcessParameters);
  if ( UserProcess >= 0 )
  {
    SmpGetProcessId(*((_QWORD *)v11 + 1));
    SmpEventWriteULONG(&SmssEvt_ExecuteImage_Stop);
    if ( (a6 & 0x2000) != 0 )
    {
      v22 = (void *)*((_QWORD *)v11 + 1);
      ProcessInformation = 1;
      UserProcess = NtSetInformationProcess(v22, ProcessBreakOnTermination, &ProcessInformation, 4u);
      if ( UserProcess < 0 )
      {
        ProcessId = SmpGetProcessId(*((_QWORD *)v11 + 1));
        SmLogFailureInt((unsigned int)"SmpExecuteImage", 9995, ProcessId, 0, UserProcess);
LABEL_37:
        NtTerminateProcess(*((HANDLE *)v11 + 1), UserProcess);
LABEL_38:
        NtWaitForSingleObject(*((HANDLE *)v11 + 1), 0, 0LL);
        goto LABEL_43;
      }
    }
    v24 = a6 & 0x20;
    if ( (a6 & 0x20) == 0 )
    {
      if ( *((_DWORD *)v11 + 18) != 1 && (a6 & 0x8000) == 0 )
      {
        UserProcess = -1073741701;
        if ( a1 )
          v7 = *(_QWORD *)(a1 + 8);
        SmpLogFailureString((__int64)"SmpExecuteImage", 0x271Bu, v7, 0xC000007B);
        goto LABEL_37;
      }
      NtResumeThread(*((HANDLE *)v11 + 2), 0LL);
      if ( (a6 & 2) != 0 )
        goto LABEL_43;
      if ( (a6 & 0x10000) != 0 )
        goto LABEL_38;
      NtWaitForSingleObject(*((HANDLE *)v11 + 2), 0, 0LL);
      v24 = 0;
    }
    if ( v24 )
      return (unsigned int)UserProcess;
LABEL_43:
    NtClose(*((HANDLE *)v11 + 2));
    NtClose(*((HANDLE *)v11 + 1));
    return (unsigned int)UserProcess;
  }
  SmpEventWriteULONG(&SmssEvt_ExecuteImage_Stop);
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 8);
  SmpLogFailureString((__int64)"SmpExecuteImage", 0x26FDu, v7, UserProcess);
  return (unsigned int)UserProcess;
}
