/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x14031D030
 * Callers:
 *     MiWsleFree @ 0x14031B9C0 (MiWsleFree.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 */

__int64 __fastcall MiRewriteTrimPteAsDemandZero(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  int v9; // ecx
  _KPROCESS *v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD v26[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp+38h] BYREF

  v2 = a2[2];
  if ( (v2 & 4) != 0 )
  {
    v23 = a2[2];
    v24 = *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((a2[5] >> 43) & 0x3FFLL))
                    + 8LL * ((unsigned __int8)HIBYTE(*((_WORD *)a2 + 8)) >> 4)
                    + 22304);
    if ( qword_140E2D8C0 && (v23 & 0x10) == 0 )
      HIDWORD(v23) &= HIDWORD(qword_140E2D8C8);
    v7 = MiTransferSoftwarePte(a2[2], v24, HIDWORD(v23), 2);
  }
  else
  {
    v26[0] = a2[2];
    v5 = v2;
    if ( (unsigned __int64)v26 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v26 <= 0xFFFFF6FB7DBED7F8uLL
      && (v2 & 1) != 0
      && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0)
      && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        if ( Process )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v20 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v26 >> 3) & 0x1FF));
            if ( (v20 & 0x20) != 0 )
              v5 = v2 | 0x20;
            v21 = v5;
            v5 |= 0x42uLL;
            if ( (v20 & 0x42) == 0 )
              v5 = v21;
          }
        }
      }
    }
    v6 = 1024LL;
    v26[0] = v5 & ((v5 & 0x400) != 0 ? -5LL : -65537LL);
    v7 = v26[0];
    if ( (v2 & 0x400) == 0 )
      v7 = v26[0] & 0xFFFFFFFFFFFFFFF3uLL;
  }
  v8 = a2[1] | 0x8000000000000000uLL;
  if ( (__int64)a2[5] < 0 )
  {
    v15 = a2[5] & 0xFFFFFFFFFFLL;
    v16 = 48 * v15 - 0x220000000000LL;
    v17 = MiMapPageInHyperSpaceWorker(v15, 0LL, 0x80000000) + 8 * ((v8 >> 3) & 0x1FF);
    *(_QWORD *)v17 = v7;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    LODWORD(v27) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v16 + 34) & 7) != 6 )
      MiBadShareCount(v16);
    v25 = (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v16 + 24) = v25 ^ (v25 ^ *(_QWORD *)(v16 + 24)) & 0xC000000000000000uLL;
    if ( !v25 )
      MiPfnShareCountIsZero(v16, 0LL);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v9 = 0;
    v27 = v7;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v22 = MiSanitizeShadowPxe(0LL, &v27, v6);
      v7 = v27;
      v9 = v22;
    }
    *(_QWORD *)v8 = v7;
    if ( v9 )
    {
      v10 = MiPteHasShadow();
      if ( v10 )
      {
        v11 = v10[2].KernelWaitTime;
        if ( v11 )
        {
          v12 = (v8 >> 3) & 0x1FF;
          if ( (v7 & 1) != 0 )
            v13 = v7 & 0x7FFFFFFFFFFFFFFFLL;
          else
            v13 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          *(_QWORD *)(v11 + 8 * v12) = v13;
        }
      }
    }
    result = *(unsigned int *)(a1 + 184);
    if ( (result & 0xF) == 0 )
      _InterlockedDecrement64((volatile signed __int64 *)(a1 - 376));
  }
  return result;
}
