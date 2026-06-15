/*
 * XREFs of sub_14006C4F0 @ 0x14006C4F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_14006C4F0(RPC_BINDING_HANDLE BindingHandle, HANDLE hSourceHandle, __int64 a3)
{
  char *v6; // rdi
  int LastError; // ebx
  HANDLE CurrentProcess; // rax
  _QWORD *v9; // rax
  HANDLE TargetHandle; // [rsp+48h] [rbp-9h] BYREF
  _QWORD ProcessInformation[8]; // [rsp+58h] [rbp+7h] BYREF
  unsigned int Pid; // [rsp+D0h] [rbp+7Fh] BYREF

  Pid = 0;
  v6 = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  TargetHandle = 0LL;
  LastError = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
  if ( !LastError )
  {
    LastError = RpcImpersonateClient(BindingHandle);
    if ( !LastError )
    {
      v6 = (char *)OpenProcess(0x440u, 0, Pid);
      RpcRevertToSelf();
      if ( !v6 )
      {
LABEL_4:
        LastError = GetLastError();
        goto LABEL_11;
      }
      ProcessInformation[0] = 64LL;
      if ( NtQueryInformationProcess(v6, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL) >= 0
        && (ProcessInformation[7] & 1) != 0 )
      {
        CurrentProcess = GetCurrentProcess();
        if ( !DuplicateHandle(v6, hSourceHandle, CurrentProcess, &TargetHandle, 2u, 0, 0) )
          goto LABEL_4;
        v9 = MapViewOfFile(TargetHandle, 2u, 0, 0, 8uLL);
        if ( !v9 )
          goto LABEL_4;
        *v9 = a3;
        UnmapViewOfFile(v9);
        LastError = 0;
      }
      else
      {
        LastError = 5;
      }
    }
  }
LABEL_11:
  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  if ( LastError > 0 )
    return (unsigned __int16)LastError | 0x80070000;
  return (unsigned int)LastError;
}
