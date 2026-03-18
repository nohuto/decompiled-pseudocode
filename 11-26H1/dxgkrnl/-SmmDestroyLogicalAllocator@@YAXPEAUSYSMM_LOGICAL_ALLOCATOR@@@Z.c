/*
 * XREFs of ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140287BF0
 * Callers:
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286DB8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1402879D0 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     SmmGetLogicalPool @ 0x14006DBF0 (SmmGetLogicalPool.c)
 *     SmmFreeBlock @ 0x14009CC48 (SmmFreeBlock.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14009CC60 (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     SmmRemoveBlockFromPool @ 0x14009CF58 (SmmRemoveBlockFromPool.c)
 */

void __fastcall SmmDestroyLogicalAllocator(struct SYSMM_LOGICAL_ALLOCATOR *a1)
{
  struct SYSMM_LOGICAL_BLOCK *v1; // rdx
  struct SYSMM_LOGICAL_ALLOCATOR *v3; // rdi
  __int64 v4; // rsi
  struct SYSMM_LOGICAL_ALLOCATOR *v5; // r15
  __int64 LogicalPool; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v1 = (struct SYSMM_LOGICAL_BLOCK *)*((_QWORD *)a1 + 159);
  if ( v1 )
    SmmFreeLogicalAddress(a1, v1);
  v3 = (struct SYSMM_LOGICAL_ALLOCATOR *)*((_QWORD *)a1 + 157);
  while ( v3 != (struct SYSMM_LOGICAL_ALLOCATOR *)((char *)a1 + 1256) )
  {
    v4 = (__int64)v3;
    v5 = v3;
    v3 = *(struct SYSMM_LOGICAL_ALLOCATOR **)v3;
    if ( _bittest64((const signed __int64 *)(v4 + 32), 0x34u) )
    {
      WdLogSingleEntry5(0LL, 484LL, 9LL, a1, v4, 0LL);
      WdLogGlobalForLineNumber = 1570;
    }
    LogicalPool = SmmGetLogicalPool((__int64)a1, (*(_QWORD *)(v4 + 32) >> 53) & 0x3F);
    v7 = *(_QWORD *)v5;
    v8 = LogicalPool;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v4 || (v9 = *(_QWORD **)(v4 + 8), *v9 != v4) )
      __fastfail(3u);
    *v9 = v7;
    *(_QWORD *)(v7 + 8) = v9;
    SmmRemoveBlockFromPool(v8, v4);
    SmmFreeBlock(v10, (void *)v4);
    if ( *(_DWORD *)(v8 + 16) || *(_QWORD *)v8 != v8 )
    {
      WdLogSingleEntry5(0LL, 484LL, 8LL, a1, v8, 0LL);
      WdLogGlobalForLineNumber = 1589;
    }
  }
  if ( *((_QWORD *)a1 + 160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1596;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocator->Statistics.BytesAllocated == 0",
      1596LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 161) != *((_QWORD *)a1 + 156) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1597;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocator->Statistics.BytesFree == pAllocator->Size",
      1597LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 163) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1598;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocator->Statistics.BytesWasted == 0",
      1598LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 162) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1599;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocator->Statistics.RealBytesAllocated == 0",
      1599LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
}
