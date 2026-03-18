/*
 * XREFs of ExpLockHandleTableExclusive @ 0x1404839F0
 * Callers:
 *     ExDisableHandleTracing @ 0x1406CB8EC (ExDisableHandleTracing.c)
 *     ExEnableHandleTracing @ 0x1407795D8 (ExEnableHandleTracing.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140AEA4E8 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExEnableHandleExceptions @ 0x140AFA4A8 (ExEnableHandleExceptions.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall ExpLockHandleTableExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  --*(_WORD *)(a2 + 484);
  v4 = (unsigned __int64 *)(a1 + 56);
  v5 = (AutoBoost *)KeAbPreAcquire(a1 + 56, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
