/*
 * XREFs of SmProcessCreateNotification @ 0x140966F58
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x1404D6C0C (SmpGetProcessPartition.c)
 *     SmpKeyedStoreCreate @ 0x140966FB8 (SmpKeyedStoreCreate.c)
 */

__int64 __fastcall SmProcessCreateNotification(__int64 a1)
{
  __int64 ProcessPartition; // rdx
  char v2; // r9

  if ( (*(_DWORD *)(a1 + 1532) & 0x40000000) != 0 )
    return 3221225659LL;
  if ( LODWORD(stru_140E27B08.ThreadLock) <= 1 )
    return 3221225659LL;
  ProcessPartition = SmpGetProcessPartition(a1);
  if ( (*(_DWORD *)(ProcessPartition + 2336) & 0xC) == 0 )
    return 3221225659LL;
  if ( (v2 & 3) != 0 )
    return SmpKeyedStoreCreate((struct _KTHREAD *)(ProcessPartition + 2344));
  return 3221266944LL;
}
