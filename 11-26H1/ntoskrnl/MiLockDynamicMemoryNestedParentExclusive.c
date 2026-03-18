/*
 * XREFs of MiLockDynamicMemoryNestedParentExclusive @ 0x1406E970C
 * Callers:
 *     MiReturnPartitionPagesToParent @ 0x1407098B8 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

void __fastcall MiLockDynamicMemoryNestedParentExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v5; // rax
  volatile unsigned __int8 *v6; // rdx
  AutoBoost *v7; // rbx

  v4 = (unsigned __int64 *)(**(_QWORD **)(*(_QWORD *)(a1 + 256) + 72LL) + 264LL);
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)v4, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v6) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v7 + 33), v6, 1);
    }
    else
    {
      *((_BYTE *)v7 + 10) = 1;
    }
  }
}
