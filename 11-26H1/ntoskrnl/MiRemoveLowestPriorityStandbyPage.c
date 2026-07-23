/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x1402DC490
 * Callers:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x1402AA540 (MiPruneStandbyPages.c)
 *     MiPurgePartitionStandby @ 0x140461F1C (MiPurgePartitionStandby.c)
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiReplaceTransitionPage @ 0x1402931E8 (MiReplaceTransitionPage.c)
 *     MiReturnFreeZeroPage @ 0x1402A9A90 (MiReturnFreeZeroPage.c)
 *     MiRepurposeDecayNode @ 0x1402ACAE0 (MiRepurposeDecayNode.c)
 *     MiRebuildStandbyLookasideList @ 0x1402AD184 (MiRebuildStandbyLookasideList.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiUnlinkStandbyPage @ 0x1402DBCA0 (MiUnlinkStandbyPage.c)
 *     MiAcquirePageListLock @ 0x1402DD540 (MiAcquirePageListLock.c)
 *     MiReplaceStandbyLookaside @ 0x1402DDCB0 (MiReplaceStandbyLookaside.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402DE320 (MiFindSuitableLookasideReplacement.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReleasePageListLock @ 0x14036BCB0 (MiReleasePageListLock.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetExtendedStandbyPage @ 0x1407084F4 (MiGetExtendedStandbyPage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // rbx
  ULONG_PTR v7; // r13
  signed __int64 v8; // rcx
  __int64 v9; // rsi
  ULONG_PTR v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // r9d
  char v16; // cl
  unsigned int v17; // ecx
  int v18; // ecx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  unsigned __int8 v24; // si
  unsigned int v25; // r15d
  volatile signed __int32 *v26; // rdi
  int v27; // ecx
  int v28; // ecx
  unsigned __int8 v29; // bl
  __int64 CurrentIrql; // rax
  unsigned __int64 v32; // rdx
  unsigned int Number; // esi
  unsigned int i; // ecx
  __int64 v35; // rcx
  __int64 v36; // r10
  unsigned int v37; // r12d
  __int64 v38; // r12
  unsigned __int64 v39; // rdx
  int v40; // r8d
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // r13
  unsigned int v46; // eax
  unsigned int v47; // esi
  __int64 v48; // rbx
  unsigned int v49; // esi
  int v50; // ecx
  __int64 v51; // r10
  int v52; // r12d
  __int64 v53; // r11
  int v54; // edi
  __int64 v55; // r9
  __int64 v56; // r13
  unsigned int v57; // esi
  _QWORD *v58; // rcx
  __int64 v59; // rax
  ULONG_PTR v60; // rsi
  __int64 v61; // rcx
  __int64 v62; // rax
  ULONG_PTR v63; // rdx
  unsigned __int64 v64; // r15
  __int64 v65; // rcx
  unsigned __int8 v66; // cl
  int v67; // eax
  bool v68; // zf
  __int64 v69; // rsi
  char v70; // r12
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r8
  BOOL v74; // eax
  __int64 v75; // rdi
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // r8
  unsigned __int8 v79; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v80; // [rsp+31h] [rbp-CFh]
  int v81; // [rsp+34h] [rbp-CCh]
  unsigned int v82; // [rsp+38h] [rbp-C8h] BYREF
  int v83; // [rsp+3Ch] [rbp-C4h]
  __int64 v84; // [rsp+40h] [rbp-C0h]
  unsigned int v85; // [rsp+48h] [rbp-B8h]
  __int64 v86; // [rsp+50h] [rbp-B0h]
  __int64 v87; // [rsp+58h] [rbp-A8h]
  unsigned int v88; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v89; // [rsp+68h] [rbp-98h]
  unsigned __int64 v90; // [rsp+70h] [rbp-90h]
  __int64 v91; // [rsp+78h] [rbp-88h]
  unsigned int v92; // [rsp+80h] [rbp-80h]
  __int64 v93; // [rsp+88h] [rbp-78h]
  ULONG_PTR v94; // [rsp+90h] [rbp-70h]
  __int64 v95; // [rsp+98h] [rbp-68h]
  __int64 v96; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v97; // [rsp+A8h] [rbp-58h]
  __int128 v98; // [rsp+D0h] [rbp-30h]
  _OWORD v99[7]; // [rsp+E0h] [rbp-20h] BYREF

  v84 = a1;
  v88 = a3;
  v3 = a2;
  v92 = a2;
  v4 = a3;
  v96 = 0LL;
  v5 = a1;
  v85 = 0;
  v81 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = -239LL;
  v95 = -1LL;
  v9 = -1LL;
  v97 = -1LL;
  v10 = -1LL;
  memset(v99, 0, 104);
  v91 = -239LL;
  v11 = 0;
  v12 = 1LL;
  if ( !v3 )
    goto LABEL_6;
  v13 = 0x3FFFFFFFFFLL;
LABEL_3:
  v7 = v5 + 88LL * v11 + 3648;
  v94 = v7;
  if ( *(_QWORD *)v7 == 0x3FFFFFFFFFLL )
    goto LABEL_4;
  memset(v99, 0, 104);
  if ( (_BYTE)v8 == 17 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v91 = CurrentIrql;
    if ( (_BYTE)CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v13) = 2;
      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, v13);
      v5 = v84;
    }
  }
  MiGetExtendedStandbyPage(v5, v4, v5, &v96);
  v32 = ((unsigned __int64)v11 << 9) + v84 + 8128;
  LODWORD(v86) = 0;
  Number = KeGetPcr()->Prcb.Number;
  LODWORD(v87) = 0;
  v90 = v32;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x40 )
  {
    Number &= 0x3Fu;
  }
  else
  {
    if ( 0x40 / (unsigned int)KeNumberProcessors_0 > 1 )
      Number *= 0x40 / (unsigned int)KeNumberProcessors_0;
    v32 = v90;
  }
  for ( i = 0; ; ++i )
  {
    v82 = i;
    if ( i >= 0x40 )
      break;
    v10 = *(_QWORD *)(v32 + 8LL * Number);
    if ( v10 == -1LL )
      goto LABEL_68;
    v35 = 48 * v10;
    v93 = 48 * v10;
    v36 = 48 * v10 - 0x220000000000LL;
    v37 = 0;
    v89 = v36;
LABEL_70:
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
    {
      while ( 1 )
      {
        if ( (++v37 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v35, v32, v5) )
          {
            HvlNotifyLongSpinWait(v37);
            v36 = v89;
            goto LABEL_98;
          }
          v36 = v89;
        }
        _mm_pause();
LABEL_98:
        if ( *(__int64 *)(v36 + 24) >= 0 )
          goto LABEL_70;
      }
    }
    v32 = v90;
    if ( *(_QWORD *)(v90 + 8LL * Number) != v10 )
      goto LABEL_181;
    v38 = v93;
    if ( !byte_140E3BEA6 )
    {
      v40 = 9;
LABEL_141:
      v83 = v40;
      goto LABEL_75;
    }
    v39 = (unsigned __int64)(v93 / 48) >> 9;
    if ( *(_BYTE *)(qword_140E3D240 + 2 * v39) )
    {
      v40 = *(unsigned __int8 *)(qword_140E3D240 + 2 * v39) - 1;
      goto LABEL_141;
    }
    v83 = 9;
    v40 = 9;
LABEL_75:
    v7 = v94;
    if ( (unsigned int)MiAcquirePageListLock(v94, v36, v40, v86, (__int64)v99) )
    {
      v98 = 0LL;
      if ( v10 < qword_140E34930 || v10 >= qword_140E34930 + 2048 )
      {
        v41 = *(_QWORD *)(v38 - 0x21FFFFFFFFF0LL);
        if ( (v41 & 0x400) != 0 )
        {
          if ( (v41 & 8) == 0 )
            goto LABEL_79;
        }
        else if ( (v41 & 0x10000000) == 0 )
        {
          goto LABEL_79;
        }
      }
      v45 = v89;
      v90 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v89 + 40) >> 43) & 0x3FFLL));
      v46 = MiPageToNode(v10);
      v47 = *(_DWORD *)(v45 + 32);
      v48 = v46;
      if ( (*(_QWORD *)(v45 + 40) & 0x20000000000000LL) != 0 )
        goto LABEL_182;
      if ( (*(_DWORD *)(v45 + 32) & 0x8000000) == 0 )
      {
LABEL_107:
        v49 = HIBYTE(v47) & 7;
        goto LABEL_108;
      }
      if ( v45 < 0xFFFFDE0000000000uLL || v45 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL || MiIsDecayPfn(v38 / 48) )
      {
LABEL_182:
        v49 = 5;
      }
      else
      {
        if ( (v47 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v45) != 9 )
          goto LABEL_107;
        v49 = 5;
      }
