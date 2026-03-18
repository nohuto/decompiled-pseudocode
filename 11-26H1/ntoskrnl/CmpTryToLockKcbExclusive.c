/*
 * XREFs of CmpTryToLockKcbExclusive @ 0x140A5F7F0
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmpCreateRegistryRoot @ 0x140CEA70C (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

char __fastcall CmpTryToLockKcbExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char result; // al

  v5 = (AutoBoost *)KeAbPreAcquire(a1 + 48, 0LL, 1LL, a4);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    if ( v5 )
      KeAbPostReleaseEx((struct _KTHREAD *)(a1 + 48), (unsigned __int64)v5, v7, v8);
    return 0;
  }
  else
  {
    if ( v5 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v5, v6);
      else
        *((_BYTE *)v5 + 10) = 1;
    }
    result = 1;
    *(_QWORD *)(a1 + 56) = KeGetCurrentThread();
  }
  return result;
}
