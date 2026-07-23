/*
 * XREFs of MiGetNextPageTablePte @ 0x14032A730
 * Callers:
 *     MiWalkPageTablesEvaluatePte @ 0x140329B60 (MiWalkPageTablesEvaluatePte.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiIsPdeOrAboveAccessible @ 0x140482E0C (MiIsPdeOrAboveAccessible.c)
 *     MiIsLazyStampedPte @ 0x140482EE8 (MiIsLazyStampedPte.c)
 *     MiFlushAllFilesystemPages @ 0x1405343FC (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiGetNextPageTablePte(int *a1, unsigned __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // r11
  __int64 v9; // rcx
  int v10; // ecx
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 i; // rax
  int v16; // eax
  ULONG_PTR v17; // rbx
  __int64 result; // rax
  unsigned __int64 j; // rdx
  int v20; // eax
  int v21; // ecx
  __int64 v22; // r14
  unsigned __int64 v23; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  char v25; // al
  __int64 v26; // rcx
  __int64 v27; // rcx
  _KPROCESS *v28; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // r11
  __int64 v34; // rdx

  v4 = (int)a3;
  v6 = (unsigned __int64)a2;
  v8 = *a2;
  if ( (_DWORD)a3 == 3
    && (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v28 = MiPteHasShadow();
    if ( v28 )
    {
      KernelWaitTime = v28[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v30 = *(_QWORD *)(KernelWaitTime + 8 * ((v6 >> 3) & 0x1FF));
        if ( (v30 & 0x20) != 0 )
          v8 |= 0x20uLL;
        v31 = v8;
        v8 |= 0x42uLL;
        if ( (v30 & 0x42) == 0 )
          v8 = v31;
      }
    }
  }
  if ( !v8 )
  {
    if ( !(_DWORD)a3 && (*a1 & 1) != 0 )
      return 2LL;
    return 1LL;
  }
  if ( (v8 & 1) == 0 )
  {
    if ( (int)v4 < 1 )
    {
      if ( (_DWORD)a3 )
        goto LABEL_6;
      return 2LL;
    }
    if ( (unsigned int)MiIsPdeOrAboveAccessible(v6, a2, a3) )
    {
LABEL_6:
      if ( (*a1 & 0x40) == 0 )
      {
        v9 = *((_QWORD *)a1 + 3);
        if ( v9 )
          MiFlushTbList(v9);
        if ( *((_QWORD *)a1 + 22) )
          guard_dispatch_icall_no_overrides(a1, a2, a3);
        v10 = a1[1];
        if ( (v10 & 0x1C) == 0 && a4 != 3 )
        {
          *((_QWORD *)a1 + 9) = v6;
          v20 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(4 * v4)) & 0x1C;
          LOBYTE(v10) = v10 ^ (v10 ^ (4 * v4)) & 0x1C;
          a1[1] = v20;
        }
        if ( (v10 & 1) != 0 )
          goto LABEL_17;
        v11 = *((_QWORD *)a1 + 7);
        v12 = *((_QWORD *)a1 + 4);
        if ( !v11 )
        {
LABEL_14:
          v13 = *((unsigned __int8 *)a1 + 9);
          if ( (*a1 & 4) != 0 )
            MiUnlockWorkingSetShared(v12, v13);
          else
            MiUnlockWorkingSetExclusive(v12, v13);
          a1[1] |= 0x10001u;
LABEL_17:
          BugCheckParameter4 = (__int64)(v6 << 25) >> 16;
          for ( i = BugCheckParameter4; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
          {
            if ( i > 0xFFFFF6FFFFFFFFFFuLL )
              break;
          }
          v16 = MmAccessFault(2uLL, BugCheckParameter4);
          v17 = v16;
          if ( v16 < 0 )
          {
            for ( j = BugCheckParameter4; j >= 0xFFFFF68000000000uLL; j = (__int64)(j << 25) >> 16 )
            {
              if ( j > 0xFFFFF6FFFFFFFFFFuLL )
                break;
            }
            MiFlushAllFilesystemPages(1LL);
            KeBugCheckEx(0x7Au, 1uLL, v17, (ULONG_PTR)KeGetCurrentThread()->ApcState.Process, BugCheckParameter4);
          }
          return 2LL;
        }
        if ( (*a1 & 0x800) != 0 )
        {
          if ( v11 == 0xFFFFF6FB7DBEDF68uLL )
          {
LABEL_35:
            *((_QWORD *)a1 + 7) = 0LL;
            goto LABEL_14;
          }
        }
        else if ( v11 == 0xFFFFF6FB7DBEDF68uLL )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = *(_DWORD *)(v12 + 184) & 0xF;
          if ( v25 )
          {
            if ( v25 == 7 )
            {
              v26 = 1LL;
            }
            else
            {
              v26 = 3LL;
              if ( v25 == 5 )
                v26 = 0LL;
            }
          }
          else
          {
            v26 = 2LL;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v26]);
          *((_QWORD *)a1 + 7) = 0LL;
          goto LABEL_14;
        }
        if ( (*(_DWORD *)(v12 + 184) & 0xF) == 0 && v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v27 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
          if ( v27 )
          {
            ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v27 + 4 * ((v11 >> 3) & 0x1FF)));
            *((_QWORD *)a1 + 7) = 0LL;
            goto LABEL_14;
          }
        }
        if ( (*(_DWORD *)(v12 + 184) & 0xF) != 0 && v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v32 = 2 * (unsigned int)((__int64)(v11 + 0x90482413000LL) >> 3);
          _InterlockedAnd(
            (volatile signed __int32 *)&MiState + (v32 >> 5) + 1467,
            ~(2 << (v32 & 0x1F)) & ~(1 << (v32 & 0x1F)));
          *((_QWORD *)a1 + 7) = 0LL;
          goto LABEL_14;
        }
        _InterlockedAnd64((volatile signed __int64 *)v11, 0xCFFFFFFFFFFFFFFFuLL);
        goto LABEL_35;
      }
      return 1LL;
    }
    if ( (unsigned int)MiIsLazyStampedPte(v33, a2, a3) )
      return 2LL;
    goto LABEL_81;
  }
  if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
    return 1LL;
  if ( (v8 & 0x80u) != 0LL )
  {
LABEL_81:
    if ( (*a1 & 0x20) == 0 )
      return 2LL;
    v34 = *((_QWORD *)a1 + 23);
    for ( *(_DWORD *)v34 = v4; (_DWORD)v4; LODWORD(v4) = v4 - 1 )
      v6 = (__int64)(v6 << 25) >> 16;
    result = 4LL;
    if ( v6 < ((*((_QWORD *)a1 + 5) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
      v6 = ((*((_QWORD *)a1 + 5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(v34 + 8) = v6;
    return result;
  }
  v21 = *a1;
  if ( (*a1 & 0x100) != 0
    && qword_140E36180[0] != (PVOID)qword_140E36198
    && ((v8 >> 12) & 0xFFFFFFFFFFLL) == *((_QWORD *)&MiState + v4 + 4944) )
  {
    return 1LL;
  }
  if ( (int)v4 > (int)(((unsigned int)a1[1] >> 6) & 7) )
    return a4;
  if ( (v21 & 0x20) == 0 )
    return 2LL;
  v22 = *((_QWORD *)a1 + 23);
  if ( (v21 & 4) != 0 )
  {
    MiLockNestedPageTable(*((_QWORD *)a1 + 4), v6);
    MiUnlockPageTableInternal(*((_QWORD *)a1 + 4), ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *((_QWORD *)a1 + 7) = v6;
  }
  v23 = (__int64)(v6 << 25) >> 16;
  result = 4LL;
  if ( v23 < ((*((_QWORD *)a1 + 5) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    v23 = ((*((_QWORD *)a1 + 5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(v22 + 8) = v23;
  return result;
}
