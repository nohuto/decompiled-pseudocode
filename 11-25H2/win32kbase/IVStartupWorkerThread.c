/*
 * XREFs of IVStartupWorkerThread @ 0x1400CED18
 * Callers:
 *     _RegisterLogonProcess @ 0x14016BF30 (_RegisterLogonProcess.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     isInputVirtualizationEnabled @ 0x1400CF034 (isInputVirtualizationEnabled.c)
 *     CreateKernelEvent @ 0x140135730 (CreateKernelEvent.c)
 *     ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x14021A0D4 (-SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z.c)
 */

__int64 IVStartupWorkerThread()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 KernelEvent; // rbx
  __int64 v3; // rax
  char *v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int8)isInputVirtualizationEnabled() && !*(_QWORD *)(W32GetUserSessionState(v1, v0) + 19368) )
  {
    KernelEvent = CreateKernelEvent(SynchronizationEvent);
    v3 = CreateKernelEvent(SynchronizationEvent);
    if ( KernelEvent )
    {
      if ( v3 )
      {
        v6[0] = KernelEvent;
        v6[1] = v3;
        return SendIVWorkerThreadRequest((struct _IVWORKER_INIT *)v6);
      }
      v4 = (char *)KernelEvent;
    }
    else
    {
      if ( !v3 )
        return 3221225495LL;
      v4 = (char *)v3;
    }
    GreDeleteFastMutex(v4);
    return 3221225495LL;
  }
  return 0LL;
}
