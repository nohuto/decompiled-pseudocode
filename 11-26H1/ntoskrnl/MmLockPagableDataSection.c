/*
 * XREFs of MmLockPagableDataSection @ 0x140ABC640
 * Callers:
 *     DifMmLockPagableDataSectionWrapper @ 0x14066AD30 (DifMmLockPagableDataSectionWrapper.c)
 *     HalpPowerInitSystem @ 0x140BF0950 (HalpPowerInitSystem.c)
 *     VfInitSystemNoRebootNeeded @ 0x140C265DC (VfInitSystemNoRebootNeeded.c)
 *     VfInitDifWithoutReboot @ 0x140C27E54 (VfInitDifWithoutReboot.c)
 *     BgkpLockBgfxCodeSection @ 0x140C55820 (BgkpLockBgfxCodeSection.c)
 *     HeadlessInit @ 0x140CEBD48 (HeadlessInit.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockPagableImageSection @ 0x140368CD0 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404A53D4 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

PVOID __stdcall MmLockPagableDataSection(PVOID AddressWithinSection)
{
  struct _LIST_ENTRY *v2; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  char *v4; // rbp
  PIMAGE_NT_HEADERS v5; // rax
  unsigned int NumberOfSections; // r9d
  _DWORD *v7; // rbx
  unsigned int i; // ecx
  unsigned __int64 v9; // rdx
  unsigned int v10; // eax
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return (PVOID)1;
  v2 = MiLockLoadedDataTableEntryIfNecessary((unsigned __int64)AddressWithinSection, &v12);
  Flink = v2[3].Flink;
  v4 = (char *)((_BYTE *)AddressWithinSection - (_BYTE *)Flink);
  v5 = RtlImageNtHeader(Flink);
  NumberOfSections = v5->FileHeader.NumberOfSections;
  v7 = (_DWORD *)((char *)&v5->OptionalHeader.Magic + v5->FileHeader.SizeOfOptionalHeader);
  for ( i = 0; ; ++i )
  {
    if ( i >= NumberOfSections )
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
