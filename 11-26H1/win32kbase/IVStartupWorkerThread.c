/*
 * XREFs of IVStartupWorkerThread @ 0x1401177AC
 * Callers:
 *     _RegisterLogonProcess @ 0x1401D98D0 (_RegisterLogonProcess.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     isInputVirtualizationEnabled @ 0x140117990 (isInputVirtualizationEnabled.c)
 *     CreateKernelEvent @ 0x14016CAE0 (CreateKernelEvent.c)
 *     ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x14021EA28 (-SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z.c)
 */

__int64 IVStartupWorkerThread()
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  __int64 KernelEvent; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int8)isInputVirtualizationEnabled() && !*(_QWORD *)(W32GetUserSessionState(v1, v0, v2) + 19400) )
  {
    KernelEvent = CreateKernelEvent(SynchronizationEvent);
    v4 = CreateKernelEvent(SynchronizationEvent);
    if ( KernelEvent )
    {
      if ( v4 )
      {
        v10[0] = KernelEvent;
        v10[1] = v4;
        return SendIVWorkerThreadRequest((struct _IVWORKER_INIT *)v10);
      }
      v8 = (char *)KernelEvent;
    }
    else
    {
      if ( !v4 )
        return 3221225495LL;
      v8 = (char *)v4;
    }
    GreDeleteFastMutex(v8, v5, v6, v7);
    return 3221225495LL;
  }
  return 0LL;
}
