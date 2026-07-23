/*
 * XREFs of RtlpHpEnvThreadSuspend @ 0x18010BF40
 * Callers:
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180062280 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 *     NtChangeThreadState @ 0x180160150 (NtChangeThreadState.c)
 *     ZwCreateThreadStateChange @ 0x180160770 (ZwCreateThreadStateChange.c)
 *     ZwOpenThread @ 0x180161570 (ZwOpenThread.c)
 */

__int64 __fastcall RtlpHpEnvThreadSuspend(unsigned int a1, __int64 a2, HANDLE *a3, _DWORD *a4)
{
  int v7; // edi
  NTSTATUS v8; // ebx
  HANDLE v9; // rcx
  HANDLE v10; // r10
  ULONG64 Reserved; // [rsp+20h] [rbp-59h]
  ULONG64 v13; // [rsp+28h] [rbp-51h]
  HANDLE ThreadHandle; // [rsp+30h] [rbp-49h] BYREF
  HANDLE ThreadStateChangeHandle; // [rsp+38h] [rbp-41h] BYREF
  __int64 v16; // [rsp+40h] [rbp-39h] BYREF
  __int64 *ThreadInformation; // [rsp+48h] [rbp-31h] BYREF
  int v18; // [rsp+50h] [rbp-29h]
  int v19; // [rsp+54h] [rbp-25h]
  _CLIENT_ID ClientId; // [rsp+58h] [rbp-21h] BYREF
  _QWORD ExtendedInformation[2]; // [rsp+68h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-1h] BYREF
  int v23; // [rsp+E0h] [rbp+67h] BYREF

  ThreadHandle = 0LL;
  ThreadStateChangeHandle = 0LL;
  ClientId.UniqueProcess = 0LL;
  ClientId.UniqueThread = (void *)a1;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v7 = 0;
  v8 = ZwOpenThread(&ThreadHandle, 0x83Au, &ObjectAttributes, &ClientId);
  if ( v8 < 0 )
    goto LABEL_11;
  LODWORD(Reserved) = 0;
  v8 = ZwCreateThreadStateChange(&ThreadStateChangeHandle, 0xF0001u, 0LL, ThreadHandle, Reserved);
  if ( v8 < 0 )
    goto LABEL_11;
  LODWORD(v13) = 1;
  LODWORD(Reserved) = 16;
  ExtendedInformation[0] = 1LL;
  ExtendedInformation[1] = -20000000LL;
  v8 = NtChangeThreadState(
         ThreadStateChangeHandle,
         ThreadHandle,
         ThreadStateChangeSuspend,
         ExtendedInformation,
         Reserved,
         v13);
  if ( v8
    || (v7 = 1,
        v16 = 0LL,
        ThreadInformation = &v16,
        v19 = 8,
        v18 = 592,
        v8 = ZwQueryInformationThread(ThreadHandle, ThreadTebInformationAtomic, &ThreadInformation, 0x10u, 0LL),
        v8 < 0) )
  {
LABEL_11:
    v9 = ThreadHandle;
  }
  else
  {
    v9 = ThreadHandle;
    if ( v16 != a2 )
    {
      v23 = 0;
      ZwQueryInformationThread(ThreadHandle, ThreadIdealProcessorEx, &v23, 4u, 0LL);
      v9 = 0LL;
      *a3 = ThreadHandle;
      v10 = 0LL;
      v8 = 0;
      a3[1] = ThreadStateChangeHandle;
      *a4 = BYTE2(v23);
      ThreadHandle = 0LL;
      ThreadStateChangeHandle = 0LL;
      goto LABEL_7;
    }
    v8 = -2147483631;
  }
  v10 = ThreadStateChangeHandle;
LABEL_7:
  if ( v10 )
  {
    if ( v7 )
    {
      LODWORD(v13) = 0;
      LODWORD(Reserved) = 0;
      NtChangeThreadState(v10, v9, ThreadStateChangeResume, 0LL, Reserved, v13);
      v10 = ThreadStateChangeHandle;
    }
    NtClose(v10);
    v9 = ThreadHandle;
  }
  if ( v9 )
    NtClose(v9);
  return (unsigned int)v8;
}
