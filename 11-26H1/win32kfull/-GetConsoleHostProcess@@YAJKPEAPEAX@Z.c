/*
 * XREFs of ?GetConsoleHostProcess@@YAJKPEAPEAX@Z @ 0x1401C6EF0
 * Callers:
 *     GetConsoleDesktop @ 0x1401C6DA0 (GetConsoleDesktop.c)
 * Callees:
 *     LockThreadByClientId @ 0x1401C702C (LockThreadByClientId.c)
 */

NTSTATUS __fastcall GetConsoleHostProcess(int a1, void **a2)
{
  NTSTATUS result; // eax
  HANDLE ThreadProcessId; // rbx
  NTSTATUS v5; // ebx
  void *v6; // rcx
  __int64 ProcessInformation; // [rsp+30h] [rbp-50h] BYREF
  _CLIENT_ID ClientId; // [rsp+38h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  PETHREAD Thread; // [rsp+A0h] [rbp+20h] BYREF
  void *ProcessHandle; // [rsp+A8h] [rbp+28h] BYREF

  Thread = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ProcessHandle = 0LL;
  ProcessInformation = 0LL;
  result = LockThreadByClientId(a1, &Thread);
  if ( result >= 0 )
  {
    ThreadProcessId = PsGetThreadProcessId(Thread);
    ObfDereferenceObject(Thread);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    ClientId.UniqueProcess = ThreadProcessId;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueThread = 0LL;
    result = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
    if ( result >= 0 )
    {
      v5 = ZwQueryInformationProcess(ProcessHandle, ProcessIoPriority|ProcessUserModeIOPL, &ProcessInformation, 8u, 0LL);
      ZwClose(ProcessHandle);
      if ( v5 >= 0 )
      {
        if ( (ProcessInformation & 1) != 0 )
          v6 = (void *)(ProcessInformation & 0xFFFFFFFFFFFFFFFEuLL);
        else
          v6 = 0LL;
        *a2 = v6;
      }
      return v5;
    }
  }
  return result;
}
