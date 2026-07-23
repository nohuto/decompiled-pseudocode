/*
 * XREFs of MiLockPageTablePage @ 0x14031C910
 * Callers:
 *     MiProbeLockFrame @ 0x1402D0680 (MiProbeLockFrame.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiLockVirtualMemoryVa @ 0x14031AC40 (MiLockVirtualMemoryVa.c)
 *     MiLockPageTableRange @ 0x1404AA38C (MiLockPageTableRange.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIncrementPageTableLockCheckWrap @ 0x14031CE00 (MiIncrementPageTableLockCheckWrap.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiIsProtoPoolPfnInNonPagedPool @ 0x14031E250 (MiIsProtoPoolPfnInNonPagedPool.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 */

__int64 __fastcall MiLockPageTablePage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int v2; // edi
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // rsi
  unsigned int v5; // r12d
  __int64 v6; // r8
  __int64 v7; // r11
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rsi
  __int64 v10; // r13
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v13; // ett
  unsigned int i; // r14d
  unsigned int v15; // ebp
  __int64 v16; // r9
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 result; // rax
  unsigned __int64 v20; // rsi
  struct _KPRCB *v21; // r8
  signed __int32 v22; // edx
  bool v23; // zf
  signed __int32 v24; // eax
  int v25; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v26; // [rsp+70h] [rbp+18h]

  v2 = a2;
  v3 = BugCheckParameter2;
  if ( (_DWORD)a2 != 1 )
  {
    if ( (_DWORD)a2 )
    {
      v4 = 0LL;
      v26 = 0LL;
      if ( (_DWORD)a2 != 2 && (unsigned int)MiIsProtoPoolPfnInNonPagedPool(BugCheckParameter2) )
        return 1LL;
    }
    else
    {
      v4 = BugCheckParameter2;
      v26 = BugCheckParameter2;
    }
LABEL_4:
    v5 = 1;
    v6 = 0x3FFFFFFFFFFFFFFFLL;
    v7 = 0xFFFFFFFFFFLL;
    v8 = 0xFFFFDE0000000000uLL;
    if ( v2 == 1 )
      goto LABEL_5;
    while ( 1 )
    {
      if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
      {
        v25 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v25);
          while ( *(__int64 *)(v3 + 24) < 0 );
        }
        if ( v2 == 1 )
        {
          v7 = 0xFFFFFFFFFFLL;
          v8 = 0xFFFFDE0000000000uLL;
          if ( v3 != 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_51;
          }
        }
        if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
        {
          result = MiIncrementPageTableLockCheckWrap(v3, a2, v6, v8);
          _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return result;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( v2 == 2 )
      {
        v9 = 3LL;
      }
      else
      {
        v9 = 1LL;
        if ( !v2 )
          v9 = 4LL;
      }
      v10 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL));
      if ( (ULONG *)v10 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
        while ( v9 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
        {
          v13 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - v9,
                                      CachedResidentAvailable);
          if ( v13 == CachedResidentAvailable )
            goto LABEL_14;
        }
      }
      result = MiChargePartitionResidentAvailable(v10, v9, 512LL);
      if ( !(_DWORD)result )
        return result;
LABEL_14:
      for ( i = 0; ; ++i )
      {
        if ( i >= v9 )
        {
          if ( i != v9 )
          {
LABEL_35:
            v20 = v9 - i;
            if ( (ULONG *)v10 == &MiSystemPartition )
            {
              v21 = KeGetCurrentPrcb();
              v22 = v21->CachedResidentAvailable;
              if ( v22 != -1 )
              {
                do
                {
                  if ( v20 + v22 > 0x100 || v20 >= 0x80000 )
                    break;
                  v24 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&v21->CachedResidentAvailable,
                          v20 + v22,
                          v22);
                  v23 = v22 == v24;
                  v22 = v24;
                  if ( v23 )
                    return v5;
                }
                while ( v24 != -1 );
                if ( v22 > 192
                  && v22 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v21->CachedResidentAvailable,
                              192,
                              v22) )
                {
                  v20 += v22 - 192;
                }
              }
            }
            if ( v20 )
              _InterlockedAdd64((volatile signed __int64 *)(v10 + 22528), v20);
          }
          return v5;
        }
        v15 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v15 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v15);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v3 + 24) < 0 );
        }
        if ( v2 == 1 && v3 != 48 * (*(_QWORD *)(v26 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL )
          break;
        v16 = *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( i )
        {
          MiIncrementPageTableLockCheckWrap(v3, CurrentPrcb, v6, v16);
        }
        else if ( !(unsigned int)MiIncrementPageTableLockCheckWrap(v3, CurrentPrcb, v6, v16) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v5 = 0;
          goto LABEL_35;
        }
        if ( v17 >= 0x10000 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_35;
        }
        v18 = MiCaptureDirtyBitToPfn(v3);
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v18 )
          MiReleasePageFileInfo((struct _KEVENT *)v10, v18, 1LL);
        v3 = 48 * (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiReturnResident(v10, v9 - i);
      v4 = v26;
      v8 = 0xFFFFDE0000000000uLL;
LABEL_51:
      v6 = 0x3FFFFFFFFFFFFFFFLL;
LABEL_5:
      v3 = 48 * (v7 & *(_QWORD *)(v4 + 40)) - 0x220000000000LL;
    }
  }
  v4 = BugCheckParameter2;
  v26 = BugCheckParameter2;
  if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) != 4 )
    goto LABEL_4;
  return 1LL;
}
