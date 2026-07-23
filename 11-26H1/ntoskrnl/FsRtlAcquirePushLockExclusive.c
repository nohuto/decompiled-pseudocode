/*
 * XREFs of FsRtlAcquirePushLockExclusive @ 0x1404C0ECC
 * Callers:
 *     FsRtlInsertPerStreamContext @ 0x14021B420 (FsRtlInsertPerStreamContext.c)
 *     FsRtlRemovePerStreamContext @ 0x14021B5C0 (FsRtlRemovePerStreamContext.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140919AA0 (FsRtlTeardownPerStreamContexts.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 */

unsigned __int64 __fastcall FsRtlAcquirePushLockExclusive(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  v7 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, (AutoBoost *)result, (__int64)a1);
  if ( v7 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v7 + 33) |= 2u;
    else
      *(_BYTE *)(v7 + 10) = 1;
  }
  return result;
}
