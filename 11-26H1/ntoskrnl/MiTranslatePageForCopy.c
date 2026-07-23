/*
 * XREFs of MiTranslatePageForCopy @ 0x14033ADCC
 * Callers:
 *     MmCopyMemory @ 0x14033B4D0 (MmCopyMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x1402C7240 (MiUnlockSystemVa.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiVaIsUltra @ 0x14033A650 (MiVaIsUltra.c)
 *     MiInitializePageFaultPacket @ 0x14033B3D0 (MiInitializePageFaultPacket.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     MiCheckVirtualAddress @ 0x1403A7340 (MiCheckVirtualAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiStandbyPageContentsIntact @ 0x140708D64 (MiStandbyPageContentsIntact.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiTranslatePageForCopy(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // r15
  _KPROCESS *Process; // rbx
  int SystemRegionType; // eax
  void *volatile *AnyMultiplexedVm; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int128 v18; // xmm0
  __int64 v19; // rax
  unsigned __int64 PteShadow; // r8
  int v21; // ebx
  __int64 v22; // rsi
  unsigned __int64 v23; // xmm1_8
  __int64 p_Blink; // rbx
  __int64 v26; // rdx
  int v27; // r8d
  unsigned __int64 i; // rcx
  __int16 v29; // ax
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 *PrototypePteDirect; // r15
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // r8
  int v39; // r9d
  unsigned __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rcx
  int v43; // r8d
  __int64 v44; // rax
  _KPROCESS *v45; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  char v49; // al
  char v50[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v51; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v52; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v53; // [rsp+48h] [rbp-B8h]
  _QWORD v54[3]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+68h] [rbp-98h]
  __int128 v56; // [rsp+88h] [rbp-78h]
  unsigned __int64 valid; // [rsp+98h] [rbp-68h]

  v53 = a3;
  v52 = a4;
  v51 = 0LL;
  memset_0(v54, 0, 0x98uLL);
  *a5 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  memset_0((void *)a2, 0, 0x80uLL);
  v9 = -1LL;
  *a3 = -1LL;
  *a4 = 0LL;
  MiInitializePageFaultPacket(0, a1, 0, 0, 0LL, (__int64)v54);
  if ( (__int64)a1 >> 47 != -1 && (__int64)a1 >> 47 != 0
    || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= 0xFFFFDE0000000000uLL && a1 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
    || a1 >= 0xFFFF800000000000uLL && MiVaIsUltra(a1) )
  {
    return 3221225711LL;
  }
  v12 = BugCheckParameter2[0];
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a1 < qword_140E2DFC0 || a1 > qword_140E2DFD0 )
  {
    SystemRegionType = MiGetSystemRegionType(a1);
    if ( SystemRegionType == 16 )
      return 3221225632LL;
    AnyMultiplexedVm = MiSystemVaTypeToVm(SystemRegionType);
    if ( !AnyMultiplexedVm )
      AnyMultiplexedVm = (void *volatile *)MiGetAnyMultiplexedVm(6LL, v16);
    *(_DWORD *)(a2 + 4) |= 4u;
    if ( !(unsigned int)MiSynchronizeSystemVa((__int64)AnyMultiplexedVm, a1, v17, 0, a2) )
      return 3221225632LL;
    v18 = *(_OWORD *)(a2 + 24);
    v19 = *(int *)(a2 + 16);
    valid = *(_QWORD *)(a2 + 40);
    v56 = v18;
    if ( (_DWORD)v19 )
    {
      v26 = 1LL;
      v27 = *(_DWORD *)(a2 + 16);
      v9 = (*(_QWORD *)BugCheckParameter2[v19] >> 12) & 0xFFFFFFFFFFLL;
      for ( i = v54[0] >> 12; v27; --v27 )
      {
        v29 = i;
        i >>= 9;
        v30 = v26 * (v29 & 0x1FF);
        v26 <<= 9;
        v9 += v30;
      }
      if ( v9 <= qword_140E2D920 )
      {
        v31 = 48 * v9;
        if ( (*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
        {
          v21 = 0;
          LODWORD(v51) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v51);
            while ( *(__int64 *)(v31 - 0x21FFFFFFFFE8LL) < 0 );
          }
          goto LABEL_19;
        }
      }
LABEL_17:
      v21 = -1073741503;
      goto LABEL_19;
    }
  }
  else
  {
    p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
    *(_QWORD *)&v56 = p_Blink;
    BYTE12(v56) = MiLockWorkingSetShared(p_Blink, v10, v11);
    valid = MiLockLowestValidPageTableEx(p_Blink, v12, (unsigned __int64 *)&v51, 0);
    if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v21 = *v51 != 0LL ? -1073741608 : -1073741819;
      goto LABEL_19;
    }
  }
  PteShadow = *(_QWORD *)v12;
  v21 = 0;
  v50[0] = 17;
  if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v12, PteShadow);
  while ( 1 )
  {
    if ( (PteShadow & 1) != 0 )
    {
      v9 = (PteShadow >> 12) & 0xFFFFFFFFFFLL;
      if ( v9 <= qword_140E2D920 )
      {
        v22 = 48 * v9;
        if ( (*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
        {
          LODWORD(v51) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v51);
            while ( *(__int64 *)(v22 - 0x21FFFFFFFFE8LL) < 0 );
          }
          goto LABEL_19;
        }
      }
      goto LABEL_17;
    }
    if ( (PteShadow & 0x400) != 0 )
    {
      if ( (PteShadow & 0x400000000000000LL) != 0 )
      {
        if ( !MiGetSubsectionFromPte(PteShadow) )
          v41 &= ~0x400uLL;
        *a5 = v41 & 0xFBFFFFFFFFFFFFFFuLL;
        goto LABEL_96;
      }
      PrototypePteDirect = (unsigned __int64 *)MiGetPrototypePteDirect(PteShadow);
      LOBYTE(v34) = MiIsPrototypePteVadLookup(v33);
      if ( v34 )
      {
        LODWORD(v51) = 0;
        PrototypePteDirect = (unsigned __int64 *)MiCheckVirtualAddress(a1, &v51, 0LL);
        if ( !PrototypePteDirect )
          goto LABEL_57;
      }
      v35 = MiLockProtoPoolPage((ULONG_PTR)PrototypePteDirect, v50);
      if ( !v35 )
      {
LABEL_44:
        v21 = -1073741608;
        goto LABEL_19;
      }
      v37 = MiLockLeafPage(PrototypePteDirect, 0);
      v40 = *PrototypePteDirect;
      if ( (unsigned __int64)PrototypePteDirect >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)PrototypePteDirect <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v40 = MiReadPteShadow((unsigned __int64)PrototypePteDirect, *PrototypePteDirect);
      }
      if ( (v40 & 1) != 0 )
      {
LABEL_53:
        v9 = (v37 + 0x220000000000LL) / 48;
        *v52 = v35;
        goto LABEL_19;
      }
      if ( !v40 )
      {
        LOBYTE(v36) = v50[0];
        MiUnlockProtoPoolPage(v35, v36, v38);
LABEL_57:
        v21 = -1073741819;
        goto LABEL_19;
      }
      if ( (v40 & 0x400) != 0 )
        goto LABEL_66;
      if ( (v40 & 0x800) == 0 )
      {
        LOBYTE(v36) = v50[0];
        v42 = v35;
        if ( (v40 & 8) == 0 )
        {
          MiUnlockProtoPoolPage(v35, v36, v38);
          goto LABEL_96;
        }
        goto LABEL_97;
      }
      if ( (*(_BYTE *)(v37 + 34) & 0x20) == 0 )
      {
        if ( (unsigned int)MiStandbyPageContentsIntact(v37) )
          goto LABEL_53;
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_66:
        LOBYTE(v36) = v50[0];
        v42 = v35;
LABEL_97:
        MiUnlockProtoPoolPage(v42, v36, v38);
        goto LABEL_44;
      }
      v43 = v35;
LABEL_91:
      LOBYTE(v39) = v50[0];
      LODWORD(v51) = 1;
      MiWaitForCollidedFaultComplete((unsigned int)v54, v37, v43, v39, (__int64)&v51);
      goto LABEL_44;
    }
    if ( (PteShadow & 0x3E0) == 0 || (PteShadow & 0x3E0) == 0x300 || (PteShadow & 0x3E0) == 0x200 )
      goto LABEL_57;
    if ( (PteShadow & 0x800) == 0 )
      break;
    v44 = MiLockTransitionLeafPageEx(v12);
    v37 = v44;
    if ( v44 )
    {
      v49 = *(_BYTE *)(v44 + 34);
      if ( (v49 & 0x20) == 0 )
      {
        if ( (unsigned int)MiStandbyPageContentsIntact(v37) )
        {
          v9 = (v37 + 0x220000000000LL) / 48;
          goto LABEL_19;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_44;
      }
      if ( (v49 & 8) != 0 )
        goto LABEL_44;
      v43 = 0;
      goto LABEL_91;
    }
    PteShadow = *(_QWORD *)v12;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL
      && v12 <= 0xFFFFF6FB7DBED7F8uLL
      && (PteShadow & 1) != 0
      && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
    {
      v45 = MiPteHasShadow();
      if ( v45 )
      {
        KernelWaitTime = v45[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v47 = *(_QWORD *)(KernelWaitTime + 8 * ((v12 >> 3) & 0x1FF));
          if ( (v47 & 0x20) != 0 )
            PteShadow |= 0x20uLL;
          v48 = PteShadow;
          PteShadow |= 0x42uLL;
          if ( (v47 & 0x42) == 0 )
            PteShadow = v48;
        }
      }
    }
  }
  if ( (PteShadow & 8) != 0 )
    goto LABEL_44;
LABEL_96:
  v21 = 273;
LABEL_19:
  v23 = valid;
  *(_OWORD *)(a2 + 24) = v56;
  *(_QWORD *)(a2 + 40) = v23;
  if ( v21 < 0 )
    MiUnlockSystemVa(a2);
  else
    *v53 = v9;
  return (unsigned int)v21;
}
