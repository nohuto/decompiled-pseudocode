/*
 * XREFs of ?GetProcessCommandLine@@YAPEAGXZ @ 0x140184C20
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x140184A50 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x140156594 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

char *GetProcessCommandLine(void)
{
  char *v0; // rbx
  BOOL v1; // esi
  char **v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  char **v7; // rax
  int v8; // ecx
  char *v9; // rax
  _CLIENT_ID ClientId; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ProcessInformationLength; // [rsp+90h] [rbp+20h] BYREF
  void *ProcessHandle; // [rsp+98h] [rbp+28h] BYREF

  v0 = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v1 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ProcessInformationLength = 0;
  ProcessHandle = 0LL;
  v2 = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ClientId.UniqueThread = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ClientId.UniqueProcess = (HANDLE)PsGetCurrentThreadProcessId();
  if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0
    && ZwQueryInformationProcess(
         ProcessHandle,
         ProcessImageFileMapping|ProcessUserModeIOPL,
         0LL,
         0,
         &ProcessInformationLength) == -1073741820
    && ProcessInformationLength >= 0x10 )
  {
    v7 = (char **)Win32AllocPoolWithQuotaZInitImpl(v6, ProcessInformationLength + 2LL, 0x79747355u);
    v2 = v7;
    if ( v7 )
    {
      if ( ZwQueryInformationProcess(
             ProcessHandle,
             ProcessImageFileMapping|ProcessUserModeIOPL,
             v7,
             ProcessInformationLength,
             0LL) >= 0 )
      {
        v9 = (char *)Win32AllocPoolWithQuotaZInitImpl(v8, *(unsigned __int16 *)v2 + 2LL, 0x79747355u);
        v0 = v9;
        if ( v9 )
          v1 = (int)RtlStringCchCopyNW(
                      v9,
                      *(unsigned __int16 *)v2 + 1LL,
                      v2[1],
                      (unsigned __int64)*(unsigned __int16 *)v2 >> 1) >= 0;
      }
    }
  }
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( v2 )
    GreDeleteFastMutex((char *)v2, v3, v4, v5);
  if ( !v1 && v0 )
  {
    GreDeleteFastMutex(v0, v3, v4, v5);
    return 0LL;
  }
  return v0;
}
