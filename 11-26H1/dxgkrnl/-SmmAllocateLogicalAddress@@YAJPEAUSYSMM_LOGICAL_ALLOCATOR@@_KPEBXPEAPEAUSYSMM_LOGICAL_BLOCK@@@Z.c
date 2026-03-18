/*
 * XREFs of ?SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14009C988
 * Callers:
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x140040410 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x14038CBC0 (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     SmmAcquireBlock @ 0x140061824 (SmmAcquireBlock.c)
 */

__int64 __fastcall SmmAllocateLogicalAddress(
        struct SYSMM_LOGICAL_ALLOCATOR *a1,
        unsigned __int64 a2,
        const void *a3,
        struct SYSMM_LOGICAL_BLOCK **a4)
{
  char *v4; // rbx
  __int64 v9; // rdx
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rax

  v4 = (char *)a1 + 1312;
  ExAcquirePushLockExclusiveEx((char *)a1 + 1312, 0LL);
  v10 = 0;
  v11 = (a2 + 4095) >> 12;
  if ( v11 < 2 )
  {
    v13 = 1LL;
  }
  else
  {
    _BitScanReverse64(&v12, v11 - 1);
    v13 = 1LL << ((unsigned __int8)v12 + 1);
  }
  _BitScanReverse64((unsigned __int64 *)&v14, v13);
  v15 = 4096LL << v14;
  if ( 4096LL << v14 < a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1299;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"BlockSize >= Size", 1299LL, 0LL, 0LL, 0LL, 0LL);
  }
  LOBYTE(v9) = v14;
  v16 = SmmAcquireBlock((__int64)a1, v9, 0LL, 0LL);
  if ( v16 )
  {
    *(_QWORD *)(v16 + 16) = a3;
    *(_QWORD *)(v16 + 32) |= 0x10000000000000uLL;
    *(_QWORD *)(v16 + 24) = a2;
    *a4 = (struct SYSMM_LOGICAL_BLOCK *)v16;
    *((_QWORD *)a1 + 160) += v15;
    *((_QWORD *)a1 + 161) -= v15;
    *((_QWORD *)a1 + 162) += a2;
    *((_QWORD *)a1 + 163) += v15 - a2;
  }
  else
  {
    WdLogSingleEntry3(3LL, a1, a2, a3);
    WdLogGlobalForLineNumber = 1307;
    v10 = -1073741801;
  }
  ExReleasePushLockExclusiveEx(v4, 0LL);
  return v10;
}
