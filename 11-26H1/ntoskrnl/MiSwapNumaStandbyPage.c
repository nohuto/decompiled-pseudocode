/*
 * XREFs of MiSwapNumaStandbyPage @ 0x1402AAAF0
 * Callers:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x1402AA540 (MiPruneStandbyPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x140293AD0 (MiCopyPfnEntryEx.c)
 *     MiPageToChannel @ 0x140294DD0 (MiPageToChannel.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiReuseStandbyPage @ 0x1402A973C (MiReuseStandbyPage.c)
 *     MiSetPfnBlink @ 0x1402AA140 (MiSetPfnBlink.c)
 *     MiLockLowestPrioritySecondaryStandbyPage @ 0x1402AB6D8 (MiLockLowestPrioritySecondaryStandbyPage.c)
 *     MiInsertSecondaryListStandbyPage @ 0x1402ABC50 (MiInsertSecondaryListStandbyPage.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x1402ACBC0 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiFinalizePageAttribute @ 0x1402BA3A0 (MiFinalizePageAttribute.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiReplaceStandbyLookaside @ 0x1402DDCB0 (MiReplaceStandbyLookaside.c)
 *     MiCanPageMove @ 0x1402DFD1C (MiCanPageMove.c)
 *     MiUpdateTransitionPteFrame @ 0x1402F0200 (MiUpdateTransitionPteFrame.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiSetPfnTbFlushStamp @ 0x14036D880 (MiSetPfnTbFlushStamp.c)
 */

ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR a1, unsigned int a2, unsigned __int8 a3, __int16 a4)
{
  __int64 v4; // rdi
  __int64 v7; // r15
  int v8; // esi
  unsigned __int8 *v9; // r12
  unsigned __int8 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r15
  unsigned __int8 v13; // cl
  int v14; // edx
  unsigned __int8 v15; // bl
  __int64 v16; // rax
  ULONG_PTR v17; // r15
  __m128i *v18; // rsi
  const __m128i *v19; // rbx
  unsigned __int64 v20; // r9
  ULONG_PTR v21; // r10
  unsigned __int64 v22; // r9
  volatile signed __int32 *v23; // r8
  unsigned __int64 v24; // rcx
  unsigned int v25; // eax
  ULONG_PTR v26; // r10
  unsigned __int64 v27; // r9
  volatile signed __int32 *v28; // r8
  unsigned int v29; // eax
  __int64 v30; // r11
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  volatile LONG *v35; // r12
  __int64 v36; // rdi
  __int64 *v37; // r10
  __int64 PteShadow; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // r11
  int v44; // edx
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  unsigned __int64 DemandZeroPte; // rax
  unsigned __int64 v51; // rbx
  unsigned __int64 v53; // r13
  ULONG_PTR v54; // rax
  ULONG_PTR *v55; // r10
  __int64 v56; // r11
  int IsDecayPfn; // eax
  __int64 v58; // r9
  __int64 updated; // rax
  __int64 v60; // r10
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // r8
  bool v65; // sf
  signed __int32 v66[8]; // [rsp+0h] [rbp-60h] BYREF
  int v67; // [rsp+30h] [rbp-30h]
  __int64 v68; // [rsp+38h] [rbp-28h] BYREF
  __int64 v69; // [rsp+40h] [rbp-20h]
  unsigned __int8 *v70; // [rsp+48h] [rbp-18h]
  __int64 v71; // [rsp+50h] [rbp-10h]
  __m128i *v72; // [rsp+58h] [rbp-8h]
  __int64 v73; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int8 v74; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int8 v75; // [rsp+B0h] [rbp+50h]

  v75 = a3;
  v4 = a2;
  v68 = 0LL;
  v7 = 48 * a1 - 0x220000000000LL;
  v72 = (__m128i *)v7;
  v8 = MiPageToNode(a1);
  v9 = 0LL;
  v10 = 0;
  v11 = (*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL;
  v74 = 0;
  v69 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v11);
  v12 = *(_QWORD *)(v69 + 16) + 56320 * v4;
  v13 = byte_140E2D898;
  v71 = v12;
  LOBYTE(v73) = byte_140E2D898;
  v14 = *(_DWORD *)(v12 + 14096) & 1;
  v67 = v14;
  if ( (unsigned __int8)byte_140E2D898 > 1u )
  {
    v9 = (unsigned __int8 *)(v12 + 14145);
    if ( v14 )
    {
      if ( (a4 & 0x2000) != 0 )
      {
        v15 = v75;
        v13 = 1;
        LOBYTE(v73) = 1;
        v9 = 0LL;
      }
      else
      {
        v65 = (a4 & 0x80u) != 0;
        v15 = 0;
        if ( v65 )
          v9 = (unsigned __int8 *)(v12 + 14147);
      }
    }
    else
    {
      if ( v8 == (_DWORD)v4 )
        return a1;
      v10 = v75;
      v15 = v74;
    }
  }
  else
  {
    v15 = 0;
  }
  v70 = &v9[v13];
  while ( 1 )
  {
    if ( v9 )
    {
      if ( v14 )
      {
        v15 = *v9;
        if ( v8 == (_DWORD)v4 && v15 == MiPageToChannel(a1) )
          return a1;
      }
      else
      {
        v15 = v10;
        v10 = (unsigned __int8)(v10 + 1) < v13 ? v10 + 1 : 0;
      }
    }
    v74 = 17;
    v16 = MiLockLowestPrioritySecondaryStandbyPage(v69, v12 + 4160 + 704LL * v15, &v68, &v74);
    v17 = v16;
    if ( v16 != -1 )
      break;
    if ( ++v9 >= v70 )
      return a1;
    v12 = v71;
    v13 = v73;
    v14 = v67;
  }
  v18 = v72;
  v19 = (const __m128i *)(48 * v16 - 0x220000000000LL);
  if ( !_interlockedbittestandset64(&v72[1].m128i_i32[2], 0x3FuLL) )
  {
    if ( !(unsigned int)MiCanPageMove(v19) )
    {
      _InterlockedAnd64(&v18[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v68 + 32));
      MiReuseStandbyPage((ULONG_PTR)v19);
      _InterlockedAnd64(&v19[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      MiReleaseFreshPageAtDpc((__int64)v18, v63, v64);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v74);
      __writecr8(v74);
      return v17;
    }
    if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 1 )
    {
      v26 = v17 & 0x1F;
      LOBYTE(v27) = 1;
      v28 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v17 >> 5);
      if ( v26 + 1 > 0x20 )
      {
        if ( (v17 & 0x1F) != 0 )
        {
          _InterlockedOr(v28, ((1 << (32 - (v17 & 0x1F))) - 1) << v26);
          v27 = 1LL - (32 - (unsigned int)(v17 & 0x1F));
          ++v28;
          if ( v27 >= 0x20 )
          {
            v61 = v27 >> 5;
            v27 += -32LL * (v27 >> 5);
            do
            {
              *v28++ = -1;
              --v61;
            }
            while ( v61 );
          }
          if ( !v27 )
            goto LABEL_20;
        }
        v29 = (1 << v27) - 1;
      }
      else
      {
        v29 = 1 << v26;
      }
      _InterlockedOr(v28, v29);
    }
    else
    {
      if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) != 3 )
        goto LABEL_21;
      v21 = v17 & 0x1F;
      LOBYTE(v22) = 1;
      v23 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v17 >> 5);
      if ( v21 + 1 <= 0x20 )
      {
        v25 = ~(1 << v21);
      }
      else
      {
        if ( (v17 & 0x1F) != 0 )
        {
          _InterlockedAnd(v23, ~(((1 << (32 - (v17 & 0x1F))) - 1) << v21));
          v22 = 1LL - (32 - (unsigned int)(v17 & 0x1F));
          ++v23;
          if ( v22 >= 0x20 )
          {
            v24 = v22 >> 5;
            v22 += -32LL * (v22 >> 5);
            do
            {
              *v23++ = 0;
              --v24;
            }
            while ( v24 );
          }
          if ( !v22 )
            goto LABEL_20;
        }
        v25 = -1 << v22;
      }
      _InterlockedAnd(v23, v25);
    }
