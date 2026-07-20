/*
 * XREFs of SmscpLoadSubSystem @ 0x140004C90
 * Callers:
 *     SmscpExecuteInitialCommand @ 0x140002CA0 (SmscpExecuteInitialCommand.c)
 *     SmpExecuteCommand @ 0x1400030A0 (SmpExecuteCommand.c)
 *     SmpStartCsr @ 0x1400032A0 (SmpStartCsr.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpExecuteImage @ 0x140005010 (SmpExecuteImage.c)
 *     SmExecPgmEx @ 0x140009390 (SmExecPgmEx.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall SmscpLoadSubSystem(unsigned __int16 *a1, int a2, __int64 a3, int a4, int a5)
{
  int v9; // r9d
  int v10; // eax
  NTSTATUS v11; // ebx
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  unsigned __int16 v15; // ax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // edx
  __int64 v20; // r8
  __int16 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 EventInformation; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Object[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v24[8]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE ProcessHandle; // [rsp+68h] [rbp-98h]
  HANDLE ThreadHandle; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+A8h] [rbp-58h]
  _QWORD v29[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v30[5]; // [rsp+E0h] [rbp-20h] BYREF
  int v31; // [rsp+108h] [rbp+8h]
  int v32; // [rsp+10Ch] [rbp+Ch]

  memset_0(v24, 0, 0x68uLL);
  LODWORD(EventInformation) = a4;
  *(_OWORD *)Object = 0LL;
  if ( SmpTraceHandle && EtwEventEnabled(SmpTraceHandle, &SmssEvt_LoadSubsystem_Start) )
  {
    v15 = *a1;
    v31 = *a1;
    v21 = v15 >> 1;
    v30[0] = &EventInformation;
    v30[2] = &v21;
    v30[4] = *((_QWORD *)a1 + 1);
    v30[1] = 4LL;
    v30[3] = 2LL;
    v32 = 0;
    EtwEventWrite(SmpTraceHandle, &SmssEvt_LoadSubsystem_Start, 3LL, v30);
  }
  if ( (a5 & 0x10) != 0 )
  {
    v11 = -1073741772;
    if ( a1 )
      v16 = *((_QWORD *)a1 + 1);
    else
      v16 = 0LL;
    SmpLogFailureString((__int64)"SmscpLoadSubSystem", 0x476u, v16, 0xC0000034);
    goto LABEL_11;
  }
  v10 = SmpExecuteImage((_DWORD)a1, a2, a3, v9, 0LL, a5 | 0x20u, (__int64)v24);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = v27;
    *((_QWORD *)SmscpSharedWindow + 1) = v27;
    if ( v28 == 1 )
    {
      v11 = NtResumeThread(ThreadHandle, 0LL);
      if ( v11 >= 0 )
      {
LABEL_8:
        Object[0] = SmscpSubsystemRegistered;
        Object[1] = ProcessHandle;
        v13 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
        v11 = v13;
        if ( v13 >= 0 )
        {
          if ( v13 != 1
            || (EventInformation = 0LL,
                NtQueryEvent(SmscpSubsystemRegistered, EventBasicInformation, &EventInformation, 8u, 0LL),
                HIDWORD(EventInformation)) )
          {
            *((_QWORD *)SmscpSharedWindow + 1) = 0LL;
            NtSetInformationProcess(ProcessHandle, (PROCESSINFOCLASS)68, 0LL, 0);
            v11 = 0;
          }
          else
          {
            v11 = -1073741823;
            if ( a3 )
              v20 = *(_QWORD *)(a3 + 8);
            else
              v20 = 0LL;
            SmpLogFailureString((__int64)"SmscpLoadSubSystem", 0x4E7u, v20, 0xC0000001);
          }
          goto LABEL_11;
        }
        if ( a3 )
          v18 = *(_QWORD *)(a3 + 8);
        else
          v18 = 0LL;
        v19 = 1229;
        goto LABEL_31;
      }
      v17 = 1201LL;
    }
    else
    {
      v11 = SmExecPgmEx(v12, v24);
      if ( v11 >= 0 )
        goto LABEL_8;
      v17 = 1192LL;
    }
    SmpLogFailure("SmscpLoadSubSystem", v17, (unsigned int)v11);
    if ( a3 )
      v18 = *(_QWORD *)(a3 + 8);
    else
      v18 = 0LL;
    v19 = 1207;
LABEL_31:
    SmpLogFailureString((__int64)"SmscpLoadSubSystem", v19, v18, v11);
    NtTerminateProcess(ProcessHandle, v11);
    goto LABEL_11;
  }
  SmpLogFailure("SmscpLoadSubSystem", 1160LL, (unsigned int)v10);
LABEL_11:
  LODWORD(EventInformation) = v11;
  if ( SmpTraceHandle && EtwEventEnabled(SmpTraceHandle, &SmssEvt_LoadSubsystem_Stop) )
  {
    v29[0] = &EventInformation;
    v29[1] = 4LL;
    EtwEventWrite(SmpTraceHandle, &SmssEvt_LoadSubsystem_Stop, 1LL, v29);
  }
  return (unsigned int)v11;
}
