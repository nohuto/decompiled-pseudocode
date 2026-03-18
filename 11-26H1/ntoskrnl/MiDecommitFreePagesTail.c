/*
 * XREFs of MiDecommitFreePagesTail @ 0x1402DA750
 * Callers:
 *     MiDecommitPages @ 0x140360150 (MiDecommitPages.c)
 *     MiDeleteVaTail @ 0x140361270 (MiDeleteVaTail.c)
 *     MiDecommitPagesTail @ 0x14044B7AC (MiDecommitPagesTail.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 *     MiReduceShareCount @ 0x1402DAC20 (MiReduceShareCount.c)
 *     MiDecommitPrivatePageTail @ 0x1402DB300 (MiDecommitPrivatePageTail.c)
 *     MiDecommitSharedPageTail @ 0x1402DBF60 (MiDecommitSharedPageTail.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiDereferenceIoPages @ 0x1403132CC (MiDereferenceIoPages.c)
 *     MiShowBadMapper @ 0x1403669CC (MiShowBadMapper.c)
 *     MiDeleteClusterPage @ 0x1403C6268 (MiDeleteClusterPage.c)
 *     MiDecommitPagesCoalesce @ 0x140449D60 (MiDecommitPagesCoalesce.c)
 *     MiIsPfnLocked @ 0x14049A9D4 (MiIsPfnLocked.c)
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
  __int64 v17; // rbx
  ULONG_PTR v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // [rsp+20h] [rbp-68h]
  unsigned __int64 v23; // [rsp+30h] [rbp-58h]
  int v25; // [rsp+98h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+18h]
  __int64 v27; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = a1;
  v3 = *(_DWORD *)(a1 + 116);
  v4 = 0;
  v27 = 0LL;
  v5 = 0;
  v22 = -1LL;
  result = 0xFFFFF68000000000uLL;
  v7 = 0;
  v8 = (((*(_QWORD *)(v1 + 16480) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  v23 = v8;
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
        && (v12 > qword_140E2D7A0 || (*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0) )
      {
        v9 = 1LL;
      }
    }
    else
    {
      v14 = 1LL;
    }
    if ( v12 <= qword_140E2D7A0 && (*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
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
          v25 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v25);
            while ( *(__int64 *)(v15 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v15, v20, v21);
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
      if ( ContainingPageTable != v22 )
      {
        v19 = v27;
        if ( v27 )
        {
          v25 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v25);
            while ( *(__int64 *)(v19 + 24) < 0 );
          }
          MiReduceShareCount(v19, v5);
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v5 = 0;
        }
        result = 0xFFFFDE0000000000uLL;
        v22 = ContainingPageTable;
        v27 = 48 * ContainingPageTable - 0x220000000000LL;
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
      v18 = BugCheckParameter4;
LABEL_21:
      result = MiDecommitPrivatePageTail(v2, v18, v11);
      goto LABEL_11;
    }
    if ( !(unsigned int)MiDecommitPagesCoalesce(*(_QWORD *)(v2 + 8), v1, v7) )
    {
      v18 = BugCheckParameter4;
LABEL_40:
      v2 = a1;
      goto LABEL_21;
    }
    v18 = BugCheckParameter4;
    if ( !(unsigned int)MiDeleteClusterPage(*(_QWORD *)(a1 + 8), BugCheckParameter4, (v11 >> 12) & 0xFFFFFFFFFFLL) )
      goto LABEL_40;
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 32) - 376LL), 0xFFFFFFFFFFFFFFF0uLL);
    result = v7 + 16;
    if ( v7 < (unsigned int)result )
      v7 += 16;
    --v7;
LABEL_13:
    v8 = v23;
    ++v7;
    v2 = a1;
  }
  while ( v7 < *(_DWORD *)(v1 + 16488) );
  if ( v5 )
  {
    v17 = v27;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    MiReduceShareCount(v17, v5);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
