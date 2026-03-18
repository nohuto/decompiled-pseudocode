/*
 * XREFs of ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14028785C
 * Callers:
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x140040410 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140286618 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYS.c)
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1402879D0 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     ??$SmmAcquirePushLockExclusive@$0DB@@@YAXPEAU?$SYSMM_PUSHLOCK@$0DB@@@@Z @ 0x140059AC0 (--$SmmAcquirePushLockExclusive@$0DB@@@YAXPEAU-$SYSMM_PUSHLOCK@$0DB@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x140059DD8 (--$SmmReleasePushLockExclusive@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 *     SmmAcquireBlock @ 0x140061824 (SmmAcquireBlock.c)
 *     SmmGetLowerOrderFromPageCount @ 0x14009CE30 (SmmGetLowerOrderFromPageCount.c)
 *     SmmGetOrderBlockSizeInBytes @ 0x14009CE44 (SmmGetOrderBlockSizeInBytes.c)
 *     SmmNotifyBytesAllocate @ 0x14009CEB4 (SmmNotifyBytesAllocate.c)
 *     SmmReleaseBlock @ 0x14009CEDC (SmmReleaseBlock.c)
 */

__int64 __fastcall SmmAllocateLogicalAddressAt(
        struct SYSMM_LOGICAL_ALLOCATOR *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        struct SYSMM_LOGICAL_BLOCK **a5)
{
  char *v5; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  const void *v13; // rcx
  unsigned __int8 LowerOrderFromPageCount; // al
  unsigned __int64 v15; // r9
  unsigned int v16; // ecx
  bool v17; // cf
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 OrderBlockSizeInBytes; // rax
  __int64 v22; // rdx
  _QWORD *v23; // r8
  __int64 *v24; // rdx

  v5 = (char *)a1 + 1312;
  v7 = 0LL;
  v8 = 0LL;
  v11 = a2;
  v12 = a3;
  SmmAcquirePushLockExclusive<49>((__int64)a1 + 1312);
  v13 = a4;
  while ( 1 )
  {
    if ( !v12 )
    {
      v8[2] = v13;
      *a5 = (struct SYSMM_LOGICAL_BLOCK *)v7;
      SmmNotifyBytesAllocate(a1, a3, a3);
      SmmReleasePushLockExclusive<1>((__int64)v5);
      return 0LL;
    }
    LowerOrderFromPageCount = SmmGetLowerOrderFromPageCount(v12 >> 12);
    v16 = (unsigned __int8)v19;
    v17 = (unsigned __int8)v19 < LowerOrderFromPageCount;
    v18 = LowerOrderFromPageCount;
    LOBYTE(v19) = 1;
    if ( v17 )
      v18 = v16;
    v20 = SmmAcquireBlock((__int64)a1, v18, v19, v15);
    if ( !v20 )
      break;
    if ( v8 )
      v8[3] = v20;
    if ( !v7 )
      v7 = v20;
    OrderBlockSizeInBytes = SmmGetOrderBlockSizeInBytes((*(_QWORD *)(v20 + 32) >> 53) & 0x3F);
    v13 = a4;
    v23[2] = a4;
    v12 -= OrderBlockSizeInBytes;
    v23[4] = v22 | 0x1010000000000000LL;
    v11 += OrderBlockSizeInBytes;
    v23[3] = 0LL;
    v8 = v23;
  }
  WdLogSingleEntry3(3LL, a1, a2, a3);
  WdLogGlobalForLineNumber = 1873;
  while ( v7 )
  {
    v24 = (__int64 *)v7;
    v7 = *(_QWORD *)(v7 + 24);
    SmmReleaseBlock((__int64)a1, v24);
  }
  SmmReleasePushLockExclusive<1>((__int64)v5);
  return 3221225495LL;
}
