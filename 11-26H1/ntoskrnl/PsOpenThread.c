/*
 * XREFs of PsOpenThread @ 0x140A0F720
 * Callers:
 *     NtAlpcOpenSenderThread @ 0x1408EB720 (NtAlpcOpenSenderThread.c)
 *     NtOpenThread @ 0x140A0F6F0 (NtOpenThread.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PsGetThreadId @ 0x1404793F0 (PsGetThreadId.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SeCreateAccessState @ 0x140A0FB70 (SeCreateAccessState.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 */

__int64 __fastcall PsOpenThread(
        _QWORD *a1,
        unsigned int a2,
        unsigned int *a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE PreviousMode)
{
  PETHREAD v9; // r12
  __int64 ULong64FromUser; // rax
  bool v11; // r15
  ULONG v12; // r14d
  char v13; // al
  NTSTATUS v14; // edi
  KPROCESSOR_MODE v15; // dl
  unsigned int v17; // [rsp+40h] [rbp-2F8h] BYREF
  char v18; // [rsp+48h] [rbp-2F0h]
  char v19; // [rsp+49h] [rbp-2EFh] BYREF
  _BYTE v20[6]; // [rsp+4Ah] [rbp-2EEh] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-2E8h] BYREF
  PETHREAD Thread; // [rsp+58h] [rbp-2E0h] BYREF
  PETHREAD v23; // [rsp+60h] [rbp-2D8h] BYREF
  HANDLE ThreadId[2]; // [rsp+68h] [rbp-2D0h] BYREF
  __int64 v25; // [rsp+78h] [rbp-2C0h] BYREF
  ULONG v26; // [rsp+88h] [rbp-2B0h]
  __int64 v27; // [rsp+90h] [rbp-2A8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+A0h] [rbp-298h] BYREF
  _BYTE v29[224]; // [rsp+140h] [rbp-1F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+220h] [rbp-118h] BYREF
  HANDLE *v31; // [rsp+230h] [rbp-108h]
  __int64 v32; // [rsp+238h] [rbp-100h]
  PETHREAD *v33; // [rsp+240h] [rbp-F8h]
  __int64 v34; // [rsp+248h] [rbp-F0h]
  unsigned int *v35; // [rsp+250h] [rbp-E8h]
  __int64 v36; // [rsp+258h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+260h] [rbp-D8h] BYREF
  unsigned int *v38; // [rsp+280h] [rbp-B8h]
  __int64 v39; // [rsp+288h] [rbp-B0h]
  PETHREAD *v40; // [rsp+290h] [rbp-A8h]
  __int64 v41; // [rsp+298h] [rbp-A0h]
  HANDLE *p_Handle; // [rsp+2A0h] [rbp-98h]
  __int64 v43; // [rsp+2A8h] [rbp-90h]
  PETHREAD *p_Thread; // [rsp+2B0h] [rbp-88h]
  __int64 v45; // [rsp+2B8h] [rbp-80h]
  char *v46; // [rsp+2C0h] [rbp-78h]
  __int64 v47; // [rsp+2C8h] [rbp-70h]
  _BYTE *v48; // [rsp+2D0h] [rbp-68h]
  __int64 v49; // [rsp+2D8h] [rbp-60h]
  __int64 *v50; // [rsp+2E0h] [rbp-58h]
  __int64 v51; // [rsp+2E8h] [rbp-50h]

  v25 = (__int64)a1;
  Handle = 0LL;
  v9 = 0LL;
  Thread = 0LL;
  *(_OWORD *)ThreadId = 0LL;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v29, 0, sizeof(v29));
  v17 = 0;
  if ( a5 )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
    v27 = 1LL;
    ProbeForRead(a3, 1uLL, 4u);
    v11 = RtlReadULong64FromUser(a3 + 4) != 0;
    v20[1] = v11;
    v12 = RtlReadULongFromUser(a3 + 6) & 0x1DF2;
    v26 = v12;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(ThreadId, a4, 0x10uLL);
      v13 = 1;
      v18 = 1;
    }
    else
    {
      v13 = 0;
      v18 = 0;
    }
  }
  else
  {
    v11 = *((_QWORD *)a3 + 2) != 0LL;
    v12 = a3[6] & (PreviousMode != 0 ? 7666 : 73714);
    if ( a4 )
    {
      *(_OWORD *)ThreadId = *a4;
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
  }
  if ( v11 || !v13 )
  {
    v14 = -1073741776;
  }
  else
  {
    while ( 1 )
    {
      v14 = SeCreateAccessState(&PassedAccessState, v29, a2, (char *)PsThreadType + 76);
      if ( v14 < 0 )
        break;
      if ( (v12 & 0x400) == 0 || (v15 = 1, v17) )
        v15 = PreviousMode;
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v15) )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      if ( ThreadId[0] )
      {
        v23 = 0LL;
        v14 = PsLookupThreadByThreadId(ThreadId[1], &v23);
        if ( v14 >= 0 )
        {
          if ( (HANDLE)v23[1].CycleTime == ThreadId[0] )
          {
            v9 = v23;
            Thread = v23;
            v14 = 0;
          }
          else
          {
            ObfDereferenceObject(v23);
            v14 = -1073741813;
          }
        }
        if ( v14 < 0 )
        {
LABEL_34:
          SeDeleteAccessState((__int64)&PassedAccessState);
          break;
        }
      }
      else
      {
        v14 = PsLookupThreadByThreadId(ThreadId[1], &Thread);
        if ( v14 < 0 )
          goto LABEL_34;
        v9 = Thread;
        ThreadId[0] = (HANDLE)Thread[1].CycleTime;
      }
      v14 = ObOpenObjectByPointer(v9, v12, &PassedAccessState, 0, (POBJECT_TYPE)PsThreadType, PreviousMode, &Handle);
      SeDeleteAccessState((__int64)&PassedAccessState);
      ObfDereferenceObject(v9);
      if ( v14 >= 0 )
      {
        if ( a5 )
          RtlWriteULong64ToUser((_QWORD *)v25, (__int64)Handle);
        else
          *(_QWORD *)v25 = Handle;
        if ( v17
          && *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u
          && tlgKeywordOn((__int64)&SshpBlockerCollections.SavedApcStateFill[40], 0x400000000000LL) )
        {
          v17 = (unsigned int)PsGetThreadId(v9);
          v38 = &v17;
          v39 = 4LL;
          LODWORD(v23) = ThreadId[0];
          v40 = &v23;
          v41 = 4LL;
          LODWORD(Handle) = a2;
          p_Handle = &Handle;
          v43 = 4LL;
          LODWORD(Thread) = v12;
          p_Thread = &Thread;
          v45 = 4LL;
          v19 = a5;
          v46 = &v19;
          v47 = 1LL;
          v20[0] = PreviousMode;
          v48 = v20;
          v49 = 1LL;
          v25 = 0x1000000LL;
          v50 = &v25;
          v51 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&SshpBlockerCollections.SavedApcStateFill[40],
            (unsigned __int8 *)byte_1400537D9,
            0LL,
            0LL,
            9u,
            &v37);
        }
        break;
      }
      if ( (v12 & 0x400) == 0 || v14 != -1073741790 || v17 )
        break;
      v17 = 1;
    }
  }
  v17 = v14;
  LODWORD(v23) = a2;
  LODWORD(Handle) = ThreadId[1];
  LODWORD(Thread) = ThreadId[0];
  UserData.Ptr = (ULONGLONG)&Thread;
  *(_QWORD *)&UserData.Size = 4LL;
  v31 = &Handle;
  v32 = 4LL;
  v33 = &v23;
  v34 = 4LL;
  v35 = &v17;
  v36 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENTHREAD, 0LL, 4u, &UserData);
  return (unsigned int)v14;
}
