/*
 * XREFs of MiInsertFreeZeroPage @ 0x1402BEC30
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiFreeZeroPageSlistSufficient @ 0x140288E00 (MiFreeZeroPageSlistSufficient.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiCoalesceFreeSmallPages @ 0x14028C5C0 (MiCoalesceFreeSmallPages.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDecreaseAvailablePages @ 0x1402DAD50 (MiDecreaseAvailablePages.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiFreeSlabPage @ 0x14036B368 (MiFreeSlabPage.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiIncreaseAvailablePages @ 0x1403E8BC0 (MiIncreaseAvailablePages.c)
 *     MiColorHasSlists @ 0x14041CE00 (MiColorHasSlists.c)
 *     MiSetPfnSlist @ 0x140428280 (MiSetPfnSlist.c)
 *     MiRecordLargePageCandidate @ 0x1404409A0 (MiRecordLargePageCandidate.c)
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 *     MiClearFileOnlyPfn @ 0x140524B44 (MiClearFileOnlyPfn.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiInsertFreeZeroPage(ULONG_PTR BugCheckParameter2, __int16 a2, ULONG_PTR *a3, __int64 *a4)
{
  unsigned int v4; // ebp
  signed __int64 v7; // r14
  ULONG_PTR v8; // rsi
  char v9; // al
  __int64 v10; // rcx
  unsigned int PfnSlabType; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  unsigned int v19; // ecx
  int v20; // r10d
  int v21; // r13d
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  bool v27; // zf
  int v28; // r8d
  __int64 v29; // r9
  __int64 v30; // r13
  ULONG_PTR v31; // rsi
  __int64 v32; // r11
  ULONG_PTR v33; // r13
  _BOOL8 v34; // rcx
  unsigned int v35; // eax
  unsigned __int8 v36; // di
  unsigned int v37; // eax
  __int64 v38; // r11
  unsigned int v39; // r10d
  __int64 v40; // rdi
  unsigned int v41; // eax
  unsigned __int64 v42; // r10
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // rcx
  int v48; // r14d
  unsigned int v49; // edi
  volatile signed __int64 *v50; // rax
  signed __int64 v51; // rax
  unsigned __int64 v52; // rcx
  signed __int64 v53; // rtt
  unsigned int v54; // eax
  unsigned __int64 v55; // rax
  unsigned int Cache; // eax
  ULONG_PTR v57; // rbx
  __int64 v58; // r11
  __int64 v59; // rdi
  unsigned int v60; // ebp
  unsigned __int64 v61; // rsi
  volatile signed __int32 *v62; // r10
  __int64 v63; // rdi
  unsigned int PfnPageSizeIndex; // eax
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned int v67; // r13d
  __int64 v68; // rcx
  unsigned int v69; // ebx
  char v70; // al
  signed __int64 v71; // rdx
  signed __int64 i; // rax
  unsigned int v73; // r11d
  unsigned __int64 v74; // rcx
  int PagePrivilege; // eax
  __int64 v76; // r9
  int v77; // eax
  signed __int32 v78[8]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v79; // [rsp+30h] [rbp-88h]
  unsigned int v80; // [rsp+34h] [rbp-84h]
  __int64 v81; // [rsp+38h] [rbp-80h] BYREF
  int v82; // [rsp+40h] [rbp-78h]
  __int64 v83; // [rsp+48h] [rbp-70h]
  unsigned __int64 v84; // [rsp+50h] [rbp-68h]
  __int64 v85; // [rsp+58h] [rbp-60h]
  PEX_SPIN_LOCK SpinLock[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v87; // [rsp+70h] [rbp-48h]
  __int64 v88; // [rsp+78h] [rbp-40h]
  ULONG_PTR BugCheckParameter2a; // [rsp+C0h] [rbp+8h] BYREF
  ULONG_PTR *v90; // [rsp+D0h] [rbp+18h]
  __int64 *v91; // [rsp+D8h] [rbp+20h]

  v91 = a4;
  v90 = a3;
  v4 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  v7 = 48 * BugCheckParameter2;
  v8 = 48 * BugCheckParameter2 - 0x220000000000LL;
  if ( (*(_QWORD *)(v8 + 40) & 0x20000000000000LL) != 0 )
  {
    v9 = (*(_QWORD *)(v8 + 40) >> 60) & 7;
    *(_OWORD *)SpinLock = 0LL;
    if ( v9 == 3 )
    {
      PagePrivilege = MiGetPagePrivilege(48 * BugCheckParameter2 - 0x220000000000LL);
      if ( PagePrivilege )
      {
        v76 = 256LL;
        if ( (PagePrivilege & 0x20) == 0 )
          v76 = 16LL;
        if ( (int)KeSetPagePrivilege(v7 / 48, 0LL, SpinLock, v76) < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, v7 / 48, 0LL, 0LL);
      }
      MiSetPfnIdentity(v8, 0LL);
    }
    MiClearFileOnlyPfn(v8);
    return;
  }
  v63 = (*(_DWORD *)(v8 + 32) >> 22) & 3;
  v81 = 0LL;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(48 * BugCheckParameter2 - 0x220000000000LL);
  v85 = PfnPageSizeIndex;
  v67 = 256;
  v80 = PfnPageSizeIndex;
  v68 = (*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL;
  v84 = MiPageSizes[PfnPageSizeIndex];
  v83 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v68);
  if ( (a2 & 1) != 0 )
  {
    v69 = 0;
    v87 = 3280LL;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_QWORD *)(v8 + 24) &= ~0x4000000000000000uLL;
      *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFF8FFFF | 0x50000;
      *(_DWORD *)(v8 + 32) |= 0x10000000u;
      MiInsertPageInList(v8, 256LL, v65, v66);
      return;
    }
    v69 = 1;
    v87 = 3408LL;
  }
  v70 = (*(_QWORD *)(v8 + 40) >> 60) & 7;
  v79 = v69;
  *(_OWORD *)SpinLock = 0LL;
  if ( v70 == 3 )
  {
    v77 = MiGetPagePrivilege(v8);
    if ( v77 )
    {
      BugCheckParameter2a = v7 / 48;
      if ( (v77 & 0x20) == 0 )
        v67 = 16;
      if ( (int)KeSetPagePrivilege(v7 / 48, 0LL, SpinLock, v67) < 0 )
        KeBugCheckEx(0x1Au, 0x5150BuLL, BugCheckParameter2a, 0LL, 0LL);
    }
    MiSetPfnIdentity(v8, 0LL);
  }
  _InterlockedOr(v78, 0);
  *(_QWORD *)(v8 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ *(_QWORD *)(v8 + 24)) & 0xC7FFFFFFFFFFFFFFuLL;
  if ( (*(_QWORD *)(v8 + 40) & 0x20000000000000LL) == 0 )
    *(_DWORD *)(v8 + 32) &= 0xF8FFFFFF;
  *(_QWORD *)(v8 + 24) &= ~0x4000000000000000uLL;
  *(_QWORD *)(v8 + 8) |= 0x8000000000000000uLL;
  v71 = *(_QWORD *)(v8 + 40);
  for ( i = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 40), v71 & 0x8FFFFFFFFFFFFFFFuLL, v71);
        v71 != i;
        i = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 40), i & 0x8FFFFFFFFFFFFFFFuLL, i) )
  {
    v71 = i;
  }
  MiClearPfnReuseFields(v8, v71, 0x8FFFFFFFFFFFFFFFuLL, v66);
  if ( (a2 & 0x1000) != 0 )
  {
    *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFF8FFFF | 0x50000;
    return;
  }
  PfnSlabType = MiGetPfnSlabType(v10);
  if ( PfnSlabType == 9 )
  {
    if ( (*(_DWORD *)(v8 + 32) & 0x40000000) == 0 )
    {
      v16 = MI_PAGE_TO_FULL_COLOR(BugCheckParameter2);
      v17 = (unsigned int)v16;
      v18 = v79;
      v19 = *(_DWORD *)(v8 + 32) & 0xFFF8FFFF;
      v20 = a2 & 0x400;
      v21 = 0;
      v82 = v20;
      v22 = *(_QWORD *)(v83 + 16) + 56320 * ((v16 >> 9) & 0x3F);
      BugCheckParameter2a = v22;
      *(_DWORD *)(v8 + 32) = (v79 << 16) | v19;
      v23 = *(_QWORD *)(v8 + 16);
      if ( v23 )
      {
        if ( qword_140E2D8C0 )
        {
          v24 = qword_140E2D8C8 & v23;
          LODWORD(v23) = v23 & 0xFFFFFFEF;
          if ( (*(_QWORD *)(v8 + 16) & 0x10) == 0 )
            LODWORD(v23) = v24;
        }
      }
      else
      {
        LODWORD(v23) = 0;
      }
      v25 = (unsigned int)v23;
      v26 = (unsigned int)v23 | -(__int64)(v20 != 0) & 0xFFFFFFFD00000000uLL;
      if ( qword_140E2D8C0 )
      {
        if ( (qword_140E2D8C0 & v26) != 0 )
        {
          v55 = 0xFFFFFFFD00000010uLL;
          if ( (a2 & 0x400) == 0 )
            v55 = 16LL;
          v26 = v25 | v55;
        }
        else
        {
          v26 |= qword_140E2D8C0;
        }
      }
      v27 = v80 == 3;
      *(_QWORD *)(v8 + 16) = v26;
      if ( v27 && !LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) && (a2 & 0x4040) == 0 )
      {
        if ( (a2 & 0x200) == 0 )
        {
          if ( (MiCoalesceFreeSmallPages(BugCheckParameter2, 1) & 1) != 0 )
            return;
          v22 = BugCheckParameter2a;
          v18 = v79;
          v20 = v82;
        }
        if ( !v20
          && (unsigned int)MiColorHasSlists((unsigned int)v17, v25, v18, v22)
          && !(unsigned int)MiFreeZeroPageSlistSufficient(v29, v17, v28) )
        {
          v21 = 1;
        }
      }
      v27 = v21 == 0;
      *(_QWORD *)(v8 + 16) &= 0xFFFFFFFFEFFFF3FFuLL;
      v30 = v83;
      if ( !v27 && (unsigned int)MiSufficientAvailablePages(v83, 0x420uLL) )
      {
        if ( (*(_BYTE *)(v8 + 34) & 7) != 5 )
          *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFF8FFFF | 0x50000;
        MiSetPfnSlist(v8, v79);
        Cache = MiColorGetCache(v17);
        v57 = BugCheckParameter2a;
        v59 = (unsigned int)v58;
        v60 = Cache;
        if ( !RtlpInterlockedPushEntrySList(
                (PSLIST_HEADER)(*(_QWORD *)(BugCheckParameter2a + 8 * v58 + 13856) + 16LL * Cache),
                (PSLIST_ENTRY)v8) )
        {
          LOBYTE(v61) = 1;
          v62 = (volatile signed __int32 *)(*(_QWORD *)(v57 + 16 * v59 + 13768)
                                          + 4 * ((unsigned __int64)(v60 % dword_140E2D90C) >> 5));
          if ( (unsigned __int64)((v60 % dword_140E2D90C) & 0x1F) + 1 > 0x20 )
          {
            if ( ((v60 % dword_140E2D90C) & 0x1F) == 0 )
              goto LABEL_89;
            v73 = (v60 % dword_140E2D90C) & 0x1F;
            _InterlockedOr(v62, ((1 << (32 - v73)) - 1) << ((v60 % dword_140E2D90C) & 0x1F));
            v61 = 1LL - (32 - v73);
            ++v62;
            if ( v61 >= 0x20 )
            {
              v74 = v61 >> 5;
              v61 += -32LL * (v61 >> 5);
              do
              {
                *v62++ = -1;
                --v74;
              }
              while ( v74 );
            }
            if ( v61 )
LABEL_89:
              _InterlockedOr(v62, (1 << v61) - 1);
          }
          else
          {
            _InterlockedOr(v62, 1 << ((v60 % dword_140E2D90C) & 0x1F));
          }
        }
        return;
      }
      if ( (a2 & 0x4000) == 0 )
        MiIncreaseAvailablePages(v30, v84);
      v31 = BugCheckParameter2a;
      v32 = v79;
      v33 = BugCheckParameter2a + (v85 << 10);
      v88 = v79;
      _InterlockedIncrement64((volatile signed __int64 *)(v33 + 8LL * v79 + 8));
      v34 = 0LL;
      v85 = 0LL;
      if ( BugCheckParameter2 < 0x100000 )
      {
        v34 = v80 != 3;
        v85 = v34;
      }
      SpinLock[0] = (PEX_SPIN_LOCK)(unsigned int)v63;
      _InterlockedIncrement64((volatile signed __int64 *)(v33 + 8 * (v63 + 2 * (v34 + 1) + v34 + 1)));
      v35 = (unsigned int)v17 >> 8;
      LOBYTE(v35) = BYTE1(v17) & 1;
      LODWORD(BugCheckParameter2a) = v35;
      if ( v80 == 3 )
      {
        if ( (unsigned __int8)byte_140E2D898 > 1u )
          _InterlockedIncrement64((volatile signed __int64 *)(v31 + 8 * (v32 + 2LL * (unsigned __int8)v35) + 14064));
        MiUpdateLargePageCandidateValue(v83, BugCheckParameter2, 3LL, 1LL, 0LL);
        LOBYTE(v35) = BugCheckParameter2a;
      }
      if ( (unsigned __int8)byte_140E2D898 > 1u )
        v36 = v35;
      else
        v36 = 0;
      v37 = MiColorGetCache(v17);
      v40 = 88LL * v37
          + *(_QWORD *)(v31
                      + 8
                      * ((__int64)&SpinLock[0][32 * (unsigned __int64)v39 + 2 * v38 + v38 + v88]
                       + 2 * v88
                       + 2 * v36
                       + v36)
                      + 800);
      SpinLock[0] = (PEX_SPIN_LOCK)(v40 + 32);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v40 + 32));
      if ( *(_QWORD *)v40 == 0x3FFFFFFFFFLL )
      {
        v41 = MiColorGetCache(*(_DWORD *)(v40 + 24));
        _InterlockedOr64(
          (volatile signed __int64 *)(*(_QWORD *)(v31
                                                + 16
                                                * (((v42 >> 20) & 1)
                                                 + 2
                                                 * ((((unsigned int)v42 >> 18) & 3)
                                                  + 3LL * (((unsigned int)v42 >> 15) & 1)
                                                  + 32LL * (WORD1(v42) & 3)))
                                                + 136)
                                    + 8 * ((unsigned __int64)v41 >> 6)),
          1LL << (v41 & 0x3F));
      }
      v43 = v80;
      if ( v80 != 3 )
      {
        v44 = v88 + 2 * v85;
        _InterlockedIncrement64((volatile signed __int64 *)(v33
                                                          + 8 * ((unsigned __int8)BugCheckParameter2a + 2 * v44)
                                                          + 736));
        _InterlockedIncrement64((volatile signed __int64 *)(v33 + 8 * v44 + 704));
        LOWORD(BugCheckParameter2a) = 0;
        LODWORD(v81) = 0;
        v45 = (*(_QWORD *)(v7 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL;
        v46 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v45);
        if ( !*(_BYTE *)(v46 + 16486) )
        {
LABEL_40:
          v81 = 0LL;
          goto LABEL_41;
        }
        v47 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v45);
        if ( !(_DWORD)v43 )
        {
          MiUpdateLargePageCandidateValue(v47, BugCheckParameter2, 0LL, 1LL, 0LL);
          goto LABEL_40;
        }
        if ( (_DWORD)v43 == 2 )
        {
          MiUpdateLargePageCandidateValue(v47, BugCheckParameter2, v43, 1LL, &BugCheckParameter2a);
          if ( (BugCheckParameter2a & 0xFC00) != 0x8000 )
            goto LABEL_40;
          v81 = MiRecordLargePageCandidate(v46, BugCheckParameter2, 1LL, 8LL);
        }
        else
        {
          MiUpdateLargePageCandidateValue(v47, BugCheckParameter2, v43, 1LL, &v81);
          if ( (v81 & 0x1FF80000) == 0x10000000 )
          {
            if ( (KeFeatureBits & 0x2000000000LL) != 0 )
              v81 = MiRecordLargePageCandidate(v46, BugCheckParameter2, 0LL, 8LL);
            else
              v81 = 0LL;
          }
          else
          {
            v81 = 0LL;
          }
        }
      }
LABEL_41:
      if ( *(_DWORD *)(v40 + 28) == 1 )
      {
        v4 = 8;
      }
      else if ( (a2 & 0x8000) == 0 )
      {
        v48 = v82;
        if ( !v82 )
          v4 = 1;
LABEL_44:
        MiSimpleInsertPage(v40, BugCheckParameter2, v4);
        v49 = v79;
        if ( v79 || v48 || v84 != 1 )
        {
          v50 = (volatile signed __int64 *)(v87 + v83);
          if ( v84 != 1 )
          {
            _InterlockedAdd64(v50, v84);
            goto LABEL_47;
          }
        }
        else
        {
          v54 = MiColorGetCache(v17);
          ++*(_QWORD *)(*(_QWORD *)(v31 + 8 * ((v17 >> 18) & 3) + 4096) + 8LL * v54);
          v50 = (volatile signed __int64 *)(v87 + v83);
        }
        _InterlockedIncrement64(v50);
LABEL_47:
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock[0]);
        if ( (a2 & 0x2000) != 0 )
        {
          v51 = *(_QWORD *)(v31 + 14112);
          do
          {
            v52 = (v51 - 1) ^ ((v51 - 1) ^ v51) & 0xFFFFFFFFFFFF0000uLL;
            if ( (_WORD)v51 == 1 )
              v52 ^= (v52 ^ (v52 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
            v53 = v51;
            v51 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 14112), v52, v51);
          }
          while ( v53 != v51 );
        }
        if ( v49 == 1 )
          *v90 = v31;
        if ( v81
          && (a2 & 0x200) == 0
          && (MiFlags & 0x30) != 0
          && (v80 != 1 || (KeFeatureBits & 0x2000000000LL) != 0)
          && !*(_DWORD *)(v81 + 4) )
        {
          *v91 = v81;
        }
        return;
      }
      v48 = v82;
      goto LABEL_44;
    }
    if ( (a2 & 0x4000) != 0 )
      MiDecreaseAvailablePages(v14, v15, -1LL, 0LL);
    MiInsertPageInList(v8, 32LL, v12, v13);
  }
  else if ( (a2 & 0x800) == 0 )
  {
    MiFreeSlabPage(v8, PfnSlabType, v69);
  }
}
