/*
 * XREFs of MiBuildReservationCluster @ 0x14033F334
 * Callers:
 *     MiModwriterFillMdl @ 0x140400130 (MiModwriterFillMdl.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1402D6BD0 (MiReferencePageForModifiedWrite.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiGetPageForWriteCluster @ 0x14033FC88 (MiGetPageForWriteCluster.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14040353C (MiDerefPageFileSpaceBitmaps.c)
 *     MiDecrementModifiedWriteCount @ 0x140462920 (MiDecrementModifiedWriteCount.c)
 *     MiAddToReservationCluster @ 0x14046BBE0 (MiAddToReservationCluster.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1404A5504 (MiRefPageFileSpaceBitmaps.c)
 *     MiReferencePfBackedSection @ 0x1404CB310 (MiReferencePfBackedSection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(_QWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  struct _KEVENT *v4; // r14
  __int16 v5; // ax
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  const signed __int64 *v9; // r13
  unsigned int v10; // r10d
  __int64 v11; // rdi
  ULONG_PTR v12; // rsi
  unsigned __int8 v13; // al
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned int v19; // r14d
  unsigned __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 v23; // r14
  unsigned __int64 v24; // r15
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 *v28; // rsi
  __int64 v29; // r12
  __int64 v30; // r8
  __int64 v31; // r15
  unsigned __int64 v32; // rdi
  __int64 v33; // r15
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rsi
  unsigned int v37; // r12d
  __int64 v38; // r13
  unsigned int v39; // eax
  __int64 v40; // rax
  unsigned int v41; // r13d
  __int64 v42; // r12
  __int64 v43; // r12
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rbx
  __int64 v46; // rsi
  __int64 *v47; // r12
  __int64 *v48; // r15
  __int64 v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 *v53; // rdx
  unsigned __int64 v54; // rbx
  __int64 v55; // r15
  __int64 v56; // r12
  unsigned __int8 CurrentIrql; // di
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // r8
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  unsigned int *v64; // r15
  __int64 v65; // rcx
  int v66; // r10d
  __int64 v67; // rsi
  int v68; // eax
  unsigned int v69; // edi
  void *v70; // rax
  _DWORD *v71; // rax
  unsigned __int64 v73; // rbx
  __int64 v74; // rax
  unsigned __int64 v75; // rcx
  __int64 v76; // r8
  int v77; // eax
  unsigned int v78; // [rsp+38h] [rbp-99h] BYREF
  unsigned int v79; // [rsp+3Ch] [rbp-95h]
  int v80; // [rsp+40h] [rbp-91h] BYREF
  int v81; // [rsp+44h] [rbp-8Dh]
  __int64 v82; // [rsp+48h] [rbp-89h]
  __int64 v83; // [rsp+50h] [rbp-81h] BYREF
  __int64 v84; // [rsp+58h] [rbp-79h]
  __int128 v85; // [rsp+60h] [rbp-71h] BYREF
  __int128 v86; // [rsp+70h] [rbp-61h]
  __int64 v87; // [rsp+80h] [rbp-51h]
  __int64 v88; // [rsp+88h] [rbp-49h]
  void *Src; // [rsp+90h] [rbp-41h]
  unsigned __int64 v90; // [rsp+98h] [rbp-39h]
  __int64 v91; // [rsp+A0h] [rbp-31h]
  unsigned __int64 *v92; // [rsp+A8h] [rbp-29h]
  __int64 v93; // [rsp+B0h] [rbp-21h]
  __int64 v94; // [rsp+B8h] [rbp-19h]
  __int128 v95; // [rsp+C0h] [rbp-11h]
  __int128 v96; // [rsp+D0h] [rbp-1h]
  _QWORD *v97; // [rsp+138h] [rbp+67h] BYREF
  __int64 v98; // [rsp+140h] [rbp+6Fh]
  unsigned int *v99; // [rsp+148h] [rbp+77h]
  _DWORD *v100; // [rsp+150h] [rbp+7Fh]

  v100 = a4;
  v99 = a3;
  v98 = a2;
  v97 = a1;
  v4 = *(struct _KEVENT **)(a2 + 224);
  v87 = 0LL;
  v94 = 0LL;
  v81 = 0;
  v5 = *(_WORD *)(a2 + 172);
  Src = a1;
  v80 = 0;
  v6 = 88LL * (v5 & 0xF);
  v85 = 0LL;
  v86 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  MiRefPageFileSpaceBitmaps(a2, &v85);
  v9 = (const signed __int64 *)v86;
  v79 = 0;
  v78 = 0;
LABEL_2:
  while ( 2 )
  {
    v10 = DWORD2(v85);
    while ( 1 )
    {
      do
      {
        v11 = *(_QWORD *)((char *)&v4[192].Header.Lock + v6);
        if ( v11 == 0x3FFFFFFFFFLL )
          goto LABEL_137;
        v12 = 48 * v11 - 0x220000000000LL;
        v13 = MiSafeLockPage(*(_QWORD *)((char *)&v4[192].Header.Lock + v6), v7, v8);
        v10 = DWORD2(v85);
        v14 = v13;
      }
      while ( v13 == 17 );
      if ( v11 == *(_QWORD *)((char *)&v4[192].Header.Lock + v6) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v10 = DWORD2(v85);
      if ( v13 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
        __writecr8(v14);
        goto LABEL_2;
      }
    }
    v15 = *(_QWORD *)(v12 + 16);
    if ( qword_140E2D8C0 && (v15 & 0x10) == 0 )
      v15 &= qword_140E2D8C8;
    v10 = DWORD2(v85);
    v16 = HIDWORD(v15);
    if ( (unsigned int)v16 < DWORD2(v85) )
    {
      if ( _bittest64(v9, v16) )
      {
        MiUnlinkPageFromListEx(v12, 0);
        v73 = *(_QWORD *)(v12 + 16);
        *(_QWORD *)(v12 + 16) = v73 & 0xFFFFFFFFFFFFFFFBuLL;
        MiInsertPageInList(v12, 8u);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v14 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
          __writecr8(v14);
        }
        MiReleasePageFileInfo(v4, v73, 0LL);
        continue;
      }
      MiReferencePageForModifiedWrite(v12, 1);
      v19 = 1;
      LODWORD(v82) = 1;
      *v97 = v11;
      if ( *v99 == 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v14 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
          __writecr8(v14);
        }
        goto LABEL_90;
      }
      v20 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
      v21 = *(_QWORD *)(v12 + 16);
      v22 = *(_QWORD *)(v12 + 40) & 0xFFFFFFFFFFLL;
      v23 = 48 * v22 - 0x220000000000LL;
      LODWORD(v83) = 0;
      v93 = v23;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v83);
        while ( *(__int64 *)(v23 + 24) < 0 );
      }
      MiAddLockedPageCharge(48 * v22 - 0x220000000000LL, 1, v17, v18);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v19 = v82;
      if ( (unsigned __int8)v14 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
        __writecr8(v14);
      }
      if ( *(__int64 *)(v12 + 40) < 0 )
      {
        v74 = MiReferencePfBackedSection(v20);
        if ( !v74 )
        {
          v55 = *((_QWORD *)&v95 + 1);
          v56 = v95;
          goto LABEL_75;
        }
        v75 = *(_QWORD *)(v74 + 8);
        v76 = *(_QWORD *)v74;
        v26 = v20 & 0xFFFFFFFFFFFFF000uLL;
        v77 = *(_DWORD *)(v74 + 44);
        v84 = v76;
        v81 = v82;
        v24 = (v20 & 0xFFFFFFFFFFFFF000uLL) + 4088;
        if ( (v20 & 0xFFFFFFFFFFFFF000uLL) < v75 )
          v26 = v75;
        v90 = v26;
        v27 = v75 + 8LL * (unsigned int)(v77 - 1);
        if ( v24 > v27 )
          v24 = v27;
        v83 = 0LL;
        if ( (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) != 0 )
        {
LABEL_74:
          v55 = v83;
          v56 = v84;
LABEL_75:
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v26) = 2;
            LOBYTE(v27) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v27, v26);
          }
          v58 = v93;
          LODWORD(v97) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v58 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v97);
            while ( *(__int64 *)(v58 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v58);
          _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql < 2u )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
          }
          if ( v81 )
          {
            if ( v55 )
            {
              LOBYTE(v59) = v94;
              MiUnlockProtoPoolPage(v55, v59, v60);
            }
            v61 = (_QWORD *)MiDecrementModifiedWriteCount(v56, 0LL);
            if ( v61 )
              MiReleaseControlAreaWaiters(v61, v62, v63);
          }
LABEL_90:
          v10 = DWORD2(v85);
          goto LABEL_91;
        }
      }
      else
      {
        v24 = *((_QWORD *)&v96 + 1);
        v90 = v96;
        v83 = *((_QWORD *)&v95 + 1);
        v84 = v95;
      }
      v25 = (unsigned __int64 *)MiReservePtes(&stru_140E366D8.WaitBlockList, (unsigned int)v82);
      v92 = v25;
      v28 = v25;
      if ( v25 )
      {
        *v25 = MiMakeValidPte((unsigned __int64)v25, v22, 536870913);
        v29 = 8 * ((v20 >> 3) & 0x1FF);
        v91 = v29;
        v30 = v29 + ((__int64)((_QWORD)v28 << 25) >> 16);
        v88 = v30;
        if ( v81 )
          v31 = 8 * ((v24 >> 3) & 0x1FF);
        else
          v31 = 4088LL;
        v32 = v21 & 0xFFFFFFFFF801FC1FuLL;
        v33 = (v31 - v29) >> 3;
        v34 = v32;
        v35 = v32;
        LODWORD(v82) = *v99;
        if ( (unsigned int)v33 >= (int)v82 - 1 )
          LODWORD(v33) = v82 - 1;
        if ( qword_140E2D8C0 && (v32 & 0x10) == 0 )
          v35 = v32 & qword_140E2D8C8;
        v36 = HIDWORD(v35);
        if ( (unsigned int)(v33 + v36) >= DWORD2(v85) )
          LODWORD(v33) = DWORD2(v85) - v36 - 1;
        v37 = v79;
        v38 = v30;
        v78 = 0;
        do
        {
          if ( !(_DWORD)v33 )
            break;
          v38 += 8LL;
          LODWORD(v36) = v36 + 1;
          if ( v34 )
          {
            v39 = v34;
            if ( qword_140E2D8C0 )
            {
              if ( (v34 & 0x10) != 0 )
                v39 = v34 & 0xFFFFFFEF;
              else
                v39 = v34 & qword_140E2D8C8;
            }
          }
          else
          {
            v39 = 0;
          }
          v34 = v39 | ((unsigned __int64)(unsigned int)v36 << 32);
          if ( qword_140E2D8C0 )
          {
            if ( (qword_140E2D8C0 & v34) != 0 )
              v34 |= 0x10uLL;
            else
              v34 |= qword_140E2D8C0;
          }
          v40 = MiGetPageForWriteCluster((char *)&v85 + 8, v38, v34, &v78, &v80);
          if ( v40 == -1 )
            break;
          LODWORD(v33) = v33 - 1;
          ++v19;
          *++v97 = v40;
          if ( v40 == qword_140E361B8 )
            ++v37;
        }
        while ( v80 != 3 || v19 < 0x10 );
        v19 -= v78;
        v41 = v37 - v78;
        v79 = v37 - v78;
        v78 = v37 - v78;
        if ( v81 )
          v42 = v91 - 8 * ((v90 >> 3) & 0x1FF);
        else
          v42 = v88 & 0xFFF;
        v43 = v42 >> 3;
        v44 = v32;
        if ( (unsigned int)v43 >= (unsigned int)v82 - v19 )
          LODWORD(v43) = v82 - v19;
        if ( qword_140E2D8C0 && (v32 & 0x10) == 0 )
          v44 = v32 & qword_140E2D8C8;
        v45 = HIDWORD(v44);
        v46 = (unsigned int)(v45 - 1);
        if ( (unsigned int)v43 <= (unsigned int)v46 )
          v46 = (unsigned int)v43;
        v47 = (__int64 *)Src;
        if ( (_DWORD)v46 )
        {
          v48 = (__int64 *)((char *)Src + 8 * v46);
          memmove(v48, Src, 8LL * v19);
          v78 = 0;
          do
          {
            if ( !(_DWORD)v46 )
              break;
            LODWORD(v45) = v45 - 1;
            v49 = v88 - 8;
            v88 -= 8LL;
            if ( v32 )
            {
              v50 = v32;
              if ( qword_140E2D8C0 )
              {
                if ( (v32 & 0x10) != 0 )
                  v50 = v32 & 0xFFFFFFEF;
                else
                  v50 = v32 & qword_140E2D8C8;
              }
            }
            else
            {
              v50 = 0;
            }
            v32 = v50 | ((unsigned __int64)(unsigned int)v45 << 32);
            if ( qword_140E2D8C0 )
            {
              if ( (qword_140E2D8C0 & v32) != 0 )
                v32 |= 0x10uLL;
              else
                v32 |= qword_140E2D8C0;
            }
            v51 = MiGetPageForWriteCluster((char *)&v85 + 8, v49, v32, &v78, &v80);
            if ( v51 == -1 )
              break;
            --v48;
            LODWORD(v46) = v46 - 1;
            ++v19;
            *v48 = v51;
            if ( v51 == qword_140E361B8 )
              ++v41;
          }
          while ( v80 != 3 || v19 < 0x10 );
          v52 = v78;
          v19 -= v78;
          v79 = v41 - v78;
          v78 = v41 - v78;
          v53 = &v48[v52];
          if ( v47 != v53 )
            memmove(v47, v53, 8LL * v19);
        }
        v54 = *(_QWORD *)(48 * *v47 - 0x21FFFFFFFFF0LL);
        if ( qword_140E2D8C0 && (v54 & 0x10) == 0 )
          v54 &= qword_140E2D8C8;
        v16 = HIDWORD(v54);
        MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, v92, 1u);
      }
      goto LABEL_74;
    }
    break;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 < 2u )
  {
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      v10 = DWORD2(v85);
    }
    __writecr8(v14);
  }
LABEL_137:
  v19 = 0;
  LODWORD(v16) = 0;
LABEL_91:
  v64 = v99;
  v65 = *v99;
  if ( v19 < (unsigned int)v65 && v19 && v19 + (unsigned __int64)(unsigned int)v16 < v10 )
  {
    if ( (unsigned __int64)(unsigned int)v16 + v65 > v10 )
      v66 = v10 - v16 - v19;
    else
      v66 = v65 - v19;
    v67 = v98;
    v68 = MiAddToReservationCluster(
            v98,
            (unsigned int)&v85 + 8,
            v66,
            (unsigned int)v16 + v19,
            (__int64)Src + 8 * v19,
            (__int64)&v78);
    v69 = v78;
    v19 += v68;
  }
  else
  {
    v69 = v79;
    v67 = v98;
  }
  v70 = (void *)MiDerefPageFileSpaceBitmaps(v67, &v85, 0LL);
  if ( v70 )
    ExFreePoolWithTag(v70, 0);
  v71 = v100;
  *v64 = v19;
  *v71 = v19 - v69;
  return (unsigned int)v16;
}
