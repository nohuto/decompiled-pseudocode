/*
 * XREFs of MiDecommitPrivatePageTail @ 0x1402DB300
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1402DA750 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiBadShareCount @ 0x1402DC710 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402DC770 (MiPfnShareCountIsZero.c)
 *     MiIdentifyPfn @ 0x1402F0EF0 (MiIdentifyPfn.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031AE30 (MiCaptureDirtyBitToPfn.c)
 *     MiGetLeafVa @ 0x140326060 (MiGetLeafVa.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140408680 (MiCanPfnOriginalPteBeLost.c)
 *     MiIsPfnSystemCharged @ 0x14043D030 (MiIsPfnSystemCharged.c)
 *     MiSetSubsectionModified @ 0x14045CF48 (MiSetSubsectionModified.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall MiDecommitPrivatePageTail(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v3; // r12
  ULONG_PTR v6; // rsi
  int v7; // r15d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r13
  unsigned int v10; // edi
  int v11; // r13d
  struct _KEVENT *v12; // r12
  unsigned __int8 v13; // cl
  int v14; // edi
  __int64 v15; // rax
  signed __int64 v16; // rdx
  signed __int64 v17; // rax
  signed __int64 v18; // rdx
  __int64 v19; // rax
  _DWORD *v20; // rcx
  _DWORD *SubsectionFromPte; // r8
  __int64 v22; // rcx
  __int64 IsZero; // r9
  unsigned int v24; // r11d
  unsigned __int64 v25; // r14
  BOOL v26; // eax
  int v27; // eax
  int v28; // r10d
  int v29; // r10d
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v31; // r9
  _KPROCESS *Process; // rdx
  int v34; // [rsp+34h] [rbp-74h]
  unsigned __int64 v35; // [rsp+38h] [rbp-70h] BYREF
  __int128 v36; // [rsp+40h] [rbp-68h] BYREF
  __int64 v37; // [rsp+50h] [rbp-58h]
  _QWORD v38[2]; // [rsp+58h] [rbp-50h] BYREF

  v37 = 0LL;
  v3 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  v36 = 0LL;
  v6 = 48 * v3 - 0x220000000000LL;
  v7 = (*(_DWORD *)(a1 + 100) >> 4) & 0xF;
  if ( (*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) != a2 )
    KeBugCheckEx(0x1Au, 0x404uLL, a2, a3, *(_QWORD *)(v6 + 8));
  *(_DWORD *)(a1 + 100) &= ~1u;
  v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v9 = (__int64)(a2 << 25) >> 16;
  v10 = 0;
  v34 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v10);
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
        v11 = 0;
        if ( (unsigned int)MiIsPfnSystemCharged(48 * v3 - 0x220000000000LL, a2, a3, 0x7FFFFFFF0000LL) )
        {
          *(_BYTE *)(v6 + 35) &= ~0x20u;
          v34 = 1;
        }
        goto LABEL_8;
      }
    }
LABEL_7:
    v11 = 0;
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
      if ( LeafVa < v31 && (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
        *(_DWORD *)(a1 + 100) |= 1u;
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      if ( v7 )
        Process = 0LL;
      else
        Process = KeGetCurrentThread()->ApcState.Process;
      MiIdentifyPfn(v3, Process, &v36);
      v11 = 1;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  if ( v7 != 3 )
    goto LABEL_7;
  v11 = 0;
  if ( (unsigned int)MiIsPfnSystemCharged(48 * v3 - 0x220000000000LL, 0xFFFFF68000000000uLL, a3, 0x7FFFFFFF0000LL) )
  {
    *(_BYTE *)(v6 + 35) &= ~0x20u;
    v34 = 1;
  }
LABEL_8:
  v12 = *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
  if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
  {
    v13 = *(_BYTE *)(v6 + 34);
    v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    if ( (v13 & 0x10) == 0 )
    {
      if ( (((*(_QWORD *)(v6 + 16) & 0x400LL) == 0) & (unsigned __int8)~(v13 >> 3)) != 0 )
      {
        v35 = *(_QWORD *)(v6 + 16);
        if ( (v35 & 8) != 0 )
        {
          *(_QWORD *)(v6 + 16) &= ~8uLL;
          v19 = v35;
          if ( (unsigned __int64)&v35 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v35 <= 0xFFFFF6FB7DBED7F8uLL )
            v19 = MiReadPteShadow(&v35, v35);
          v35 = v19 & 0xFFFFFFFFFFFFFFFBuLL;
          v8 = v19 & 0xFFFFFFFFFFFFFFFBuLL;
        }
        else
        {
          v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        }
      }
      v14 = *(_DWORD *)(v6 + 32);
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
        v20 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v6 + 16));
        if ( (*(_DWORD *)(*(_QWORD *)v20 + 56LL) & 0x20) == 0 && (v20[38] & 1) == 0 )
          MiSetSubsectionModified(v20, 0LL);
      }
      if ( (v14 & 0x80000) != 0
        && (unsigned int)MiCanPfnOriginalPteBeLost(v6)
        && (*(_QWORD *)(v6 + 16) & 8LL) != 0
        && (v14 & 0x100000) == 0 )
      {
        *(_QWORD *)(v6 + 16) &= ~8uLL;
      }
      *(_DWORD *)(v6 + 32) = v14 | 0x100000;
    }
  }
  if ( v7 )
  {
    if ( v7 == 6 )
    {
      v15 = MiCaptureDirtyBitToPfn(v6);
      v16 = *(_QWORD *)(v6 + 40);
      v8 = v15;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v16 & 0x8FFFFFFFFFFFFFFFuLL, v16);
      if ( v16 != v17 )
      {
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v17 & 0x8FFFFFFFFFFFFFFFuLL, v17);
        }
        while ( v18 != v17 );
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
  v22 = (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v6 + 24) = v22 ^ (v22 ^ *(_QWORD *)(v6 + 24)) & 0xC000000000000000uLL;
  if ( v22 )
    IsZero = 2LL;
  else
    IsZero = (unsigned int)MiPfnShareCountIsZero(v6);
  v24 = 4;
  if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
  {
    v25 = (__int64)(a2 << 25) >> 16;
    v26 = v25 >= 0xFFFFF68000000000uLL && v25 <= 0xFFFFF6FFFFFFFFFFuLL;
    if ( (_DWORD)IsZero == 2 )
    {
      if ( v26 )
        *(_QWORD *)v6 &= ~1uLL;
    }
    else if ( (_DWORD)IsZero == 3 )
    {
      v28 = *(_DWORD *)(a1 + 100);
      if ( (v28 & 1) == 0 && v26 && (v28 & 0xF0) == 0 && (unsigned __int64)MiGetLeafVa(v25) < 0x7FFFFFFF0000LL )
        *(_DWORD *)(a1 + 100) = v29 | 1;
      if ( *(__int64 *)(v6 + 40) < 0 )
        IsZero = v24;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v27 = *(_DWORD *)(a1 + 100);
  if ( (v27 & 1) != 0 )
  {
    LOBYTE(v27) = MiChargeCommit(v12, 1LL, v24, IsZero);
  }
  else if ( (_DWORD)IsZero == 3 || v34 )
  {
    ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  }
  if ( v11 )
  {
    v38[1] = 24LL;
    v38[0] = &v36;
    LOBYTE(v27) = EtwTraceKernelEvent((int)v38, 1, 0x20000001u, 631, 290462468);
  }
  if ( v8 )
    LOBYTE(v27) = MiReleasePageFileInfo(v12, v8, 1);
  return v27;
}
