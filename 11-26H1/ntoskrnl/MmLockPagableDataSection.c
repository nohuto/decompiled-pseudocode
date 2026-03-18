/*
 * XREFs of MmLockPagableDataSection @ 0x140ABB180
 * Callers:
 *     DifMmLockPagableDataSectionWrapper @ 0x140667150 (DifMmLockPagableDataSectionWrapper.c)
 *     HalpPowerInitSystem @ 0x140BEA950 (HalpPowerInitSystem.c)
 *     VfInitSystemNoRebootNeeded @ 0x140C205D0 (VfInitSystemNoRebootNeeded.c)
 *     VfInitDifWithoutReboot @ 0x140C21E44 (VfInitDifWithoutReboot.c)
 *     BgkpLockBgfxCodeSection @ 0x140C4F820 (BgkpLockBgfxCodeSection.c)
 *     HeadlessInit @ 0x140CE59A8 (HeadlessInit.c)
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockPagableImageSection @ 0x140366F30 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404ABD44 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14051E3A8 (MmUnlockLoadedDataTableEntry.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

PVOID __stdcall MmLockPagableDataSection(PVOID AddressWithinSection)
{
  struct _LIST_ENTRY *v2; // rsi
  unsigned __int64 Flink; // rcx
  char *v4; // rbp
  _DWORD *v5; // rax
  unsigned int v6; // r9d
  _DWORD *v7; // rbx
  unsigned int i; // ecx
  unsigned __int64 v9; // rdx
  unsigned int v10; // eax
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return (PVOID)1;
  v2 = MiLockLoadedDataTableEntryIfNecessary((unsigned __int64)AddressWithinSection, &v12);
  Flink = (unsigned __int64)v2[3].Flink;
  v4 = (char *)AddressWithinSection - Flink;
  v5 = RtlImageNtHeader(Flink);
  v6 = *((unsigned __int16 *)v5 + 3);
  v7 = (_DWORD *)((char *)v5 + *((unsigned __int16 *)v5 + 10) + 24);
  for ( i = 0; ; ++i )
  {
    if ( i >= v6 )
      KeBugCheckEx(0x1Au, 0x1234uLL, (ULONG_PTR)AddressWithinSection, 0LL, 0LL);
    v9 = (unsigned int)v7[3];
    v10 = v7[4];
    if ( (unsigned __int64)v4 >= v9 )
    {
      if ( v10 < v7[2] )
        v10 = v7[2];
      if ( (unsigned __int64)v4 < (unsigned int)v9 + v10 )
        break;
    }
    v7 += 10;
  }
  MiLockPagableImageSection((__int64)v2, (unsigned __int64)v7, 1u);
  if ( v12 )
    MmUnlockLoadedDataTableEntry((__int64)v2);
  return v7;
}
