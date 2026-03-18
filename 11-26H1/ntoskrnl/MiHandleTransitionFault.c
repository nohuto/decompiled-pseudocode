/*
 * XREFs of MiHandleTransitionFault @ 0x1402F6550
 * Callers:
 *     MiResolveTransitionFault @ 0x1403A6F04 (MiResolveTransitionFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295CA0 (MiReleaseFreshPageAtDpc.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x1402F5D30 (MiAddLockedPageCharge.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiImagePageOk @ 0x1402F7140 (MiImagePageOk.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     MiRemoveLockedPageCharge @ 0x14031D180 (MiRemoveLockedPageCharge.c)
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiUnlockVadTree @ 0x140326440 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403265D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140326730 (MiLocateAddress.c)
 *     MiDiscardTransitionPfnEx @ 0x140369FE0 (MiDiscardTransitionPfnEx.c)
 *     MiSoftFaultClusterTradeInitialize @ 0x1405085E0 (MiSoftFaultClusterTradeInitialize.c)
 *     MiMakeTransitionHeatBatch @ 0x14050A470 (MiMakeTransitionHeatBatch.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     MiSoftFaultClusterTradeAcquireLocks @ 0x140712350 (MiSoftFaultClusterTradeAcquireLocks.c)
 *     MiSoftFaultClusterTradeGetPage @ 0x14071245C (MiSoftFaultClusterTradeGetPage.c)
 *     MiSoftFaultClusterTradePageFinish @ 0x1407126D8 (MiSoftFaultClusterTradePageFinish.c)
 *     MiSoftFaultClusterTradeReleaseLocks @ 0x140712784 (MiSoftFaultClusterTradeReleaseLocks.c)
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
  __int64 v19; // r8
  __int64 v20; // r9
  _KPROCESS *Process; // rcx
  __int64 v22; // rax
  volatile _KAFFINITY_EX *ActiveProcessors; // rdx
  int v24; // r12d
  bool v25; // zf
  unsigned __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 TransitionHeatBatch; // rax
  __int64 v32; // rbx
  unsigned __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  __int64 Address; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int64 v40; // r9
  __int64 v41; // rbx
  __int64 v42; // rbx
  int Page; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  _QWORD v46[3]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v47; // [rsp+48h] [rbp-70h]
  __int128 v48; // [rsp+50h] [rbp-68h]
  __int128 v49; // [rsp+60h] [rbp-58h]
  __int128 v50; // [rsp+70h] [rbp-48h]
  __int64 v51; // [rsp+80h] [rbp-38h]
  __int64 v52; // [rsp+D8h] [rbp+20h]

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
      LOBYTE(v38) = 17;
      v14 = Address;
      MiUnlockVadTree(1LL, v38);
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
      MiDiscardTransitionPfnEx(v10, 0LL, v19, v20);
LABEL_33:
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
        MiUnlockProtoPoolPage(a3, 0x11u);
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
    v46[2] = v10;
    v51 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    Process = KeGetCurrentThread()->ApcState.Process;
    v22 = *(_QWORD *)(v10 + 40);
    v47 = v14;
    v46[0] = a1;
    ActiveProcessors = Process[2].ActiveProcessors;
    v46[1] = a3;
    if ( v22 >= 0 )
    {
      v24 = 0;
      v25 = ActiveProcessors[5].StaticBitmap[5] == 0;
    }
    else
    {
      v24 = 1;
      if ( (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
        goto LABEL_19;
      v25 = ActiveProcessors[5].StaticBitmap[6] == 0;
    }
    if ( v25 )
      goto LABEL_19;
    if ( byte_140E3BD26 )
    {
      v26 = (unsigned __int64)((__int64)(v10 + 0x220000000000LL) / 48) >> 9;
      if ( *(_BYTE *)(qword_140E3D0C0 + 2 * v26) )
      {
        if ( *(_BYTE *)(qword_140E3D0C0 + 2 * v26) != 10 )
          goto LABEL_19;
      }
    }
    if ( !v14 )
    {
      v33 = *a1;
      MiLockVadTree(1LL);
      v34 = MiLocateAddress(v33);
      LOBYTE(v35) = 17;
      v14 = v34;
      MiUnlockVadTree(1LL, v35);
      if ( !v14 )
        goto LABEL_19;
      v47 = v14;
    }
    v27 = *(_DWORD *)(v14 + 48);
    if ( MiVadPageSizes[(v27 >> 17) & 3] == 16 )
    {
      v36 = v27 & 0x80000;
      if ( v24 )
      {
        if ( v36 )
          goto LABEL_19;
      }
      else if ( !v36 )
      {
        goto LABEL_19;
      }
      if ( (unsigned int)MiSoftFaultClusterTradeInitialize(v46, a2, &a7) )
      {
        v41 = *((_QWORD *)&v49 + 1);
        *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
        v52 = v41;
        if ( (unsigned int)MiAddLockedPageCharge(v10, 0, v39, v40) )
        {
          MiSoftFaultClusterTradeReleaseLocks(v46);
          v42 = a6;
          Page = MiSoftFaultClusterTradeGetPage(v46, a6);
          v28 = *((_QWORD *)&v50 + 1);
          LODWORD(a5) = Page;
          if ( !(unsigned int)MiSoftFaultClusterTradeAcquireLocks(v46, a2, a2, v42) )
          {
            if ( (int)a5 >= 0 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiReleaseFreshPageAtDpc(v28, v44, v45);
              MiReleaseNonPagedResources(v52, 1LL);
              LODWORD(a5) = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&a5);
                while ( *(__int64 *)(v10 + 24) < 0 );
              }
            }
            MiRemoveLockedPageChargeAndDecRef(v10);
            v28 = 0LL;
            v29 = 0LL;
            goto LABEL_39;
          }
          if ( (int)a5 >= 0 )
          {
            MiSoftFaultClusterTradePageFinish(v46, a2, v42);
            LOBYTE(a7) = 1;
LABEL_20:
            v29 = v28;
            if ( v28 )
            {
              if ( v10 != v28 )
              {
                v10 = v28;
                *v9 = v28;
              }
LABEL_23:
              if ( (_BYTE)a7 )
                goto LABEL_26;
              if ( !v28 )
                goto LABEL_36;
LABEL_25:
              v29 = MiMigratePfn(a1, v10, a3, v7);
              *v9 = v29;
              v10 = v29;
LABEL_26:
              if ( v29 )
                goto LABEL_27;
LABEL_36:
              v32 = *v7;
              if ( *v7 )
              {
                if ( *(int *)(v32 + 176) > 1 )
                  KeSetEvent((PRKEVENT)(v32 + 56), 0, 0);
                MiFreeInPageSupportBlock((PSLIST_ENTRY)v32);
                *v7 = 0LL;
              }
              return 3221226548LL;
            }
LABEL_39:
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( a3 )
              MiUnlockProtoPoolPage(a3, 0x11u);
            goto LABEL_23;
          }
          MiRemoveLockedPageCharge(v10);
        }
        else if ( BYTE8(v48) == 1 )
        {
          MiReleaseNonPagedResources(v41, 1LL);
        }
      }
    }
LABEL_19:
    v28 = v10;
    goto LABEL_20;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
    MiUnlockProtoPoolPage(a3, 0x11u);
  return 3221226536LL;
}
