/*
 * XREFs of MiUpdatePrefetchPriority @ 0x1403169DC
 * Callers:
 *     MiPrefetchJumpVad @ 0x140316388 (MiPrefetchJumpVad.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUpdatePfnPriority @ 0x140298800 (MiUpdatePfnPriority.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 */

char __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int v5; // edi
  unsigned __int64 *v6; // r9
  unsigned __int64 PteShadow; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned int v10; // r8d
  int v11; // r8d
  __int64 Address; // rax
  __int64 v13; // rdx
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  v5 = *(_DWORD *)(a1 + 80) & 7;
  v6 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v6;
  if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v6, *v6);
  if ( (PteShadow & 1) != 0 )
  {
    PteShadow = (PteShadow >> 12) & 0xFFFFFFFFFFLL;
    v8 = 6 * PteShadow;
    if ( PteShadow > qword_140E2D920 )
      return PteShadow;
    PteShadow = *(_QWORD *)(48 * PteShadow - 0x21FFFFFFFFD8LL) >> 54;
    if ( (PteShadow & 1) == 0 )
      return PteShadow;
    v9 = 8 * v8 - 0x220000000000LL;
    LODWORD(PteShadow) = *(_BYTE *)(v9 + 35) & 7;
    if ( (_DWORD)PteShadow == v5 )
      return PteShadow;
    if ( v3 )
    {
      LOBYTE(PteShadow) = *(_DWORD *)(v3 + 48) & 0x1C;
      if ( (_BYTE)PteShadow == 4 )
        return PteShadow;
    }
    else if ( KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[10] )
    {
      MiLockVadTree(1LL);
      Address = MiLocateAddress(a2);
      if ( !Address || (*(_DWORD *)(Address + 48) & 0x1C) == 4 )
      {
        LOBYTE(v13) = 17;
        LOBYTE(PteShadow) = MiUnlockVadTree(1LL, v13);
        return PteShadow;
      }
      LOBYTE(v13) = 17;
      MiUnlockVadTree(1LL, v13);
    }
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
  }
  else
  {
    if ( !PteShadow )
      return PteShadow;
    PteShadow &= 0xC00u;
    if ( PteShadow != 2048 )
      return PteShadow;
    PteShadow = MiLockTransitionLeafPageEx((ULONG_PTR)v6);
    v9 = PteShadow;
    if ( !PteShadow )
      return PteShadow;
  }
  v10 = *(_DWORD *)(v9 + 32);
  if ( (*(_QWORD *)(v9 + 40) & 0x20000000000000LL) != 0
    || (*(_DWORD *)(v9 + 32) & 0x8000000) != 0
    && (v9 < 0xFFFFDE0000000000uLL
     || v9 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
     || MiIsDecayPfn((__int64)(v9 + 0x220000000000LL) / 48)
     || (v10 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v9) == 9) )
  {
    v11 = 5;
  }
  else
  {
    v11 = HIBYTE(v10) & 7;
  }
  if ( v11 != v5 )
    MiUpdatePfnPriority(v9, v5, 0);
  LOBYTE(PteShadow) = -1;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return PteShadow;
}
