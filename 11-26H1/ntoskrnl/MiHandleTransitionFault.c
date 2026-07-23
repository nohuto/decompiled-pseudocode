/*
 * XREFs of MiHandleTransitionFault @ 0x1402D85D0
 * Callers:
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiImagePageOk @ 0x1402D91C0 (MiImagePageOk.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiRemoveLockedPageCharge @ 0x14031F1B0 (MiRemoveLockedPageCharge.c)
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     MiSoftFaultClusterTradeInitialize @ 0x140502088 (MiSoftFaultClusterTradeInitialize.c)
 *     MiMakeTransitionHeatBatch @ 0x140503EE0 (MiMakeTransitionHeatBatch.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiSoftFaultClusterTradeAcquireLocks @ 0x140717048 (MiSoftFaultClusterTradeAcquireLocks.c)
 *     MiSoftFaultClusterTradeGetPage @ 0x140717154 (MiSoftFaultClusterTradeGetPage.c)
 *     MiSoftFaultClusterTradePageFinish @ 0x1407173D0 (MiSoftFaultClusterTradePageFinish.c)
 *     MiSoftFaultClusterTradeReleaseLocks @ 0x14071747C (MiSoftFaultClusterTradeReleaseLocks.c)
 */

__int64 __fastcall MiHandleTransitionFault(
        unsigned __int64 *a1,
        ULONG_PTR a2,
        __int64 a3,
        ULONG_PTR *BugCheckParameter4,
        __int64 *a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 *v7; // r14
  __int64 *v9; // rsi
  ULONG_PTR v10; // rdi
  __int64 v11; // rax
  __int64 v14; // rbx
  ULONG_PTR v15; // rdx
  unsigned __int64 v16; // r12
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r9
  _KPROCESS *Process; // rcx
  __int64 v24; // rax
  unsigned __int64 ActiveProcessors; // rdx
  int v26; // r12d
  bool v27; // zf
  unsigned int v28; // eax
  __int64 v29; // r12
  __int64 v30; // rbx
  __int64 v32; // rdx
  __int64 TransitionHeatBatch; // rax
  __int64 v34; // rbx
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // eax
  __int64 Address; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // r9
  __int64 v42; // rbx
  __int64 v43; // rbx
  int Page; // eax
  __int64 v45; // rdx
  __int64 v46; // r8
  _QWORD v47[3]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v48; // [rsp+48h] [rbp-70h]
  __int128 v49; // [rsp+50h] [rbp-68h]
  __int128 v50; // [rsp+60h] [rbp-58h]
  __int128 v51; // [rsp+70h] [rbp-48h]
  __int64 v52; // [rsp+80h] [rbp-38h]
  __int64 v53; // [rsp+D8h] [rbp+20h]

  v7 = a7;
  v9 = a5;
  v10 = (ULONG_PTR)BugCheckParameter4;
  v11 = BugCheckParameter4[5];
  *a7 = 0LL;
  *v9 = 0LL;
  if ( v11 >= 0 && a2 != (BugCheckParameter4[1] | 0x8000000000000000uLL) )
    KeBugCheckEx(0x1Au, 0x888AuLL, a2, BugCheckParameter4[1], (ULONG_PTR)BugCheckParameter4);
  v14 = 0LL;
  v15 = BugCheckParameter4[2];
  v16 = *a1;
  v17 = v15 >> 2;
  v18 = v15 >> 16;
  if ( (BugCheckParameter4[2] & 0x400) != 0 )
    LOBYTE(v18) = v17;
  if ( (v18 & 1) != 0 )
  {
    if ( v16 < 0x7FFFFFFF0000LL && (BugCheckParameter4[5] & 0x8000000000000000uLL) == 0LL )
    {
      MiLockVadTree(1LL);
      Address = MiLocateAddress(v16);
      LOBYTE(v40) = 17;
      v14 = Address;
      MiUnlockVadTree(1LL, v40);
    }
    TransitionHeatBatch = MiMakeTransitionHeatBatch(v10, v14, 0LL);
    a1[15] = TransitionHeatBatch;
    if ( TransitionHeatBatch )
      goto LABEL_33;
  }
  if ( (unsigned int)MiImagePageOk(v16, v10, a3, v14) )
  {
    if ( (MiUnlinkPageFromListEx(v10) & 3) != 0 )
    {
      MiDiscardTransitionPfnEx(v10, 0LL, v21, v22);
LABEL_33:
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
      {
        LOBYTE(v32) = 17;
        MiUnlockProtoPoolPage(a3, v32, a3);
      }
      return 3221226548LL;
    }
    if ( (*(_QWORD *)(v10 + 40) & 0x20000000000000LL) != 0 )
    {
LABEL_27:
      *(_QWORD *)(v10 + 24) = *(_QWORD *)(v10 + 24) & 0xC000000000000000uLL | 1;
      *(_DWORD *)(v10 + 32) = (*(_DWORD *)(v10 + 32) + 1) ^ (*(_DWORD *)(v10 + 32) ^ (*(_DWORD *)(v10 + 32) + 1)) & 0xFFFF0000;
      *(_DWORD *)(v10 + 32) = *(_DWORD *)(v10 + 32) & 0xFFF8FFFF | 0x60000;
      return 0LL;
    }
    LOBYTE(a7) = 0;
    if ( v16 >= 0x7FFFFFFF0000LL || (unsigned __int16)*(_DWORD *)(v10 + 32) )
      goto LABEL_25;
    v47[2] = v10;
    v52 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    Process = KeGetCurrentThread()->ApcState.Process;
    v24 = *(_QWORD *)(v10 + 40);
    v48 = v14;
    v47[0] = a1;
    ActiveProcessors = (unsigned __int64)Process[2].ActiveProcessors;
    v47[1] = a3;
    if ( v24 >= 0 )
    {
      v26 = 0;
      v27 = *(_QWORD *)(ActiveProcessors + 1368) == 0LL;
    }
    else
    {
      v26 = 1;
      if ( (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
        goto LABEL_19;
      v27 = *(_QWORD *)(ActiveProcessors + 1376) == 0LL;
    }
    if ( v27 )
      goto LABEL_19;
    if ( byte_140E3BEA6 )
    {
      ActiveProcessors = (unsigned __int64)((__int64)(v10 + 0x220000000000LL) / 48) >> 9;
      if ( *(_BYTE *)(qword_140E3D240 + 2 * ActiveProcessors) )
      {
        if ( *(_BYTE *)(qword_140E3D240 + 2 * ActiveProcessors) != 10 )
          goto LABEL_19;
      }
    }
    if ( !v14 )
    {
      v35 = *a1;
      MiLockVadTree(1LL);
      v36 = MiLocateAddress(v35);
      LOBYTE(v37) = 17;
      v14 = v36;
      MiUnlockVadTree(1LL, v37);
      if ( !v14 )
        goto LABEL_19;
      v48 = v14;
    }
    v28 = *(_DWORD *)(v14 + 48);
    ActiveProcessors = (unsigned __int64)MiVadPageSizes;
    if ( MiVadPageSizes[(v28 >> 17) & 3] == 16 )
    {
      v38 = v28 & 0x80000;
      if ( v26 )
      {
        if ( v38 )
          goto LABEL_19;
      }
      else if ( !v38 )
      {
        goto LABEL_19;
      }
      if ( (unsigned int)MiSoftFaultClusterTradeInitialize(v47, a2, &a7) )
      {
        v42 = *((_QWORD *)&v50 + 1);
        *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
        v53 = v42;
        if ( (unsigned int)MiAddLockedPageCharge(v10, 0, v21, v41) )
        {
          MiSoftFaultClusterTradeReleaseLocks(v47);
          v43 = a6;
          Page = MiSoftFaultClusterTradeGetPage(v47, a6);
          v29 = *((_QWORD *)&v51 + 1);
          LODWORD(a5) = Page;
          if ( !(unsigned int)MiSoftFaultClusterTradeAcquireLocks(v47, a2, a2, v43) )
          {
            if ( (int)a5 >= 0 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiReleaseFreshPageAtDpc(v29, v45, v46);
              MiReleaseNonPagedResources(v53, 1LL);
              LODWORD(a5) = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&a5);
                while ( *(__int64 *)(v10 + 24) < 0 );
              }
            }
            MiRemoveLockedPageChargeAndDecRef(v10);
            v29 = 0LL;
            v30 = 0LL;
            goto LABEL_39;
          }
          if ( (int)a5 >= 0 )
          {
            MiSoftFaultClusterTradePageFinish(v47, a2, v43);
            LOBYTE(a7) = 1;
LABEL_20:
            v30 = v29;
            if ( v29 )
            {
              if ( v10 != v29 )
              {
                v10 = v29;
                *v9 = v29;
              }
LABEL_23:
              if ( (_BYTE)a7 )
                goto LABEL_26;
              if ( !v29 )
                goto LABEL_36;
LABEL_25:
              v30 = MiMigratePfn(a1, v10, a3, v7);
              *v9 = v30;
              v10 = v30;
LABEL_26:
              if ( v30 )
                goto LABEL_27;
LABEL_36:
              v34 = *v7;
              if ( *v7 )
              {
                if ( *(int *)(v34 + 176) > 1 )
                  KeSetEvent((PRKEVENT)(v34 + 56), 0, 0);
                MiFreeInPageSupportBlock((PSLIST_ENTRY)v34);
                *v7 = 0LL;
              }
              return 3221226548LL;
            }
LABEL_39:
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( a3 )
            {
              LOBYTE(ActiveProcessors) = 17;
              MiUnlockProtoPoolPage(a3, ActiveProcessors, v21);
            }
            goto LABEL_23;
          }
          MiRemoveLockedPageCharge(v10);
        }
        else if ( BYTE8(v49) == 1 )
        {
          MiReleaseNonPagedResources(v42, 1LL);
        }
      }
    }
LABEL_19:
    v29 = v10;
    goto LABEL_20;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v19) = 17;
    MiUnlockProtoPoolPage(a3, v19, v20);
  }
  return 3221226536LL;
}