LABEL_108:
      if ( qword_140E2D868 )
        LOBYTE(v5) = *((_BYTE *)MiSearchChannelTable(v10) + 12);
      else
        LOBYTE(v5) = 0;
      v50 = v83;
      v80 = v5;
      if ( v83 < 9 )
      {
        if ( v83 == 8 )
          v79 = *(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)(v38 / 48) >> 9) + 1) & 0x7F;
        else
          v79 = 0;
      }
      else
      {
        v79 = BYTE8(v98);
      }
      v51 = v49;
      v52 = 0;
      v87 = v49;
      v53 = v83;
      v86 = v83;
      v54 = v45;
      do
      {
        if ( v52 )
        {
          if ( v52 == 1 )
          {
            v56 = (v51 << 9) + v90 + 12224;
          }
          else
          {
            v55 = *(_QWORD *)(v90 + 16);
            if ( v50 < 9 )
            {
              v66 = 0;
              if ( v53 == 8 )
                v66 = v79;
              v56 = *(_QWORD *)(232 * v53 + v55 + 56320 * v48 + 14816) + ((v51 + 8LL * v66) << 9);
            }
            else
            {
              v56 = v55 + ((v51 + 110 * v48 + 8LL * (unsigned __int8)v5) << 9) + 5568;
            }
          }
        }
        else
        {
          v56 = (v51 << 9) + v90 + 8128;
        }
        v57 = 0;
        v58 = (_QWORD *)v56;
        while ( *v58 != v10 )
        {
          ++v57;
          ++v58;
          if ( v57 >= 0x40 )
          {
            if ( v57 == 64 )
              goto LABEL_121;
            break;
          }
        }
        if ( !(unsigned int)MiFindSuitableLookasideReplacement(v52, v56, v57, v54, LOBYTE(v99[0])) )
        {
          v59 = v57;
          v60 = *(_QWORD *)(v56 + 8LL * v57);
          *(_QWORD *)(v56 + 8 * v59) = -1LL;
          if ( v60 != -1LL && (v60 < qword_140E34930 || v60 >= qword_140E34930 + 2048) )
          {
            v93 = 48 * v60;
            v61 = *(_QWORD *)(48 * v60 - 0x21FFFFFFFFF0LL);
            v62 = -9LL;
            if ( (v61 & 0x400) == 0 )
              v62 = -268435457LL;
            v89 = v61 & v62;
            MiPageToNode(v60);
            if ( qword_140E2D868 )
              MiSearchChannelTable(v60);
            *(_QWORD *)(v93 - 0x21FFFFFFFFF0LL) = v89;
          }
        }
        v53 = v86;
        v51 = v87;
LABEL_121:
        v50 = v83;
        ++v52;
        v5 = v80;
      }
      while ( v52 < 3 );
      v4 = v88;
      v7 = v94;
      goto LABEL_79;
    }
    v67 = v86;
    v36 = v89;
    v68 = (_DWORD)v87 == 7;
    v32 = v90;
    LODWORD(v87) = v87 + 1;
    if ( v68 )
      v67 = 1;
    LODWORD(v86) = v67;
