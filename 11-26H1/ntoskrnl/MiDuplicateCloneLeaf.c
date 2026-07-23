/*
 * XREFs of MiDuplicateCloneLeaf @ 0x1402EF3F4
 * Callers:
 *     MiHandleForkValidPteCopy @ 0x1402EFB58 (MiHandleForkValidPteCopy.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402ED680 (MiIncreaseUsedPtesInPfn.c)
 *     MiUnlockClonePageTable @ 0x1402ED6FC (MiUnlockClonePageTable.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1402F0200 (MiUpdateTransitionPteFrame.c)
 *     MiInitializePfnForOtherProcess @ 0x14033D818 (MiInitializePfnForOtherProcess.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 */

__int64 __fastcall MiDuplicateCloneLeaf(__int64 a1)
{
  unsigned __int64 *v1; // r12
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  ULONG_PTR v5; // r14
  unsigned __int64 v6; // rbp
  int v7; // edx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r13
  __int64 v11; // rdi
  ULONG_PTR v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // eax
  int v15; // r8d
  unsigned __int64 v16; // r11
  unsigned int v17; // r14d
  unsigned int v18; // r14d
  __int64 TransitionPte; // rbx
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v23; // rdx
  _KPROCESS *Process; // rdi
  __int64 v25; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  _KPROCESS *v29; // rax
  __int64 v30; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v32; // rax
  ULONG_PTR v33; // [rsp+20h] [rbp-68h]
  __int64 v34; // [rsp+28h] [rbp-60h]
  __int64 *v35; // [rsp+30h] [rbp-58h]
  int v36; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v37; // [rsp+98h] [rbp+10h] BYREF
  int v38; // [rsp+A0h] [rbp+18h]
  unsigned int v39; // [rsp+A8h] [rbp+20h]

  v1 = *(unsigned __int64 **)(a1 + 304);
  v3 = *v1;
  v35 = *(__int64 **)(a1 + 312);
  v4 = *v1;
  v34 = *(_QWORD *)(a1 + 328);
  if ( (*v1 & 1) != 0 )
  {
    v5 = (v3 >> 12) & 0xFFFFFFFFFFLL;
    v6 = 48 * v5 - 0x220000000000LL;
    v7 = 1;
    v8 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    if ( qword_140E2D8C0 )
    {
      if ( (v3 & 0x10) != 0 )
        v4 = v3 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v4 = v3 & qword_140E2D8C8;
    }
    v5 = (v4 >> 12) & 0xFFFFFFFFFFLL;
    v6 = 48 * v5 - 0x220000000000LL;
    if ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockClonePageTable(a1, (((unsigned __int64)v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      LOBYTE(v25) = *(_BYTE *)(a1 + 40);
      MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v25);
      CurrentThread = KeGetCurrentThread();
      ++BYTE6(CurrentThread[1].Queue);
      MmAccessFault(0LL, (__int64)((_QWORD)v1 << 25) >> 16);
      --BYTE6(CurrentThread[1].Queue);
      MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v27, v28);
      return 3221226029LL;
    }
    v7 = 0;
    v8 = *v1;
  }
  v9 = *(_QWORD *)(v6 + 16);
  v10 = v8 >> 5;
  v36 = v7;
  v39 = v10 & 0x1F;
  if ( (v9 & 0x400) != 0 )
    LODWORD(v11) = 0;
  else
    v11 = (v9 >> 27) & 1;
  v12 = *(_QWORD *)(a1 + 336);
  v33 = v12;
  v13 = 48 * v12 - 0x220000000000LL;
  *(_QWORD *)(a1 + 336) = -1LL;
  v14 = 384;
  if ( !v7 )
  {
    v38 = 388;
    v37 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v37);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    v12 = v33;
    v14 = v38;
  }
  MiCopyPage(v12, v5, v14);
  v15 = v36;
  v16 = 0x7FFFFFFFFFFFFFFFLL;
  if ( !v36 )
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v17 = *(_DWORD *)(v6 + 32);
  if ( (*(_QWORD *)(v6 + 40) & 0x20000000000000LL) != 0
    || (*(_DWORD *)(v6 + 32) & 0x8000000) != 0
    && (v6 < 0xFFFFDE0000000000uLL
     || v6 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
     || MiIsDecayPfn((__int64)(v6 + 0x220000000000LL) / 48)
     || (v17 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v6) == 9) )
  {
    LOBYTE(v18) = 5;
  }
  else
  {
    v18 = HIBYTE(v17);
  }
  v37 = (*(_DWORD *)(v6 + 32) >> 22) & 3;
  if ( v15 )
  {
    TransitionPte = MiMakeTransitionPte(v33, v39);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), v16);
    TransitionPte = MiUpdateTransitionPteFrame(v3, v33);
  }
  v36 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v36);
    while ( *(__int64 *)(v34 + 24) < 0 );
  }
  *v35 = TransitionPte;
  *(_QWORD *)(v34 + 24) = ((*(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (((*(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL)
                                                                                 + 1) ^ *(_QWORD *)(v34 + 24)) & 0xC000000000000000uLL;
  MiIncreaseUsedPtesInPfn(v34, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiInitializePfnForOtherProcess(v33, v1, (v34 + 0x220000000000LL) / 48, 2064LL);
  v20 = v13 + 16;
  v36 = 0;
  *(_QWORD *)(v13 + 16) = (32 * v10) ^ (*(_QWORD *)(v13 + 16) ^ (32 * v10)) & 0xFFFFFFFFFFFFFC1FuLL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v36);
    while ( *(__int64 *)(v13 + 24) < 0 );
  }
  if ( (_DWORD)v11 )
  {
    v23 = *(_QWORD *)v20;
    if ( v20 >= 0xFFFFF6FB7DBED000uLL
      && v20 <= 0xFFFFF6FB7DBED7F8uLL
      && (v23 & 1) != 0
      && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
    {
      v29 = MiPteHasShadow();
      if ( v29 )
      {
        KernelWaitTime = v29[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v32 = *(_QWORD *)(KernelWaitTime + 8 * ((v20 >> 3) & 0x1FF));
          if ( (v32 & 0x20) != 0 )
            v30 |= 0x20uLL;
          v23 = v30 | 0x42;
          if ( (v32 & 0x42) == 0 )
            v23 = v30;
        }
      }
    }
    *(_QWORD *)v20 = v23 | 0x8000000;
  }
  if ( ((*(_DWORD *)(v13 + 32) >> 22) & 3) != v37 )
    MiChangePageAttribute(v13, v37);
  if ( (*(_QWORD *)(v13 + 40) & 0x20000000000000LL) == 0 )
    *(_DWORD *)(v13 + 32) ^= (*(_DWORD *)(v13 + 32) ^ ((char)v18 << 24)) & 0x7000000;
  *(_DWORD *)(v13 + 32) = *(_DWORD *)(v13 + 32) & 0xFFF8FFFF | 0x60000;
  if ( (*(_BYTE *)(v13 + 34) & 7) != 6 )
    MiBadShareCount(v13);
  v21 = (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v13 + 24) = v21 ^ (v21 ^ *(_QWORD *)(v13 + 24)) & 0xC000000000000000uLL;
  if ( !v21 )
    MiPfnShareCountIsZero(v13, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
