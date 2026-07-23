/*
 * XREFs of MmDiscardDriverSection @ 0x140D07620
 * Callers:
 *     KeFreeInitializationCode @ 0x140C86CCC (KeFreeInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x140701E40 (MiLockLoadedDataTableEntry.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x140ACB6BC (MiSnapDriverRange.c)
 */

__int64 __fastcall MmDiscardDriverSection(unsigned __int64 a1)
{
  struct _LIST_ENTRY *v2; // rbx
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  v2 = MiLockLoadedDataTableEntry(a1, 1);
  Flink = v2[3].Flink;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)Flink)
    || Flink == PsNtosImageBase
    || Flink == PsHalImageBase )
  {
    MiSnapDriverRange((__int64)v2, 0, 0, a1, (unsigned __int64 *)&v5, (unsigned __int64 *)&v6);
    if ( v5 )
      MiFreeInitializationCode(v2, v5, v6, 0);
  }
  return MmUnlockLoadedDataTableEntry((__int64)v2);
}