LABEL_20:
    v20 = 0xFFFFDE0000000000uLL;
LABEL_21:
    v30 = v19->m128i_i64[0] & 0xFFFFFFFFFFLL;
    v31 = v68;
    v32 = v19[1].m128i_i64[1] & 0xFFFFFFFFFFLL;
    if ( (v19[2].m128i_i32[0] & 0x8000000) != 0 )
    {
      if ( (unsigned int)MiIsDecayPfn(v32) )
      {
        updated = MiUpdateTransitionPteFrame(v55[2], a1);
        *(_QWORD *)(v60 + 16) = updated;
      }
      else
      {
        *v55 = a1 ^ (a1 ^ *v55) & 0xFFFFFF0000000000uLL;
      }
      IsDecayPfn = MiIsDecayPfn(v56);
      v34 = a1;
      v33 = v58;
      if ( IsDecayPfn )
      {
        MiSetPfnContainingFrame(v58, a1);
        goto LABEL_27;
      }
    }
    else
    {
      if ( v32 == 0x3FFFFFFFFFLL )
        *(_QWORD *)v68 = a1;
      else
        *(_QWORD *)(v20 + 48 * v32) = a1 ^ (a1 ^ *(_QWORD *)(v20 + 48 * v32)) & 0xFFFFFF0000000000uLL;
      if ( v30 == 0x3FFFFFFFFFLL )
      {
        *(_QWORD *)(v31 + 8) = a1;
        goto LABEL_27;
      }
      v33 = v20 + 48 * v30;
      v34 = a1;
    }
    MiSetPfnBlink(v33, v34, 0);
