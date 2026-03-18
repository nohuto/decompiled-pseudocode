/*
 * XREFs of ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x14010A4E4
 * Callers:
 *     ?UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1_N@Z @ 0x14010A420 (-UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1_N@Z.c)
 * Callees:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400F21B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x14010A59C (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Unlock(VIDMM_RECYCLE_RANGE **this, __int64 a2, __int64 a3)
{
  VIDMM_RECYCLE_RANGE *v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx

  WdLogSingleEntry3(4LL, this, a2, a3);
  v6 = this[8];
  v7 = (unsigned __int64)this[6] + a2;
  v8 = v7 + a3;
  WdLogGlobalForLineNumber = 3103;
  while ( 1 )
  {
    if ( *((_QWORD *)v6 + 4) >= v7 || *((_QWORD *)v6 + 5) > v7 )
      VIDMM_RECYCLE_RANGE::Unlock(v6);
    if ( *((_QWORD *)v6 + 5) >= v8 )
      break;
    v9 = *((_QWORD *)v6 + 15);
    v10 = *((_QWORD *)v6 + 9);
    v6 = 0LL;
    if ( v9 != v10 + 72 )
      v6 = (VIDMM_RECYCLE_RANGE *)(v9 - 120);
  }
  if ( (*((_DWORD *)this + 23))-- == 1 )
    *((_DWORD *)this + 42) = 3;
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible((VIDMM_RECYCLE_MULTIRANGE *)this);
}
