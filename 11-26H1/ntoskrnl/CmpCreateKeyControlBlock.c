/*
 * XREFs of CmpCreateKeyControlBlock @ 0x1408CA640
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     CmpCreateRegistryRoot @ 0x140CF0AAC (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E50D0 (ExAllocateFromLookasideListEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14046BB10 (CmpFindSecurityCellCacheIndex.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpGetNameControlBlock @ 0x1408CAFF0 (CmpGetNameControlBlock.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1408CBB28 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408CC9F0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140A41830 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpFreeKeyControlBlock @ 0x140A66720 (CmpFreeKeyControlBlock.c)
 *     CmpTryToLockKcbExclusive @ 0x140A6C7B0 (CmpTryToLockKcbExclusive.c)
 *     CmpAllocateLayerInfoForKcb @ 0x140A81A48 (CmpAllocateLayerInfoForKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x140A81AC0 (CmpReferenceKeyControlBlock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmLockHiveSecurityShared @ 0x140C5EB30 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140C5EBA8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpCreateKeyControlBlock(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        char a5,
        unsigned __int16 *a6,
        char a7,
        unsigned int a8,
        ULONG_PTR *a9)
{
  unsigned int v10; // ebx
  ULONG_PTR v11; // r12
  unsigned __int16 *v12; // r9
  __int64 i; // rdi
  ULONG_PTR v14; // r14
  __int64 v15; // rcx
  WCHAR *v16; // r13
  unsigned __int16 v17; // si
  __int16 *v18; // r12
  unsigned __int16 v19; // r15
  unsigned int v20; // r15d
  ULONG_PTR v21; // rax
  int v22; // r8d
  ULONG_PTR *v23; // rdx
  __int64 v24; // rax
  int v25; // ecx
  int v26; // r8d
  PVOID v27; // rax
  ULONG_PTR v28; // rdi
  int v29; // eax
  __int64 v30; // r13
  __int16 v31; // si
  unsigned __int16 *v32; // rcx
  __int64 NameControlBlock; // rax
  unsigned int v34; // edx
  ULONG_PTR v35; // rcx
  __int64 CellFlat; // rax
  struct _KLOCK_ENTRIES *v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rbx
  struct _KLOCK_ENTRIES *v40; // r9
  signed __int64 *v41; // rbx
  void *v42; // rdx
  LegacyAutoBoost *v43; // r14
  ULONG_PTR v44; // rcx
  __int64 CellPaged; // rax
  ULONG_PTR v46; // rcx
  __int64 v47; // r14
  int v48; // ecx
  int v49; // ecx
  AutoBoost *v50; // rax
  void *v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // r14d
  __int64 v55; // rbx
  ULONG_PTR v56; // rbx
  __int64 v57; // rcx
  signed __int64 v58; // rsi
  __int16 v59; // cx
  WCHAR v60; // ax
  char v61; // al
  __int64 v62; // rcx
  void *v63; // rsi
  __int64 v65; // rcx
  __int64 v66; // rax
  ULONG_PTR v67; // rsi
  unsigned __int64 v68; // rdx
  int LayerInfoForKcb; // eax
  _QWORD *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rdx
  __int64 v74; // rcx
  void *v75; // rcx
  __int16 v76; // cx
  WCHAR v77; // ax
  bool v78; // zf
  unsigned int v79; // [rsp+40h] [rbp-99h] BYREF
  __int64 v80; // [rsp+48h] [rbp-91h] BYREF
  unsigned __int16 *v81; // [rsp+50h] [rbp-89h]
  ULONG_PTR v82; // [rsp+58h] [rbp-81h]
  int v83; // [rsp+60h] [rbp-79h]
  __int64 v84; // [rsp+68h] [rbp-71h]
  ULONG_PTR *v85; // [rsp+70h] [rbp-69h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-61h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-59h] BYREF
  _OWORD v88[2]; // [rsp+B0h] [rbp-29h] BYREF

  v10 = a8;
  v11 = a3;
  v84 = a1;
  BugCheckParameter2 = a4;
  v81 = a6;
  v82 = a3;
  v83 = a2;
  v85 = a9;
  v80 = 0LL;
  HvpGetCellContextInitialize(&v80);
  if ( (*(_DWORD *)(a1 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 4176) != KeGetCurrentThread() )
    return (unsigned int)-1073741772;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1648)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (v10 ^ (v10 >> 9))) ^ ((unsigned __int64)(101027 * (v10 ^ (v10 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == v10 )
    {
      v14 = i - 16;
      if ( *(_QWORD *)(i + 56) == v11 )
      {
        v15 = *(_QWORD *)(v14 + 80);
        v16 = (WCHAR *)*((_QWORD *)v12 + 1);
        v17 = *v12 >> 1;
        v18 = (__int16 *)(v15 + 26);
        v19 = *(_WORD *)(v15 + 24);
        if ( (*(_DWORD *)(v15 + 12) & 1) != 0 )
        {
          while ( v17 && v19 )
          {
            v59 = *(unsigned __int8 *)v18;
            v18 = (__int16 *)((char *)v18 + 1);
            v60 = *v16++;
            LOWORD(v79) = v59;
            if ( v60 != v59 )
            {
              if ( v60 >= 0x61u )
              {
                if ( v60 > 0x7Au )
                {
                  v60 = RtlUpcaseUnicodeChar(v60);
                  v59 = v79;
                }
                else
                {
                  v60 -= 32;
                }
              }
              if ( v60 != v59 )
                goto LABEL_10;
            }
            --v17;
            --v19;
          }
        }
        else
        {
          for ( v19 >>= 1; v17 && v19; --v19 )
          {
            v76 = *v18++;
            v77 = *v16++;
            LOWORD(v79) = v76;
            if ( v77 != v76 )
            {
              if ( v77 >= 0x61u )
              {
                if ( v77 > 0x7Au )
                {
                  v77 = RtlUpcaseUnicodeChar(v77);
                  v76 = v79;
                }
                else
                {
                  v77 -= 32;
                }
              }
              if ( v77 != v76 )
                goto LABEL_10;
            }
            --v17;
          }
        }
        if ( v17 == v19 )
        {
          if ( i != 16 )
          {
            CmpReferenceKeyControlBlockLockNotHeld(i - 16);
            v20 = 0;
            *v85 = v14;
            return v20;
          }
          v11 = v82;
          v12 = v81;
          break;
        }
LABEL_10:
        v12 = v81;
        v11 = v82;
      }
    }
  }
  v20 = 0;
  v21 = v11;
  v22 = 0;
  if ( v11 )
  {
    do
    {
      while ( 1 )
      {
        v23 = (ULONG_PTR *)(v21 + 72);
        if ( (*(_DWORD *)(v21 + 184) & 0x40000) == 0 || !*v23 )
          break;
        v21 = *v23;
      }
      v24 = *(_QWORD *)(v21 + 80);
      v25 = *(unsigned __int16 *)(v24 + 24);
      if ( (*(_DWORD *)(v24 + 12) & 1) != 0 )
        v26 = v22 + 2 * v25;
      else
        v26 = v25 + v22;
      v21 = *v23;
      v22 = v26 + 2;
    }
    while ( *v23 );
  }
  if ( (unsigned int)*v12 + v22 + 2 > 0xFFFF )
    return (unsigned int)-1073741811;
  _InterlockedIncrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.KernelShadowStackInitial);
  v27 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside);
  v28 = (ULONG_PTR)v27;
  if ( !v27 )
    return (unsigned int)-1073741670;
  _InterlockedIncrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.WpsFeedback);
  memset_0(v27, 0, 0x138uLL);
  v29 = v83;
  v30 = v84;
  *(_QWORD *)(v28 + 128) = v28 + 120;
  v31 = 1;
  *(_QWORD *)(v28 + 120) = v28 + 120;
  v32 = v81;
  *(_QWORD *)(v28 + 136) = 0LL;
  *(_QWORD *)(v28 + 144) = 0LL;
  *(_QWORD *)(v28 + 152) = 0LL;
  *(_QWORD *)(v28 + 160) = 0LL;
  *(_DWORD *)(v28 + 40) = v29;
  *(_QWORD *)v28 = 1LL;
  *(_QWORD *)(v28 + 32) = v30;
  *(_DWORD *)(v28 + 16) = v10;
  *(_QWORD *)(v28 + 48) = 0LL;
  *(_QWORD *)(v28 + 216) = v28 + 208;
  *(_QWORD *)(v28 + 208) = v28 + 208;
  *(_QWORD *)(v28 + 232) = v28 + 224;
  *(_QWORD *)(v28 + 224) = v28 + 224;
  *(_QWORD *)(v28 + 240) = 0LL;
  *(_DWORD *)(v28 + 248) = 0;
  *(_QWORD *)(v28 + 256) = 0LL;
  *(_DWORD *)(v28 + 264) = 0;
  *(_QWORD *)(v28 + 272) = 0LL;
  *(_DWORD *)(v28 + 280) = 0;
  *(_DWORD *)(v28 + 284) = -1;
  *(_QWORD *)(v28 + 288) = 0LL;
  NameControlBlock = CmpGetNameControlBlock(v32, &a7);
  *(_QWORD *)(v28 + 80) = NameControlBlock;
  if ( NameControlBlock )
  {
    v34 = *(_DWORD *)(v28 + 40);
    if ( v34 == -1 )
    {
      v61 = *(_BYTE *)(v11 + 65);
      if ( v61 == 1 || v61 == 3 )
        *(_BYTE *)(v28 + 65) = 1;
      v56 = v28;
      if ( (a5 & 1) != 0 )
        *(_WORD *)(v28 + 186) |= 4u;
    }
    else
    {
      v35 = *(_QWORD *)(v28 + 32);
      if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v35, v34, (unsigned int *)&v80);
      else
        CellFlat = HvpGetCellPaged(v35);
      v38 = *(_QWORD *)(v28 + 32);
      v39 = CellFlat;
      if ( (*(_DWORD *)(v38 + 160) & 0x8001) == 0
        && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
      {
        if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v38, &v80);
        else
          HvpReleaseCellPaged(v38, &v80);
        v41 = (signed __int64 *)(*(_QWORD *)(v28 + 32) + 72LL);
        v43 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v41, 0LL, 0LL, v40);
        if ( _InterlockedCompareExchange64(v41, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v41, 0, v43, (struct _KTHREAD *)v41);
        if ( v43 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v43, v42);
          else
            *((_BYTE *)v43 + 10) = 1;
        }
        v44 = *(_QWORD *)(v28 + 32);
        if ( (*(_BYTE *)(v44 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(v44, *(_DWORD *)(v28 + 40), (unsigned int *)&v80);
        else
          CellPaged = HvpGetCellPaged(v44);
        v46 = *(_QWORD *)(v28 + 32);
        v39 = CellPaged;
        if ( (*(_DWORD *)(v46 + 160) & 0x8001) == 0
          && ((unsigned __int8)CmpAccessBitForPhase & *(_BYTE *)(CellPaged + 12)) == 0
          && (int)HvpMarkCellDirty(v46, *(unsigned int *)(v28 + 40)) >= 0 )
        {
          *(_BYTE *)(v39 + 12) |= CmpAccessBitForPhase;
        }
        v47 = *(_QWORD *)(v28 + 32);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v47 + 72));
        KeAbPostRelease(v47 + 72);
      }
      *(_BYTE *)(v28 + 65) = *(_BYTE *)(v39 + 13) & 3;
      v48 = *(_DWORD *)(v39 + 40);
      *(_DWORD *)(v28 + 96) = *(_DWORD *)(v39 + 36);
      *(_DWORD *)(v28 + 100) = v48;
      *(_WORD *)(v28 + 186) = *(_WORD *)(v39 + 2);
      *(_DWORD *)(v28 + 112) = *(_DWORD *)(v39 + 20) + *(_DWORD *)(v39 + 24);
      *(_QWORD *)(v28 + 168) = *(_QWORD *)(v39 + 4);
      *(_WORD *)(v28 + 176) = *(_WORD *)(v39 + 52);
      *(_WORD *)(v28 + 178) = *(_WORD *)(v39 + 60);
      *(_DWORD *)(v28 + 180) = *(_DWORD *)(v39 + 64);
      v49 = *(_DWORD *)(v28 + 184) ^ ((unsigned __int8)*(_DWORD *)(v28 + 184) ^ (unsigned __int8)*(_WORD *)(v39 + 54)) & 0xF;
      *(_DWORD *)(v28 + 184) = v49;
      *(_DWORD *)(v28 + 184) = v49 ^ ((unsigned __int8)v49 ^ (unsigned __int8)*(_WORD *)(v39 + 54)) & 0xF0;
      *(_BYTE *)(v28 + 185) = *(_BYTE *)(v39 + 55);
      v50 = (AutoBoost *)KeAbPreAcquire(v28 + 48, 0LL, 1LL, v37);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 48), 0LL) )
      {
        if ( v50 )
          KeAbPostReleaseEx((struct _KTHREAD *)(v28 + 48), (unsigned __int64)v50, v52, v53);
      }
      else
      {
        if ( v50 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v50, v51);
          else
            *((_BYTE *)v50 + 10) = 1;
        }
        *(_QWORD *)(v28 + 56) = KeGetCurrentThread();
      }
      v54 = *(_DWORD *)(v39 + 44);
      v79 = 0;
      if ( v54 == -1 )
      {
        *(_QWORD *)(v28 + 88) = 0LL;
      }
      else
      {
        v55 = *(_QWORD *)(v28 + 32);
        CmLockHiveSecurityShared(v55);
        if ( !CmpFindSecurityCellCacheIndex(v55, v54, &v79) )
        {
          *(_QWORD *)(v28 + 88) = 0LL;
          CmUnlockHiveSecurity(v55);
          CmpUnlockKcb(v28);
          v20 = -1073741670;
          if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v30, &v80);
          else
            HvpReleaseCellPaged(v30, &v80);
          v56 = v28;
          goto LABEL_98;
        }
        *(_QWORD *)(v28 + 88) = *(_QWORD *)(*(_QWORD *)(v55 + 1896) + 16LL * v79 + 8);
        CmUnlockHiveSecurity(v55);
      }
      v56 = v28;
      CmpUnlockKcb(v28);
      v57 = *(_QWORD *)(v28 + 32);
      if ( (*(_BYTE *)(v57 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v57, &v80);
      else
        HvpReleaseCellPaged(v57, &v80);
    }
    if ( v11 )
    {
      v58 = _InterlockedIncrement64((volatile signed __int64 *)v11);
      if ( !v58 )
        KeBugCheckEx(0x51u, 0x24uLL, v11, 0LL, 0LL);
      if ( v58 == 1 )
        KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
      v78 = (*(_DWORD *)(v28 + 184) & 0x40000) == 0;
      v65 = 12LL;
      *(_QWORD *)(v28 + 72) = v11;
      v31 = *(_WORD *)(v11 + 12);
      if ( v78 )
        ++v31;
      v66 = v28;
    }
    else
    {
      v65 = v28;
      v66 = 12LL;
    }
    *(_WORD *)(v66 + v65) = v31;
    v67 = BugCheckParameter2;
    if ( !BugCheckParameter2 )
      goto LABEL_87;
    CmpLockKcbExclusive(BugCheckParameter2);
    CmpTryToLockKcbExclusive(v28);
    if ( *(__int16 *)(v67 + 66) >= 127 )
    {
      CmpUnlockKcb(v28);
      CmpUnlockKcb(v67);
      v20 = -1073741811;
    }
    else
    {
      LayerInfoForKcb = CmpAllocateLayerInfoForKcb(v67);
      if ( LayerInfoForKcb >= 0 )
      {
        LayerInfoForKcb = CmpAllocateLayerInfoForKcb(v28);
        if ( LayerInfoForKcb >= 0 )
        {
          CmpReferenceKeyControlBlock(v67);
          v70 = *(_QWORD **)(v28 + 192);
          *(_WORD *)(v28 + 66) = *(_WORD *)(v67 + 66) + 1;
          v71 = *(_QWORD *)(v67 + 192);
          v70[3] = v71;
          v72 = v71 + 32;
          v73 = *(_QWORD **)(v72 + 8);
          if ( *v73 != v72 )
            __fastfail(3u);
          *v70 = v72;
          v70[1] = v73;
          *v73 = v70;
          *(_QWORD *)(v72 + 8) = v70;
          CmpUnlockKcb(v28);
          CmpUnlockKcb(v67);
LABEL_87:
          v68 = *(_QWORD *)(*(_QWORD *)(v28 + 32) + 1648LL)
              + 24
              * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v28 + 32) + 1656LL) - 1) & ((unsigned int)(101027
                                                                                                 * (*(_DWORD *)(v28 + 16) ^ (*(_DWORD *)(v28 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v28 + 16) ^ (*(_DWORD *)(v28 + 16) >> 9))) >> 9)));
          *(_QWORD *)(v28 + 24) = *(_QWORD *)(v68 + 16);
          *(_QWORD *)(v68 + 16) = v28 + 16;
          if ( *(_BYTE *)(v30 + 2952) == 1 )
            *(_WORD *)(v28 + 8) |= 0x20u;
          if ( CmpTraceRoutine )
          {
            memset(v88, 0, sizeof(v88));
            memset(&ApcState, 0, sizeof(ApcState));
            CmpAttachToRegistryProcess(&ApcState);
            v63 = (void *)CmpConstructName(v28);
            if ( v63 )
            {
              LOBYTE(v62) = 22;
              guard_dispatch_icall_no_overrides(v62, (__int64)v88);
              CmpFreeTransientPoolWithTag(v63, 0x624E4D43u);
            }
            CmpDetachFromRegistryProcess(&ApcState);
          }
          *v85 = v28;
          return v20;
        }
      }
      v20 = LayerInfoForKcb;
      CmpUnlockKcb(v28);
      CmpUnlockKcb(v67);
    }
  }
  else
  {
    v20 = -1073741670;
    v56 = v28;
  }
LABEL_98:
  v74 = *(_QWORD *)(v56 + 80);
  if ( v74 )
    CmpDereferenceNameControlBlockWithLock(v74);
  if ( *(_QWORD *)(v56 + 72) )
    CmpDereferenceKeyControlBlockUnsafe(v11);
  v75 = *(void **)(v56 + 192);
  if ( v75 )
    ExFreePoolWithTag(v75, 0);
  *(_DWORD *)(v56 + 8) |= 0x80000u;
  CmpFreeKeyControlBlock((PVOID)v56);
  return v20;
}
