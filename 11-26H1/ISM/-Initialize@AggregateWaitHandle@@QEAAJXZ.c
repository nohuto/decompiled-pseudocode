/*
 * XREFs of ?Initialize@AggregateWaitHandle@@QEAAJXZ @ 0x18007DCB0
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z44PEAPEAU4@@Z @ 0x18005E1E4 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_.c)
 * Callees:
 *     SipcFailFast @ 0x18011347C (SipcFailFast.c)
 */

signed int __fastcall AggregateWaitHandle::Initialize(AggregateWaitHandle *this)
{
  HANDLE *v1; // r14
  HANDLE IoCompletionPort; // rax
  HANDLE CurrentProcess; // rax
  void *v5; // rdi
  void *v6; // rbx
  HANDLE v7; // rax
  signed int result; // eax
  signed int LastError; // eax
  unsigned int v10; // ebx

  v1 = (HANDLE *)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
  {
    SipcFailFast(2147549183LL);
    __debugbreak();
  }
  IoCompletionPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
  *(_QWORD *)this = IoCompletionPort;
  if ( IoCompletionPort )
  {
    CurrentProcess = GetCurrentProcess();
    v5 = *(void **)this;
    v6 = CurrentProcess;
    v7 = GetCurrentProcess();
    if ( DuplicateHandle(v7, v5, v6, v1, 0x100000u, 0, 0) )
    {
      SetHandleInformation(*v1, 2u, 2u);
      return 0;
    }
    else
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      CloseHandle(*(HANDLE *)this);
      result = v10;
      *(_QWORD *)this = 0LL;
    }
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
