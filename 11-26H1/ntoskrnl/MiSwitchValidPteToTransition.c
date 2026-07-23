/*
 * XREFs of MiSwitchValidPteToTransition @ 0x1402F0DC0
 * Callers:
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402D25C0 (ExAcquireRundownProtectionCacheAware.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiUpdateProtectionMask @ 0x1402E58D0 (MiUpdateProtectionMask.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049109C (MiCaptureWriteWatchDirtyBit.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR *__fastcall MiSwitchValidPteToTransition(__int64 a1, ULONG_PTR *a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rbp
  ULONG_PTR *v4; // rsi
  __int64 *v6; // r12
  ULONG_PTR v7; // rbx
  unsigned __int64 v8; // rcx
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v10; // rdi
  __int64 v11; // r15
  char updated; // r13
  __int64 v13; // rbx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int16 v16; // cx
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v3 = ((unsigned __int64)a2 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) + 8;
  v4 = a2;
  if ( v3 > *(_QWORD *)(a1 + 80) )
    v3 = *(_QWORD *)(a1 + 80);
  v6 = (__int64 *)(*(_QWORD *)a1 + 48LL + 8 * v2);
  *(_QWORD *)(a1 + 88) = v2 + ((__int64)(v3 - (_QWORD)a2) >> 3);
  while ( (unsigned __int64)v4 < v3 )
  {
    v7 = *v4;
    if ( (*v4 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, (ULONG_PTR)v4, *v4, *(_QWORD *)a1);
    v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
    BugCheckParameter4 = 48 * v8 - 0x220000000000LL;
    if ( v8 <= qword_140E2D920 && ((*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      if ( (ULONG_PTR *)(*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v4 )
        KeBugCheckEx(0x1Au, 0x6080uLL, (ULONG_PTR)v4, v7, BugCheckParameter4);
      v16 = 1;
      if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x10000000000LL) != 0
        || (*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
      {
        v16 = 2;
      }
      if ( (unsigned __int16)*(_DWORD *)(BugCheckParameter4 + 32) < v16 )
        KeBugCheckEx(0x1Au, 0x6081uLL, (ULONG_PTR)v4, v7, BugCheckParameter4);
    }
    if ( (v7 & 0x42) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 48LL) & 0x180000) == 0x180000 )
      MiCaptureWriteWatchDirtyBit(
        KeGetCurrentThread()->ApcState.Process,
        (__int64)((_QWORD)v4 << 25) >> 16,
        *(_QWORD *)(a1 + 8));
    v10 = MiUnlinkPageChainHead(a1 + 48);
    v11 = (v10 + 0x220000000000LL) / 48;
    updated = MiUpdateProtectionMask((v7 & 0x800) != 0 ? 4 : 1, *(_DWORD *)(a1 + 16));
    *(_QWORD *)(v10 + 16) = MiMakeDemandZeroPte(updated);
    v13 = *(_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(v13 + 256) )
    {
      *(_QWORD *)(v13 + 256) = v10;
      *(_QWORD *)(v13 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v13 + 80) = 0;
      *(_QWORD *)(v13 + 88) = 0LL;
      *(_DWORD *)(v13 + 188) |= 0x80u;
    }
    MiSetPfnContainingFrame(v10, *(_QWORD *)(a1 + 40));
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    *(_DWORD *)(v10 + 32) |= 0x200000u;
    *(_QWORD *)v10 = v13 + 32;
    *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
    MiAddLockedPageCharge(v10, 1, v14, v15);
    *(_QWORD *)(v10 + 8) = v4;
    *(_DWORD *)(v10 + 32) = *(_DWORD *)(v10 + 32) & 0xFFF8FFFF | 0x20000;
    if ( (*(_QWORD *)(v10 + 40) & 0x20000000000000LL) == 0 )
      *(_DWORD *)(v10 + 32) = ((char)*(_DWORD *)(a1 + 72) << 24) ^ (*(_DWORD *)(v10 + 32) ^ ((char)*(_DWORD *)(a1 + 72) << 24)) & 0xF8FFFFFF;
    if ( ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FF) != 0 )
      ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 32) + 3176LL));
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnResident(*(_QWORD *)(a1 + 32), 1LL);
    *v4 = MiMakeTransitionPte(v11, updated);
    *v6++ = v11;
    ++v4;
  }
  return v4;
}
