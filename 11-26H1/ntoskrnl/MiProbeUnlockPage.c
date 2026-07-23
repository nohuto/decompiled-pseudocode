/*
 * XREFs of MiProbeUnlockPage @ 0x14028AE60
 * Callers:
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MiUnlockPhysicalPageByVa @ 0x1406EF080 (MiUnlockPhysicalPageByVa.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiQueueControlAreaDelete @ 0x14028D000 (MiQueueControlAreaDelete.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiGetBaseResidentPage @ 0x1402D3C20 (MiGetBaseResidentPage.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableCharges @ 0x14031AF70 (MiUnlockPageTableCharges.c)
 *     MiInsertPossiblyBadPage @ 0x1403D04D4 (MiInsertPossiblyBadPage.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

int __fastcall MiProbeUnlockPage(ULONG_PTR BugCheckParameter2, __int16 a2, __int64 *a3, _DWORD *a4)
{
  unsigned __int64 v6; // r8
  ULONG_PTR v8; // rsi
  unsigned __int64 CurrentThread; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 BaseResidentPage; // r14
  unsigned int v17; // ebx
  __int64 v18; // r15
  int v19; // eax
  int v20; // ebx
  __int64 v21; // rdi
  __int64 PfnPageSizeIndex; // rsi
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rdx
  ULONG *v26; // rax
  __int64 v27; // r9
  signed __int64 *v28; // r8
  signed __int64 v29; // rax
  ULONG *v30; // rtt
  __int64 v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r9
  _DWORD *SubsectionFromPte; // rax
  _QWORD v38[9]; // [rsp+30h] [rbp-48h] BYREF
  int v39; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0xFFFFDE0000000000uLL;
  v8 = BugCheckParameter2;
  CurrentThread = 0xFFFFFFFFFFLL;
  if ( (a2 & 0x100) == 0 )
    goto LABEL_6;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000LL) != 0 )
    goto LABEL_6;
  if ( ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 1 )
    goto LABEL_6;
  v10 = *(_QWORD *)(BugCheckParameter2 + 40);
  BugCheckParameter2 = 0x3FFFFFFFFELL;
  if ( (v10 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
    goto LABEL_6;
  v11 = *a3;
  v12 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL;
  if ( *a3 == v12 )
    goto LABEL_6;
  if ( v11 != 0x3FFFFFFFFFLL )
    MiUnlockPageTableCharges(48 * v11 - 0x220000000000LL);
  if ( *(__int64 *)(v8 + 40) < 0 )
  {
    *a4 = 1;
    if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) == 4 )
    {
      *a3 = 0x3FFFFFFFFFLL;
      goto LABEL_6;
    }
  }
  else
  {
    *a4 = 2;
  }
  *a3 = v12;
LABEL_6:
  v13 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v14 = 0LL;
  v15 = 0LL;
  BaseResidentPage = 0LL;
  v17 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v17 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter2, CurrentThread, v6) )
      {
        HvlNotifyLongSpinWait(v17);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  v18 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  v19 = *(_DWORD *)(v8 + 32);
  if ( (v19 & 0x200000) != 0 && (v19 & 0x80000) == 0 && (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    v15 = *(_QWORD *)v8 - 32LL;
    _InterlockedDecrement64((volatile signed __int64 *)(v15 + 264));
  }
  if ( (a2 & 0x80u) != 0 )
  {
    if ( !v15 )
    {
      if ( (*(_DWORD *)(v8 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v8 + 34) & 8) == 0 )
      {
        v38[0] = *(_QWORD *)(v8 + 16);
        if ( (v38[0] & 8) != 0 )
        {
          *(_QWORD *)(v8 + 16) &= ~8uLL;
          v32 = v38[0];
          CurrentThread = 0xFFFFF6FB7DBED000uLL;
          if ( (unsigned __int64)v38 >= 0xFFFFF6FB7DBED000uLL )
          {
            CurrentThread = 0xFFFFF6FB7DBED7F8uLL;
            if ( (unsigned __int64)v38 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              v34 = v38[0];
              if ( (v38[0] & 1) != 0 && ((v38[0] & 0x20) == 0 || (v38[0] & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
              {
                CurrentThread = (unsigned __int64)KeGetCurrentThread();
                v6 = *(_QWORD *)(CurrentThread + 184);
                if ( *(_BYTE *)(v6 + 352) != 1 )
                {
                  v35 = *(_QWORD *)(v6 + 1288);
                  if ( v35 )
                  {
                    CurrentThread = *(_QWORD *)(v35 + 8 * (((unsigned __int64)v38 >> 3) & 0x1FF));
                    if ( (CurrentThread & 0x20) != 0 )
                      v34 = v38[0] | 0x20LL;
                    v32 = v34 | 0x42;
                    if ( (CurrentThread & 0x42) == 0 )
                      v32 = v34;
                  }
                }
              }
            }
          }
          v38[0] = v32 & 0xFFFFFFFFFFFFFFFBuLL;
          v13 = v32 & 0xFFFFFFFFFFFFFFFBuLL;
        }
        else
        {
          v13 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        }
      }
      v20 = *(_DWORD *)(v8 + 32);
      if ( *(__int64 *)(v8 + 40) < 0 )
      {
        CurrentThread = 0x400000000000400LL;
        if ( (*(_QWORD *)(v8 + 16) & 0x400000000000400LL) == 0x400 )
        {
          SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v8 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20
            && (SubsectionFromPte[8] & 0x20000) == 0 )
          {
            KeBugCheckEx(0x1Au, 0x8840uLL, v8, 0LL, 1uLL);
          }
        }
      }
      if ( *(__int64 *)(v8 + 40) < 0
        && (*(_DWORD *)(v8 + 16) & 0x400LL) != 0
        && (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) == 0 )
      {
        v33 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v8 + 16));
        if ( (*(_DWORD *)(*(_QWORD *)v33 + 56LL) & 0x20) == 0 && (v33[38] & 1) == 0 )
          MiSetSubsectionModified(v33, 0LL);
      }
      if ( (v20 & 0x80000) != 0
        && (unsigned int)MiCanPfnOriginalPteBeLost(v8)
        && (*(_QWORD *)(v8 + 16) & 8LL) != 0
        && (v20 & 0x100000) == 0 )
      {
        *(_QWORD *)(v8 + 16) &= ~8uLL;
      }
      *(_DWORD *)(v8 + 32) = v20 | 0x100000;
    }
    if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) == 0
      && *(__int64 *)(v8 + 40) < 0
      && (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
    {
      v14 = *(_QWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v8 + 16));
    }
  }
  MiRemoveLockedPageChargeAndDecRef(v8, CurrentThread, v6);
  if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0
    && (unsigned __int16)*(_DWORD *)(v8 + 32) == 2 )
  {
    *(_QWORD *)(v8 + 24) &= ~0x4000000000000000uLL;
    BaseResidentPage = MiGetBaseResidentPage(v8);
    v31 = (*(_QWORD *)BaseResidentPage & 0xFFFFFFFFFFLL) - 1;
    *(_QWORD *)BaseResidentPage = v31 ^ (*(_QWORD *)BaseResidentPage ^ v31) & 0xFFFFFF0000000000uLL;
    if ( BaseResidentPage != v8 )
      _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v31 )
      BaseResidentPage = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 )
    MiReleasePageFileInfo(v18, v13, 1LL);
  if ( BaseResidentPage )
  {
    v21 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(BaseResidentPage + 40) >> 43) & 0x3FFLL));
    PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(BaseResidentPage);
    v39 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BaseResidentPage + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v39);
      while ( *(__int64 *)(BaseResidentPage + 24) < 0 );
    }
    *(_DWORD *)(BaseResidentPage + 32) = *(_DWORD *)(BaseResidentPage + 32) & 0xFFF8FFFF | 0x50000;
    *(_QWORD *)(BaseResidentPage + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(BaseResidentPage + 16), 0LL);
    *(_DWORD *)(BaseResidentPage + 32) = (v23 << 16) ^ ((v23 << 16) ^ *(_DWORD *)(BaseResidentPage + 32)) & 0xFFF8FFFF;
    v24 = (BaseResidentPage + 0x220000000000LL) / 48;
    *(_QWORD *)(BaseResidentPage + 24) &= 0xC000000000000000uLL;
    *(_DWORD *)(BaseResidentPage + 32) &= 0xFFFF0000;
    if ( (*(_QWORD *)(BaseResidentPage + 40) & 0x20000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertPossiblyBadPage(v24, 2LL);
    }
    else
    {
      MiInsertPageInFreeOrZeroedList(v24, 2LL);
      _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v25 = MiPageSizes[PfnPageSizeIndex];
    if ( v25 )
      MiReleaseNonPagedResources(v21, v25);
  }
  if ( v14 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 112), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    MiQueueControlAreaDelete(v14);
  v26 = &MiSystemPartition;
  if ( (ULONG *)v18 != &MiSystemPartition )
  {
    v27 = *(_QWORD *)(v18 + 3176);
    v28 = (signed __int64 *)(*(_QWORD *)v27 + *(_DWORD *)(v27 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v27 + 20)));
    _m_prefetchw(v28);
    while ( 1 )
    {
      while ( 1 )
      {
        v29 = *v28;
        if ( (*v28 & 1) != 0 )
          break;
        v30 = (ULONG *)*v28;
        v26 = (ULONG *)_InterlockedCompareExchange64(v28, v29 - 2, v29);
        if ( v30 == v26 )
          return (int)v26;
      }
      if ( v29 != 1 )
        break;
      v28 = *(signed __int64 **)v27;
    }
    v26 = (ULONG *)(v29 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v26, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      LODWORD(v26) = KeSetEvent((PRKEVENT)(v26 + 2), 0, 0);
  }
  return (int)v26;
}
