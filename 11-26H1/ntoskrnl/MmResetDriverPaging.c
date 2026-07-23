/*
 * XREFs of MmResetDriverPaging @ 0x140ACB510
 * Callers:
 *     DifMmResetDriverPagingWrapper @ 0x14066BE20 (DifMmResetDriverPagingWrapper.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404A53D4 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     MmImageSectionPagable @ 0x140ACBB2C (MmImageSectionPagable.c)
 *     MiCancelPhase0Locking @ 0x140ACBC68 (MiCancelPhase0Locking.c)
 */

void __stdcall MmResetDriverPaging(PVOID AddressWithinSection)
{
  struct _LIST_ENTRY *v2; // rax
  __int64 v3; // rsi
  struct _LIST_ENTRY *Flink; // rbp
  PIMAGE_NT_HEADERS v5; // rbx
  __int64 SizeOfOptionalHeader; // rcx
  _IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rdi
  int NumberOfSections; // ebx
  _DWORD *i; // rdi
  unsigned int v10; // eax
  __int64 v11; // r9
  ULONG_PTR *PteAddress; // rax
  unsigned __int64 v13; // r8
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = 0;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
  {
    v2 = MiLockLoadedDataTableEntryIfNecessary((unsigned __int64)AddressWithinSection, &v14);
    v3 = (__int64)v2;
    if ( v2 )
    {
      if ( (dword_140FBF204 & 1) == 0 )
      {
        Flink = v2[3].Flink;
        v5 = RtlImageNtHeader(Flink);
        MiCancelPhase0Locking(v3);
        SizeOfOptionalHeader = v5->FileHeader.SizeOfOptionalHeader;
        p_OptionalHeader = &v5->OptionalHeader;
        NumberOfSections = v5->FileHeader.NumberOfSections;
        for ( i = (_DWORD *)((char *)&p_OptionalHeader->Magic + SizeOfOptionalHeader); NumberOfSections; --NumberOfSections )
        {
          if ( (i[9] & 0x2000000) == 0 && !(unsigned int)MmImageSectionPagable(i) )
          {
            v10 = i[4];
            if ( v10 < i[2] )
              v10 = i[2];
            MiGetPteAddress((unsigned __int64)Flink + i[3] + v10 - 1);
            PteAddress = (ULONG_PTR *)MiGetPteAddress((unsigned __int64)Flink + v11);
            MiLockCode(v3, PteAddress, v13, 2);
          }
          i += 10;
        }
      }
      if ( v14 )
        MmUnlockLoadedDataTableEntry(v3);
    }
  }
}
