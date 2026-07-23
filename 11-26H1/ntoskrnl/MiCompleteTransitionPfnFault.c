/*
 * XREFs of MiCompleteTransitionPfnFault @ 0x1402E40B0
 * Callers:
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiMakeTransitionPteValid @ 0x1402E5640 (MiMakeTransitionPteValid.c)
 *     MiUpdateProtectionMask @ 0x1402E58D0 (MiUpdateProtectionMask.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
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
  unsigned __int64 v15; // rdx
  __int64 TransitionPteValid; // rbx
  __int64 v17; // r8
  unsigned __int64 v18; // rdi
  __int64 v19; // rcx
  struct _KEVENT *v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // r11
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  _KPROCESS *v29; // rax
  __int64 v30; // rax
  __int64 v31; // r14
  unsigned int v32; // ebp
  unsigned __int64 v33; // rcx
  __int64 v35; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 v37; // r10
  __int64 v38; // rdx
  __int64 v39; // rcx
  _KPROCESS *v40; // r10
  unsigned __int64 v41; // r11
  __int64 v42; // r8
  _KPROCESS *v43; // rax
  __int64 v44; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // [rsp+50h] [rbp+8h]

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
      v43 = MiPteHasShadow();
      if ( v43 )
      {
        KernelWaitTime = v43[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v46 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v46 & 0x20) != 0 )
            v44 |= 0x20uLL;
          v12 = v44 | 0x42;
          if ( (v46 & 0x42) == 0 )
            v12 = v44;
        }
      }
    }
    updated = MiUpdateProtectionMask(1LL, (*(_DWORD *)(a4 + 32) >> 22) & 3, v12);
    *(_QWORD *)a2 = (32LL * updated) ^ (v14 ^ (32LL * updated)) & 0xFFFFFFFFFFFFFC1FuLL;
  }
  TransitionPteValid = MiMakeTransitionPteValid(a2);
  v18 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v19 = (*(_QWORD *)(a4 + 40) >> 43) & 0x3FFLL;
  a5 = TransitionPteValid;
  v20 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * v19);
  v21 = *(_QWORD *)(a4 + 16);
  if ( (v21 & 0x400) == 0 && (v21 & 8) != 0 && (unsigned __int16)v21 >> 12 == v20[54].Header.SignalState )
    v18 = MiCaptureDirtyBitToPfn(a4);
  v22 = *(_QWORD *)(a4 + 16);
  v23 = 0LL;
  v24 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (v22 & 0x400) == 0 && (v22 & 0x8000000) != 0 )
  {
    v25 = a5;
    if ( (unsigned __int64)&a5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&a5 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v35 = a5;
      if ( (a5 & 1) != 0 && ((a5 & 0x20) == 0 || (a5 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          v37 = Process[2].KernelWaitTime;
          if ( v37 )
          {
            v38 = *(_QWORD *)(v37 + 8 * (((unsigned __int64)&a5 >> 3) & 0x1FF));
            if ( (v38 & 0x20) != 0 )
              v35 = a5 | 0x20;
            v25 = v35 | 0x42;
            if ( (v38 & 0x42) == 0 )
              v25 = v35;
          }
        }
      }
    }
    v26 = a5;
    v27 = v25 | 0x40;
    if ( (unsigned __int64)&a5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&a5 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v39 = a5;
      if ( (a5 & 1) != 0 && ((a5 & 0x20) == 0 || (a5 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        v40 = KeGetCurrentThread()->ApcState.Process;
        if ( v40->AddressPolicy != 1 )
        {
          v41 = v40[2].KernelWaitTime;
          if ( v41 )
          {
            v42 = *(_QWORD *)(v41 + 8 * (((unsigned __int64)&a5 >> 3) & 0x1FF));
            if ( (v42 & 0x20) != 0 )
              v39 = a5 | 0x20;
            v26 = v39 | 0x42;
            if ( (v42 & 0x42) == 0 )
              v26 = v39;
          }
          v24 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
    }
    v17 = 0LL;
    v15 = v27 & 0x80FFFFFFFFFFFFFFuLL ^ v26 & 0x7F00000000000000LL;
    v54 = v15;
    v22 = (__int64)&a5;
    if ( (unsigned __int64)&a5 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&a5 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_12;
    if ( MiPteHasShadow() )
    {
      v17 = 1LL;
      if ( BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
        goto LABEL_12;
      v52 = v54;
      if ( (v54 & 1) == 0 )
        goto LABEL_12;
    }
    else
    {
      v22 = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)(v22 + 1532) & 0x1000) == 0 )
        goto LABEL_12;
      v52 = v54;
      if ( (v54 & 1) == 0 )
        goto LABEL_12;
    }
    v15 = v52 | 0x8000000000000000uLL;
LABEL_12:
    a5 = v15;
    if ( (_DWORD)v17 )
    {
      if ( (MiFlags & 0x1800000) != 0 )
      {
        v22 = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(v22 + 352) != 1 )
        {
          v17 = *(_QWORD *)(v22 + 1288);
          if ( v17 )
          {
            v22 = v24 & v15;
            v17 += 8 * (((unsigned __int64)&a5 >> 3) & 0x1FF);
            v28 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            if ( (v15 & 1) != 0 )
              v28 = v24 & v15;
            *(_QWORD *)v17 = v28;
          }
        }
      }
    }
    TransitionPteValid = a5;
  }
  if ( (TransitionPteValid & 0x800) == 0 )
    goto LABEL_25;
  v22 = a6;
  if ( a6 && *a1 < 0x7FFFFFFF0000uLL )
  {
    if ( (v15 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process, TransitionPteValid >= 0)
      && (*(_DWORD *)(v15 + 500) & 0x10) != 0
      || (v53 = *(_QWORD *)(v15 + 1912)) != 0 && *(_QWORD *)(v53 + 24) != v53 + 24 )
    {
      v22 = 0LL;
    }
  }
  if ( (*(_BYTE *)(a4 + 34) & 0x10) != 0 )
  {
    if ( !v22 && *a1 < 0xFFFF800000000000uLL )
      goto LABEL_25;
LABEL_55:
    TransitionPteValid |= 0x42uLL;
    goto LABEL_25;
  }
  if ( v22 && *(__int64 *)(a4 + 40) >= 0 )
  {
    v18 = MiCaptureDirtyBitToPfn(a4);
    goto LABEL_55;
  }
LABEL_25:
  if ( *(__int64 *)(a4 + 40) >= 0 )
    goto LABEL_33;
  v15 = TransitionPteValid;
  v17 = 0LL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( MiPteHasShadow() )
    {
      v17 = 1LL;
      if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
      {
        v51 = TransitionPteValid;
        if ( (TransitionPteValid & 1) != 0 )
          goto LABEL_122;
      }
    }
    else
    {
      v22 = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)(v22 + 1532) & 0x1000) != 0 )
      {
        v51 = TransitionPteValid;
        if ( (TransitionPteValid & 1) != 0 )
LABEL_122:
          v15 = v51 | 0x8000000000000000uLL;
      }
    }
  }
  *(_QWORD *)a2 = v15;
  if ( (_DWORD)v17 )
  {
    v29 = MiPteHasShadow();
    if ( v29 )
    {
      v17 = v29[2].KernelWaitTime;
      if ( v17 )
      {
        v30 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v22 = v15 & 0x7FFFFFFFFFFFFFFFLL;
        v31 = (a2 >> 3) & 0x1FF;
        if ( (v15 & 1) != 0 )
          v30 = v15 & 0x7FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v17 + 8 * v31) = v30;
      }
    }
  }
LABEL_33:
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v32 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v22, v15, v17) )
        {
          HvlNotifyLongSpinWait(v32);
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
      v47 = *(_QWORD *)a3 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
      v48 = *(_QWORD *)(8 * v47);
      v23 = 8 * v47;
      if ( v48 == 8 * v47 )
      {
        *(_QWORD *)a3 &= 0xFFFFF00000000001uLL;
      }
      else
      {
        if ( *(_QWORD *)(v48 + 8) != v23 || (v49 = *(_QWORD *)v48, *(_QWORD *)(*(_QWORD *)v48 + 8LL) != v48) )
          __fastfail(3u);
        *(_QWORD *)v23 = v49;
        *(_QWORD *)(v49 + 8) = v23;
        if ( *(_QWORD *)v23 == v23 )
        {
          *(_QWORD *)v48 = v48;
          v50 = (_QWORD *)v48;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v23 + 8LL) = v48;
          v50 = *(_QWORD **)(v23 + 8);
          *v50 = v48;
        }
        *(_QWORD *)(v48 + 8) = v50;
        *(_QWORD *)a3 = (v48 >> 3) ^ (*(_QWORD *)a3 ^ (v48 >> 3)) & 0xFFFFF00000000001uLL;
      }
    }
    else
    {
      *(_DWORD *)(a3 + 32) &= ~0x200000u;
    }
    if ( (*(_QWORD *)(a3 + 40) & 0x10000000000LL) == 0 )
    {
      v33 = (__int64)(*(_QWORD *)(a3 + 8) << 25) >> 16;
      if ( v33 < 0xFFFF800000000000uLL || byte_140E37BF0[((v33 >> 39) & 0x1FF) - 256] != 4 )
        MiRemoveLockedPageChargeAndDecRef(a3);
    }
    if ( v23 )
      *(_DWORD *)(v23 + 16) = 1;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v18 )
    MiReleasePageFileInfo(v20, v18, 1LL);
  return TransitionPteValid;
}
