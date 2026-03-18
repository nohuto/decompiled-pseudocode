/*
 * XREFs of MmResetDriverPaging @ 0x140AC9400
 * Callers:
 *     DifMmResetDriverPagingWrapper @ 0x140668240 (DifMmResetDriverPagingWrapper.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404ABD44 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14051E3A8 (MmUnlockLoadedDataTableEntry.c)
 *     MmImageSectionPagable @ 0x140AC9A1C (MmImageSectionPagable.c)
 *     MiCancelPhase0Locking @ 0x140AC9B58 (MiCancelPhase0Locking.c)
 */

void __stdcall MmResetDriverPaging(PVOID AddressWithinSection)
{
  struct _LIST_ENTRY *v2; // rax
  __int64 v3; // rsi
  unsigned __int64 Flink; // rbp
  _DWORD *v5; // rbx
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  int v8; // ebx
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
      if ( (dword_140FBE204 & 1) == 0 )
      {
        Flink = (unsigned __int64)v2[3].Flink;
        v5 = RtlImageNtHeader(Flink);
        MiCancelPhase0Locking(v3);
        v6 = *((unsigned __int16 *)v5 + 10);
        v7 = v5 + 6;
        v8 = *((unsigned __int16 *)v5 + 3);
        for ( i = (_DWORD *)((char *)v7 + v6); v8; --v8 )
        {
          if ( (i[9] & 0x2000000) == 0 && !(unsigned int)MmImageSectionPagable(i) )
          {
            v10 = i[4];
            if ( v10 < i[2] )
              v10 = i[2];
            MiGetPteAddress(Flink + i[3] + v10 - 1);
            PteAddress = (ULONG_PTR *)MiGetPteAddress(v11 + Flink);
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
