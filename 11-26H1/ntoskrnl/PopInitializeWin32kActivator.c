/*
 * XREFs of PopInitializeWin32kActivator @ 0x140CD0DC4
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x1407C8C6C (PopInitializeWorkItem.c)
 */

__int64 PopInitializeWin32kActivator()
{
  __int64 v0; // r8
  __int64 result; // rax
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  stru_140F12420.KernelShadowStack = 0LL;
  *(_QWORD *)&stru_140F12420.SchedulerAssistPriorityFloor = 0LL;
  PopInitializeWorkItem((__int64)&unk_140F129D8, (__int64)PopWin32kActivatorWorker, 0LL);
  v2[2] = v0;
  v2[1] = PopWin32kActivatorCallback;
  v2[0] = 1LL;
  result = Pdcv2ActivationClientRegister(123LL, v2, &stru_140F12420.KernelShadowStackInitial);
  if ( (int)result < 0 )
    stru_140F12420.KernelShadowStackInitial = 0LL;
  return result;
}
