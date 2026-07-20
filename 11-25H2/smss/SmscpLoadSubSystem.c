/*
 * XREFs of SmscpLoadSubSystem @ 0x140002D40
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140002580 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpExecuteInitialCommand @ 0x140003B40 (SmscpExecuteInitialCommand.c)
 *     SmpExecuteCommand @ 0x140003F30 (SmpExecuteCommand.c)
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmpExecuteImage @ 0x140003090 (SmpExecuteImage.c)
 *     SmExecPgmEx @ 0x140009920 (SmExecPgmEx.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall SmscpLoadSubSystem(unsigned __int16 *a1, int a2, __int64 a3, int a4, int a5)
{
  int v9; // r9d
  unsigned __int16 v10; // ax
  int v11; // ebx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  NTSTATUS v16; // eax
  __int64 v17; // r8
  unsigned int v18; // edx
  NTSTATUS v19; // eax
  __int64 v20; // r8
  __int16 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 EventInformation; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Object[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v25[8]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE ProcessHandle; // [rsp+68h] [rbp-98h]
  HANDLE ThreadHandle; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+A8h] [rbp-58h]
  _QWORD v30[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v31[5]; // [rsp+E0h] [rbp-20h] BYREF
  int v32; // [rsp+108h] [rbp+8h]
  int v33; // [rsp+10Ch] [rbp+Ch]

  memset_0(v25, 0, 0x68uLL);
  LODWORD(EventInformation) = a4;
  *(_OWORD *)Object = 0LL;
  if ( SmpTraceHandle && EtwEventEnabled(SmpTraceHandle, &SmssEvt_LoadSubsystem_Start) )
  {
    v10 = *a1;
    v32 = *a1;
    v22 = v10 >> 1;
    v31[0] = &EventInformation;
    v31[2] = &v22;
    v31[4] = *((_QWORD *)a1 + 1);
    v31[1] = 4LL;
    v31[3] = 2LL;
    v33 = 0;
    EtwEventWrite(SmpTraceHandle, &SmssEvt_LoadSubsystem_Start, 3LL, v31);
  }
  if ( (a5 & 0x10) != 0 )
  {
    v11 = -1073741772;
    if ( a1 )
      v12 = *((_QWORD *)a1 + 1);
    else
      v12 = 0LL;
    SmpLogFailureString((__int64)"SmscpLoadSubSystem", 0x476u, v12, 0xC0000034);
    goto LABEL_34;
  }
  v13 = SmpExecuteImage((_DWORD)a1, a2, a3, v9, 0LL, a5 | 0x20u, (__int64)v25);
  v11 = v13;
  if ( v13 >= 0 )
  {
    v14 = v28;
    *((_QWORD *)SmscpSharedWindow + 1) = v28;
    if ( v29 == 1 )
    {
      v16 = NtResumeThread(ThreadHandle, 0LL);
      v11 = v16;
      if ( v16 < 0 )
      {
        SmpLogFailure("SmscpLoadSubSystem", 1201LL, (unsigned int)v16);
        goto LABEL_17;
      }
    }
    else
    {
      v15 = SmExecPgmEx(v14, v25);
      v11 = v15;
      if ( v15 < 0 )
      {
        SmpLogFailure("SmscpLoadSubSystem", 1192LL, (unsigned int)v15);
        goto LABEL_17;
      }
    }
    if ( v11 >= 0 )
    {
      Object[0] = SmscpSubsystemRegistered;
      Object[1] = ProcessHandle;
      v19 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
      v11 = v19;
      if ( v19 >= 0 )
      {
        if ( v19 != 1
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
        goto LABEL_34;
      }
      if ( a3 )
        v17 = *(_QWORD *)(a3 + 8);
      else
        v17 = 0LL;
      v18 = 1229;
      goto LABEL_26;
    }
LABEL_17:
    if ( a3 )
      v17 = *(_QWORD *)(a3 + 8);
    else
      v17 = 0LL;
    v18 = 1207;
LABEL_26:
    SmpLogFailureString((__int64)"SmscpLoadSubSystem", v18, v17, v11);
    NtTerminateProcess(ProcessHandle, v11);
    goto LABEL_34;
  }
  SmpLogFailure("SmscpLoadSubSystem", 1160LL, (unsigned int)v13);
LABEL_34:
  LODWORD(EventInformation) = v11;
  if ( SmpTraceHandle && EtwEventEnabled(SmpTraceHandle, &SmssEvt_LoadSubsystem_Stop) )
  {
    v30[0] = &EventInformation;
    v30[1] = 4LL;
    EtwEventWrite(SmpTraceHandle, &SmssEvt_LoadSubsystem_Stop, 1LL, v30);
  }
  return (unsigned int)v11;
}
