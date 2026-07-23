/*
 * XREFs of HalpInitializeInterrupts @ 0x140CB3DD8
 * Callers:
 *     HalpInterruptInitDiscard @ 0x140CB5AF4 (HalpInterruptInitDiscard.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     HalpInterruptInitializeIpis @ 0x1405818B4 (HalpInterruptInitializeIpis.c)
 *     HalpInterruptInitializeController @ 0x140592950 (HalpInterruptInitializeController.c)
 *     HalpInterruptParseAcpiTables @ 0x140592E18 (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptSelectController @ 0x1405938A8 (HalpInterruptSelectController.c)
 *     HalpInterruptSetIdtEntry @ 0x140596E80 (HalpInterruptSetIdtEntry.c)
 *     HalpApicDiscover @ 0x1405A3BE4 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1405A4984 (HalpPicDiscover.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpInitializeInterrupts(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // ebx
  void *MemoryInternal; // rax
  unsigned int v5; // ebx
  void *v6; // rax
  unsigned int v7; // ebx
  void *v8; // rax
  void *v9; // rax
  unsigned int v10; // ebx
  void *v11; // rax
  unsigned int v12; // ebx
  struct _LIST_ENTRY *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // rdx
  ULONG_PTR *i; // rdi
  ULONG_PTR v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // ecx
  int v28; // eax
  ULONG_PTR v30; // [rsp+60h] [rbp+18h] BYREF

  v30 = 0LL;
  qword_140F89A98 = (__int64)&HalpInterruptOverrides;
  HalpInterruptOverrides = (__int64)&HalpInterruptOverrides;
  HalpInterruptOverridesLock = 0LL;
  HalpInterruptLocalUnitErrorLock = 0LL;
  HalpInterruptPhysicalTargets = 2097153LL;
  memset_0(qword_140FBD028, 0, 0x100uLL);
  v2 = HalpInterruptParseAcpiTables(a1, 0);
  if ( v2 < 0 )
    goto LABEL_4;
  HalpInterruptMaxProcessors = HalQueryMaximumProcessorCount();
  v3 = 24 * HalpInterruptMaxProcessors;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(24 * HalpInterruptMaxProcessors, 1u);
  HalpInterruptTargets = (__int64)MemoryInternal;
  if ( !MemoryInternal )
    goto LABEL_3;
  memset_0(MemoryInternal, 0, v3);
  v5 = 4 * HalpInterruptMaxProcessors;
  v6 = (void *)HalpMmAllocateMemoryInternal(4 * HalpInterruptMaxProcessors, 1u);
  HalpInterruptLocalIds = (__int64)v6;
  if ( !v6 )
    goto LABEL_3;
  memset_0(v6, 0, v5);
  v7 = HalpInterruptMaxProcessors << 6;
  v8 = (void *)HalpMmAllocateMemoryInternal(HalpInterruptMaxProcessors << 6, 1u);
  HalpInterruptProcessorState = (ULONG_PTR)v8;
  if ( !v8 )
    goto LABEL_3;
  memset_0(v8, 0, v7);
  v9 = (void *)HalpMmAllocateMemoryInternal(v7, 1u);
  HalpInterruptDynamicProcessorState = (__int64)v9;
  if ( !v9 )
    goto LABEL_3;
  memset_0(v9, 0, v7);
  v10 = 8 * HalpInterruptMaxProcessors;
  v11 = (void *)HalpMmAllocateMemoryInternal(8 * HalpInterruptMaxProcessors, 1u);
  HalpInterruptProcessorStateByNtIndex = (__int64)v11;
  if ( !v11
    || (memset_0(v11, 0, v10),
        v12 = 8 * HalpInterruptMaxProcessors,
        v13 = (struct _LIST_ENTRY *)HalpMmAllocateMemoryInternal(8 * HalpInterruptMaxProcessors, 1u),
        (HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink = v13) == 0LL) )
  {
LABEL_3:
    v2 = -1073741801;
    goto LABEL_4;
  }
  memset_0(v13, 0, v12);
  HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Flink = (struct _LIST_ENTRY *)KeGetPcr();
  v2 = HalpApicDiscover();
  if ( v2 >= 0 )
    v2 = HalpPicDiscover();
  if ( v2 < 0 )
  {
    HalpInterruptSetProblemEx(0LL, 3, v2, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x293u);
    goto LABEL_4;
  }
  HalpInterruptSetIdtEntry(
    0x35u,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptDeferredErrorService,
    5,
    v14,
    -1LL);
  HalpInterruptSetIdtEntry(
    0xE3u,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptDeferredRecoveryService,
    14,
    v15,
    -1LL);
  HalpInterruptSetIdtEntry(
    0x36u,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptDeferredErrorService,
    5,
    v16,
    -1LL);
  HalpInterruptSetIdtEntry(
    0xDFu,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptSpuriousService,
    15,
    v17,
    -2LL);
  HalpInterruptSetIdtEntry(
    0xD8u,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptStubService,
    15,
    v18,
    -1LL);
  HalpInterruptSetIdtEntry(
    0xE2u,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptLocalErrorService,
    15,
    v19,
    -1LL);
  HalpInterruptSetIdtEntry(
    0xD7u,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpInterruptRebootService,
    15,
    v20,
    -1LL);
  HalpInterruptSetIdtEntry(
    0xFEu,
    (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpPerfInterrupt,
    15,
    v21,
    -3LL);
  byte_140FFCA12 = 17;
  byte_140FFCC1A = 15;
  dword_140FFCC1B = 2;
  byte_140FFCAEF = 17;
  byte_140FFD06B = 15;
  dword_140FFD06C = 223;
  v2 = HalpInterruptSelectController((__int64)&v30);
  if ( v2 < 0 )
    goto LABEL_4;
  for ( i = (ULONG_PTR *)HalpRegisteredInterruptControllers; i != &HalpRegisteredInterruptControllers; i = (ULONG_PTR *)*i )
  {
    v2 = HalpInterruptInitializeController((ULONG_PTR)i, v22);
    if ( v2 < 0 )
      goto LABEL_4;
  }
  v2 = HalpInterruptParseAcpiTables(a1, 1u);
  if ( v2 < 0 )
    goto LABEL_4;
  v24 = v30;
  HalpHwToSwIrqlMap = (__int128)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  LOWORD(HalpHwToSwIrqlMap) = 256;
  v25 = *(_DWORD *)(v30 + 244);
  *(_WORD *)((char *)&HalpHwToSwIrqlMap + 13) = 3597;
  BYTE12(HalpHwToSwIrqlMap) = 12;
  HIBYTE(HalpHwToSwIrqlMap) = 15;
  BYTE2(HalpHwToSwIrqlMap) = 2;
  if ( (v25 & 1) == 0 )
  {
    v26 = HalpInterruptTargets;
    LODWORD(HalpInterruptProcessorCount) = 1;
    *(_DWORD *)HalpInterruptTargets = 4;
    *(_DWORD *)(v26 + 8) = 0;
    v25 = *(_DWORD *)(v24 + 244);
  }
  if ( !(_DWORD)HalpInterruptProcessorCount )
    LODWORD(HalpInterruptProcessorCount) = 1;
  if ( (v25 & 4) == 0 )
    HalpInterruptLogicalFlatLimit = 0;
  HalpInterruptController = v24;
  v2 = HalpInterruptInitializeIpis();
  if ( v2 < 0 )
LABEL_4:
    KeBugCheckEx(0x5Cu, 0x200uLL, 0x5250631uLL, HalpInterruptLastProblem, v2);
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 )
  {
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      v28 = 0x200000;
    }
    else
    {
      v27 = 240 * HalQueryMaximumProcessorCount();
      v28 = 0x10000;
      if ( v27 <= 0x10000 )
      {
        _BitScanReverse(&v27, 2 * v27 - 1);
        v28 = 1 << v27;
      }
    }
    HalpIrtTotalEntries = v28;
  }
  return (unsigned int)v2;
}
