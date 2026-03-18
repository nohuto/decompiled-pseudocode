/*
 * XREFs of KiWaitSatisfyAny @ 0x1405F7F18
 * Callers:
 *     KiWaitForAllObjects @ 0x1403C0E68 (KiWaitForAllObjects.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KiWaitSatisfyOther @ 0x1403DF924 (KiWaitSatisfyOther.c)
 *     KiWaitSatisfyMutant @ 0x1404419C0 (KiWaitSatisfyMutant.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

void __fastcall KiWaitSatisfyAny(struct _KTHREAD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  struct _KLOCK_ENTRIES *v8; // r9
  unsigned __int64 v9; // rax
  volatile unsigned __int8 *v10; // rdx
  int v11; // [rsp+48h] [rbp+20h] BYREF

  if ( !KiWaitSatisfyOther((__int64)a1) && (*(_BYTE *)v6 & 0x7F) == 2 )
  {
    v7 = *(_DWORD *)(v6 + 4) - 1;
    *(_DWORD *)(v6 + 4) = v7;
    if ( !v7 )
    {
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( *(_QWORD *)(a2 + 64) );
      }
      KiWaitSatisfyMutant(&a1->Header.LockNV, a2, a3);
      *(_QWORD *)(a2 + 64) = 0LL;
      if ( ((__int64)a1->StackLimit & 2) != 0 )
      {
        v9 = KeAbPreAcquire((__int64)a1, 0LL, 1LL, v8);
        if ( v9 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
          {
            LOBYTE(v10) = 2;
            AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v9 + 33), v10, 1);
          }
          else
          {
            *(_BYTE *)(v9 + 10) = 1;
          }
        }
      }
    }
  }
}
