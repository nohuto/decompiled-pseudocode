/*
 * XREFs of MiCopyDataPageToImagePage @ 0x14036C478
 * Callers:
 *     MiResolveMappedFileFaultByCopying @ 0x1404893DC (MiResolveMappedFileFaultByCopying.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiUnlockDataCopyPages @ 0x1402D283C (MiUnlockDataCopyPages.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x1402E5B70 (MiObtainProtoReference.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiMapSinglePage @ 0x14036A87C (MiMapSinglePage.c)
 *     MiInitializeTransitionPfn @ 0x14036A9A4 (MiInitializeTransitionPfn.c)
 *     MiSetPfnTbFlushStamp @ 0x14036BAE0 (MiSetPfnTbFlushStamp.c)
 *     MiEndingOffset @ 0x14036CB30 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x14036CEA0 (MiStartingOffset.c)
 *     MiAdvanceFaultList @ 0x14036F4A0 (MiAdvanceFaultList.c)
 *     MiGetSessionIdForVa @ 0x14038E1A8 (MiGetSessionIdForVa.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140416FD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAllocateHyperSpace @ 0x14045E5F0 (MiAllocateHyperSpace.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14047F0C4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiTryLockLeafPage @ 0x14047F28C (MiTryLockLeafPage.c)
 *     MiStandbyPageContentsIntact @ 0x140704094 (MiStandbyPageContentsIntact.c)
 *     KeCopyPageNoOverride @ 0x140730860 (KeCopyPageNoOverride.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r8
  unsigned int SessionIdForVa; // eax
  volatile LONG *v13; // r14
  unsigned __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // r15
  unsigned __int64 v17; // rbx
  char v18; // r8
  unsigned int v19; // eax
  _OWORD *v20; // r14
  unsigned int v21; // r9d
  __int64 v22; // rcx
  ULONG_PTR v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 HyperSpace; // r14
  char *v29; // rax
  unsigned __int64 v30; // r15
  unsigned int v31; // ebx
  __int64 v32; // rcx
  const void *v33; // rdx
  _QWORD *v34; // r14
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rbx
  struct _KEVENT *v40; // r14
  __int64 v41; // rax
  unsigned int v42; // r11d
  unsigned int v43; // r11d
  __int64 PteShadow; // rax
  __int64 v45; // rbx
  _BYTE *v46; // rax
  int v47; // r11d
  size_t v48; // rbx
  __int64 v49; // [rsp+20h] [rbp-60h]
  unsigned int v50; // [rsp+28h] [rbp-58h]
  __int64 v51; // [rsp+30h] [rbp-50h]
  _OWORD *v52; // [rsp+30h] [rbp-50h]
  unsigned __int64 v53; // [rsp+38h] [rbp-48h]
  char v54; // [rsp+40h] [rbp-40h]
  unsigned __int64 v55; // [rsp+48h] [rbp-38h]
  _OWORD v56[3]; // [rsp+50h] [rbp-30h] BYREF
  char vars0; // [rsp+80h] [rbp+0h] BYREF
  __int64 v58; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v59; // [rsp+C8h] [rbp+48h]
  __int64 v60; // [rsp+D8h] [rbp+58h]

  v60 = a4;
  v59 = a2;
  v58 = a1;
  memset(v56, 0, sizeof(v56));
  v9 = 48 * a5 - 0x220000000000LL;
  if ( (*(_DWORD *)(v9 + 32) & 0xC00000) != 0x400000 )
    MiChangePageAttribute(48 * a5 - 0x220000000000LL, 1u);
  MiSetPfnTbFlushStamp(v9, 0LL, 0);
  v10 = *a2;
  v49 = *a2;
  v51 = v11;
  SessionIdForVa = MiGetSessionIdForVa(*(_QWORD *)(a1 + 232));
  v53 = MiStartingOffset(a2, a3, SessionIdForVa);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
  v13 = &dword_140E2C7C0;
  v14 = *(_QWORD *)(v10 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2C7C0);
  v15 = **(_QWORD **)(v14 + 40);
  if ( v15 && (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v15 + 72) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C7C0);
    if ( *(_QWORD *)(v15 + 32) && (*(_DWORD *)(v15 + 56) & 3) == 0 )
    {
      v16 = v15 + 128;
      v17 = v53 >> 12;
      v55 = MiEndingOffset(v59);
      if ( (unsigned int)(v53 >> 12) != (unsigned int)((v55 - 1) >> 12) )
        v18 -= 2;
      v54 = v18;
      while ( 1 )
      {
        v19 = *(_DWORD *)(v16 + 44);
        if ( (unsigned int)v17 < v19 )
          break;
        v16 = *(_QWORD *)(v16 + 16);
        LODWORD(v17) = v17 - v19;
        if ( !v16 )
          goto LABEL_26;
      }
      v20 = v56;
      v50 = 2;
      v21 = 0;
      while ( *(_DWORD *)(v16 + 104) )
      {
        v22 = *(_QWORD *)(v16 + 8);
        if ( !v22 )
          break;
        v23 = v22 + 8LL * (unsigned int)v17;
        if ( !v23 )
          break;
        *((_QWORD *)v20 + 2) = v23;
        v24 = (v23 >> 9) & 0x7FFFFFFFF8LL;
        if ( v24 == ((a3 >> 9) & 0x7FFFFFFFF8LL) || v20 != v56 && v24 == ((*((_QWORD *)v20 - 1) >> 9) & 0x7FFFFFFFF8LL) )
        {
          MiTryLockLeafPage(v23, v21, v20);
        }
        else
        {
          if ( (int)MiTryLockProtoPoolPageAtDpc(v23) < 0 )
            break;
          *((_QWORD *)v20 + 1) = v51;
        }
        v25 = *(_QWORD *)v20;
        if ( !*(_QWORD *)v20
          || (*(_DWORD *)(v25 + 32) & 0x40000000) != 0
          || !(unsigned int)MiStandbyPageContentsIntact(v25) )
        {
          break;
        }
        if ( v20 != v56 || (v53 & 0xFFF) == 0 || (v54 & 2) != 0 )
        {
          HyperSpace = MiAllocateHyperSpace(v50);
          MiMapSinglePage(HyperSpace, a5, 0x40000000LL, 0LL);
          v29 = (char *)v56;
          v52 = v56;
          v30 = HyperSpace + 4096;
          v31 = 1;
          do
          {
            v32 = *(_QWORD *)v29;
            if ( !*(_QWORD *)v29 )
              break;
            if ( (*(_DWORD *)(v32 + 32) & 0xC00000) != 0x400000 )
              v31 = -1;
            MiMapSinglePage(v30, (v32 + 0x220000000000LL) / 48, 3221225472LL, 0LL);
            v29 = (char *)v52 + 24;
            v30 += 4096LL;
            v52 = v29;
          }
          while ( v29 != &vars0 );
          v33 = (const void *)(HyperSpace + (unsigned int)(v53 & 0xFFF) + 4096);
          if ( v53 + 4096 > v55 )
          {
            v48 = ((_DWORD)v55 - (_DWORD)v53) & 0xFFF;
            memmove((void *)HyperSpace, v33, v48);
            memset_0((void *)(HyperSpace + v48), 0, (unsigned int)(4096 - v48));
          }
          else
          {
            KeCopyPageNoOverride(HyperSpace, v33, v31);
          }
          v34 = (_QWORD *)(((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v35 = v58;
          if ( v50 )
          {
            v36 = v50;
            do
            {
              *v34++ = *(_QWORD *)&CLFS_LSN_NULL_EXT;
              --v36;
            }
            while ( v36 );
          }
          *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
          ++*(_QWORD *)(v49 + 32);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v49 + 72));
          MiUnlockDataCopyPages((__int64 *)v56, v37);
          LODWORD(v58) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v58);
            while ( *(__int64 *)(v9 + 24) < 0 );
          }
          v39 = a5;
          MiInitializeTransitionPfn(a5, (__int64 *)a3, v38);
          v40 = (struct _KEVENT *)(v35 + 32);
          *(_DWORD *)(v9 + 32) = *(_DWORD *)(v9 + 32) & 0xFFF8FFFF | 0x20000;
          *(_DWORD *)(v9 + 32) = *(_DWORD *)(v9 + 32) & 0xFFFF0000 | 1;
          *(_DWORD *)(v9 + 32) |= 0x200000u;
          v41 = v60;
          *(_QWORD *)v9 = v35 + 32;
          v42 = *(_DWORD *)(v35 + 188);
          if ( (v41 & 1) != 0 )
          {
            v46 = (_BYTE *)(v41 & 0xFFFFFFFFFFFFFFFEuLL);
            if ( *v46 == 1 )
            {
              MiAdvanceFaultList(v46);
              v42 = v47 | 0x20;
              v40 = (struct _KEVENT *)(v35 + 32);
              *(_DWORD *)(v35 + 188) = v42;
            }
          }
          v43 = v42 >> 11;
          if ( (*(_QWORD *)(v9 + 40) & 0x20000000000000LL) == 0 )
            *(_DWORD *)(v9 + 32) = ((char)v43 << 24) ^ (*(_DWORD *)(v9 + 32) ^ ((char)v43 << 24)) & 0xF8FFFFFF;
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          PteShadow = *(_QWORD *)a3;
          if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(a3, *(_QWORD *)a3);
          *(_QWORD *)(v35 + 168) = PteShadow;
          *(_QWORD *)(v35 + 240) = a3;
          *(_QWORD *)(v35 + 320) = v39;
          v45 = a6;
          *(_QWORD *)(v35 + 272) = 0LL;
          *(_DWORD *)(v35 + 280) = 4325432;
          *(_QWORD *)(v35 + 304) = 0LL;
          *(_QWORD *)(v35 + 312) = 4096LL;
          *(_QWORD *)(v35 + 96) = v53;
          *(_QWORD *)(v35 + 192) = v59;
          *(_QWORD *)(v35 + 248) = a3;
          *(_QWORD *)(v35 + 256) = v9;
          *(_QWORD *)(v35 + 200) = 0LL;
          MiObtainProtoReference(v45, 0);
          *(_QWORD *)(v35 + 160) = v45;
          *(_DWORD *)(v35 + 80) = 0;
          *(_DWORD *)(v35 + 184) = *(_DWORD *)(v35 + 312);
          MiUnlockProtoPoolPage(v45, 0x11u);
          *(_QWORD *)(v35 + 88) = 4096LL;
          KeSetEvent(v40, 0, 0);
          __incgsdword(0x2E98u);
          return 1LL;
        }
        v20 = (_OWORD *)((char *)v20 + 24);
        ++v50;
        LODWORD(v17) = v17 + 1;
        v21 = 1;
        if ( (unsigned int)v17 >= *(_DWORD *)(v16 + 44) )
        {
          LODWORD(v17) = 0;
          v16 = *(_QWORD *)(v16 + 16);
          if ( !v16 )
            break;
        }
      }
LABEL_26:
      v10 = v49;
    }
    v13 = (volatile LONG *)(v15 + 72);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v13);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
  MiUnlockDataCopyPages((__int64 *)v56, v26);
  return 0LL;
}
