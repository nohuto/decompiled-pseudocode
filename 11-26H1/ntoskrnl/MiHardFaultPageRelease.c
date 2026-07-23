/*
 * XREFs of MiHardFaultPageRelease @ 0x14031E950
 * Callers:
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 * Callees:
 *     MiInsertProtectedStandbyPage @ 0x1402AEAF8 (MiInsertProtectedStandbyPage.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiAreChargesNeededToLockPage @ 0x1402C7DC0 (MiAreChargesNeededToLockPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiChargeForLockedPage @ 0x1402D7FE0 (MiChargeForLockedPage.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiMakeTransitionPteValid @ 0x1402E5640 (MiMakeTransitionPteValid.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiMakeProtoReadOnly @ 0x14031E310 (MiMakeProtoReadOnly.c)
 *     MiPfnReferenceCountIsZero @ 0x14031E3A4 (MiPfnReferenceCountIsZero.c)
 *     MiSwapHardFaultPage @ 0x14031ED1C (MiSwapHardFaultPage.c)
 *     MiRemoveLockedPageCharge @ 0x14031F1B0 (MiRemoveLockedPageCharge.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiHandleInPageError @ 0x1404AF888 (MiHandleInPageError.c)
 */

void __fastcall MiHardFaultPageRelease(__int64 *a1, ULONG_PTR a2)
{
  __int64 v2; // rsi
  ULONG_PTR v4; // rbx
  __int64 v5; // rcx
  ULONG_PTR v6; // rbp
  int v7; // r14d
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 *v12; // rsi
  unsigned __int64 PteShadow; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 TransitionPteValid; // r10
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // rax
  struct _KEVENT *v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = a2;
  v5 = *(_QWORD *)(*a1 + 256);
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
  {
LABEL_23:
    MiRemoveLockedPageChargeAndDecRef(v4);
    return;
  }
  if ( (*(_BYTE *)(a2 + 35) & 0x10) != 0 )
  {
    if ( a2 == v5 && *(int *)(v2 + 80) >= 0 )
      *(_DWORD *)(v2 + 80) = -1073741761;
    goto LABEL_20;
  }
  if ( *(int *)(v2 + 80) < 0 )
  {
LABEL_19:
    *(_DWORD *)(a2 + 32) |= 0x10000000u;
LABEL_20:
    if ( ((*(_DWORD *)(v2 + 188) & 0x40) == 0 || *((_BYTE *)a1 + 41))
      && (*(_DWORD *)(a2 + 16) & 0x400LL) == 0
      && ((*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
       || (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL
       || (*(_BYTE *)(a2 + 35) & 0x20) == 0) )
    {
      MiChargeCommit(*(ULONG **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)), 1uLL, 4u);
    }
    MiHandleInPageError(v4);
    goto LABEL_23;
  }
  if ( a1[2] >= (unsigned __int64)a1[3] )
  {
    if ( a2 == v5 )
      *((_DWORD *)a1 + 2) = -1073740748;
    goto LABEL_19;
  }
  if ( a2 != v5 )
    goto LABEL_55;
  v6 = *(_QWORD *)(v2 + 104);
  v7 = 0;
  if ( v6 )
  {
    MiSwapHardFaultPage(*(_QWORD *)(v2 + 240), a2, *(_QWORD *)(v2 + 104));
    v4 = v6;
    *(_QWORD *)(v2 + 256) = v6;
    *(_QWORD *)(v2 + 104) = 0LL;
  }
  *((_BYTE *)a1 + 40) = 1;
  if ( *((int *)a1 + 2) >= 0 )
  {
    v8 = *a1;
    if ( !MiAreChargesNeededToLockPage(v4) || (unsigned int)MiChargeForLockedPage(v4, 3, v9, v10) )
      *(_DWORD *)(v4 + 32) = (*(_DWORD *)(v4 + 32) + 1) ^ (*(_DWORD *)(v4 + 32) ^ (*(_DWORD *)(v4 + 32) + 1)) & 0xFFFF0000;
    *(_QWORD *)(v4 + 24) = (*(_QWORD *)(v4 + 24) + 1LL) ^ (*(_QWORD *)(v4 + 24) ^ (*(_QWORD *)(v4 + 24) + 1LL)) & 0xC000000000000000uLL;
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v4 + 32) & 0xFFF8FFFF | 0x60000;
    MiRemoveLockedPageChargeAndDecRef(v4);
    if ( (*(_DWORD *)(v4 + 16) & 0x400LL) == 0 )
    {
      v19 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
      v20 = *(_QWORD *)(v4 + 16);
      if ( (v20 & 8) != 0 && (unsigned __int16)v20 >> 12 == v19[54].Header.SignalState )
      {
        v21 = MiCaptureDirtyBitToPfn(v4);
        if ( v21 )
          MiReleasePageFileInfo(v19, v21, 1LL);
      }
    }
    if ( *(__int64 *)(v4 + 40) < 0 )
    {
      v12 = *(__int64 **)(v8 + 240);
      PteShadow = *v12;
      if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)v12, *v12);
      if ( ((PteShadow >> 5) & 0x1F) == 0x18 )
        MiMakeProtoReadOnly(v12, v4);
      TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)v12);
      v23 = TransitionPteValid;
      v17 = TransitionPteValid;
      if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v22 = MiSanitizeShadowPxe(v14, &v23, v15);
        v17 = v23;
        v7 = v22;
      }
      *v12 = v17;
      if ( v7 )
        MiWritePteShadow();
      v18 = (unsigned __int64 *)a1[6];
      if ( v18 )
        *v18 = TransitionPteValid;
    }
  }
  else
  {
LABEL_55:
    if ( (unsigned int)MiRemoveLockedPageCharge(v4) )
    {
      v11 = a1[7];
      if ( v11 )
        MiInsertProtectedStandbyPage(v11, v4);
      else
        MiPfnReferenceCountIsZero(v4, (__int64)(v4 + 0x220000000000LL) / 48);
    }
  }
}
