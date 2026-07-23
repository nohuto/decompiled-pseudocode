/*
 * XREFs of MiDeleteVa @ 0x140324AF0
 * Callers:
 *     <none>
 * Callees:
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiDeleteRotateVa @ 0x140314480 (MiDeleteRotateVa.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiDecommitAddToList @ 0x140325550 (MiDecommitAddToList.c)
 *     MiDecommitHandleTransitionPte @ 0x14033FE54 (MiDecommitHandleTransitionPte.c)
 *     MiDecommitLargePte @ 0x140340E3C (MiDecommitLargePte.c)
 *     MiDecommitAddTbFlushEntries @ 0x1403447B8 (MiDecommitAddTbFlushEntries.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140362970 (MiDecommitHandlePageFileFormatPte.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140362D00 (MiDecommitHandleProtoFormatPte.c)
 *     MiReturnPagedPoolLockCharge @ 0x14042F7F4 (MiReturnPagedPoolLockCharge.c)
 *     MiDeleteLargeUserPde @ 0x1404711E0 (MiDeleteLargeUserPde.c)
 *     MiDeleteVadAwePtes @ 0x14047137C (MiDeleteVadAwePtes.c)
 *     MiIsLazyStampedPte @ 0x140482EE8 (MiIsLazyStampedPte.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, unsigned __int64 KernelWaitTime, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r9
  unsigned int v5; // r13d
  __int64 v6; // rsi
  int v7; // r11d
  int v8; // eax
  unsigned __int64 v9; // rbp
  signed __int64 v10; // r15
  signed __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned int v14; // r12d
  __int64 v15; // r8
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rax
  ULONG *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  int v23; // ecx
  int PagePrivilege; // eax
  _KPROCESS *Process; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 *ProcessorFlushList; // rax
  __int64 v29; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 *MmInternal; // rcx
  __int64 v32; // rax
  int v33; // r12d
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r12
  __int64 v36; // r12
  int v37; // r12d
  _KPROCESS *v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  int v42; // edi
  __int64 v43; // rax
  unsigned int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // rax
  __int64 *v47; // rdx
  int v48; // eax
  _KPROCESS *v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  _KPROCESS *v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int64 v57; // rcx
  __int16 v59; // [rsp+78h] [rbp+10h]
  unsigned int v60; // [rsp+80h] [rbp+18h]

  v60 = a3;
  v3 = KernelWaitTime;
  v4 = a1;
  v5 = 1;
  v6 = **(_QWORD **)(a1 + 184);
  v7 = *(_DWORD *)(v6 + 116);
  v59 = v7;
  *(_QWORD *)(v6 + 64) = KernelWaitTime;
  *(_QWORD *)(v6 + 80) = KernelWaitTime;
  v8 = *(_DWORD *)(v6 + 100);
  v9 = (__int64)(KernelWaitTime << 25) >> 16;
  *(_QWORD *)(v6 + 48) = v9;
  *(_DWORD *)(v6 + 100) = v8 ^ (v8 ^ ((_DWORD)a3 << 18)) & 0x1C0000;
  v10 = *(_QWORD *)(a1 + 32);
  v11 = v10 - 1024;
  if ( (*(_DWORD *)(v10 + 184) & 0xF) != 0 )
    v11 = 0LL;
  while ( 1 )
  {
    v12 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL
      && v3 <= 0xFFFFF6FB7DBED7F8uLL
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0)
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
            v26 = *(_QWORD *)(KernelWaitTime + 8 * ((v3 >> 3) & 0x1FF));
            if ( (v26 & 0x20) != 0 )
              v12 |= 0x20uLL;
            v27 = v12;
            v12 |= 0x42uLL;
            if ( (v26 & 0x42) == 0 )
              v12 = v27;
          }
        }
      }
    }
    if ( !v12 )
      goto LABEL_5;
    if ( (v12 & 1) != 0 )
      break;
    if ( (v12 & 0x400) != 0 )
    {
      MiDecommitHandleProtoFormatPte(v6, v12);
      *(_QWORD *)(v6 + 80) += 8LL * v5;
      return 0LL;
    }
    v33 = v7 & 0x10;
    if ( (v7 & 0x10) != 0 && (unsigned int)MiIsLazyStampedPte(v12, KernelWaitTime, a3) )
    {
      v46 = MiDeleteVadAwePtes(a1, v3, v60);
      MiDecommitAddTbFlushEntries(v6, v3, v60, v46);
      *(_QWORD *)(v6 + 80) += 8LL * v5;
      return 0LL;
    }
    if ( (v12 & 0x800) == 0 )
    {
      *(_QWORD *)(v6 + 80) += 8LL * (unsigned int)MiDecommitHandlePageFileFormatPte(v6, v12);
      return 0LL;
    }
    if ( (v7 & 0x800) != 0 )
    {
      v45 = MiDeleteLargeUserPde(a1, v3, v60);
      v5 = v45;
      if ( !v33 )
      {
        v42 = v45;
        if ( v45 )
          goto LABEL_103;
      }
      goto LABEL_63;
    }
    if ( v33 && (v12 & 0x3E0) == 0x300 )
    {
      MiDeleteVadAwePtes(a1, v3, v60);
      *(_QWORD *)(v6 + 80) += 8LL * v5;
      return 0LL;
    }
    v5 = MiDecommitHandleTransitionPte(v6, v12);
    if ( v5 )
      goto LABEL_63;
    LOWORD(v7) = v59;
  }
  if ( !*(_QWORD *)(v6 + 16) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    MmInternal = (__int64 *)CurrentPrcb->MmInternal;
    if ( !MmInternal )
    {
      dword_141032C94 = 512;
      MmInternal = MxTempPrcb;
      dword_14102FE18 = 1;
    }
    v32 = *((unsigned int *)MmInternal + 85);
    if ( (_DWORD)v32 == *((_DWORD *)MmInternal + 86) )
      KeBugCheckEx(0x1Au, 0x440uLL, (ULONG_PTR)CurrentPrcb, (unsigned int)v32, 0LL);
    v47 = &MmInternal[2575 * v32];
    v47[3070] = (__int64)KeGetCurrentThread();
    ++*((_DWORD *)MmInternal + 85);
    *((_OWORD *)v47 + 248) = 0LL;
    *((_OWORD *)v47 + 249) = 0LL;
    v47[500] = 0LL;
    *((_DWORD *)v47 + 995) = 512;
    *(_OWORD *)(v47 + 1013) = 0LL;
    *(_OWORD *)(v47 + 1015) = 0LL;
    v47[1017] = 0LL;
    *((_DWORD *)v47 + 2029) = 512;
    v4 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 16) = v47 + 496;
    *((_DWORD *)v47 + 996) = 0;
    *((_DWORD *)v47 + 997) = 1;
    v47[496] = v4;
    *((_BYTE *)v47 + 3992) = (*(_DWORD *)(v4 + 184) & 0x40) != 0;
    if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)v4 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      if ( (*(_DWORD *)(v4 + 184) & 0xF) == 0 )
      {
        v48 = 1;
LABEL_123:
        *((_DWORD *)v47 + 996) &= 0xFFFFFFDB;
        *((_DWORD *)v47 + 994) = v48;
        *(_WORD *)((char *)v47 + 3993) = 0;
        *((_DWORD *)v47 + 999) = 0;
        v47[500] = 0LL;
        v47[501] = 0LL;
        goto LABEL_9;
      }
    }
    else
    {
      *((_DWORD *)v47 + 996) |= 9u;
    }
    v48 = 0;
    goto LABEL_123;
  }
LABEL_9:
  v14 = v60;
  v15 = 0xFFFFFFFFFFLL;
  v16 = 0xFFFFDE0000000000uLL;
  if ( (int)v60 >= 1 )
  {
    if ( (v12 & 0x80u) == 0LL )
    {
      v4 = a1;
      if ( (*(_DWORD *)a1 & 4) != 0 )
      {
        MiLockNestedPageTable(v10, v3);
        v4 = a1;
        v15 = 0xFFFFFFFFFFLL;
        v16 = 0xFFFFDE0000000000uLL;
      }
      v34 = *(_QWORD *)v3;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL
        && v3 <= 0xFFFFF6FB7DBED7F8uLL
        && (v34 & 1) != 0
        && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
      {
        v38 = MiPteHasShadow();
        if ( v38 )
        {
          v39 = v38[2].KernelWaitTime;
          if ( v39 )
          {
            v40 = *(_QWORD *)(v39 + 8 * ((v3 >> 3) & 0x1FF));
            if ( (v40 & 0x20) != 0 )
              v34 |= 0x20uLL;
            v41 = v34;
            v34 |= 0x42uLL;
            if ( (v40 & 0x42) == 0 )
              v34 = v41;
          }
        }
      }
      v35 = v16 + 48 * (v15 & (v34 >> 12));
      if ( (*(_DWORD *)(v35 + 36) & 0x4000000) != 0 )
        v36 = *(_QWORD *)v35 >> 36;
      else
        v36 = *(_QWORD *)(v35 + 16) >> 17;
      v37 = v36 & 0x3FF;
      if ( (*(_DWORD *)v4 & 4) != 0 )
      {
        MiUnlockPageTableInternal(v10, v3);
        v4 = a1;
      }
      if ( v37 )
      {
LABEL_5:
        *(_QWORD *)(v6 + 80) += 8LL;
        return 0LL;
      }
      v14 = v60;
      LOBYTE(v7) = v59;
      goto LABEL_12;
    }
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 116) & 0x810) == 0 )
    {
      v4 = a1;
LABEL_12:
      if ( !v11 || v14 )
        goto LABEL_55;
      if ( (v7 & 8) != 0 )
      {
        if ( (unsigned int)MiDeleteRotateVa(v4, v3, 0LL, v4) )
        {
          v42 = 1;
LABEL_103:
          if ( v3 < 0xFFFFF6FB7DBED000uLL || v3 > 0xFFFFF6FB7DBEDFFFuLL )
          {
            v43 = *(_QWORD *)(v6 + 80);
            *(_DWORD *)(v6 + 96) += v42;
            *(_QWORD *)(v6 + 80) = v43 + 8LL * v5;
            return 0LL;
          }
LABEL_63:
          *(_QWORD *)(v6 + 80) += 8LL * v5;
          return 0LL;
        }
        LOBYTE(v7) = v59;
      }
      if ( (v7 & 0x90) != 0x80 )
        goto LABEL_55;
      v4 = 0xFFFFFFFFFFLL;
      v17 = (v12 >> 12) & 0xFFFFFFFFFFLL;
      if ( v17 > qword_140E2D920
        || (*(_QWORD *)(48 * v17 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0
        || (v7 & 2) == 0
        || (*(_DWORD *)(v10 + 184) & 0x1000000) != 0 )
      {
        goto LABEL_55;
      }
      v18 = (*(_DWORD *)(v10 + 184) & 0xF) == 1
          ? &MiSystemPartition
          : *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v10 + 174));
      if ( !v18[4539] )
        goto LABEL_55;
      LODWORD(v19) = -1;
      if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v20 = (v9 >> 9) & 0x7FFFFFFFF8LL;
        v21 = *(_QWORD *)(v20 - 0x98000000000LL);
        if ( (unsigned __int64)(v20 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)(v20 - 0x98000000000LL) <= 0xFFFFF6FB7DBED7F8uLL
          && (v21 & 1) != 0
          && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
        {
          v49 = MiPteHasShadow();
          if ( v49 )
          {
            v51 = v49[2].KernelWaitTime;
            if ( v51 )
            {
              v52 = *(_QWORD *)(v51 + 8 * ((v50 >> 3) & 0x1FF));
              if ( (v52 & 0x20) != 0 )
                v21 |= 0x20uLL;
              v53 = v21;
              v21 |= 0x42uLL;
              if ( (v52 & 0x42) == 0 )
                v21 = v53;
            }
          }
        }
        v19 = HIBYTE(v21) & 0xF;
        if ( (_DWORD)v19 == 7 )
          goto LABEL_55;
      }
      v22 = *(_QWORD *)v3;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL
        && v3 <= 0xFFFFF6FB7DBED7F8uLL
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        v54 = MiPteHasShadow();
        if ( v54 )
        {
          v55 = v54[2].KernelWaitTime;
          if ( v55 )
          {
            v56 = *(_QWORD *)(v55 + 8 * ((v3 >> 3) & 0x1FF));
            if ( (v56 & 0x20) != 0 )
              v22 |= 0x20uLL;
            v57 = v22;
            v22 |= 0x42uLL;
            if ( (v56 & 0x42) == 0 )
              v22 = v57;
          }
        }
      }
      if ( (v22 & 0x20) == 0 )
      {
LABEL_55:
        if ( (*(_DWORD *)(v6 + 112) & 8) != 0 )
        {
          MiReturnPagedPoolLockCharge(v6, v12, v15, v4);
        }
        else
        {
          if ( !*(_QWORD *)(v6 + 16) )
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            v29 = *(_QWORD *)(v6 + 32);
            *(_QWORD *)(v6 + 16) = ProcessorFlushList;
            MiInitializeTbFlushList((_DWORD)ProcessorFlushList, v29, *((_DWORD *)ProcessorFlushList + 3), 0, 1);
          }
          if ( ((v12 & 0x80u) == 0LL || (*(_DWORD *)(v6 + 100) & 0x1C0000) == 0)
            && (*(_QWORD *)(v6 + 144) == 1LL || (*(_DWORD *)(v6 + 100) & 0x1C0000) != 0) )
          {
            MiDecommitAddToList(v6, *(_QWORD *)(v6 + 48));
          }
          else
          {
            MiDecommitLargePte(v6);
          }
        }
        if ( v14 )
          v5 = 1;
        else
          v5 = *(_DWORD *)(v6 + 144);
        goto LABEL_63;
      }
      v23 = *(_DWORD *)(v10 + 184);
      if ( (v23 & 0xF) != 0 )
      {
        if ( !_bittest64(&MiFlags, 0x26u) || (v23 & 0x40) == 0 )
          goto LABEL_54;
      }
      else if ( !*(_QWORD *)(v10 + 624) && (*(_QWORD *)(v10 - 656) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        goto LABEL_54;
      }
      if ( (*(_DWORD *)(v10 + 184) & 0xF) != 0 )
      {
        if ( (MiGetPagePrivilege((_QWORD *)(48 * (v4 & (v22 >> 12)) - 0x220000000000LL), 2LL, 0LL) & 0x41) != 0 )
          goto LABEL_37;
      }
      else if ( v9 < 0x7FFFFFFF0000LL
             && (*(_QWORD *)(v10 + 624)
              || (PagePrivilege = MiGetPagePrivilege((_QWORD *)(48 * (v4 & (v22 >> 12)) - 0x220000000000LL), 2LL, 0LL)) != 0
              && ((*(_BYTE *)(v10 - 656) & 1) != 0 || (PagePrivilege & 8) == 0)) )
      {
LABEL_37:
        if ( (_DWORD)v19 )
          goto LABEL_55;
      }
LABEL_54:
      MiLogPageAccess(v10, v3, v15);
      goto LABEL_55;
    }
    if ( !v11 )
      goto LABEL_55;
  }
  v44 = MiDeleteLargeUserPde(a1, v3, v60);
  if ( (v59 & 0x10) == 0 )
    *(_DWORD *)(v6 + 96) += v44;
  *(_QWORD *)(v6 + 80) += 8LL * v44;
  return 0LL;
}