LABEL_27:
    MiUnlinkSecondaryListStandbyPage(v19, 9LL);
    MiFinalizePageAttribute(v18, ((unsigned __int32)v19[2].m128i_i32[0] >> 22) & 3, 1LL);
    MiReplaceStandbyLookaside(v17);
    MiCopyPfnEntryEx(v18, v19, 0);
    MiInsertSecondaryListStandbyPage(v18, 9LL, 0LL);
    _InterlockedOr(v66, 0);
    if ( (((unsigned __int8)KiTbFlushTimeStamp ^ ((unsigned __int64)v18[1].m128i_i64[1] >> 59)) & 7) != 0 )
      MiSetPfnTbFlushStamp(v18, (unsigned int)KiTbFlushTimeStamp, 1LL);
    v35 = (volatile LONG *)(v31 + 32);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v31 + 32));
    v36 = v19[2].m128i_i64[1] & 0xFFFFFFFFFFLL;
    if ( v36 == v17 )
    {
      v53 = v19->m128i_i64[1] | 0x8000000000000000uLL;
      MiSetPfnContainingFrame(v18, a1);
      v54 = a1 << 12;
      if ( KiFlushPcid )
        v54 |= 2uLL;
      *(_QWORD *)(v53 - 768) = v54;
      v37 = (__int64 *)(v19->m128i_i64[1] | 0x8000000000000000uLL);
    }
    else
    {
      v37 = (__int64 *)(MiMapPageInHyperSpaceWorker(v19[2].m128i_i64[1] & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                      + 8 * (((unsigned __int64)v19->m128i_i64[1] >> 3) & 0x1FF));
    }
    PteShadow = *v37;
    if ( (unsigned __int64)v37 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v37 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v37, *v37);
    v39 = MiUpdateTransitionPteFrame(PteShadow, a1);
    v73 = v39;
    v44 = 0;
    if ( v42 >= 0xFFFFF6FB7DBED000uLL && v42 <= v43 )
    {
      v44 = MiSanitizeShadowPxe(v43, &v73, v40);
      v39 = v73;
    }
    *(_QWORD *)v42 = v39;
    if ( v44 )
      MiWritePteShadow(v42, v39, v40, v41);
    if ( v36 != v17 )
    {
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    }
    MiCopyPage(a1, v17, 6u);
    _InterlockedOr(v66, 0);
    v45 = (unsigned int)KiTbFlushTimeStamp;
    if ( (((unsigned __int8)KiTbFlushTimeStamp ^ ((unsigned __int64)v18[1].m128i_i64[1] >> 59)) & 7) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v35);
      MiSetPfnTbFlushStamp(v18, v45, 1LL);
      ExReleaseSpinLockExclusiveFromDpcLevel(v35);
    }
    MiUpdateLargePageCandidateValue(v69, v17, 3LL, 2LL, 0LL);
    MiUpdateLargePageCandidateValue(v69, a1, 3LL, 3LL, 0LL);
    _InterlockedAnd64(&v18[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    MiClearPfnReuseFields(v19, v46, v47, v48);
    _InterlockedOr(v66, 0);
    v19[1].m128i_i64[1] = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (v19[1].m128i_i64[1] ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
    v19->m128i_i64[0] = 0LL;
    v19[1].m128i_i64[1] &= 0xFFFFFF0000000000uLL;
    v19[2].m128i_i32[0] = v19[2].m128i_i32[0] & 0xFFF8FFFF | 0x50000;
    v19[1].m128i_i64[0] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v49 = v19[1].m128i_i64[0];
    if ( v49 )
      DemandZeroPte = v49 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    else
      DemandZeroPte = MiMakeDemandZeroPte(4);
    v19[1].m128i_i64[0] = DemandZeroPte;
    v19[2].m128i_i32[0] &= ~0x8000000u;
    MiSetPfnIdentity(v19, 0LL);
    if ( (v19[2].m128i_i64[1] & 0x20000000000000LL) == 0 )
      v19[2].m128i_i32[0] &= 0xF8FFFFFF;
    _InterlockedAnd64(&v19[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    v51 = v74;
    if ( v74 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v74);
      __writecr8(v51);
    }
    return v17;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v68 + 32));
  _InterlockedAnd64(&v19[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v62 = v74;
  if ( v74 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v74);
    __writecr8(v62);
  }
  return a1;
}
