/*
 * XREFs of PspLockQuotaListExclusive @ 0x140504D74
 * Callers:
 *     PspRemoveQuotaBlock @ 0x1409E0DC0 (PspRemoveQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140AB8E5C (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall PspLockQuotaListExclusive(__int64 a1, unsigned __int64 *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  --*(_WORD *)(a1 + 484);
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)a2, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
    ExfAcquirePushLockExclusiveEx(a2, v5, (__int64)a2);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
