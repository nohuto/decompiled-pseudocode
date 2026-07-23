/*
 * XREFs of MiBuildImportsForBootDrivers @ 0x140D05DAC
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 MiBuildImportsForBootDrivers()
{
  int v0; // ebx
  unsigned int v1; // esi
  struct _LIST_ENTRY *v2; // r13
  struct _KTHREAD *Lock; // rdi
  PVOID *i; // rax
  PVOID v5; // rcx
  PVOID *j; // rbx
  struct _LIST_ENTRY *k; // rbx
  unsigned __int64 *v8; // r14
  unsigned int v9; // r15d
  ULONG v10; // ebp
  struct _LIST_ENTRY *v11; // rdi
  struct _LIST_ENTRY *v12; // rcx
  ULONG m; // r12d
  unsigned __int64 Flink; // r8
  struct _LIST_ENTRY *DataTableEntryByAddress; // rax
  __int64 v16; // r11
  struct _LIST_ENTRY *PoolMm; // rcx
  __int64 v18; // rdx
  struct _LIST_ENTRY *v19; // r8
  PVOID v20; // rcx
  ULONG Size; // [rsp+60h] [rbp+8h] BYREF
  struct _KTHREAD *v23; // [rsp+68h] [rbp+10h]
  struct _LIST_ENTRY *v24; // [rsp+70h] [rbp+18h]

  v0 = 0;
  Size = 0;
  v1 = 0;
  v24 = 0LL;
  v2 = 0LL;
  Lock = MmAcquireLoadLock();
  v23 = Lock;
  for ( i = (PVOID *)PsLoadedModuleList; ; i = (PVOID *)*i )
  {
    if ( i == &PsLoadedModuleList )
    {
LABEL_10:
      v1 = -1073741275;
LABEL_11:
      for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
      {
        *((_DWORD *)j + 46) &= ~0x80000u;
        j[30] = 0LL;
        v20 = j[17];
        if ( v20 != (PVOID)1 && v20 != (PVOID)-2LL && ((unsigned __int8)v20 & 1) == 0 )
          ExFreePoolWithTag(v20, 0);
        j[17] = (PVOID)1;
        *((_WORD *)j + 54) = 1;
      }
      goto LABEL_60;
    }
    v5 = i[6];
    if ( PsNtosImageBase == v5 )
    {
      v2 = (struct _LIST_ENTRY *)i;
    }
    else
    {
      if ( PsHalImageBase != v5 )
        goto LABEL_7;
      v24 = (struct _LIST_ENTRY *)i;
    }
    ++v0;
LABEL_7:
    if ( v0 == 2 )
      break;
  }
  for ( k = (struct _LIST_ENTRY *)PsLoadedModuleList; k != (struct _LIST_ENTRY *)&PsLoadedModuleList; k = k->Flink )
  {
    v8 = (unsigned __int64 *)RtlImageDirectoryEntryToData(k[3].Flink, 1u, 0xCu, &Size);
    if ( v8 )
    {
      v9 = 0;
      v10 = Size >> 3;
      v11 = 0LL;
      v12 = 0LL;
      Size >>= 3;
      for ( m = 0; m < v10; ++m )
      {
        if ( !v12 || (Flink = (unsigned __int64)v12[3].Flink, *v8 < Flink) || *v8 >= Flink + LODWORD(v12[4].Flink) )
        {
          DataTableEntryByAddress = MmFindDataTableEntryByAddress(*v8);
          v12 = DataTableEntryByAddress;
          if ( DataTableEntryByAddress )
          {
            if ( ((__int64)DataTableEntryByAddress[11].Blink & 0x80000) == 0
              && DataTableEntryByAddress != v2
              && DataTableEntryByAddress != v24
              && DataTableEntryByAddress != k )
            {
              if ( (LODWORD(DataTableEntryByAddress[11].Blink) & 0x80u) != 0
                || _bittest16((const signed __int16 *)&DataTableEntryByAddress[6].Blink + 3, 9u) )
              {
                v1 = -1073740608;
LABEL_49:
                Lock = v23;
                goto LABEL_11;
              }
              if ( ((LODWORD(k[11].Blink) & 0x80u) == 0 && !_bittest16((const signed __int16 *)&k[6].Blink + 3, 9u)
                 || k[15].Blink != DataTableEntryByAddress)
                && ((__int64)DataTableEntryByAddress[11].Blink & 0x80000) == 0 )
              {
                LODWORD(DataTableEntryByAddress[11].Blink) |= 0x80000u;
                ++v9;
                DataTableEntryByAddress[15].Flink = v11;
                v11 = DataTableEntryByAddress;
              }
            }
          }
          else if ( v16
                 && (LODWORD(k[11].Blink) & 0x80u) == 0
                 && !_bittest16((const signed __int16 *)&k[6].Blink + 3, 9u) )
          {
            Lock = v23;
            goto LABEL_10;
          }
        }
        ++v8;
      }
      if ( !v11 )
        goto LABEL_46;
      PoolMm = 0LL;
      if ( v9 > 1 )
      {
        PoolMm = (struct _LIST_ENTRY *)ExAllocatePoolMm(
                                         256LL,
                                         8LL * (v9 - 1) + 16,
                                         1413770573,
                                         KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
        if ( !PoolMm )
        {
          v1 = -1073741670;
          goto LABEL_49;
        }
        PoolMm->Flink = (struct _LIST_ENTRY *)v9;
        k[8].Blink = PoolMm;
      }
      v18 = 0LL;
      do
      {
        LODWORD(v11[11].Blink) &= ~0x80000u;
        ++WORD2(v11[6].Blink);
        v19 = v11[15].Flink;
        v11[15].Flink = 0LL;
        if ( v9 == 1 )
        {
          k[8].Blink = (struct _LIST_ENTRY *)((unsigned __int64)v11 | 1);
        }
        else
        {
          *((_QWORD *)&PoolMm->Blink + v18) = v11;
          v18 = (unsigned int)(v18 + 1);
        }
        v11 = v19;
      }
      while ( v19 );
    }
    else
    {
LABEL_46:
      k[8].Blink = (struct _LIST_ENTRY *)-2LL;
    }
  }
  Lock = v23;
LABEL_60:
  MmReleaseLoadLock(Lock);
  return v1;
}
