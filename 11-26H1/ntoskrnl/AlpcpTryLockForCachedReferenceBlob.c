/*
 * XREFs of AlpcpTryLockForCachedReferenceBlob @ 0x140A69A70
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x140ACE424 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall AlpcpTryLockForCachedReferenceBlob(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int64 BugCheckParameter4; // rax

  v5 = (AutoBoost *)KeAbPreAcquire(BugCheckParameter2 - 16, 0LL, 1LL, a4);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 - 16), 0LL) )
  {
    if ( v5 )
      KeAbPostReleaseEx((struct _KTHREAD *)(BugCheckParameter2 - 16), (unsigned __int64)v5, v7, v8);
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
    *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL)
                       + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x27uLL, BugCheckParameter4);
    return 1;
  }
}
