/*
 * XREFs of MiDecommitPrivatePageTail @ 0x1402BD0C0
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1402BC510 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiIsPfnSystemCharged @ 0x14042F8E0 (MiIsPfnSystemCharged.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiDecommitPrivatePageTail(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v3; // r12
  ULONG_PTR v6; // rsi
  int v7; // r15d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // r13d
  struct _KEVENT *v13; // r12
  unsigned __int8 v14; // cl
  int v15; // edi
  __int64 v16; // rax
  signed __int64 v17; // rdx
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  __int64 v20; // rax
  _DWORD *v21; // rcx
  _DWORD *SubsectionFromPte; // r8
  __int64 v23; // rcx
  __int64 IsZero; // r9
  unsigned int v25; // r11d
  unsigned __int64 v26; // r14
  BOOL v27; // eax
  int v28; // eax
  int v29; // r10d
  int v30; // r10d
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v32; // r9
  _KPROCESS *Process; // rdx
  int v35; // [rsp+34h] [rbp-74h]
  unsigned __int64 v36; // [rsp+38h] [rbp-70h] BYREF
  __int128 v37; // [rsp+40h] [rbp-68h] BYREF
  __int64 v38; // [rsp+50h] [rbp-58h]
  _QWORD v39[2]; // [rsp+58h] [rbp-50h] BYREF

  v38 = 0LL;
  v3 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  v37 = 0LL;
  v6 = 48 * v3 - 0x220000000000LL;
  v7 = (*(_DWORD *)(a1 + 100) >> 4) & 0xF;
  if ( (*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) != a2 )
    KeBugCheckEx(0x1Au, 0x404uLL, a2, a3, *(_QWORD *)(v6 + 8));
  *(_DWORD *)(a1 + 100) &= ~1u;
  v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v9 = (__int64)(a2 << 25) >> 16;
  v10 = 0LL;
  v11 = 0;
  v35 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, a2, a3) )
      {
        HvlNotifyLongSpinWait(v11);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  if ( (*(_DWORD *)(a1 + 112) & 0x20) == 0 )
  {
    if ( v7 )
    {
      ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
      if ( v7 != 6 )
      {
        v12 = 0;
        if ( (unsigned int)MiIsPfnSystemCharged(48 * v3 - 0x220000000000LL, a2, a3, 0x7FFFFFFF0000LL) )
        {
          *(_BYTE *)(v6 + 35) &= ~0x20u;
          v35 = 1;
        }
        goto LABEL_8;
      }
    }
LABEL_7:
    v12 = 0;
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(v6 + 34) & 7) != 6 )
    goto LABEL_14;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  if ( v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( !v7 )
    {
      LeafVa = MiGetLeafVa((__int64)(a2 << 25) >> 16);
      if ( LeafVa < v32 && (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
        *(_DWORD *)(a1 + 100) |= 1u;
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      if ( v7 )
        Process = 0LL;
      else
        Process = KeGetCurrentThread()->ApcState.Process;
      MiIdentifyPfn(v3, Process, &v37);
      v12 = 1;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  if ( v7 != 3 )
    goto LABEL_7;
  v12 = 0;
  if ( (unsigned int)MiIsPfnSystemCharged(48 * v3 - 0x220000000000LL, 0xFFFFF68000000000uLL, a3, 0x7FFFFFFF0000LL) )
  {
    *(_BYTE *)(v6 + 35) &= ~0x20u;
    v35 = 1;
  }
LABEL_8:
  v13 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
  if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
  {
    v14 = *(_BYTE *)(v6 + 34);
    v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    if ( (v14 & 0x10) == 0 )
    {
      if ( (((*(_QWORD *)(v6 + 16) & 0x400LL) == 0) & (unsigned __int8)~(v14 >> 3)) != 0 )
      {
        v36 = *(_QWORD *)(v6 + 16);
        if ( (v36 & 8) != 0 )
        {
          *(_QWORD *)(v6 + 16) &= ~8uLL;
          v20 = v36;
          if ( (unsigned __int64)&v36 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v36 <= 0xFFFFF6FB7DBED7F8uLL )
            v20 = MiReadPteShadow(&v36, v36);
          v36 = v20 & 0xFFFFFFFFFFFFFFFBuLL;
          v8 = v20 & 0xFFFFFFFFFFFFFFFBuLL;
        }
        else
        {
          v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        }
      }
      v15 = *(_DWORD *)(v6 + 32);
      if ( *(__int64 *)(v6 + 40) < 0 && (*(_QWORD *)(v6 + 16) & 0x400000000000400LL) == 0x400 )
      {
        SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v6 + 16));
        if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
          KeBugCheckEx(0x1Au, 0x8840uLL, v6, 0LL, 1uLL);
      }
      if ( *(__int64 *)(v6 + 40) < 0
        && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0
        && (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) == 0 )
      {
        v21 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v6 + 16));
        if ( (*(_DWORD *)(*(_QWORD *)v21 + 56LL) & 0x20) == 0 && (v21[38] & 1) == 0 )
          MiSetSubsectionModified(v21, 0LL);
      }
      if ( (v15 & 0x80000) != 0
        && (unsigned int)MiCanPfnOriginalPteBeLost(v6)
        && (*(_QWORD *)(v6 + 16) & 8LL) != 0
        && (v15 & 0x100000) == 0 )
      {
        *(_QWORD *)(v6 + 16) &= ~8uLL;
      }
      *(_DWORD *)(v6 + 32) = v15 | 0x100000;
    }
  }
  if ( v7 )
  {
    if ( v7 == 6 )
    {
      v16 = MiCaptureDirtyBitToPfn(v6);
      v17 = *(_QWORD *)(v6 + 40);
      v8 = v16;
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v17 & 0x8FFFFFFFFFFFFFFFuLL, v17);
      if ( v17 != v18 )
      {
        do
        {
          v19 = v18;
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v18 & 0x8FFFFFFFFFFFFFFFuLL, v18);
        }
        while ( v19 != v18 );
      }
    }
    else if ( (*(_DWORD *)(v6 + 32) & 0x8000000) != 0 )
    {
      *(_BYTE *)(v6 + 35) = HIBYTE(*(_DWORD *)(v6 + 32)) & 0xF7;
    }
  }
  else if ( (*(_DWORD *)(a1 + 112) & 0x20) == 0 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 32) - 376LL));
  }
  if ( (*(_BYTE *)(v6 + 34) & 7) != 6 )
LABEL_14:
    MiBadShareCount(v6);
  v23 = (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v6 + 24) = v23 ^ (v23 ^ *(_QWORD *)(v6 + 24)) & 0xC000000000000000uLL;
  if ( v23 )
    IsZero = 2LL;
  else
    IsZero = (unsigned int)MiPfnShareCountIsZero(v6);
  v25 = 4;
  if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
  {
    v26 = (__int64)(a2 << 25) >> 16;
    v27 = v26 >= 0xFFFFF68000000000uLL && v26 <= 0xFFFFF6FFFFFFFFFFuLL;
    if ( (_DWORD)IsZero == 2 )
    {
      if ( v27 )
        *(_QWORD *)v6 &= ~1uLL;
    }
    else if ( (_DWORD)IsZero == 3 )
    {
      v29 = *(_DWORD *)(a1 + 100);
      if ( (v29 & 1) == 0 && v27 && (v29 & 0xF0) == 0 && (unsigned __int64)MiGetLeafVa(v26) < 0x7FFFFFFF0000LL )
        *(_DWORD *)(a1 + 100) = v30 | 1;
      if ( *(__int64 *)(v6 + 40) < 0 )
        IsZero = v25;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v28 = *(_DWORD *)(a1 + 100);
  if ( (v28 & 1) != 0 )
  {
    LOBYTE(v28) = MiChargeCommit(v13, 1LL, v25, IsZero);
  }
  else if ( (_DWORD)IsZero == 3 || v35 )
  {
    ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  }
  if ( v12 )
  {
    v39[1] = 24LL;
    v39[0] = &v37;
    LOBYTE(v28) = EtwTraceKernelEvent((int)v39, 1, 0x20000001u, 631, 290462468);
  }
  if ( v8 )
    LOBYTE(v28) = MiReleasePageFileInfo(v13, v8, 1LL);
  return v28;
}
