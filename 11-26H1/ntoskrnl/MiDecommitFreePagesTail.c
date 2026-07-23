/*
 * XREFs of MiDecommitFreePagesTail @ 0x1402BC510
 * Callers:
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiDeleteVaTail @ 0x140363010 (MiDeleteVaTail.c)
 *     MiDecommitPagesTail @ 0x1404438DC (MiDecommitPagesTail.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiReduceShareCount @ 0x1402BC9E0 (MiReduceShareCount.c)
 *     MiDecommitPrivatePageTail @ 0x1402BD0C0 (MiDecommitPrivatePageTail.c)
 *     MiDecommitSharedPageTail @ 0x1402BDD20 (MiDecommitSharedPageTail.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDereferenceIoPages @ 0x1403152FC (MiDereferenceIoPages.c)
 *     MiShowBadMapper @ 0x14036876C (MiShowBadMapper.c)
 *     MiDeleteClusterPage @ 0x1403D0168 (MiDeleteClusterPage.c)
 *     MiDecommitPagesCoalesce @ 0x140441E90 (MiDecommitPagesCoalesce.c)
 *     MiIsPfnLocked @ 0x140494524 (MiIsPfnLocked.c)
 */

__int64 __fastcall MiDecommitFreePagesTail(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r9
  int v3; // r13d
  unsigned int v4; // r15d
  unsigned int v5; // ebp
  __int64 result; // rax
  unsigned int v7; // edi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  ULONG_PTR v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  unsigned __int64 ContainingPageTable; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  ULONG_PTR v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // [rsp+20h] [rbp-68h]
  unsigned __int64 v25; // [rsp+30h] [rbp-58h]
  int v27; // [rsp+98h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+18h]
  __int64 v29; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = a1;
  v3 = *(_DWORD *)(a1 + 116);
  v4 = 0;
  v29 = 0LL;
  v5 = 0;
  v24 = -1LL;
  result = 0xFFFFF68000000000uLL;
  v7 = 0;
  v8 = (((*(_QWORD *)(v1 + 16480) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  v25 = v8;
  if ( !*(_DWORD *)(v1 + 16488) )
    return result;
  do
  {
    v9 = 0LL;
    v10 = v1 + 8LL * v7;
    v11 = *(_QWORD *)(v10 + 12384);
    v12 = (v11 >> 12) & 0xFFFFFFFFFFLL;
    BugCheckParameter4 = v8 + 8LL * *(unsigned __int16 *)(v10 + 16498);
    v13 = (__int64)(BugCheckParameter4 << 25) >> 16;
    if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v14 = 0LL;
      if ( (v3 & 0x60) != 0
        || (v3 & 8) != 0
        && (v12 > qword_140E2D920 || (*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0) )
      {
        v9 = 1LL;
      }
    }
    else
    {
      v14 = 1LL;
    }
    if ( v12 <= qword_140E2D920 && (*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
      v15 = 48 * v12 - 0x220000000000LL;
    else
      v15 = 0LL;
    if ( (_DWORD)v9 )
    {
      if ( v15 )
      {
        if ( !(unsigned int)MiIsPfnLocked(v15, v9, v14, v2) )
          MiShowBadMapper(v12, 0LL);
        if ( (v3 & 0x40) != 0 )
        {
          v27 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v27);
            while ( *(__int64 *)(v15 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v15, v22, v23);
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        MiDereferenceIoPages(1LL, (v11 >> 12) & 0xFFFFFFFFFFLL, 1LL);
      }
      ContainingPageTable = MiGetContainingPageTable(BugCheckParameter4);
      result = v1 + 8LL * v7;
      *(_BYTE *)(result + 16497) &= ~1u;
      goto LABEL_11;
    }
    if ( *(__int64 *)(v15 + 40) < 0 )
    {
      ContainingPageTable = MiGetContainingPageTable(BugCheckParameter4);
      result = MiDecommitSharedPageTail(a1, BugCheckParameter4, v11);
LABEL_11:
      if ( ContainingPageTable != v24 )
      {
        v21 = v29;
        if ( v29 )
        {
          v27 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v27);
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
          MiReduceShareCount(v21, v5);
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v5 = 0;
        }
        result = 0xFFFFDE0000000000uLL;
        v24 = ContainingPageTable;
        v29 = 48 * ContainingPageTable - 0x220000000000LL;
      }
      ++v5;
      goto LABEL_13;
    }
    ContainingPageTable = *(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFLL;
    if ( (*(_DWORD *)(v2 + 112) & 0x20) == 0
      || (_DWORD)v14
      || ((v11 >> 12) & 0xF) != 0
      || (*(_DWORD *)(v2 + 100) & 0xF0) != 0
      || v7 + 16 > *(_DWORD *)(v1 + 16488) )
    {
      v20 = BugCheckParameter4;
LABEL_21:
      result = MiDecommitPrivatePageTail(v2, v20, v11);
      goto LABEL_11;
    }
    if ( !(unsigned int)MiDecommitPagesCoalesce(*(_QWORD *)(v2 + 8), v1, v7) )
    {
      v20 = BugCheckParameter4;
LABEL_40:
      v2 = a1;
      goto LABEL_21;
    }
    v20 = BugCheckParameter4;
    if ( !(unsigned int)MiDeleteClusterPage(*(_QWORD *)(a1 + 8), BugCheckParameter4, (v11 >> 12) & 0xFFFFFFFFFFLL) )
      goto LABEL_40;
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 32) - 376LL), 0xFFFFFFFFFFFFFFF0uLL);
    result = v7 + 16;
    if ( v7 < (unsigned int)result )
      v7 += 16;
    --v7;
LABEL_13:
    v8 = v25;
    ++v7;
    v2 = a1;
    v18 = 0LL;
  }
  while ( v7 < *(_DWORD *)(v1 + 16488) );
  if ( v5 )
  {
    v19 = v29;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, v17, v18) )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    MiReduceShareCount(v19, v5);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
