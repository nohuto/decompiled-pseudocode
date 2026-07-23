/*
 * XREFs of MiTrimSystemImagePages @ 0x1402F1124
 * Callers:
 *     MiSetPagingOfDriver @ 0x1402F173C (MiSetPagingOfDriver.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 */

__int64 __fastcall MiTrimSystemImagePages(unsigned __int64 *BugCheckParameter4, unsigned __int64 *a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int64 *i; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 PrototypePteDirect; // r10
  unsigned __int64 v9; // rdi
  struct _KEVENT *v10; // r15
  unsigned __int64 ContainingPageTable; // rbx
  __int64 v12; // rax
  __int64 v14; // rdx
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v3 = 0LL;
  for ( i = BugCheckParameter4; i <= a2; ++i )
  {
    v6 = *i;
    if ( (*i & 0x401) == 0x400 )
    {
      v7 = 48 * ((v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( *(__int64 *)(v7 + 40) < 0 )
      {
        PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL);
        if ( *(__int64 *)(v7 + 8) > 0 && (*(_QWORD *)(v7 + 40) & 0x10000000000LL) == 0 )
          PrototypePteDirect |= 0x800uLL;
      }
      else
      {
        PrototypePteDirect = MiMakeTransitionPte((v6 >> 12) & 0xFFFFFFFFFFLL, (*(_DWORD *)(v7 + 16) >> 5) & 0x1F);
      }
      v9 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      *i = PrototypePteDirect;
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v15);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      v10 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      *(_BYTE *)(v7 + 35) &= ~8u;
      if ( (v6 & 0x40) != 0 || (v6 & 2) != 0 )
        v9 = MiCaptureDirtyBitToPfn(v7);
      if ( *(__int64 *)(v7 + 40) >= 0 )
        ContainingPageTable = -1LL;
      else
        ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)i);
      if ( (*(_QWORD *)(v7 + 40) & 0x20000000000000LL) == 0 )
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 32) & 0xF8FFFFFF | 0x2000000;
      if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
        MiBadShareCount(v7);
      v14 = (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v7 + 24) = v14 ^ (*(_QWORD *)(v7 + 24) ^ v14) & 0xC000000000000000uLL;
      if ( !v14 )
        MiPfnShareCountIsZero(v7, 0LL);
      if ( ContainingPageTable != -1LL )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = 48 * ContainingPageTable - 0x220000000000LL;
        v15 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v15);
          while ( *(__int64 *)(v7 + 24) < 0 );
        }
        if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
          MiBadShareCount(48 * ContainingPageTable - 0x220000000000LL);
        v12 = *(_QWORD *)(v7 + 24);
        *(_QWORD *)(v7 + 24) = ((v12 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v12 ^ ((v12 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
        if ( (v12 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          MiPfnShareCountIsZero(48 * ContainingPageTable - 0x220000000000LL, 0LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v9 )
        MiReleasePageFileInfo(v10, v9, 1LL);
      ++v3;
    }
  }
  return v3;
}
