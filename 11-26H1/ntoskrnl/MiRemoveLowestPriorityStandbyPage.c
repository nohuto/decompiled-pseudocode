/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x1402FA410
 * Callers:
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x1402C8780 (MiPruneStandbyPages.c)
 *     MiPurgePartitionStandby @ 0x14046886C (MiPurgePartitionStandby.c)
 *     MiDeletePartitionResources @ 0x140868E28 (MiDeletePartitionResources.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiReplaceTransitionPage @ 0x140293C88 (MiReplaceTransitionPage.c)
 *     MiReturnFreeZeroPage @ 0x1402AA690 (MiReturnFreeZeroPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiRepurposeDecayNode @ 0x1402CAD20 (MiRepurposeDecayNode.c)
 *     MiRebuildStandbyLookasideList @ 0x1402CB3C4 (MiRebuildStandbyLookasideList.c)
 *     MiSearchChannelTable @ 0x1402CBEE8 (MiSearchChannelTable.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiUnlinkStandbyPage @ 0x1402F9C20 (MiUnlinkStandbyPage.c)
 *     MiAcquirePageListLock @ 0x1402FB4C0 (MiAcquirePageListLock.c)
 *     MiReplaceStandbyLookaside @ 0x1402FBC30 (MiReplaceStandbyLookaside.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402FC2A0 (MiFindSuitableLookasideReplacement.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 *     MiReleasePageListLock @ 0x140369F10 (MiReleasePageListLock.c)
 *     MiDiscardTransitionPfnEx @ 0x140369FE0 (MiDiscardTransitionPfnEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetExtendedStandbyPage @ 0x140703824 (MiGetExtendedStandbyPage.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // rbx
  ULONG_PTR v7; // r13
  char v8; // cl
  __int64 v9; // rsi
  ULONG_PTR v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // r9d
  int v16; // r8d
  char v17; // cl
  unsigned int v18; // ecx
  int v19; // ecx
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8
  __int64 v27; // rbx
  unsigned __int8 v28; // si
  unsigned int v29; // r15d
  volatile signed __int32 *v30; // rdi
  int v31; // ecx
  int v32; // ecx
  unsigned __int8 v33; // bl
  __int64 CurrentIrql; // rax
  unsigned __int64 v36; // rdx
  unsigned int Number; // esi
  unsigned int i; // ecx
  __int64 v39; // r10
  unsigned int v40; // r12d
  __int64 v41; // r12
  unsigned __int64 v42; // rdx
  int v43; // r8d
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // r13
  unsigned int v49; // eax
  unsigned int v50; // esi
  __int64 v51; // rbx
  unsigned int v52; // esi
  unsigned __int8 v53; // r8
  int v54; // ecx
  __int64 v55; // r10
  int v56; // r12d
  __int64 v57; // r11
  int v58; // edi
  __int64 v59; // r9
  __int64 v60; // r13
  unsigned int v61; // esi
  _QWORD *v62; // rcx
  __int64 v63; // rax
  ULONG_PTR v64; // rsi
  __int64 v65; // rcx
  __int64 v66; // rax
  ULONG_PTR v67; // rdx
  unsigned __int64 v68; // r15
  __int64 v69; // rcx
  unsigned __int8 v70; // cl
  int v71; // eax
  bool v72; // zf
  __int64 v73; // rsi
  char v74; // r12
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r8
  BOOL v78; // eax
  __int64 v79; // rdi
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned __int8 v83; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v84; // [rsp+31h] [rbp-CFh]
  int v85; // [rsp+34h] [rbp-CCh]
  unsigned int v86; // [rsp+38h] [rbp-C8h] BYREF
  int v87; // [rsp+3Ch] [rbp-C4h]
  __int64 v88; // [rsp+40h] [rbp-C0h]
  int v89; // [rsp+48h] [rbp-B8h]
  __int64 v90; // [rsp+50h] [rbp-B0h]
  __int64 v91; // [rsp+58h] [rbp-A8h]
  unsigned int v92; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v93; // [rsp+68h] [rbp-98h]
  unsigned __int64 v94; // [rsp+70h] [rbp-90h]
  __int64 v95; // [rsp+78h] [rbp-88h]
  unsigned int v96; // [rsp+80h] [rbp-80h]
  __int64 v97; // [rsp+88h] [rbp-78h]
  ULONG_PTR v98; // [rsp+90h] [rbp-70h]
  __int64 v99; // [rsp+98h] [rbp-68h]
  __int64 v100; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v101; // [rsp+A8h] [rbp-58h]
  __int128 v102; // [rsp+D0h] [rbp-30h]
  _OWORD v103[7]; // [rsp+E0h] [rbp-20h] BYREF

  v88 = a1;
  v92 = a3;
  v3 = a2;
  v96 = a2;
  v4 = a3;
  v100 = 0LL;
  v5 = a1;
  v89 = 0;
  v85 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 17;
  v99 = -1LL;
  v9 = -1LL;
  v101 = -1LL;
  v10 = -1LL;
  memset(v103, 0, 104);
  v95 = -239LL;
  v11 = 0;
  v12 = 1LL;
  if ( !v3 )
    goto LABEL_6;
  v13 = 0x3FFFFFFFFFLL;
LABEL_3:
  v7 = v5 + 88LL * v11 + 3648;
  v98 = v7;
  if ( *(_QWORD *)v7 == 0x3FFFFFFFFFLL )
    goto LABEL_4;
  memset(v103, 0, 104);
  if ( v8 == 17 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v95 = CurrentIrql;
    if ( (_BYTE)CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v13) = 2;
      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, v13);
      v5 = v88;
    }
  }
  MiGetExtendedStandbyPage(v5, v4, v5, &v100);
  v36 = ((unsigned __int64)v11 << 9) + v88 + 8128;
  LODWORD(v90) = 0;
  Number = KeGetPcr()->Prcb.Number;
  LODWORD(v91) = 0;
  v94 = v36;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x40 )
  {
    Number &= 0x3Fu;
  }
  else
  {
    if ( 0x40 / (unsigned int)KeNumberProcessors_0 > 1 )
      Number *= 0x40 / (unsigned int)KeNumberProcessors_0;
    v36 = v94;
  }
  for ( i = 0; ; ++i )
  {
    v86 = i;
    if ( i >= 0x40 )
      break;
    v10 = *(_QWORD *)(v36 + 8LL * Number);
    if ( v10 == -1LL )
      goto LABEL_68;
    v97 = 48 * v10;
    v39 = 48 * v10 - 0x220000000000LL;
    v40 = 0;
    v93 = v39;
LABEL_70:
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
    {
      while ( 1 )
      {
        if ( (++v40 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v40);
            v39 = v93;
            goto LABEL_98;
          }
          v39 = v93;
        }
        _mm_pause();
LABEL_98:
        if ( *(__int64 *)(v39 + 24) >= 0 )
          goto LABEL_70;
      }
    }
    v36 = v94;
    if ( *(_QWORD *)(v94 + 8LL * Number) != v10 )
      goto LABEL_181;
    v41 = v97;
    if ( !byte_140E3BD26 )
    {
      v43 = 9;
LABEL_141:
      v87 = v43;
      goto LABEL_75;
    }
    v42 = (unsigned __int64)(v97 / 48) >> 9;
    if ( *(_BYTE *)(qword_140E3D0C0 + 2 * v42) )
    {
      v43 = *(unsigned __int8 *)(qword_140E3D0C0 + 2 * v42) - 1;
      goto LABEL_141;
    }
    v87 = 9;
    v43 = 9;
LABEL_75:
    v7 = v98;
    if ( (unsigned int)MiAcquirePageListLock(v98, v39, v43, v90, (__int64)v103) )
    {
      v102 = 0LL;
      if ( v10 < qword_140E347B0 || v10 >= qword_140E347B0 + 2048 )
      {
        v44 = *(_QWORD *)(v41 - 0x21FFFFFFFFF0LL);
        if ( (v44 & 0x400) != 0 )
        {
          if ( (v44 & 8) == 0 )
            goto LABEL_79;
        }
        else if ( (v44 & 0x10000000) == 0 )
        {
          goto LABEL_79;
        }
      }
      v48 = v93;
      v94 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v93 + 40) >> 43) & 0x3FFLL));
      v49 = MiPageToNode(v10);
      v50 = *(_DWORD *)(v48 + 32);
      v51 = v49;
      if ( (*(_QWORD *)(v48 + 40) & 0x20000000000000LL) != 0 )
        goto LABEL_182;
      if ( (*(_DWORD *)(v48 + 32) & 0x8000000) == 0 )
      {
LABEL_107:
        v52 = HIBYTE(v50) & 7;
        goto LABEL_108;
      }
      if ( v48 < 0xFFFFDE0000000000uLL || v48 >= 48 * qword_140E2D7A0 - 0x21FFFFFFFFD0LL || MiIsDecayPfn(v41 / 48) )
      {
LABEL_182:
        v52 = 5;
      }
      else
      {
        if ( (v50 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v48) != 9 )
          goto LABEL_107;
        v52 = 5;
      }
LABEL_108:
      if ( qword_140E2D6E8 )
        v53 = *((_BYTE *)MiSearchChannelTable(v10) + 12);
      else
        v53 = 0;
      v54 = v87;
      v84 = v53;
      if ( v87 < 9 )
      {
        if ( v87 == 8 )
          v83 = *(_BYTE *)(qword_140E3D0C0 + 2 * ((unsigned __int64)(v41 / 48) >> 9) + 1) & 0x7F;
        else
          v83 = 0;
      }
      else
      {
        v83 = BYTE8(v102);
      }
      v55 = v52;
      v56 = 0;
      v91 = v52;
      v57 = v87;
      v90 = v87;
      v58 = v48;
      do
      {
        if ( v56 )
        {
          if ( v56 == 1 )
          {
            v60 = (v55 << 9) + v94 + 12224;
          }
          else
          {
            v59 = *(_QWORD *)(v94 + 16);
            if ( v54 < 9 )
            {
              v70 = 0;
              if ( v57 == 8 )
                v70 = v83;
              v60 = *(_QWORD *)(232 * v57 + v59 + 56320 * v51 + 14816) + ((v55 + 8LL * v70) << 9);
            }
            else
            {
              v60 = v59 + ((v55 + 110 * v51 + 8LL * v53) << 9) + 5568;
            }
          }
        }
        else
        {
          v60 = (v55 << 9) + v94 + 8128;
        }
        v61 = 0;
        v62 = (_QWORD *)v60;
        while ( *v62 != v10 )
        {
          ++v61;
          ++v62;
          if ( v61 >= 0x40 )
          {
            if ( v61 == 64 )
              goto LABEL_121;
            break;
          }
        }
        if ( !(unsigned int)MiFindSuitableLookasideReplacement(v56, v60, v61, v58, LOBYTE(v103[0])) )
        {
          v63 = v61;
          v64 = *(_QWORD *)(v60 + 8LL * v61);
          *(_QWORD *)(v60 + 8 * v63) = -1LL;
          if ( v64 != -1LL && (v64 < qword_140E347B0 || v64 >= qword_140E347B0 + 2048) )
          {
            v97 = 48 * v64;
            v65 = *(_QWORD *)(48 * v64 - 0x21FFFFFFFFF0LL);
            v66 = -9LL;
            if ( (v65 & 0x400) == 0 )
              v66 = -268435457LL;
            v93 = v65 & v66;
            MiPageToNode(v64);
            if ( qword_140E2D6E8 )
              MiSearchChannelTable(v64);
            *(_QWORD *)(v97 - 0x21FFFFFFFFF0LL) = v93;
          }
        }
        v57 = v90;
        v55 = v91;
LABEL_121:
        v54 = v87;
        ++v56;
        v53 = v84;
      }
      while ( v56 < 3 );
      v4 = v92;
      v7 = v98;
      goto LABEL_79;
    }
    v71 = v90;
    v39 = v93;
    v72 = (_DWORD)v91 == 7;
    v36 = v94;
    LODWORD(v91) = v91 + 1;
    if ( v72 )
      v71 = 1;
    LODWORD(v90) = v71;
