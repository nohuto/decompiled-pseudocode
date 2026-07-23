/*
 * XREFs of MmStoreRegister @ 0x140883A7C
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14064098C (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     RtlClearAllBits @ 0x140478400 (RtlClearAllBits.c)
 *     KeQueryMaximumGroupCount @ 0x1404B4AE0 (KeQueryMaximumGroupCount.c)
 *     MiMoveModifiedPagesToCompressList @ 0x140512FEC (MiMoveModifiedPagesToCompressList.c)
 *     MiStoreChargeReservedPages @ 0x14070EF38 (MiStoreChargeReservedPages.c)
 *     MiStoreReleaseReservedPageCharges @ 0x14070FA90 (MiStoreReleaseReservedPageCharges.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmStoreCheckPagefiles @ 0x14077F268 (MmStoreCheckPagefiles.c)
 *     MiCreatePagefile @ 0x1408714A0 (MiCreatePagefile.c)
 *     MiDeletePagefile @ 0x140871A84 (MiDeletePagefile.c)
 *     MiInsertPageFileInList @ 0x14087206C (MiInsertPageFileInList.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmStoreRegister(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rdi
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v10; // rsi
  int inserted; // ebx
  unsigned int *v12; // rbp
  int v13; // r14d
  int v14; // eax
  _RTL_BITMAP *v15; // rax
  _RTL_BITMAP *v16; // r12
  int v17; // eax
  void *v18; // r15
  unsigned int *Pagefile; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  USHORT MaximumGroupCount; // ax
  USHORT v24; // ax
  __int64 v25; // rdx
  __int64 v26; // r8
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  v5 = *a1;
  Handle = 0LL;
  *(_DWORD *)(v5 + 1304) = 1;
  if ( (*(_DWORD *)(v5 + 4) & 0x20) != 0 )
    return 3221225659LL;
  if ( !(unsigned int)MmStoreCheckPagefiles((__int64)a1) )
    return 3221225799LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x28uLL, 1884581197, CurrentProcessorColor | 0x80000000);
  v10 = PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  *(_QWORD *)PoolMm = v5;
  KeInitializeEvent((PRKEVENT)(PoolMm + 8), NotificationEvent, 0);
  *(_DWORD *)(v10 + 32) = 0;
  inserted = PsCreateSystemThreadEx(
               &Handle,
               0x1FFFFFLL,
               0LL,
               *(_QWORD *)(*(_QWORD *)(v5 + 256) + 128LL),
               0LL,
               MiStoreEvictThread,
               v10,
               0LL,
               0LL);
  if ( inserted >= 0 )
  {
    v12 = 0LL;
    v13 = 0;
    v14 = MmGetCurrentProcessorColor();
    v15 = (_RTL_BITMAP *)ExAllocatePoolMm(
                           64LL,
                           8 * (((unsigned int)dword_140FBF21C >> 6) + ((dword_140FBF21C & 0x3F) != 0) + 2),
                           1833068877,
                           v14 | 0x80000000);
    v16 = v15;
    if ( !v15 )
    {
      *(_DWORD *)(v10 + 32) = 1;
      inserted = -1073741670;
LABEL_29:
      KeSetEvent((PRKEVENT)(v10 + 8), 0, 0);
      ObCloseHandle(Handle, 0);
      return (unsigned int)inserted;
    }
    v15->SizeOfBitMap = dword_140FBF21C;
    v15->Buffer = &v15[1].SizeOfBitMap;
    RtlClearAllBits(v15);
    v17 = MmGetCurrentProcessorColor();
    v18 = (void *)ExAllocatePoolMm(
                    64LL,
                    (unsigned __int64)(unsigned int)dword_140FBF21C << 6,
                    1767074125,
                    v17 | 0x80000000);
    if ( v18 && (unsigned int)MiStoreChargeReservedPages(v5) )
    {
      *(_DWORD *)(v5 + 1308) = -2;
      v13 = 1;
      Pagefile = (unsigned int *)MiCreatePagefile(v5, 0LL, 0LL, 0x40000, 0x40000, 0LL, 0, 2);
      v12 = Pagefile;
      if ( !Pagefile )
      {
        *(_DWORD *)(v10 + 32) = 1;
        inserted = -1073741670;
LABEL_17:
        ExFreePoolWithTag(v16, 0);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        if ( v12 )
          MiDeletePagefile((char *)v12, 1);
        if ( v13 )
          MiStoreReleaseReservedPageCharges(v5);
        goto LABEL_29;
      }
      inserted = MiInsertPageFileInList(Pagefile, v20, v21, v22);
      if ( inserted >= 0 )
      {
        inserted = 0;
        ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x66506D4Du, v5 + 1416, 0LL, 0LL);
        *(_QWORD *)(v5 + 1512) = v16;
        *(_QWORD *)(v5 + 1520) = v18;
        *(_DWORD *)(v5 + 1304) = 255;
        *(_QWORD *)(v5 + 2056) = a4;
        if ( (a5 & 1) != 0 )
          *(_DWORD *)(v5 + 2068) |= 1u;
        if ( (a5 & 2) != 0 )
          *(_DWORD *)(v5 + 2068) |= 2u;
        MaximumGroupCount = KeQueryMaximumGroupCount();
        *(_WORD *)(v5 + 1530) = MaximumGroupCount;
        *(_WORD *)(v5 + 1528) = 1;
        *(_DWORD *)(v5 + 1532) = 0;
        memset_0((void *)(v5 + 1536), 0, 8LL * MaximumGroupCount);
        v24 = KeQueryMaximumGroupCount();
        *(_WORD *)(v5 + 1794) = v24;
        *(_WORD *)(v5 + 1792) = 1;
        *(_DWORD *)(v5 + 1796) = 0;
        memset_0((void *)(v5 + 1800), 0, 8LL * v24);
        *(_DWORD *)(v5 + 1300) = v12[43] & 0xF;
        MiMoveModifiedPagesToCompressList(v5, v25, v26);
        goto LABEL_29;
      }
    }
    else
    {
      inserted = -1073741670;
    }
    *(_DWORD *)(v10 + 32) = 1;
    goto LABEL_17;
  }
  ExFreePoolWithTag((PVOID)v10, 0);
  return (unsigned int)inserted;
}
