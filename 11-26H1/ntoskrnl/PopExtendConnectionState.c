/*
 * XREFs of PopExtendConnectionState @ 0x1407DDD34
 * Callers:
 *     PopSetGlobalUserStatus @ 0x140A3EC5C (PopSetGlobalUserStatus.c)
 *     PopInitializeAdpm @ 0x140CD671C (PopInitializeAdpm.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopExtendConnectionState(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  void *v3; // rdi
  PVOID NormalContext; // rsi

  if ( *(_DWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[64] )
  {
    if ( 2 * *(_DWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[64] <= a1 )
      v1 = (a1 + 8) >> 3;
    else
      v1 = *(_DWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[64] >> 2;
  }
  else
  {
    v1 = 8;
  }
  result = ExAllocatePool2(0x100uLL);
  v3 = (void *)result;
  if ( result )
  {
    NormalContext = PopAdaptiveStandbyLock.SchedulerApc.NormalContext;
    if ( PopAdaptiveStandbyLock.SchedulerApc.NormalContext )
    {
      memmove(
        (void *)result,
        PopAdaptiveStandbyLock.SchedulerApc.NormalContext,
        (unsigned __int64)*(unsigned int *)&PopAdaptiveStandbyLock.SchedulerApcFill5[64] >> 3);
      ExFreePoolWithTag(NormalContext, 0x73655350u);
    }
    result = 8 * v1;
    PopAdaptiveStandbyLock.SchedulerApc.NormalContext = v3;
    *(_DWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[64] = 8 * v1;
    *(_DWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[72] = 8 * v1;
    *(_QWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[80] = v3;
  }
  else
  {
    *(_DWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[64] = 0;
  }
  return result;
}
