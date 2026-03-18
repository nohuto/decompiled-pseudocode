/*
 * XREFs of MiBuildReservationCluster @ 0x14033D2B4
 * Callers:
 *     MiModwriterFillMdl @ 0x140407040 (MiModwriterFillMdl.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReleaseControlAreaWaiters @ 0x1402733E0 (MiReleaseControlAreaWaiters.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1402F4B50 (MiReferencePageForModifiedWrite.c)
 *     MiAddLockedPageCharge @ 0x1402F5D30 (MiAddLockedPageCharge.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     MiGetPageForWriteCluster @ 0x14033DC08 (MiGetPageForWriteCluster.c)
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14040A44C (MiDerefPageFileSpaceBitmaps.c)
 *     MiDecrementModifiedWriteCount @ 0x140469350 (MiDecrementModifiedWriteCount.c)
 *     MiAddToReservationCluster @ 0x140472460 (MiAddToReservationCluster.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1404ABE74 (MiRefPageFileSpaceBitmaps.c)
 *     MiReferencePfBackedSection @ 0x1404D1764 (MiReferencePfBackedSection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(_QWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  struct _KEVENT *v4; // r14
  __int16 v5; // ax
  __int64 v6; // r12
  __int64 v7; // rdx
  const signed __int64 *v8; // r13
  unsigned int v9; // r10d
  __int64 v10; // rdi
  ULONG_PTR v11; // rsi
  unsigned __int8 v12; // al
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned int v18; // r14d
  unsigned __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 v22; // r14
  unsigned __int64 v23; // r15
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 *v27; // rsi
  __int64 v28; // r12
  __int64 v29; // r8
  __int64 v30; // r15
  unsigned __int64 v31; // rdi
  __int64 v32; // r15
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rsi
  unsigned int v36; // r12d
  __int64 v37; // r13
  unsigned int v38; // eax
  __int64 v39; // rax
  unsigned int v40; // r13d
  __int64 v41; // r12
  __int64 v42; // r12
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rbx
  __int64 v45; // rsi
  __int64 *v46; // r12
  __int64 *v47; // r15
  __int64 v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 *v52; // rdx
  unsigned __int64 v53; // rbx
  __int64 v54; // r15
  __int64 v55; // r12
  unsigned __int8 CurrentIrql; // di
  __int64 v57; // rsi
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  unsigned int *v61; // r15
  __int64 v62; // rcx
  int v63; // r10d
  __int64 v64; // rsi
  int v65; // eax
  unsigned int v66; // edi
  void *v67; // rax
  _DWORD *v68; // rax
  unsigned __int64 v70; // rbx
  __int64 v71; // rax
  unsigned __int64 v72; // rcx
  __int64 v73; // r8
  int v74; // eax
  unsigned int v75; // [rsp+38h] [rbp-99h] BYREF
  unsigned int v76; // [rsp+3Ch] [rbp-95h]
  int v77; // [rsp+40h] [rbp-91h] BYREF
  int v78; // [rsp+44h] [rbp-8Dh]
  __int64 v79; // [rsp+48h] [rbp-89h]
  __int64 v80; // [rsp+50h] [rbp-81h] BYREF
  __int64 v81; // [rsp+58h] [rbp-79h]
  __int128 v82; // [rsp+60h] [rbp-71h] BYREF
  __int128 v83; // [rsp+70h] [rbp-61h]
  __int64 v84; // [rsp+80h] [rbp-51h]
  __int64 v85; // [rsp+88h] [rbp-49h]
  void *Src; // [rsp+90h] [rbp-41h]
  unsigned __int64 v87; // [rsp+98h] [rbp-39h]
  __int64 v88; // [rsp+A0h] [rbp-31h]
  unsigned __int64 *v89; // [rsp+A8h] [rbp-29h]
  __int64 v90; // [rsp+B0h] [rbp-21h]
  __int64 v91; // [rsp+B8h] [rbp-19h]
  __int128 v92; // [rsp+C0h] [rbp-11h]
  __int128 v93; // [rsp+D0h] [rbp-1h]
  _QWORD *v94; // [rsp+138h] [rbp+67h] BYREF
  __int64 v95; // [rsp+140h] [rbp+6Fh]
  unsigned int *v96; // [rsp+148h] [rbp+77h]
  _DWORD *v97; // [rsp+150h] [rbp+7Fh]

  v97 = a4;
  v96 = a3;
  v95 = a2;
  v94 = a1;
  v4 = *(struct _KEVENT **)(a2 + 224);
  v84 = 0LL;
  v91 = 0LL;
  v78 = 0;
  v5 = *(_WORD *)(a2 + 172);
  Src = a1;
  v77 = 0;
  v6 = 88LL * (v5 & 0xF);
  v82 = 0LL;
  v83 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  MiRefPageFileSpaceBitmaps(a2, &v82);
  v8 = (const signed __int64 *)v83;
  v76 = 0;
  v75 = 0;
LABEL_2:
  while ( 2 )
  {
    v9 = DWORD2(v82);
    while ( 1 )
    {
      do
      {
        v10 = *(_QWORD *)((char *)&v4[192].Header.Lock + v6);
        if ( v10 == 0x3FFFFFFFFFLL )
          goto LABEL_137;
        v11 = 48 * v10 - 0x220000000000LL;
        v12 = MiSafeLockPage(*(_QWORD *)((char *)&v4[192].Header.Lock + v6), v7);
        v9 = DWORD2(v82);
        v13 = v12;
      }
      while ( v12 == 17 );
      if ( v10 == *(_QWORD *)((char *)&v4[192].Header.Lock + v6) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v9 = DWORD2(v82);
      if ( v12 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
        __writecr8(v13);
        goto LABEL_2;
      }
    }
    v14 = *(_QWORD *)(v11 + 16);
    if ( qword_140E2D740 && (v14 & 0x10) == 0 )
      v14 &= qword_140E2D748;
    v9 = DWORD2(v82);
    v15 = HIDWORD(v14);
    if ( (unsigned int)v15 < DWORD2(v82) )
    {
      if ( _bittest64(v8, v15) )
      {
        MiUnlinkPageFromListEx(v11, 0);
        v70 = *(_QWORD *)(v11 + 16);
        *(_QWORD *)(v11 + 16) = v70 & 0xFFFFFFFFFFFFFFFBuLL;
        MiInsertPageInList(v11, 8u);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v13 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
          __writecr8(v13);
        }
        MiReleasePageFileInfo(v4, v70, 0);
        continue;
      }
      MiReferencePageForModifiedWrite(v11, 1);
      v18 = 1;
      LODWORD(v79) = 1;
      *v94 = v10;
      if ( *v96 == 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v13 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
          __writecr8(v13);
        }
        goto LABEL_90;
      }
      v19 = *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL;
      v20 = *(_QWORD *)(v11 + 16);
      v21 = *(_QWORD *)(v11 + 40) & 0xFFFFFFFFFFLL;
      v22 = 48 * v21 - 0x220000000000LL;
      LODWORD(v80) = 0;
      v90 = v22;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v80);
        while ( *(__int64 *)(v22 + 24) < 0 );
      }
      MiAddLockedPageCharge(48 * v21 - 0x220000000000LL, 1, v16, v17);
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v18 = v79;
      if ( (unsigned __int8)v13 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
        __writecr8(v13);
      }
      if ( *(__int64 *)(v11 + 40) < 0 )
      {
        v71 = MiReferencePfBackedSection(v19);
        if ( !v71 )
        {
          v54 = *((_QWORD *)&v92 + 1);
          v55 = v92;
          goto LABEL_75;
        }
        v72 = *(_QWORD *)(v71 + 8);
        v73 = *(_QWORD *)v71;
        v25 = v19 & 0xFFFFFFFFFFFFF000uLL;
        v74 = *(_DWORD *)(v71 + 44);
        v81 = v73;
        v78 = v79;
        v23 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4088;
        if ( (v19 & 0xFFFFFFFFFFFFF000uLL) < v72 )
          v25 = v72;
        v87 = v25;
        v26 = v72 + 8LL * (unsigned int)(v74 - 1);
        if ( v23 > v26 )
          v23 = v26;
        v80 = 0LL;
        if ( (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) != 0 )
        {
LABEL_74:
          v54 = v80;
          v55 = v81;
LABEL_75:
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v25) = 2;
            LOBYTE(v26) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v26, v25);
          }
          v57 = v90;
          LODWORD(v94) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v94);
            while ( *(__int64 *)(v57 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v57);
          _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql < 2u )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
          }
          if ( v78 )
          {
            if ( v54 )
              MiUnlockProtoPoolPage(v54, v91);
            v58 = (_QWORD *)MiDecrementModifiedWriteCount(v55, 0LL);
            if ( v58 )
              MiReleaseControlAreaWaiters(v58, v59, v60);
          }
LABEL_90:
          v9 = DWORD2(v82);
          goto LABEL_91;
        }
      }
      else
      {
        v23 = *((_QWORD *)&v93 + 1);
        v87 = v93;
        v80 = *((_QWORD *)&v92 + 1);
        v81 = v92;
      }
      v24 = (unsigned __int64 *)MiReservePtes(&stru_140E36558.WaitBlockList, (unsigned int)v79);
      v89 = v24;
      v27 = v24;
      if ( v24 )
      {
        *v24 = MiMakeValidPte((unsigned __int64)v24, v21, 536870913);
        v28 = 8 * ((v19 >> 3) & 0x1FF);
        v88 = v28;
        v29 = v28 + ((__int64)((_QWORD)v27 << 25) >> 16);
        v85 = v29;
        if ( v78 )
          v30 = 8 * ((v23 >> 3) & 0x1FF);
        else
          v30 = 4088LL;
        v31 = v20 & 0xFFFFFFFFF801FC1FuLL;
        v32 = (v30 - v28) >> 3;
        v33 = v31;
        v34 = v31;
        LODWORD(v79) = *v96;
        if ( (unsigned int)v32 >= (int)v79 - 1 )
          LODWORD(v32) = v79 - 1;
        if ( qword_140E2D740 && (v31 & 0x10) == 0 )
          v34 = v31 & qword_140E2D748;
        v35 = HIDWORD(v34);
        if ( (unsigned int)(v32 + v35) >= DWORD2(v82) )
          LODWORD(v32) = DWORD2(v82) + ~(_DWORD)v35;
        v36 = v76;
        v37 = v29;
        v75 = 0;
        do
        {
          if ( !(_DWORD)v32 )
            break;
          v37 += 8LL;
          LODWORD(v35) = v35 + 1;
          if ( v33 )
          {
            v38 = v33;
            if ( qword_140E2D740 )
            {
              if ( (v33 & 0x10) != 0 )
                v38 = v33 & 0xFFFFFFEF;
              else
                v38 = v33 & qword_140E2D748;
            }
          }
          else
          {
            v38 = 0;
          }
          v33 = v38 | ((unsigned __int64)(unsigned int)v35 << 32);
          if ( qword_140E2D740 )
          {
            if ( (qword_140E2D740 & v33) != 0 )
              v33 |= 0x10uLL;
            else
              v33 |= qword_140E2D740;
          }
          v39 = MiGetPageForWriteCluster((char *)&v82 + 8, v37, v33, &v75, &v77);
          if ( v39 == -1 )
            break;
          LODWORD(v32) = v32 - 1;
          ++v18;
          *++v94 = v39;
          if ( v39 == qword_140E36038 )
            ++v36;
        }
        while ( v77 != 3 || v18 < 0x10 );
        v18 -= v75;
        v40 = v36 - v75;
        v76 = v36 - v75;
        v75 = v36 - v75;
        if ( v78 )
          v41 = v88 - 8 * ((v87 >> 3) & 0x1FF);
        else
          v41 = v85 & 0xFFF;
        v42 = v41 >> 3;
        v43 = v31;
        if ( (unsigned int)v42 >= (unsigned int)v79 - v18 )
          LODWORD(v42) = v79 - v18;
        if ( qword_140E2D740 && (v31 & 0x10) == 0 )
          v43 = v31 & qword_140E2D748;
        v44 = HIDWORD(v43);
        v45 = (unsigned int)(v44 - 1);
        if ( (unsigned int)v42 <= (unsigned int)v45 )
          v45 = (unsigned int)v42;
        v46 = (__int64 *)Src;
        if ( (_DWORD)v45 )
        {
          v47 = (__int64 *)((char *)Src + 8 * v45);
          memmove(v47, Src, 8LL * v18);
          v75 = 0;
          do
          {
            if ( !(_DWORD)v45 )
              break;
            LODWORD(v44) = v44 - 1;
            v48 = v85 - 8;
            v85 -= 8LL;
            if ( v31 )
            {
              v49 = v31;
              if ( qword_140E2D740 )
              {
                if ( (v31 & 0x10) != 0 )
                  v49 = v31 & 0xFFFFFFEF;
                else
                  v49 = v31 & qword_140E2D748;
              }
            }
            else
            {
              v49 = 0;
            }
            v31 = v49 | ((unsigned __int64)(unsigned int)v44 << 32);
            if ( qword_140E2D740 )
            {
              if ( (qword_140E2D740 & v31) != 0 )
                v31 |= 0x10uLL;
              else
                v31 |= qword_140E2D740;
            }
            v50 = MiGetPageForWriteCluster((char *)&v82 + 8, v48, v31, &v75, &v77);
            if ( v50 == -1 )
              break;
            --v47;
            LODWORD(v45) = v45 - 1;
            ++v18;
            *v47 = v50;
            if ( v50 == qword_140E36038 )
              ++v40;
          }
          while ( v77 != 3 || v18 < 0x10 );
          v51 = v75;
          v18 -= v75;
          v76 = v40 - v75;
          v75 = v40 - v75;
          v52 = &v47[v51];
          if ( v46 != v52 )
            memmove(v46, v52, 8LL * v18);
        }
        v53 = *(_QWORD *)(48 * *v46 - 0x21FFFFFFFFF0LL);
        if ( qword_140E2D740 && (v53 & 0x10) == 0 )
          v53 &= qword_140E2D748;
        v15 = HIDWORD(v53);
        MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, v89, 1u);
      }
      goto LABEL_74;
    }
    break;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v12 < 2u )
  {
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      v9 = DWORD2(v82);
    }
    __writecr8(v13);
  }
LABEL_137:
  v18 = 0;
  LODWORD(v15) = 0;
LABEL_91:
  v61 = v96;
  v62 = *v96;
  if ( v18 < (unsigned int)v62 && v18 && v18 + (unsigned __int64)(unsigned int)v15 < v9 )
  {
    if ( (unsigned __int64)(unsigned int)v15 + v62 > v9 )
      v63 = v9 - v15 - v18;
    else
      v63 = v62 - v18;
    v64 = v95;
    v65 = MiAddToReservationCluster(
            v95,
            (unsigned int)&v82 + 8,
            v63,
            (unsigned int)v15 + v18,
            (__int64)Src + 8 * v18,
            (__int64)&v75);
    v66 = v75;
    v18 += v65;
  }
  else
  {
    v66 = v76;
    v64 = v95;
  }
  v67 = (void *)MiDerefPageFileSpaceBitmaps(v64, &v82, 0LL);
  if ( v67 )
    ExFreePoolWithTag(v67, 0);
  v68 = v97;
  *v61 = v18;
  *v68 = v18 - v66;
  return (unsigned int)v15;
}