LABEL_181:
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    i = v82 - 1;
    LOBYTE(Number) = Number - 1;
LABEL_68:
    v7 = v94;
    Number = ((_BYTE)Number + 1) & 0x3F;
  }
  v5 = v84;
  while ( 1 )
  {
    v10 = *(_QWORD *)v7;
    v13 = 0x3FFFFFFFFFLL;
    if ( *(_QWORD *)v7 == 0x3FFFFFFFFFLL )
    {
      v10 = -1LL;
LABEL_160:
      v11 = v81;
      v8 = v91;
LABEL_4:
      v81 = ++v11;
      if ( v11 >= v92 )
        goto LABEL_5;
      goto LABEL_3;
    }
    v69 = 48 * v10 - 0x220000000000LL;
    v82 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v69 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v82);
      while ( *(__int64 *)(v69 + 24) < 0 );
    }
    v5 = v84;
    if ( (*(_BYTE *)(v69 + 34) & 7) == 2 && ((*(_QWORD *)(v69 + 40) >> 43) & 0x3FF) == *(_WORD *)v84 )
      break;
LABEL_188:
    _InterlockedAnd64((volatile signed __int64 *)(48 * v10 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
  if ( v10 != *(_QWORD *)v7 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
    v5 = v84;
    goto LABEL_188;
  }
  MiRebuildStandbyLookasideList(48 * v10 - 0x220000000000LL, 0, 1);
  if ( !MiIsDecayPfn(v10) )
    MiGetPfnSlabType(48 * v10 - 0x220000000000LL);
  MiReplaceStandbyLookaside(v10);
  if ( MiIsDecayPfn(v10) )
  {
    v63 = v10;
    v64 = *(_QWORD *)(v69 + 16);
    if ( qword_140E2D8C0 && (v64 & 0x10) == 0 )
      v64 &= qword_140E2D8C8;
    v10 = (v64 >> 12) & 0xFFFFFFFFFFLL;
    v65 = 48 * v10 - 0x220000000000LL;
    if ( v10 == v63 )
    {
      MiRepurposeDecayNode((PSLIST_ENTRY)v69);
    }
    else if ( !_interlockedbittestandset64((volatile signed __int32 *)(v65 + 24), 0x3FuLL) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiGetPfnSlabType(v65);
      MiReplaceStandbyLookaside(v10);
      goto LABEL_158;
    }
    v10 = -1LL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
    _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v13 = 0x3FFFFFFFFFLL;
    v7 = v94;
    v11 = v81 - 1;
    v5 = v84;
    v8 = v91;
    goto LABEL_4;
  }
LABEL_158:
  if ( v10 == -1LL )
  {
    v5 = v84;
    v13 = 0x3FFFFFFFFFLL;
    goto LABEL_160;
  }
LABEL_79:
  v8 = 48 * v10;
  v6 = 48 * v10 - 0x220000000000LL;
  if ( byte_140E3BEA6 )
  {
    v42 = (unsigned __int64)(v8 / 48) >> 9;
    v8 = *(unsigned __int8 *)(qword_140E3D240 + 2 * v42);
    if ( *(_BYTE *)(qword_140E3D240 + 2 * v42) )
    {
      if ( (_DWORD)v8 != 10 )
      {
        if ( LOBYTE(v99[0]) )
        {
          if ( BYTE8(v99[1]) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)&v99[1] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
            BYTE8(v99[1]) = 0;
          }
          if ( LOBYTE(v99[3]) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v99[2] + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
            LOBYTE(v99[3]) = 0;
          }
          if ( BYTE8(v99[4]) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)&v99[4] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
            BYTE8(v99[4]) = 0;
          }
          if ( LOBYTE(v99[6]) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v99[5] + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
            LOBYTE(v99[6]) = 0;
          }
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
        }
        if ( (MiUnlinkPageFromListEx(48 * v10 - 0x220000000000LL, 0) & 3) != 0 )
        {
          MiDiscardTransitionPfnEx(48 * v10 - 0x220000000000LL, 0LL, v43, v44);
        }
        else
        {
          if ( (*(_QWORD *)(v6 + 40) & 0x20000000000000LL) == 0 )
            *(_DWORD *)(v6 + 32) &= 0xF8FFFFFF;
          MiInsertPageInList(48 * v10 - 0x220000000000LL, 0x800u);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v13 = 0x3FFFFFFFFFLL;
        v5 = v84;
        v11 = v81 - 1;
        v8 = v91;
        goto LABEL_4;
      }
    }
  }
LABEL_5:
  v9 = v97;
  v12 = 1LL;
  v11 = v81;
  v3 = v92;
LABEL_6:
  if ( v11 != v3 )
  {
    if ( v9 == -1
      || (*(_DWORD *)(v6 + 32) & 0xC00000) != 0x400000
      || (unsigned int)MiGetPagePrivilege((_QWORD *)v6, 1LL, 0LL)
      || (v14 = *(_QWORD *)(v6 + 16), (v14 & 0x400) == 0)
      && (((v14 >> 3) & 1) == 0
       || (unsigned __int16)v14 >> 12 == *(_DWORD *)(v84 + 1300)
       || _bittest16(
            (const signed __int16 *)(*(_QWORD *)(v84 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v6 + 16)) >> 4) + 22304)
                                   + 172LL),
            0xBu)) )
    {
      v15 = MiUnlinkStandbyPage(v84, (char *)v99, v7, v10, v4);
      v12 = *(_QWORD *)(v6 + 16) & 0x400LL;
      v5 = 0LL;
      v16 = BYTE2(*(_QWORD *)(v6 + 16));
      if ( v12 )
        v16 = *(_QWORD *)(v6 + 16) >> 2;
      if ( (v16 & 1) != 0 )
        v5 = 1LL;
      v85 = v5;
    }
    else
    {
      v70 = MiUnlinkPageFromListEx(v6, (LOBYTE(v99[0]) != 0) + 1);
      MiReleasePageListLock(v7, v99, v71, v72);
      if ( (v70 & 3) != 0 )
      {
        MiRestoreTransitionPte(v6, 0, v73);
        v74 = (v70 & 2) == 0 || (v4 & 0x200) != 0;
      }
      else
      {
        v75 = 48 * v9 - 0x220000000000LL;
        v88 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v75 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v88);
          while ( *(__int64 *)(v75 + 24) < 0 );
        }
        v76 = MiReplaceTransitionPage(v6, 48 * v9 - 0x220000000000LL, 9LL, 3);
        v77 = 48 * v9 - 0x220000000000LL;
        if ( v76 )
        {
          MiInsertPageInList(v77, 4u);
          _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          MiReturnFreeZeroPage(v77, 0);
          _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiRestoreTransitionPte(v6, 0, v78);
        }
        v9 = -1LL;
        v74 = 1;
      }
      v15 = v74;
      v5 = 0LL;
    }
    v17 = *(_DWORD *)(v6 + 32) & 0xD7C7FFFF;
    *(_QWORD *)(v6 + 40) &= ~0x8000000000000000uLL;
    *(_DWORD *)(v6 + 32) = v17;
    v18 = 0;
    if ( (*(_QWORD *)(v6 + 40) & 0x10000000000LL) != 0 )
      v18 = *(_DWORD *)(v6 + 36) & 0x18000000;
    *(_DWORD *)(v6 + 36) = v18;
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 32) = *(_DWORD *)(v6 + 32) & 0xFFF8FFFF | 0x50000;
    *(_QWORD *)(v6 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v19 = *(_QWORD *)(v6 + 16);
    if ( v19 )
    {
      v8 = v19 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    else
    {
      v12 = qword_140E2D8C0;
      v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      if ( qword_140E2D8C0 )
      {
        v20 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x90;
        if ( (qword_140E2D8C0 & v8) == 0 )
          v20 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC9FuLL | qword_140E2D8C0 | 0x80;
        v5 = v85;
        v8 = v20;
      }
    }
    *(_QWORD *)(v6 + 16) = v8;
    if ( (_DWORD)v5 )
    {
      v21 = *(_QWORD *)(v6 + 16);
      if ( v21 )
      {
        if ( qword_140E2D8C0 )
        {
          v12 = v21 & qword_140E2D8C8;
          LODWORD(v21) = v21 & 0xFFFFFFEF;
          if ( (*(_QWORD *)(v6 + 16) & 0x10) == 0 )
            LODWORD(v21) = v12;
        }
      }
      else
      {
        LODWORD(v21) = 0;
      }
      v8 = qword_140E2D8C0;
      v5 = (unsigned int)v21;
      v22 = (unsigned int)v21 | 0xFFFFFFFD00000000uLL;
      if ( qword_140E2D8C0 )
      {
        v12 = v5 | qword_140E2D8C0 | 0xFFFFFFFD00000000uLL;
        v5 |= 0xFFFFFFFD00000010uLL;
        if ( (qword_140E2D8C0 & v22) == 0 )
          v5 = v12;
        v22 = v5;
      }
      *(_QWORD *)(v6 + 16) = v22;
    }
    if ( v15 )
      v95 = v10;
    else
      MiReturnFreeZeroPage(v6, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v9 != -1 )
  {
    v23 = 48 * v9;
    v24 = KeGetCurrentIrql();
    if ( v24 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = 2;
      KiRaiseIrqlProcessIrqlFlags(v24, v12);
    }
    v25 = 0;
    v26 = (volatile signed __int32 *)(v23 - 0x21FFFFFFFFE8LL);
    while ( _interlockedbittestandset64(v26, 0x3FuLL) )
    {
      do
      {
        if ( (++v25 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, v12, v5) )
        {
          HvlNotifyLongSpinWait(v25);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v26 < 0 );
    }
    if ( (*(_BYTE *)(v23 - 0x21FFFFFFFFDELL) & 7) == 6 )
      *(_DWORD *)(v23 - 0x21FFFFFFFFE0LL) = *(_DWORD *)(v23 - 0x21FFFFFFFFE0LL) & 0xFFF8FFFF | 0x50000;
    v27 = *(_DWORD *)(v23 - 0x21FFFFFFFFE0LL);
    *(_QWORD *)(v23 - 0x21FFFFFFFFD8LL) &= ~0x8000000000000000uLL;
    *(_DWORD *)(v23 - 0x21FFFFFFFFE0LL) = v27 & 0xD7C7FFFF;
    v28 = 0;
    if ( (*(_QWORD *)(v23 - 0x21FFFFFFFFD8LL) & 0x10000000000LL) != 0 )
      v28 = *(_DWORD *)(v23 - 0x21FFFFFFFFDCLL) & 0x18000000;
    *(_DWORD *)(v23 - 0x21FFFFFFFFDCLL) = v28;
    *(_DWORD *)(v23 - 0x21FFFFFFFFE0LL) &= ~0x10000000u;
    *(_QWORD *)(v23 - 0x21FFFFFFFFE8LL) &= 0xC000000000000000uLL;
    *(_DWORD *)(v23 - 0x21FFFFFFFFE0LL) &= 0xFFFF0000;
    MiInsertPageInFreeOrZeroedList(v23 / 48);
    _InterlockedAnd64((volatile signed __int64 *)v26, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
    __writecr8(v24);
  }
  v29 = v91;
  if ( (_BYTE)v91 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v91);
    __writecr8(v29);
  }
  return v95;
}
