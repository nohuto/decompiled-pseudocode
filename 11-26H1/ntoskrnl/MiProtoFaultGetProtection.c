/*
 * XREFs of MiProtoFaultGetProtection @ 0x1402BB1B0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiCheckAndUpdateIoAttribution @ 0x14026D4A0 (MiCheckAndUpdateIoAttribution.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     MiIsDriverPage @ 0x1404B6920 (MiIsDriverPage.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiProtoFaultGetProtection(__int64 a1)
{
  unsigned __int64 *v1; // r12
  __int64 v3; // rbp
  ULONG_PTR v4; // r13
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rsi
  signed __int64 v16; // rsi
  char v17; // al
  unsigned __int64 v18; // rsi
  int v19; // eax
  char PagePrivilege; // al
  int v21; // ecx
  __int64 v22; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rbx
  _KPROCESS *v28; // rcx
  void **AutoBoostState2; // rax
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r15
  int v33; // ebp
  __int64 PteShadow; // rax
  _DWORD *v35; // rcx
  _DWORD *SubsectionFromPte; // rax
  _QWORD v37[9]; // [rsp+30h] [rbp-48h] BYREF
  int v38; // [rsp+80h] [rbp+8h] BYREF
  __int64 v39; // [rsp+88h] [rbp+10h]

  v1 = *(unsigned __int64 **)a1;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = **(_QWORD **)a1;
  v39 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = *(_QWORD *)v6;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL
    && v6 <= 0xFFFFF6FB7DBED7F8uLL
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0)
    && (MiFlags & 0x1800000) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process->AddressPolicy != 1 )
    {
      if ( Process )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v25 = *(_QWORD *)(KernelWaitTime + 8 * ((v6 >> 3) & 0x1FF));
          if ( (v25 & 0x20) != 0 )
            v7 |= 0x20uLL;
          v26 = v7;
          v7 |= 0x42uLL;
          if ( (v25 & 0x42) == 0 )
            v7 = v26;
        }
      }
    }
  }
  v8 = *(_QWORD *)(v4 + 16);
  if ( (v7 & 0x3FFFFFFFFFF000LL) == 0x3FFFFFFFFFF000LL && (v7 & 0x400) != 0 )
  {
    v9 = (v7 >> 5) & 0x1F;
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 64) | 1;
    v22 = (v8 >> 5) & 0x1F;
    *(_DWORD *)(a1 + 64) = v21;
    if ( (v7 & 8) != 0 )
      LODWORD(v22) = 1;
    LODWORD(v9) = v22;
    if ( (v21 & 0x40) != 0 && (v22 & 4) == 0 )
      *(_DWORD *)(a1 + 64) = v21 & 0xFFFFFFBF;
  }
  if ( (MiFlags & 0x20000) != 0
    && v5 >= 0xFFFF800000000000uLL
    && (v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL)
    && (v9 & 2) != 0 )
  {
    PagePrivilege = MiGetPagePrivilege(v4);
    if ( (PagePrivilege & 1) == 0 )
    {
      if ( (MiFlags & 0x40000) == 0 && *(__int64 *)(v4 + 40) < 0 && (v8 & 0x400) == 0 )
      {
        if ( MiIsDriverPage(v6, 0LL) )
          goto LABEL_115;
LABEL_33:
        LODWORD(v9) = v9 & 0xFFFFFFFD;
        if ( !(_DWORD)v9 )
          LODWORD(v9) = 1;
        goto LABEL_5;
      }
      if ( (PagePrivilege & 1) == 0 )
      {
        if ( (PagePrivilege & 8) != 0 )
        {
          *(_DWORD *)(a1 + 64) &= ~0x40u;
          LODWORD(v9) = 1;
          goto LABEL_5;
        }
        goto LABEL_33;
      }
    }
LABEL_115:
    *(_DWORD *)(a1 + 64) &= ~0x40u;
    LODWORD(v9) = 3;
  }
LABEL_5:
  v10 = *(_DWORD *)(v4 + 32);
  v11 = (unsigned int)v9 & 0xFFFFFFE7;
  *(_DWORD *)(a1 + 52) = v9;
  if ( (v10 & 0xC00000) != 0x400000 )
  {
    if ( (*(_DWORD *)(v4 + 32) & 0xC00000) != 0 )
    {
      if ( (*(_DWORD *)(v4 + 32) & 0xC00000) == 0x800000 )
        v11 = (unsigned int)v11 | 0x18;
    }
    else
    {
      v11 = (unsigned int)v11 | 8;
    }
  }
  v12 = (v3 & 0xFFFFFFFFFFLL) << 12;
  v13 = v12 | MmProtectToPteMask[v11] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_7;
  if ( v6 >= 0xFFFFF6FB40000000uLL && v6 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    v13 = v6 == 0xFFFFF6FB7DBEDF68uLL
        ? v12 | MmProtectToPteMask[v11] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
        : v12 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v11] & 0x7FF0000000000E7FLL | 0x21;
    if ( (unsigned int)MiUserPdeOrAbove(v6) )
      v13 |= 4uLL;
  }
  v18 = (__int64)(v6 << 25) >> 16;
  if ( v18 < 0x7FFFFFFF0000LL )
  {
    v13 |= 4uLL;
    goto LABEL_23;
  }
  if ( v18 < 0xFFFF800000000000uLL )
  {
LABEL_23:
    v19 = BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink);
    goto LABEL_24;
  }
  if ( v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( v18 < qword_140E2DFC0 || (v19 = BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink), v18 > qword_140E2DFD0) )
      v19 = BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink);
LABEL_24:
    if ( !v19 )
      goto LABEL_8;
LABEL_7:
    v13 |= 0x100uLL;
  }
LABEL_8:
  v14 = *(unsigned int *)(a1 + 64);
  v15 = v13 | 0x42;
  if ( (v11 & 5) != 4 || (int)v11 >= 0 )
    v15 = v13;
  v16 = v15 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( (v11 & 5) == 4 && (v14 & 0x20) != 0 )
  {
    v14 = (unsigned int)v14 | 0x40;
    *(_DWORD *)(a1 + 64) = v14;
  }
  v17 = v14;
  if ( (v14 & 0x40) != 0 && *v1 < 0x7FFFFFFF0000LL )
  {
    v28 = KeGetCurrentThread()->ApcState.Process;
    if ( v16 >= 0 && (v28[1].DirectoryTableBase & 0x1000000000LL) != 0
      || (AutoBoostState2 = (void **)v28[4].AutoBoostState2) != 0LL && AutoBoostState2[3] != AutoBoostState2 + 3 )
    {
      v17 = v14 & 0xBF;
      *(_DWORD *)(a1 + 64) = v14 & 0xFFFFFFBF;
    }
    else
    {
      v17 = v14;
    }
  }
  if ( (v17 & 0x40) != 0 && (v9 & 5) != 5 )
  {
    v27 = *(_QWORD *)(v4 + 16);
    v16 |= 0x42uLL;
    if ( (*(_DWORD *)(v4 + 32) & 0x100000) == 0 && (v27 & 0x400) == 0 && (v27 & 8) != 0 )
    {
      v30 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      v31 = (*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL;
      v38 = 0;
      v32 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v31);
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v38);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      v27 = *(_QWORD *)(v4 + 16);
      v14 = *(unsigned __int8 *)(v4 + 34);
      if ( (((v27 & 0x400) == 0) & (unsigned __int8)~((unsigned __int8)v14 >> 4)) != 0 )
      {
        if ( (v14 & 8) == 0 )
        {
          v37[0] = *(_QWORD *)(v4 + 16);
          if ( (v37[0] & 8) != 0 )
          {
            *(_QWORD *)(v4 + 16) &= ~8uLL;
            PteShadow = v37[0];
            v14 = (__int64)v37;
            if ( (unsigned __int64)v37 >= 0xFFFFF6FB7DBED000uLL )
            {
              v14 = (__int64)v37;
              if ( (unsigned __int64)v37 <= 0xFFFFF6FB7DBED7F8uLL )
                PteShadow = MiReadPteShadow(v37, v37[0]);
            }
            v37[0] = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
            v30 = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
          }
          else
          {
            v30 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          }
        }
        v33 = *(_DWORD *)(v4 + 32);
        if ( *(__int64 *)(v4 + 40) < 0 )
        {
          v14 = 0x400000000000400LL;
          if ( (*(_QWORD *)(v4 + 16) & 0x400000000000400LL) == 0x400 )
          {
            SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v4 + 16));
            if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20
              && (SubsectionFromPte[8] & 0x20000) == 0 )
            {
              KeBugCheckEx(0x1Au, 0x8840uLL, v4, 0LL, 1uLL);
            }
          }
        }
        if ( *(__int64 *)(v4 + 40) < 0
          && (*(_DWORD *)(v4 + 16) & 0x400LL) != 0
          && (*(_QWORD *)(v4 + 24) & 0x4000000000000000LL) == 0 )
        {
          v35 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v4 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)v35 + 56LL) & 0x20) == 0 && (v35[38] & 1) == 0 )
            MiSetSubsectionModified(v35, 0LL);
        }
        if ( (v33 & 0x80000) != 0
          && (unsigned int)MiCanPfnOriginalPteBeLost(v4)
          && (*(_QWORD *)(v4 + 16) & 8LL) != 0
          && (v33 & 0x100000) == 0 )
        {
          *(_QWORD *)(v4 + 16) &= ~8uLL;
        }
        *(_DWORD *)(v4 + 32) = v33 | 0x100000;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v30 )
        MiReleasePageFileInfo(v32, v30, 1LL);
    }
    if ( (v27 & 0x400) != 0 && (*(_DWORD *)(v39 + 184) & 0xF) != 1 )
      MiCheckAndUpdateIoAttribution(v4, v14);
  }
  *(_QWORD *)(a1 + 56) = v16;
}
