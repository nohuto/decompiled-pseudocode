/*
 * XREFs of MiReplenishPageSlist @ 0x140289C70
 * Callers:
 *     MiGetPerfectColorHeadPage @ 0x140288F90 (MiGetPerfectColorHeadPage.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiUpdateZeroFreeBitmap @ 0x140288D50 (MiUpdateZeroFreeBitmap.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiLocatePageCollisionByPfn @ 0x14028A7B8 (MiLocatePageCollisionByPfn.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiNodeFreeZeroPages @ 0x14028E530 (MiNodeFreeZeroPages.c)
 *     MiZeroPageWorkMapping @ 0x14029F2C0 (MiZeroPageWorkMapping.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiDecreaseAvailablePages @ 0x1402DAD50 (MiDecreaseAvailablePages.c)
 *     MiIncreaseAvailablePages @ 0x1403E8BC0 (MiIncreaseAvailablePages.c)
 *     MiHugePfnPartition @ 0x140487CC0 (MiHugePfnPartition.c)
 *     MiStopHugePageAccessor @ 0x140487CF4 (MiStopHugePageAccessor.c)
 *     MiAddPageToHeatList @ 0x14048AF80 (MiAddPageToHeatList.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x140735910 (InterlockedPushListSList.c)
 */

unsigned __int64 __fastcall MiReplenishPageSlist(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 result; // rax
  __int64 v9; // rbx
  __int64 Cache; // rbp
  _DWORD *v11; // r10
  _QWORD *v12; // r11
  unsigned __int64 v13; // rdx
  ULONG_PTR v14; // rsi
  unsigned __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned __int8 v18; // dl
  __int64 v19; // rdx
  __int64 v20; // rcx
  ULONG_PTR v21; // rbp
  ULONG_PTR *v22; // rbx
  __int64 v23; // r15
  _SLIST_ENTRY *v24; // r13
  ULONG_PTR v25; // rsi
  ULONG_PTR BugCheckParameter4; // r12
  _WORD *v27; // rbx
  unsigned __int64 v28; // r15
  __int64 v29; // r8
  unsigned __int64 v30; // r10
  volatile signed __int32 *v31; // r9
  unsigned int v32; // eax
  int v33; // ecx
  __int64 v34; // r8
  unsigned __int64 v35; // r10
  volatile signed __int32 *v36; // r9
  ULONG_PTR v37; // rbp
  int v38; // r10d
  __int64 v39; // r14
  unsigned int v40; // ebx
  int PfnPageSizeIndex; // eax
  _QWORD *v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  _BOOL8 v47; // rcx
  __int64 v48; // rbp
  __int64 v49; // rax
  signed __int64 v50; // rcx
  signed __int64 v51; // rdx
  signed __int64 v52; // rcx
  ULONG_PTR *v53; // r12
  __int64 v54; // r14
  unsigned int v55; // ebx
  _SLIST_HEADER *v56; // rcx
  PSLIST_ENTRY v57; // rax
  unsigned int v58; // edx
  __int64 v59; // rbx
  __int64 v60; // r8
  unsigned __int64 v61; // r11
  volatile signed __int32 *v62; // r9
  unsigned __int64 v63; // r10
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rbx
  ULONG_PTR v68; // rcx
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rcx
  int v71; // r10d
  unsigned __int64 v72; // rcx
  __int64 v73; // rcx
  signed __int32 v74[8]; // [rsp+0h] [rbp-D8h] BYREF
  _WORD *v75; // [rsp+30h] [rbp-A8h]
  ULONG_PTR v76; // [rsp+38h] [rbp-A0h]
  int v77; // [rsp+40h] [rbp-98h]
  unsigned int v78; // [rsp+44h] [rbp-94h]
  ULONG_PTR *v79; // [rsp+48h] [rbp-90h]
  __int64 v80; // [rsp+50h] [rbp-88h]
  ULONG Count[2]; // [rsp+58h] [rbp-80h]
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-78h]
  __int64 v83; // [rsp+68h] [rbp-70h]
  __int64 v84; // [rsp+70h] [rbp-68h]
  __int64 v85; // [rsp+78h] [rbp-60h]
  __int128 v86; // [rsp+80h] [rbp-58h]
  ULONG_PTR v87; // [rsp+90h] [rbp-48h]
  _QWORD *v88; // [rsp+98h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 13896);
  v5 = a2;
  v6 = a3;
  v75 = (_WORD *)v4;
  result = *(unsigned int *)(v4 + 4);
  v86 = 0LL;
  if ( (result & 0x10) == 0 )
  {
    v88 = (_QWORD *)(a1 + 13856 + 8LL * a2);
    v9 = (a3 >> 18) & 3;
    v84 = a2;
    Cache = (unsigned int)MiColorGetCache(a3);
    v13 = *(unsigned __int16 *)(*v12 + 16 * Cache);
    result = *(unsigned int *)(v4 + 17368);
    if ( v13 < result )
    {
      v14 = (int)result - v13;
      v76 = v14;
      if ( (stru_140E366D8.WaitRegister.Flags & 1) != 0 )
      {
        v68 = (unsigned int)((*v11 >> 3) - v11[1]);
        v77 = 1;
        if ( v14 < v68 )
          v68 = (int)result - v13;
        v14 = v68;
        v76 = v68;
      }
      else
      {
        v77 = 0;
      }
      v15 = v14 + 64;
      v16 = (unsigned int)v6 >> 8;
      LOBYTE(v16) = BYTE1(v6) & 1;
      v78 = v16;
      v17 = BYTE1(v6) & 1;
      if ( (_DWORD)v5 )
      {
        result = MiNodeFreeZeroPages(a1, v17, 0x80000LL);
        if ( result < v15 )
          return result;
        v83 = 3408LL;
      }
      else
      {
        result = MiNodeFreeZeroPages(a1, v17, 524304LL);
        if ( result < v15 )
          return result;
        result = *(unsigned __int8 *)(v4 + 16485);
        if ( (_BYTE)result )
          return result;
        v83 = 3280LL;
      }
      if ( (unsigned __int8)byte_140E2D898 > 1u )
        v18 = v78;
      else
        v18 = 0;
      v85 = (unsigned int)v9;
      v19 = v18 + 2 * (v5 + 2LL * (((unsigned int)v6 >> 15) & 1));
      v20 = 88 * Cache;
      v21 = v76;
      v22 = (ULONG_PTR *)(v20
                        + *(_QWORD *)(a1 + 8 * (v9 + v19 + 2 * v19 + ((unsigned __int64)(WORD1(v6) & 3) << 7)) + 800));
      if ( v76 > v22[2] )
        v21 = v22[2];
      result = *(_QWORD *)(v4 + 22464) - v21;
      v76 = v21;
      if ( result >= 0x420 )
      {
        *(_QWORD *)Count = 0LL;
        v80 = 0LL;
        ListEntry = 0LL;
        v23 = 0LL;
        v79 = 0LL;
        v24 = 0LL;
        v87 = v21;
        v25 = 0LL;
        BugCheckParameter4 = 0LL;
        if ( !(unsigned int)MiDecreaseAvailablePages(v75, v21, 1056LL, 0LL) )
        {
LABEL_18:
          v27 = v75;
          goto LABEL_72;
        }
        BugCheckParameter4 = *v22;
        v79 = v22;
        v25 = 48 * BugCheckParameter4 - 0x220000000000LL;
        ListEntry = (PSLIST_ENTRY)v25;
        while ( 1 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            v23 = v80;
            goto LABEL_18;
          }
          v24 = (_SLIST_ENTRY *)v25;
          if ( !(_DWORD)v5
            && (MiFlags & 0x80u) != 0LL
            && (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
          {
            MiArePageContentsZero((__int64)(v25 + 0x220000000000LL) / 48);
          }
          v28 = (__int64)(v25 + 0x220000000000LL) / 48;
          if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 1 )
          {
            v34 = ((__int64)(v25 + 0x220000000000LL) / 48) & 0x1F;
            LOBYTE(v35) = 1;
            v36 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v28 >> 5);
            if ( (unsigned __int64)(v34 + 1) > 0x20 )
            {
              if ( (v28 & 0x1F) == 0 )
                goto LABEL_69;
              _InterlockedOr(v36, ((1 << (32 - (v28 & 0x1F))) - 1) << v34);
              v35 = 1LL - (32 - (unsigned int)(v28 & 0x1F));
              ++v36;
              if ( v35 >= 0x20 )
              {
                v70 = v35 >> 5;
                v35 += -32LL * (v35 >> 5);
                do
                {
                  *v36++ = -1;
                  --v70;
                }
                while ( v70 );
              }
              if ( v35 )
LABEL_69:
                _InterlockedOr(v36, (1 << v35) - 1);
            }
            else
            {
              _InterlockedOr(v36, 1 << v34);
            }
            goto LABEL_27;
          }
          if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3 )
          {
            v29 = ((__int64)(v25 + 0x220000000000LL) / 48) & 0x1F;
            LOBYTE(v30) = 1;
            v31 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v28 >> 5);
            if ( (unsigned __int64)(v29 + 1) > 0x20 )
            {
              if ( (v28 & 0x1F) != 0 )
              {
                _InterlockedAnd(v31, ~(((1 << (32 - (v28 & 0x1F))) - 1) << v29));
                v30 = 1LL - (32 - (unsigned int)(v28 & 0x1F));
                ++v31;
                if ( v30 >= 0x20 )
                {
                  v69 = v30 >> 5;
                  v30 += -32LL * (v30 >> 5);
                  do
                  {
                    *v31++ = 0;
                    --v69;
                  }
                  while ( v69 );
                }
                if ( !v30 )
                  goto LABEL_27;
              }
              v32 = -1 << v30;
            }
            else
            {
              v32 = ~(1 << v29);
            }
            _InterlockedAnd(v31, v32);
          }
LABEL_27:
          v33 = *(_DWORD *)(v25 + 32);
          if ( (v33 & 0x30FFFF) != 0
            || (v33 & 0x70000u) > 0x10000
            || (v33 & 0x80000) != 0 && (v33 & 0x70000) != 0x10000
            || (v27 = v75, ((*(_QWORD *)(v25 + 40) >> 43) & 0x3FF) != *v75) )
          {
            KeBugCheckEx(
              0x4Eu,
              0x98uLL,
              (__int64)(v25 + 0x220000000000LL) / 48,
              *(unsigned int *)(v25 + 32),
              BugCheckParameter4);
          }
          *(_DWORD *)(v25 + 32) = *(_DWORD *)(v25 + 32) & 0xFFF8FFFF | 0x50000;
          if ( (v33 & 0x80000) != 0 )
          {
            if ( v25 < 0xFFFFDE0000000000uLL || v25 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL )
            {
              v67 = (__int64)(v25 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3;
              v37 = MiStopHugePageAccessor(v25);
              v39 = MiHugePfnPartition(v25);
              v40 = MiPageToNode((unsigned __int64)(v67 & 0x3FFFFF) << 18);
              PfnPageSizeIndex = 0;
            }
            else
            {
              _mm_lfence();
              *(_DWORD *)(v25 + 32) &= ~0x80000u;
              v37 = *(_QWORD *)(v25 + 16);
              if ( !MiLocatePageCollisionByPfn(v37, (__int64)(v25 + 0x220000000000LL) / 48) )
                KeBugCheckEx(0x1Au, 0x1502uLL, v25, v37, (__int64)(v25 + 0x220000000000LL) / 48);
              *(_QWORD *)(v25 + 16) = MiMakeDemandZeroPte(4LL);
              v39 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_QWORD *)&v38 & (*(_QWORD *)(v25 + 40) >> 43)));
              v40 = MiPageToNode((__int64)(v25 + 0x220000000000LL) / 48);
              PfnPageSizeIndex = MiGetPfnPageSizeIndex(v25);
            }
            _InterlockedAdd64(
              (volatile signed __int64 *)(*(_QWORD *)(56320LL * v40 + *(_QWORD *)(v39 + 16) + 14192) + 80LL),
              -MiPageSizes[PfnPageSizeIndex]);
            *(_QWORD *)(v37 + 24) |= 1uLL;
            v42 = *(_QWORD **)(v37 + 32);
            if ( v42 )
            {
              v73 = *(unsigned int *)(v37 + 64);
              if ( (*v42 & 1) != 0 )
              {
                _InterlockedOr(v74, 0);
                MiZeroPageWorkMapping(v73, v42, 1LL);
              }
            }
            LODWORD(v5) = a2;
            v21 = v76;
            v27 = v75;
          }
          *(_QWORD *)(v25 + 24) &= 0xFFFFFF0000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v43 = *(_QWORD *)(v25 + 16);
          if ( qword_140E2D8C0 && (v43 & 0x10) == 0 )
            HIDWORD(v43) &= HIDWORD(qword_140E2D8C8);
          if ( HIDWORD(v43) == -3 )
          {
            if ( v77 )
              MiAddPageToHeatList(a4, BugCheckParameter4, 3LL);
          }
          else if ( !(_DWORD)v5 )
          {
            ++v80;
          }
          MiUpdateLargePageCandidateValue(v27, (__int64)(v25 + 0x220000000000LL) / 48, 3LL, 0LL, 0LL);
          BugCheckParameter4 = *(_QWORD *)v25 & 0xFFFFFFFFFFLL;
          if ( BugCheckParameter4 == 0x3FFFFFFFFFLL )
            v25 = 0LL;
          else
            v25 = 48 * BugCheckParameter4 - 0x220000000000LL;
          v44 = ((__int64)(int)v5 << 12) ^ ((__int64)v24[1].Next ^ ((__int64)(int)v5 << 12)) & 0xFFFFFFFFFFFF0FFFuLL;
          if ( v44 )
          {
            if ( qword_140E2D8C0 )
            {
              if ( ((__int64)v24[1].Next & 0x10) != 0 )
                LODWORD(v44) = v44 & 0xFFFFFFEF;
              else
                LODWORD(v44) = qword_140E2D8C8 & v44;
            }
          }
          else
          {
            LODWORD(v44) = 0;
          }
          v45 = (unsigned int)v44 | 0xFFFFFFFE00000000uLL;
          if ( qword_140E2D8C0 )
          {
            v46 = (unsigned int)v44 | (unsigned __int64)qword_140E2D8C0 | 0xFFFFFFFE00000000uLL;
            if ( (qword_140E2D8C0 & v45) != 0 )
              v46 = (unsigned int)v44 | 0xFFFFFFFE00000010uLL;
            v45 = v46;
          }
          ++*(_QWORD *)Count;
          v47 = 0LL;
          v24[1].Next = (_SLIST_ENTRY *)v45;
          v24->Next = (_SLIST_ENTRY *)v25;
          if ( (v6 & 0x30000) != 0x30000 )
            v47 = v28 < 0x100000;
          ++*((_QWORD *)&v86 + v47);
          v76 = --v21;
          if ( !v21 )
          {
            v23 = v80;
LABEL_72:
            v48 = *(_QWORD *)Count;
            if ( v87 == *(_QWORD *)Count || (result = MiIncreaseAvailablePages(v27, v87 - *(_QWORD *)Count), v48) )
            {
              if ( *(_DWORD *)(a4 + 4) )
                MiIssuePageHeatList(a4);
              v49 = (__int64)v79;
              *v79 = BugCheckParameter4;
              if ( BugCheckParameter4 == 0x3FFFFFFFFFLL )
              {
                v54 = a1;
                v53 = (ULONG_PTR *)v49;
                MiUpdateZeroFreeBitmap(a1, v49, 0);
                v53[1] = 0x3FFFFFFFFFLL;
              }
              else
              {
                v50 = *(_QWORD *)(v25 + 24);
                v51 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v25 + 24),
                        v50 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL,
                        v50);
                if ( v50 != v51 )
                {
                  do
                  {
                    v52 = v51;
                    v51 = _InterlockedCompareExchange64(
                            (volatile signed __int64 *)(v25 + 24),
                            v51 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL,
                            v51);
                  }
                  while ( v52 != v51 );
                }
                v53 = v79;
                v54 = a1;
              }
              v55 = MiColorGetCache(v6);
              v56 = (_SLIST_HEADER *)(*v88 + 16LL * v55);
              if ( v24 )
                v57 = InterlockedPushListSList(v56, ListEntry, v24, v48);
              else
                v57 = RtlpInterlockedPushEntrySList(v56, ListEntry);
              if ( v57 )
              {
                v59 = v84;
              }
              else
              {
                v58 = v55 % dword_140E2D90C;
                v59 = v84;
                v60 = v58 & 0x1F;
                LOBYTE(v61) = 1;
                v62 = (volatile signed __int32 *)(*(_QWORD *)(v54 + 16 * v84 + 13768) + 4 * ((unsigned __int64)v58 >> 5));
                if ( (unsigned __int64)(v60 + 1) > 0x20 )
                {
                  if ( (v58 & 0x1F) == 0 )
                    goto LABEL_104;
                  v71 = v58 & 0x1F;
                  _InterlockedOr(v62, ((1 << (32 - v71)) - 1) << v60);
                  v61 = 1LL - (unsigned int)(32 - v71);
                  ++v62;
                  if ( v61 >= 0x20 )
                  {
                    v72 = v61 >> 5;
                    v61 += -32LL * (v61 >> 5);
                    do
                    {
                      *v62++ = -1;
                      --v72;
                    }
                    while ( v72 );
                  }
                  if ( v61 )
LABEL_104:
                    _InterlockedOr(v62, (1 << v61) - 1);
                }
                else
                {
                  _InterlockedOr(v62, 1 << v60);
                }
              }
              v63 = -v48;
              if ( v48 == 1 )
                _InterlockedDecrement64((volatile signed __int64 *)v53 + 2);
              else
                _InterlockedAdd64((volatile signed __int64 *)v53 + 2, v63);
              if ( v23 )
              {
                v64 = (unsigned int)MiColorGetCache(v6);
                v65 = *(_QWORD *)(v54 + 8 * ((v6 >> 18) & 3) + 4096);
                *(_QWORD *)(v65 + 8 * v64) -= v23;
              }
              result = (unsigned __int64)v75;
              if ( v48 == 1 )
                _InterlockedDecrement64((volatile signed __int64 *)&v75[(unsigned __int64)v83 / 2]);
              else
                _InterlockedAdd64((volatile signed __int64 *)&v75[(unsigned __int64)v83 / 2], v63);
              _InterlockedAdd64((volatile signed __int64 *)(v54 + 8 * v59 + 3080), v63);
              if ( (unsigned __int8)byte_140E2D898 > 1u )
              {
                result = (unsigned __int8)v78;
                _InterlockedAdd64(
                  (volatile signed __int64 *)(v54 + 8 * (v59 + 2LL * (unsigned __int8)v78) + 14064),
                  v63);
              }
              if ( v48 )
              {
                v66 = v85;
                if ( (_QWORD)v86 )
                  _InterlockedAdd64((volatile signed __int64 *)(v54 + 8 * v85 + 3096), -(__int64)v86);
                result = *((_QWORD *)&v86 + 1);
                if ( *((_QWORD *)&v86 + 1) )
                {
                  result = -*((_QWORD *)&v86 + 1);
                  _InterlockedAdd64((volatile signed __int64 *)(v54 + 8 * v66 + 3120), -*((_QWORD *)&v86 + 1));
                }
              }
            }
            return result;
          }
        }
      }
    }
  }
  return result;
}
