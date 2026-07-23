/*
 * XREFs of RtlpWow64NinjaSuspendThread @ 0x180138848
 * Callers:
 *     RtlWow64SuspendThread @ 0x1801385D0 (RtlWow64SuspendThread.c)
 *     RtlpWow64ChangeThreadStateSuspend @ 0x180138678 (RtlpWow64ChangeThreadStateSuspend.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180064A50 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwQueryObject @ 0x18015F040 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpWow64NinjaSuspendThread(HANDLE ProcessHandle, HANDLE SourceHandle, void **a3, _DWORD *a4)
{
  HANDLE v8; // rdi
  NTSTATUS Object; // ebx
  void *v10; // rdx
  NTSTATUS v11; // eax
  ULONG Options; // [rsp+30h] [rbp-89h]
  HANDLE TargetHandle; // [rsp+60h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-51h] BYREF
  _OWORD ThreadInformation[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v17; // [rsp+90h] [rbp-29h]
  int v18; // [rsp+98h] [rbp-21h]
  _OWORD ObjectInformation[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v20; // [rsp+D0h] [rbp+17h]

  v17 = 0LL;
  v18 = 0;
  v20 = 0LL;
  TargetHandle = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  memset(ThreadInformation, 0, sizeof(ThreadInformation));
  memset(ObjectInformation, 0, sizeof(ObjectInformation));
  Object = ZwQueryObject(SourceHandle, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL);
  if ( Object >= 0 )
  {
    if ( (BYTE4(ObjectInformation[0]) & 2) != 0 )
    {
      Object = ZwDuplicateObject(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 SourceHandle,
                 ProcessHandle,
                 &TargetHandle,
                 0x10080Au,
                 0,
                 0);
      if ( Object >= 0 )
      {
        v10 = (void *)((unsigned __int64)TargetHandle | 1);
        if ( *a3 == NtCurrentTeb()->ClientId.UniqueProcess )
          v10 = TargetHandle;
        v11 = RtlpCreateUserThreadEx(
                ProcessHandle,
                0LL,
                102,
                0,
                0LL,
                0LL,
                Options,
                RtlpWow64SuspendThreadWorker,
                v10,
                &Handle,
                0LL);
        v8 = Handle;
        Object = v11;
        if ( v11 >= 0 )
        {
          NtWaitForSingleObject(Handle, 0, 0LL);
          ZwQueryInformationThread(v8, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
          Object = ThreadInformation[0];
          if ( SLODWORD(ThreadInformation[0]) >= 0 )
          {
            if ( a4 )
              *a4 = ThreadInformation[0];
          }
        }
      }
    }
    else
    {
      Object = -1073741790;
    }
  }
  if ( TargetHandle )
    ZwDuplicateObject(ProcessHandle, TargetHandle, 0LL, 0LL, 0, 0, 3u);
  if ( v8 )
    NtClose(v8);
  return (unsigned int)Object;
}
