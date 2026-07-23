/*
 * XREFs of PspSetProcessForegroundBackgroundRequest @ 0x140ABC24C
 * Callers:
 *     PsSetProcessPriorityByClass @ 0x140ABC220 (PsSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     EtwWriteTransfer @ 0x140213010 (EtwWriteTransfer.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     PspSetProcessPriorityByClass @ 0x140518324 (PspSetProcessPriorityByClass.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PspSetProcessForegroundBackgroundRequest(__int64 a1, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // r14
  BOOL v7; // esi
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v9; // edi
  int v11; // r8d
  char v12; // [rsp+30h] [rbp-49h] BYREF
  char v13; // [rsp+31h] [rbp-48h] BYREF
  _DWORD v14[3]; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  __int16 *v17; // [rsp+60h] [rbp-19h]
  int v18; // [rsp+68h] [rbp-11h]
  int v19; // [rsp+6Ch] [rbp-Dh]
  _DWORD *v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  char *v22; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+88h] [rbp+Fh]
  char *v24; // [rsp+90h] [rbp+17h]
  __int64 v25; // [rsp+98h] [rbp+1Fh]

  v4 = a3;
  v7 = 1;
  if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u )
  {
    v14[0] = *(_DWORD *)(a1 + 464);
    v12 = a2;
    v20 = v14;
    v13 = a3;
    v22 = &v12;
    v21 = 4LL;
    v24 = &v13;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)&SshpBlockerCollections.SchedulerApc.Type;
    v23 = 1LL;
    v25 = 1LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = (unsigned __int16)**(_WORD **)&SshpBlockerCollections.SchedulerApc.Type;
    v17 = word_140053882;
    UserData.Reserved = 2;
    v18 = 82;
    v19 = 1;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(
      (REGHANDLE)SshpBlockerCollections.SchedulerApc.ApcListEntry.Blink,
      &EventDescriptor,
      0LL,
      0LL,
      5u,
      &UserData);
  }
  CurrentThread = KeGetCurrentThread();
  v9 = v4 != 0 ? 0x20000 : 0x10000;
  PspLockProcessExclusive(a1, (__int64)CurrentThread, a3, a4);
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1532), v9);
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 1532);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1532), ~v9);
    v7 = (v11 & (v4 != 0 ? 0x10000 : 0x20000)) != 0;
  }
  PspSetProcessPriorityByClass((void *)a1, v7);
  return PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
}
