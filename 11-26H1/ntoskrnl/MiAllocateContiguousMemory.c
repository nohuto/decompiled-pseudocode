/*
 * XREFs of MiAllocateContiguousMemory @ 0x14034C30C
 * Callers:
 *     MmAllocateContiguousMemoryEx @ 0x14034B050 (MmAllocateContiguousMemoryEx.c)
 *     MmAllocateContiguousNodeMemory @ 0x14034C170 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemory @ 0x1404F7740 (MmAllocateContiguousMemory.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     VfPtIsAptEnabledOnKernel @ 0x14034C970 (VfPtIsAptEnabledOnKernel.c)
 *     EtwTraceContAllocationEvent @ 0x14034C990 (EtwTraceContAllocationEvent.c)
 *     ExAllocateContiguousHeapPool @ 0x14034CAE0 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x14034CE1C (ExInsertPoolTag.c)
 *     MiMapContiguousMemory @ 0x140365BB0 (MiMapContiguousMemory.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiFreeContiguousPages @ 0x1403CD758 (MiFreeContiguousPages.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140501C70 (MiLogPerfMemoryRangeEvent.c)
 *     VfPtMiscPoolNotification @ 0x1405061A8 (VfPtMiscPoolNotification.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiAllocateContiguousMemory(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        volatile signed __int64 *a7,
        unsigned int a8,
        int a9)
{
  int v10; // ebx
  unsigned int v12; // r12d
  unsigned __int64 ContiguousHeapPool; // r13
  __int64 QuadPart; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r15
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r11
  unsigned int v20; // r10d
  unsigned int v21; // ebx
  _DWORD *v22; // r14
  int *v23; // rax
  __int64 v24; // r10
  int v25; // r12d
  unsigned __int64 v26; // rsi
  char v27; // r12
  int v29; // r14d
  int *v30; // rsi
  int *v31; // rbx
  int ContiguousPages; // r12d
  ULONG_PTR v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r14
  __int64 v38; // rbx
  unsigned __int8 CurrentIrql; // r12
  volatile signed __int32 *v40; // r14
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  int v44; // [rsp+20h] [rbp-E0h]
  int v45; // [rsp+58h] [rbp-A8h]
  unsigned int v46; // [rsp+74h] [rbp-8Ch]
  int v47; // [rsp+78h] [rbp-88h]
  unsigned __int64 v48; // [rsp+78h] [rbp-88h]
  BOOL v49; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int64 *v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  unsigned __int64 v52; // [rsp+98h] [rbp-68h]
  int *v53; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v54; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v55; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v56; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v57; // [rsp+C0h] [rbp-40h]
  LARGE_INTEGER PerformanceCounter; // [rsp+C8h] [rbp-38h]
  int v59; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v60; // [rsp+D4h] [rbp-2Ch]
  int v61; // [rsp+DCh] [rbp-24h]
  __int64 v62; // [rsp+E0h] [rbp-20h]

  v10 = a6;
  v12 = a5;
  v55 = a2;
  v52 = a3;
  v57 = a1;
  v51 = a4;
  v46 = a5;
  v50 = a7;
  memset_0(&v59, 0, 0x58uLL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ContiguousHeapPool = 0LL;
  QuadPart = PerformanceCounter.QuadPart;
  v15 = *a1;
  v54 = -1LL;
  v56 = 0LL;
  v49 = MmProtectFreedNonPagedPool != 0;
  v16 = (v15 >> 12) + ((v15 & 0xFFF) != 0);
  if ( (a5 & 2) != 0 && (MiFlags & 0x20000) != 0 )
  {
    v12 = a5 & 0xFFFFFFFD;
    v46 = a5 & 0xFFFFFFFD;
  }
  if ( v51 && v16 > v51 || a2 > v52 || a2 + v16 <= a2 || a2 + v16 - 1 > v52 )
    goto LABEL_24;
  v18 = MiProtectionToCacheAttribute(v12);
  v47 = v18;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v20 = a6;
    if ( a6 == 0x80000000 )
    {
      v21 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL);
      goto LABEL_9;
    }
  }
  else
  {
    v20 = 0;
    a6 = 0;
  }
  v21 = v20;
  if ( v20 >= (unsigned __int16)KeNumberNodes )
  {
LABEL_23:
    v10 = a6;
LABEL_24:
    v27 = 0;
    v26 = *v57;
    goto LABEL_32;
  }
LABEL_9:
  v22 = (_DWORD *)(qword_140E2D810 + 4LL * v21 * (unsigned __int16)KeNumberNodes);
  v23 = &v22[(unsigned __int16)KeNumberNodes];
  if ( v20 != 0x80000000 )
    v23 = v22 + 1;
  v24 = (__int64)v50;
  v53 = v23;
  if ( (v12 & 2) == 0 && v50 == (volatile signed __int64 *)&MiSystemPartition && !v17 && v18 == 1 && v16 <= 0x200 )
  {
    v25 = 1953394499;
    if ( a8 != 1416523587 )
      v25 = a8;
    v26 = v16 << 12;
    while ( 1 )
    {
      ContiguousHeapPool = ExAllocateContiguousHeapPool(v55, v52, v19, v26, *v22, v25);
      if ( ContiguousHeapPool )
        break;
      v19 = v51;
      if ( ++v22 == v53 )
      {
        v18 = v47;
        v24 = (__int64)v50;
        goto LABEL_22;
      }
    }
    v27 = 1;
    goto LABEL_29;
  }
LABEL_22:
  if ( (a9 & 1) != 0 )
    goto LABEL_23;
  v29 = 135266304;
  v30 = (int *)(qword_140E2D810 + 4LL * v21 * (unsigned __int16)KeNumberNodes);
  while ( 1 )
  {
    v31 = 0LL;
    if ( v19 == v16 && (v16 == 16 || v16 == 512 || v16 == 0x40000) )
    {
      v60 = 0LL;
      v61 = 0;
      v31 = &v59;
      v62 = qword_140E2D920 & ~(v16 - 1);
      v59 = 8;
    }
    ContiguousPages = MiFindContiguousPagesEx(
                        v24,
                        v55,
                        v52,
                        v19,
                        v44,
                        v16,
                        v18,
                        *v30,
                        255,
                        v29,
                        2,
                        0LL,
                        (__int64)v31,
                        &v54);
    if ( v31 && v31 != &v59 )
      ExFreePoolWithTag(v31, 0);
    if ( ContiguousPages >= 0 )
      break;
    if ( ++v30 == v53 )
      goto LABEL_70;
    v18 = v47;
    v29 &= ~0x8000000u;
    v19 = v51;
    v24 = (__int64)v50;
  }
  v33 = v54;
  v26 = v16 << 12;
  v56 = v16;
  v34 = MiMapContiguousMemory((_DWORD)v54 << 12, (_DWORD)v16 << 12, (_DWORD)v16 << 12, v46, v49);
  ContiguousHeapPool = v34;
  if ( v34 && !(unsigned int)ExInsertPoolTag(a8, v34, v16 << 12) )
  {
    v43 = v16 << 12;
    if ( v49 )
      v43 = v26 + 4096;
    MiUnmapContiguousMemory(ContiguousHeapPool, v43, 1);
    ContiguousHeapPool = 0LL;
  }
  v37 = 48 * v33 - 0x220000000000LL;
  if ( ContiguousHeapPool )
    v38 = ((ContiguousHeapPool >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  else
    v38 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v35) = 2;
    LOBYTE(v36) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v36, v35);
  }
  v48 = 0LL;
  if ( v16 )
  {
    v40 = (volatile signed __int32 *)(v37 + 24);
    do
    {
      v49 = 0;
      while ( _interlockedbittestandset64(v40, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v49);
        while ( *(__int64 *)v40 < 0 );
      }
      *((_QWORD *)v40 - 2) = v38;
      _InterlockedAnd64((volatile signed __int64 *)v40, 0x7FFFFFFFFFFFFFFFuLL);
      v41 = ++v48;
      if ( (v48 & 0x3F) == 0 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v42 = KeGetCurrentIrql();
        if ( (_BYTE)v42 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v35) = 2;
          KiRaiseIrqlProcessIrqlFlags(v42, v35);
        }
        v41 = v48;
      }
      v40 += 12;
      if ( v38 )
        v38 += 8LL;
    }
    while ( v41 < v16 );
    QuadPart = PerformanceCounter.QuadPart;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( !ContiguousHeapPool )
  {
LABEL_70:
    if ( v54 != -1LL )
      MiFreeContiguousPages(v54);
    goto LABEL_23;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(ContiguousHeapPool, 0LL, 13LL, v16);
  v27 = 0;
LABEL_29:
  if ( !v27 )
    _InterlockedAdd64(v50 + 2937, v16);
  v10 = a6;
  *v57 = v26;
LABEL_32:
  if ( (unsigned __int8)VfPtIsAptEnabledOnKernel() )
    VfPtMiscPoolNotification(ContiguousHeapPool, v26, a8, 0LL);
  EtwTraceContAllocationEvent(
    (PVOID)ContiguousHeapPool,
    v51,
    v46,
    v10,
    *(unsigned __int16 *)v50,
    a8,
    a9,
    v27,
    v45,
    QuadPart);
  return ContiguousHeapPool;
}
