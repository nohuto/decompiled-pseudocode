/*
 * XREFs of ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1402879D0
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140286618 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     SmmGetLogicalPool @ 0x14006DBF0 (SmmGetLogicalPool.c)
 *     SmmGetOrderBlockSizeInPages @ 0x14006DC4C (SmmGetOrderBlockSizeInPages.c)
 *     SmmAddBlockToPool @ 0x14009C934 (SmmAddBlockToPool.c)
 *     SmmAllocateBlock @ 0x14009C964 (SmmAllocateBlock.c)
 *     SmmGetLowerOrderFromPageCount @ 0x14009CE30 (SmmGetLowerOrderFromPageCount.c)
 *     SmmInitializeLogicalBlock @ 0x14009CE54 (SmmInitializeLogicalBlock.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14028785C (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140287BF0 (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 *     SmmInitializeLogicalAllocator @ 0x140287E80 (SmmInitializeLogicalAllocator.c)
 */

__int64 __fastcall SmmCreateLogicalAllocator(unsigned __int64 a1, struct SYSMM_LOGICAL_ALLOCATOR **a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 i; // rsi
  char LowerOrderFromPageCount; // bp
  __int64 Block; // rax
  _QWORD *v11; // r10
  _QWORD *v12; // rax
  _DWORD *LogicalPool; // rax
  __int64 v14; // r10
  int LogicalAddressAt; // ebx

  if ( a1 >= 0x11000 )
  {
    v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v5 = operator new(0x530uLL, 0x35737844u, 64LL);
    v6 = v5;
    if ( v5 )
    {
      SmmInitializeLogicalAllocator(v5, v4);
      v7 = v4 >> 12;
      for ( i = v7; i; i -= SmmGetOrderBlockSizeInPages(LowerOrderFromPageCount) )
      {
        LowerOrderFromPageCount = SmmGetLowerOrderFromPageCount(i);
        Block = SmmAllocateBlock();
        if ( !Block )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1695;
          LogicalAddressAt = -1073741801;
LABEL_14:
          SmmDestroyLogicalAllocator((struct SYSMM_LOGICAL_ALLOCATOR *)v6);
          return (unsigned int)LogicalAddressAt;
        }
        SmmInitializeLogicalBlock(Block, v7 - i, LowerOrderFromPageCount);
        v12 = *(_QWORD **)(v6 + 1264);
        if ( *v12 != v6 + 1256 )
          __fastfail(3u);
        *v11 = v6 + 1256;
        v11[1] = v12;
        *v12 = v11;
        *(_QWORD *)(v6 + 1264) = v11;
        LogicalPool = (_DWORD *)SmmGetLogicalPool(v6, LowerOrderFromPageCount);
        SmmAddBlockToPool(LogicalPool, v14);
      }
      LogicalAddressAt = SmmAllocateLogicalAddressAt(
                           (struct SYSMM_LOGICAL_ALLOCATOR *)v6,
                           0LL,
                           0x10000LL,
                           (const void *)0xFFFFFFFFFFFFFFFFLL,
                           (struct SYSMM_LOGICAL_BLOCK **)(v6 + 1272));
      if ( LogicalAddressAt < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1730;
        goto LABEL_14;
      }
      *(_QWORD *)(*(_QWORD *)(v6 + 1272) + 32LL) |= 0x800000000000000uLL;
      *(_DWORD *)(v6 + 1320) ^= ((unsigned __int8)*(_DWORD *)(v6 + 1320) ^ (unsigned __int8)((unsigned int)dword_1401696C0 >> 6)) & 1;
      result = 0LL;
      *a2 = (struct SYSMM_LOGICAL_ALLOCATOR *)v6;
    }
    else
    {
      _InterlockedIncrement(&dword_140169740);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1655;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate logical allocator",
        1655LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1640;
  }
  return result;
}
