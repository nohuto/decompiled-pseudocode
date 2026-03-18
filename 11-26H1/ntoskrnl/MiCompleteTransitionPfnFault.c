/*
 * XREFs of MiCompleteTransitionPfnFault @ 0x140302030
 * Callers:
 *     MiResolveTransitionFault @ 0x1403A6F04 (MiResolveTransitionFault.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiMakeTransitionPteValid @ 0x1403035C0 (MiMakeTransitionPteValid.c)
 *     MiUpdateProtectionMask @ 0x140303850 (MiUpdateProtectionMask.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031AE30 (MiCaptureDirtyBitToPfn.c)
 */

__int64 __fastcall MiCompleteTransitionPfnFault(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned int updated; // eax
  __int64 v14; // r8
  __int64 TransitionPteValid; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // rcx
  struct _KEVENT *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // r8d
  unsigned __int64 v27; // rdx
  _KPROCESS *v28; // rcx
  unsigned __int64 v29; // r8
  unsigned __int64 *v30; // r8
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  int v34; // r8d
  _KPROCESS *v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r14
  unsigned int v40; // ebp
  unsigned __int64 v41; // rcx
  __int64 v43; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 v45; // r10
  __int64 v46; // rdx
  __int64 v47; // rcx
  _KPROCESS *v48; // r10
  unsigned __int64 v49; // r11
  __int64 v50; // r8
  _KPROCESS *v51; // rax
  __int64 v52; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  _KPROCESS *v61; // rdx
  void **AutoBoostState2; // rax
  unsigned __int64 v63; // [rsp+50h] [rbp+8h]

  v6 = a1[2];
  if ( (v6 & 1) != 0 && *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
  {
    v11 = a5 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    *(_QWORD *)a2 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
  }
  else
  {
    v11 = a5;
  }
  if ( ((v11 >> 5) & 0x1F) == 0x18 )
  {
    v12 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      v51 = MiPteHasShadow();
      if ( v51 )
      {
        KernelWaitTime = v51[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v54 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v54 & 0x20) != 0 )
            v52 |= 0x20uLL;
          v12 = v52 | 0x42;
          if ( (v54 & 0x42) == 0 )
            v12 = v52;
        }
      }
    }
    updated = MiUpdateProtectionMask(1LL, (*(_DWORD *)(a4 + 32) >> 22) & 3, v12);
    *(_QWORD *)a2 = (32LL * updated) ^ (v14 ^ (32LL * updated)) & 0xFFFFFFFFFFFFFC1FuLL;
  }
  TransitionPteValid = MiMakeTransitionPteValid(a2);
  v16 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v17 = (*(_QWORD *)(a4 + 40) >> 43) & 0x3FFLL;
  a5 = TransitionPteValid;
  v18 = *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8 * v17);
  v19 = *(_QWORD *)(a4 + 16);
  if ( (v19 & 0x400) == 0 && (v19 & 8) != 0 && (unsigned __int16)v19 >> 12 == v18[54].Header.SignalState )
    v16 = MiCaptureDirtyBitToPfn(a4);
  v20 = *(_QWORD *)(a4 + 16);
  v21 = 0LL;
  v22 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (v20 & 0x400) == 0 && (v20 & 0x8000000) != 0 )
  {
    v23 = a5;
    if ( (unsigned __int64)&a5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&a5 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v43 = a5;
      if ( (a5 & 1) != 0 && ((a5 & 0x20) == 0 || (a5 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          v45 = Process[2].KernelWaitTime;
          if ( v45 )
          {
            v46 = *(_QWORD *)(v45 + 8 * (((unsigned __int64)&a5 >> 3) & 0x1FF));
            if ( (v46 & 0x20) != 0 )
              v43 = a5 | 0x20;
            v23 = v43 | 0x42;
            if ( (v46 & 0x42) == 0 )
              v23 = v43;
          }
        }
      }
    }
    v24 = a5;
    v25 = v23 | 0x40;
    if ( (unsigned __int64)&a5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&a5 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v47 = a5;
      if ( (a5 & 1) != 0 && ((a5 & 0x20) == 0 || (a5 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        v48 = KeGetCurrentThread()->ApcState.Process;
        if ( v48->AddressPolicy != 1 )
        {
          v49 = v48[2].KernelWaitTime;
          if ( v49 )
          {
            v50 = *(_QWORD *)(v49 + 8 * (((unsigned __int64)&a5 >> 3) & 0x1FF));
            if ( (v50 & 0x20) != 0 )
              v47 = a5 | 0x20;
            v24 = v47 | 0x42;
            if ( (v50 & 0x42) == 0 )
              v24 = v47;
          }
          v22 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
    }
    v26 = 0;
    v27 = v25 & 0x80FFFFFFFFFFFFFFuLL ^ v24 & 0x7F00000000000000LL;
    v63 = v27;
    if ( (unsigned __int64)&a5 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&a5 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_12;
    if ( MiPteHasShadow() )
    {
      v26 = 1;
      if ( BYTE5(stru_140E2D930.Header.WaitListHead.Blink) )
        goto LABEL_12;
      v60 = v63;
      if ( (v63 & 1) == 0 )
        goto LABEL_12;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
        goto LABEL_12;
      v60 = v63;
      if ( (v63 & 1) == 0 )
        goto LABEL_12;
    }
    v27 = v60 | 0x8000000000000000uLL;
LABEL_12:
    a5 = v27;
    if ( v26 )
    {
      if ( (MiFlags & 0x1800000) != 0 )
      {
        v28 = KeGetCurrentThread()->ApcState.Process;
        if ( v28->AddressPolicy != 1 )
        {
          v29 = v28[2].KernelWaitTime;
          if ( v29 )
          {
            v30 = (unsigned __int64 *)(v29 + 8 * (((unsigned __int64)&a5 >> 3) & 0x1FF));
            v31 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            if ( (v27 & 1) != 0 )
              v31 = v22 & v27;
            *v30 = v31;
          }
        }
      }
    }
    TransitionPteValid = a5;
  }
  if ( (TransitionPteValid & 0x800) == 0 )
    goto LABEL_25;
  v32 = a6;
  if ( a6 && *a1 < 0x7FFFFFFF0000uLL )
  {
    if ( (v61 = KeGetCurrentThread()->ApcState.Process, TransitionPteValid >= 0)
      && (v61[1].DirectoryTableBase & 0x1000000000LL) != 0
      || (AutoBoostState2 = (void **)v61[4].AutoBoostState2) != 0LL && AutoBoostState2[3] != AutoBoostState2 + 3 )
    {
      v32 = 0LL;
    }
  }
  if ( (*(_BYTE *)(a4 + 34) & 0x10) != 0 )
  {
    if ( !v32 && *a1 < 0xFFFF800000000000uLL )
      goto LABEL_25;
LABEL_55:
    TransitionPteValid |= 0x42uLL;
    goto LABEL_25;
  }
  if ( v32 && *(__int64 *)(a4 + 40) >= 0 )
  {
    v16 = MiCaptureDirtyBitToPfn(a4);
    goto LABEL_55;
  }
LABEL_25:
  if ( *(__int64 *)(a4 + 40) >= 0 )
    goto LABEL_33;
  v33 = TransitionPteValid;
  v34 = 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( MiPteHasShadow() )
    {
      v34 = 1;
      if ( !BYTE5(stru_140E2D930.Header.WaitListHead.Blink) )
      {
        v59 = TransitionPteValid;
        if ( (TransitionPteValid & 1) != 0 )
          goto LABEL_122;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    {
      v59 = TransitionPteValid;
      if ( (TransitionPteValid & 1) != 0 )
LABEL_122:
        v33 = v59 | 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)a2 = v33;
  if ( v34 )
  {
    v35 = MiPteHasShadow();
    if ( v35 )
    {
      v37 = v35[2].KernelWaitTime;
      if ( v37 )
      {
        v38 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v39 = (a2 >> 3) & 0x1FF;
        if ( (v36 & 1) != 0 )
          v38 = v36 & 0x7FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v37 + 8 * v39) = v38;
      }
    }
  }
LABEL_33:
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    v40 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v40 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v40);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    if ( (*(_QWORD *)a3 & 0xFFFFFFFFFFELL) != 0 )
    {
      v55 = *(_QWORD *)a3 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
      v56 = *(_QWORD *)(8 * v55);
      v21 = 8 * v55;
      if ( v56 == 8 * v55 )
      {
        *(_QWORD *)a3 &= 0xFFFFF00000000001uLL;
      }
      else
      {
        if ( *(_QWORD *)(v56 + 8) != v21 || (v57 = *(_QWORD *)v56, *(_QWORD *)(*(_QWORD *)v56 + 8LL) != v56) )
          __fastfail(3u);
        *(_QWORD *)v21 = v57;
        *(_QWORD *)(v57 + 8) = v21;
        if ( *(_QWORD *)v21 == v21 )
        {
          *(_QWORD *)v56 = v56;
          v58 = (_QWORD *)v56;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v21 + 8LL) = v56;
          v58 = *(_QWORD **)(v21 + 8);
          *v58 = v56;
        }
        *(_QWORD *)(v56 + 8) = v58;
        *(_QWORD *)a3 = (v56 >> 3) ^ (*(_QWORD *)a3 ^ (v56 >> 3)) & 0xFFFFF00000000001uLL;
      }
    }
    else
    {
      *(_DWORD *)(a3 + 32) &= ~0x200000u;
    }
    if ( (*(_QWORD *)(a3 + 40) & 0x10000000000LL) == 0 )
    {
      v41 = (__int64)(*(_QWORD *)(a3 + 8) << 25) >> 16;
      if ( v41 < 0xFFFF800000000000uLL || byte_140E37A70[((v41 >> 39) & 0x1FF) - 256] != 4 )
        MiRemoveLockedPageChargeAndDecRef(a3);
    }
    if ( v21 )
      *(_DWORD *)(v21 + 16) = 1;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v16 )
    MiReleasePageFileInfo(v18, v16, 1);
  return TransitionPteValid;
}
