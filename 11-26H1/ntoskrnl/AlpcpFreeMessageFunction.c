/*
 * XREFs of AlpcpFreeMessageFunction @ 0x140A8B8C0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExHandleLogBadReference @ 0x140466170 (ExHandleLogBadReference.c)
 *     ExDestroyHandle @ 0x140907B60 (ExDestroyHandle.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpFreeMessageFunction(_DWORD *P)
{
  unsigned int v2; // edx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int *v4; // rbx
  ULONG_PTR v5; // rsi
  char PreviousMode; // r15
  signed __int64 *v7; // rdi
  struct _KLOCK_ENTRIES *v8; // r9
  signed __int64 v9; // r8
  __int64 v10; // rdx

  v2 = P[78] & 0x7FFFFFFF;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( (v2 & 0xFC000000) != 0 )
    {
      v4 = (unsigned int *)AlpcpSecondaryMessageTables;
      if ( AlpcpSecondaryMessageTables )
        v4 = *(unsigned int **)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)v2 >> 26));
    }
    else
    {
      v4 = (unsigned int *)AlpcMessageTable;
    }
    v5 = v2 & 0x3FFFFFF;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( (v2 & 0x3FC) != 0 )
    {
      v7 = (signed __int64 *)ExpLookupHandleTableEntry(v4, (unsigned int)v5);
      if ( v7 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            _m_prefetchw(v7);
            v9 = *v7;
            if ( (*v7 & 1) == 0 )
              break;
            if ( v9 == _InterlockedCompareExchange64(v7, v9 - 1, v9) )
              goto LABEL_8;
          }
          if ( !v9 )
            break;
          ExpBlockOnLockedHandleEntry((__int64)v4, v7, v9);
        }
      }
    }
    v7 = 0LL;
    ExHandleLogBadReference((ULONG_PTR)v4, v5, PreviousMode);
LABEL_8:
    ExDestroyHandle((__int64)v4, v5, v7, v8);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10);
  }
  ExFreePoolWithTag(P, 0);
}
