/*
 * XREFs of NtStopProfile @ 0x140842B10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     KeStopProfile @ 0x1404AAC88 (KeStopProfile.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall NtStopProfile(void *a1)
{
  int v1; // ebp
  NTSTATUS result; // eax
  _QWORD *v3; // r14
  void *v4; // rbx
  struct _MDL *v5; // rdi
  void *v6; // rsi
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, ExProfileObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&WheapConfigTableLock.SchedulerApcFill5[24], Executive, 0, 0, 0LL);
    v3 = Object;
    if ( *((_QWORD *)Object + 6) )
    {
      KeStopProfile(*((_QWORD *)Object + 5));
      v4 = (void *)v3[6];
      v5 = (struct _MDL *)v3[7];
      v6 = (void *)v3[5];
      --ExpCurrentProfileUsage;
      v3[6] = 0LL;
      KeReleaseMutex((PRKMUTEX)&WheapConfigTableLock.SchedulerApcFill5[24], 0);
      MmUnmapLockedPages(v4, v5);
      MmUnlockPages(v5);
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      KeReleaseMutex((PRKMUTEX)&WheapConfigTableLock.SchedulerApcFill5[24], 0);
      v1 = -1073741641;
    }
    ObfDereferenceObject(v3);
    return v1;
  }
  return result;
}
