/*
 * XREFs of EmProviderDeregisterEntry @ 0x14078D160
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     EmpProviderDeregisterEntry @ 0x1405B4A40 (EmpProviderDeregisterEntry.c)
 */

void __fastcall EmProviderDeregisterEntry(char *P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx

  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.KernelStack, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.KernelStack, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&EmpParseLock.KernelStack, v5, (__int64)&EmpParseLock.KernelStack);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  EmpProviderDeregisterEntry(P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock.KernelStack, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.KernelStack);
  KeAbPostRelease((unsigned __int64)&EmpParseLock.KernelStack);
}
