/*
 * XREFs of MmDiscardDriverSection @ 0x140D01280
 * Callers:
 *     KeFreeInitializationCode @ 0x140C80CCC (KeFreeInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14051E3A8 (MmUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x1406FD170 (MiLockLoadedDataTableEntry.c)
 *     MiFreeInitializationCode @ 0x140AC9178 (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x140AC95AC (MiSnapDriverRange.c)
 */

__int64 __fastcall MmDiscardDriverSection(unsigned __int64 a1)
{
  struct _LIST_ENTRY *v2; // rbx
  unsigned __int64 Flink; // rdi
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  v2 = MiLockLoadedDataTableEntry(a1, 1);
  Flink = (unsigned __int64)v2[3].Flink;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(Flink) || Flink == PsNtosImageBase || Flink == PsHalImageBase )
  {
    MiSnapDriverRange((__int64)v2, 0, 0, a1, (unsigned __int64 *)&v5, (unsigned __int64 *)&v6);
    if ( v5 )
      MiFreeInitializationCode((unsigned __int64)v2, v5, v6, 0);
  }
  return MmUnlockLoadedDataTableEntry((__int64)v2);
}