LABEL_181:
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    i = v86 - 1;
    LOBYTE(Number) = Number - 1;
LABEL_68:
    v7 = v98;
    Number = ((_BYTE)Number + 1) & 0x3F;
  }
  v5 = v88;
  while ( 1 )
  {
    v10 = *(_QWORD *)v7;
    v13 = 0x3FFFFFFFFFLL;
    if ( *(_QWORD *)v7 == 0x3FFFFFFFFFLL )
    {
      v10 = -1LL;
LABEL_160:
      v11 = v85;
      v8 = v95;
LABEL_4:
      v85 = ++v11;
      if ( v11 >= v96 )
        goto LABEL_5;
      goto LABEL_3;
    }
    v73 = 48 * v10 - 0x220000000000LL;
    v86 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v73 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v86);
      while ( *(__int64 *)(v73 + 24) < 0 );
    }
    v5 = v88;
    if ( (*(_BYTE *)(v73 + 34) & 7) == 2 && ((*(_QWORD *)(v73 + 40) >> 43) & 0x3FF) == *(_WORD *)v88 )
      break;
LABEL_188:
    _InterlockedAnd64((volatile signed __int64 *)(48 * v10 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
  if ( v10 != *(_QWORD *)v7 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
    v5 = v88;
    goto LABEL_188;
  }
  MiRebuildStandbyLookasideList(48 * v10 - 0x220000000000LL, 0, 1);
  if ( !MiIsDecayPfn(v10) )
    MiGetPfnSlabType(48 * v10 - 0x220000000000LL);
  MiReplaceStandbyLookaside(v10);
  if ( MiIsDecayPfn(v10) )
  {
    v67 = v10;
    v68 = *(_QWORD *)(v73 + 16);
    if ( qword_140E2D740 && (v68 & 0x10) == 0 )
      v68 &= qword_140E2D748;
    v10 = (v68 >> 12) & 0xFFFFFFFFFFLL;
    v69 = 48 * v10 - 0x220000000000LL;
    if ( v10 == v67 )
    {
      MiRepurposeDecayNode((PSLIST_ENTRY)v73);
    }
    else if ( !_interlockedbittestandset64((volatile signed __int32 *)(v69 + 24), 0x3FuLL) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiGetPfnSlabType(v69);
      MiReplaceStandbyLookaside(v10);
      goto LABEL_158;
    }
    v10 = -1LL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
    _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v13 = 0x3FFFFFFFFFLL;
    v7 = v98;
    v11 = v85 - 1;
    v5 = v88;
    v8 = v95;
    goto LABEL_4;
  }
LABEL_158:
  if ( v10 == -1LL )
  {
    v5 = v88;
    v13 = 0x3FFFFFFFFFLL;
    goto LABEL_160;
  }
LABEL_79:
  v6 = 48 * v10 - 0x220000000000LL;
  if ( byte_140E3BD26 )
  {
    v45 = (unsigned __int64)((__int64)(48 * v10) / 48) >> 9;
    if ( *(_BYTE *)(qword_140E3D0C0 + 2 * v45) )
    {
      if ( *(_BYTE *)(qword_140E3D0C0 + 2 * v45) != 10 )
      {
        if ( LOBYTE(v103[0]) )
        {
          if ( BYTE8(v103[1]) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)&v103[1] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
            BYTE8(v103[1]) = 0;
          }
          if ( LOBYTE(v103[3]) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v103[2] + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
            LOBYTE(v103[3]) = 0;
          }
          if ( BYTE8(v103[4]) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)&v103[4] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
            BYTE8(v103[4]) = 0;
          }
          if ( LOBYTE(v103[6]) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v103[5] + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
            LOBYTE(v103[6]) = 0;
          }
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
        }
        if ( (MiUnlinkPageFromListEx(48 * v10 - 0x220000000000LL, 0) & 3) != 0 )
        {
          MiDiscardTransitionPfnEx(48 * v10 - 0x220000000000LL, 0LL, v46, v47);
        }
        else
        {
          if ( (*(_QWORD *)(v6 + 40) & 0x20000000000000LL) == 0 )
            *(_DWORD *)(v6 + 32) &= 0xF8FFFFFF;
          MiInsertPageInList(48 * v10 - 0x220000000000LL, 0x800u);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v13 = 0x3FFFFFFFFFLL;
        v5 = v88;
        v11 = v85 - 1;
        v8 = v95;
        goto LABEL_4;
      }
    }
  }
LABEL_5:
  v9 = v101;
  v12 = 1LL;
  v11 = v85;
  v3 = v96;
LABEL_6:
  if ( v11 != v3 )
  {
    if ( v9 == -1
      || (*(_DWORD *)(v6 + 32) & 0xC00000) != 0x400000
      || (unsigned int)MiGetPagePrivilege((_QWORD *)v6, 1LL, 0LL)
      || (v14 = *(_QWORD *)(v6 + 16), (v14 & 0x400) == 0)
      && (((v14 >> 3) & 1) == 0
       || (unsigned __int16)v14 >> 12 == *(_DWORD *)(v88 + 1300)
       || _bittest16(
            (const signed __int16 *)(*(_QWORD *)(v88 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v6 + 16)) >> 4) + 22304)
                                   + 172LL),
            0xBu)) )
    {
      v15 = MiUnlinkStandbyPage(v88, (char *)v103, v7, v10, v4);
      v12 = *(_QWORD *)(v6 + 16) & 0x400LL;
      v16 = 0;
      v17 = BYTE2(*(_QWORD *)(v6 + 16));
      if ( v12 )
        v17 = *(_QWORD *)(v6 + 16) >> 2;
      if ( (v17 & 1) != 0 )
        v16 = 1;
      v89 = v16;
    }
    else
    {
      v74 = MiUnlinkPageFromListEx(v6, (LOBYTE(v103[0]) != 0) + 1);
      MiReleasePageListLock(v7, v103, v75, v76);
      if ( (v74 & 3) != 0 )
      {
        MiRestoreTransitionPte(v6, 0, v77);
        v78 = (v74 & 2) == 0 || (v4 & 0x200) != 0;
      }
      else
      {
        v79 = 48 * v9 - 0x220000000000LL;
        v92 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v79 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v92);
          while ( *(__int64 *)(v79 + 24) < 0 );
        }
        v80 = MiReplaceTransitionPage(v6, 48 * v9 - 0x220000000000LL, 9LL, 3);
        v81 = 48 * v9 - 0x220000000000LL;
        if ( v80 )
        {
          MiInsertPageInList(v81, 4u);
          _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          MiReturnFreeZeroPage(v81, 0);
          _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiRestoreTransitionPte(v6, 0, v82);
        }
        v9 = -1LL;
        v78 = 1;
      }
      v15 = v78;
      v16 = 0;
    }
    v18 = *(_DWORD *)(v6 + 32) & 0xD7C7FFFF;
    *(_QWORD *)(v6 + 40) &= ~0x8000000000000000uLL;
    *(_DWORD *)(v6 + 32) = v18;
    v19 = 0;
    if ( (*(_QWORD *)(v6 + 40) & 0x10000000000LL) != 0 )
      v19 = *(_DWORD *)(v6 + 36) & 0x18000000;
    *(_DWORD *)(v6 + 36) = v19;
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 32) = *(_DWORD *)(v6 + 32) & 0xFFF8FFFF | 0x50000;
    *(_QWORD *)(v6 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v20 = *(_QWORD *)(v6 + 16);
    if ( v20 )
    {
      v21 = v20 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    else
    {
      v12 = qword_140E2D740;
      v21 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      if ( qword_140E2D740 )
      {
        v22 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x90;
        if ( (qword_140E2D740 & v21) == 0 )
          v22 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC9FuLL | qword_140E2D740 | 0x80;
        v16 = v89;
        v21 = v22;
      }
    }
    *(_QWORD *)(v6 + 16) = v21;
    if ( v16 )
    {
      v23 = *(_QWORD *)(v6 + 16);
      if ( v23 )
      {
        if ( qword_140E2D740 )
        {
          v12 = v23 & qword_140E2D748;
          LODWORD(v23) = v23 & 0xFFFFFFEF;
          if ( (*(_QWORD *)(v6 + 16) & 0x10) == 0 )
            LODWORD(v23) = v12;
        }
      }
      else
      {
        LODWORD(v23) = 0;
      }
      v24 = (unsigned int)v23;
      v25 = (unsigned int)v23 | 0xFFFFFFFD00000000uLL;
      if ( qword_140E2D740 )
      {
        v12 = v24 | qword_140E2D740 | 0xFFFFFFFD00000000uLL;
        v26 = v24 | 0xFFFFFFFD00000010uLL;
        if ( (qword_140E2D740 & v25) == 0 )
          v26 = v12;
        v25 = v26;
      }
      *(_QWORD *)(v6 + 16) = v25;
    }
    if ( v15 )
      v99 = v10;
    else
      MiReturnFreeZeroPage(v6, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v9 != -1 )
  {
    v27 = 48 * v9;
    v28 = KeGetCurrentIrql();
    if ( v28 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = 2;
      KiRaiseIrqlProcessIrqlFlags(v28, v12);
    }
    v29 = 0;
    v30 = (volatile signed __int32 *)(v27 - 0x21FFFFFFFFE8LL);
    while ( _interlockedbittestandset64(v30, 0x3FuLL) )
    {
      do
      {
        if ( (++v29 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v29);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v30 < 0 );
    }
    if ( (*(_BYTE *)(v27 - 0x21FFFFFFFFDELL) & 7) == 6 )
      *(_DWORD *)(v27 - 0x21FFFFFFFFE0LL) = *(_DWORD *)(v27 - 0x21FFFFFFFFE0LL) & 0xFFF8FFFF | 0x50000;
    v31 = *(_DWORD *)(v27 - 0x21FFFFFFFFE0LL);
    *(_QWORD *)(v27 - 0x21FFFFFFFFD8LL) &= ~0x8000000000000000uLL;
    *(_DWORD *)(v27 - 0x21FFFFFFFFE0LL) = v31 & 0xD7C7FFFF;
    v32 = 0;
    if ( (*(_QWORD *)(v27 - 0x21FFFFFFFFD8LL) & 0x10000000000LL) != 0 )
      v32 = *(_DWORD *)(v27 - 0x21FFFFFFFFDCLL) & 0x18000000;
    *(_DWORD *)(v27 - 0x21FFFFFFFFDCLL) = v32;
    *(_DWORD *)(v27 - 0x21FFFFFFFFE0LL) &= ~0x10000000u;
    *(_QWORD *)(v27 - 0x21FFFFFFFFE8LL) &= 0xC000000000000000uLL;
    *(_DWORD *)(v27 - 0x21FFFFFFFFE0LL) &= 0xFFFF0000;
    MiInsertPageInFreeOrZeroedList(v27 / 48);
    _InterlockedAnd64((volatile signed __int64 *)v30, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28);
    __writecr8(v28);
  }
  v33 = v95;
  if ( (_BYTE)v95 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v95);
    __writecr8(v33);
  }
  return v99;
}
