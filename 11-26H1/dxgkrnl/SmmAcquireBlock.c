/*
 * XREFs of SmmAcquireBlock @ 0x140061824
 * Callers:
 *     SmmAcquireBlock @ 0x140061824 (SmmAcquireBlock.c)
 *     ?SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14009C988 (-SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14028785C (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     SmmAcquireBlock @ 0x140061824 (SmmAcquireBlock.c)
 *     SmmGetAnyFreeBlockFromPool @ 0x14009CD44 (SmmGetAnyFreeBlockFromPool.c)
 *     SmmGetFreeBlockFromPool @ 0x14009CDCC (SmmGetFreeBlockFromPool.c)
 *     SmmReleaseBlock @ 0x14009CEDC (SmmReleaseBlock.c)
 */

__int64 __fastcall SmmAcquireBlock(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // r15d
  char v7; // bp
  __int64 v8; // r12
  __int64 result; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // r13
  _QWORD *v14; // r8
  __int64 v15; // r12
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // r8

  v4 = (unsigned __int8)a2;
  v7 = a3;
  v8 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 > *(_BYTE *)(a1 + 1324) )
  {
    WdLogSingleEntry4(3LL, a1, (unsigned __int8)a2, (unsigned __int8)a3, a4);
    WdLogGlobalForLineNumber = 1070;
    return 0LL;
  }
  v10 = (_DWORD *)(a1 + 24LL * (unsigned __int8)a2);
  if ( !(_BYTE)a3 || (result = SmmGetFreeBlockFromPool(a1 + 24LL * (unsigned __int8)a2, a2, a4)) == 0 )
  {
    if ( *(_DWORD **)v10 != v10 && !v7 )
      return SmmGetAnyFreeBlockFromPool(v10);
    LOBYTE(a3) = v7;
    v11 = SmmAcquireBlock(a1, (unsigned int)(v4 + 1), a3, a4);
    v12 = (_QWORD *)v11;
    if ( !v11 )
      return 0LL;
    v13 = (_QWORD *)v11;
    v14 = (_QWORD *)operator new(0x28uLL, 0x36737844u, 64LL);
    if ( !v14 )
    {
      _InterlockedIncrement(&dword_140169744);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1114;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate logical block",
        1114LL,
        0LL,
        0LL,
        0LL,
        0LL);
      SmmReleaseBlock(a1, v13);
      return 0LL;
    }
    v15 = v8 << 53;
    v16 = v15 & 0xFFEFFFFFFFFFFFFFuLL ^ (v12[4] ^ v15) & 0xF80FFFFFFFFFFFFFuLL;
    v12[4] = v16;
    v14[4] = v15 & 0xFFEFFFFFFFFFFFFFuLL ^ (v15 ^ (v16 + (1LL << v4))) & 0xF80FFFFFFFFFFFFFuLL ^ (v14[4] ^ (v16 + (1LL << v4))) & 0xF800000000000000uLL;
    v17 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
LABEL_22:
      __fastfail(3u);
    *v14 = v17;
    v14[1] = v12;
    *(_QWORD *)(v17 + 8) = v14;
    *v12 = v14;
    if ( v7 )
    {
      v18 = v14[4] & 0xFFFFFFFFFFFFFLL;
      if ( a4 < v18 || a4 >= (1LL << v4) + v18 )
      {
LABEL_20:
        v19 = *(_QWORD *)v10;
        v20 = v14 + 2;
        if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) == v10 )
        {
          *v20 = v19;
          result = (__int64)v13;
          v20[1] = v10;
          *(_QWORD *)(v19 + 8) = v20;
          *(_QWORD *)v10 = v20;
          ++v10[4];
          return result;
        }
        goto LABEL_22;
      }
    }
    else if ( (*(_DWORD *)(a1 + 1320) & 1) == 0 )
    {
      goto LABEL_20;
    }
    v13 = v14;
    v14 = v12;
    goto LABEL_20;
  }
  return result;
}
