/*
 * XREFs of RtlpWow64OpenThreadProcess @ 0x1800F8C38
 * Callers:
 *     RtlWow64SuspendThread @ 0x1801385D0 (RtlWow64SuspendThread.c)
 *     RtlpWow64ChangeThreadStateSuspend @ 0x180138678 (RtlpWow64ChangeThreadStateSuspend.c)
 * Callees:
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x18015F300 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 */

int __fastcall RtlpWow64OpenThreadProcess(HANDLE SourceHandle, __int64 a2, __int64 a3, HANDLE *a4, _CLIENT_ID *a5)
{
  int result; // eax
  NTSTATUS v7; // ebx
  __int128 ThreadInformation; // [rsp+48h] [rbp-11h] BYREF
  _CLIENT_ID ClientId; // [rsp+58h] [rbp-1h] BYREF
  __int64 v10; // [rsp+68h] [rbp+Fh]
  int v11; // [rsp+70h] [rbp+17h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+1Fh] BYREF
  HANDLE TargetHandle; // [rsp+C8h] [rbp+6Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v10 = 0LL;
  ThreadInformation = 0LL;
  v11 = 0;
  ClientId = 0LL;
  TargetHandle = 0LL;
  result = ZwDuplicateObject(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             SourceHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x800u,
             0,
             0);
  if ( result >= 0 )
  {
    v7 = ZwQueryInformationThread(TargetHandle, ThreadBasicInformation, &ThreadInformation, 0x30u, 0LL);
    NtClose(TargetHandle);
    if ( v7 >= 0 )
    {
      if ( a5 )
        *a5 = ClientId;
      if ( a4 )
      {
        if ( ClientId.UniqueProcess == NtCurrentTeb()->ClientId.UniqueProcess )
        {
          *a4 = (HANDLE)-1LL;
        }
        else
        {
          ObjectAttributes.Length = 48;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          return NtOpenProcess(a4, 0x452u, &ObjectAttributes, &ClientId);
        }
      }
    }
    return v7;
  }
  return result;
}
