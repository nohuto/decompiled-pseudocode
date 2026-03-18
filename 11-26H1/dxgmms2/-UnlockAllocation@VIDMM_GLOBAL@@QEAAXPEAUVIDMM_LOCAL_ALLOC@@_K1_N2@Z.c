/*
 * XREFs of ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1_N2@Z @ 0x14010BB78
 * Callers:
 *     ?StartUpgradingAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A7958 (-StartUpgradingAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N1@Z @ 0x1400BCD70 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N1@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B890 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010B960 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_A.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1@Z @ 0x14009DCD4 (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UnlockAllocation(
        VIDMM_GLOBAL ***this,
        struct VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        bool a5,
        bool a6)
{
  VIDMM_GLOBAL **v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v12; // r13
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v14; // rbx
  __int64 v15; // rbp
  LARGE_INTEGER v17; // [rsp+30h] [rbp-48h]

  v6 = *this;
  CurrentThread = KeGetCurrentThread();
  v12 = CurrentThread == (*this)[1];
  if ( CurrentThread == (*this)[1] )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ++*((_DWORD *)v6 + 91);
    v14 = PerformanceCounter;
  }
  else
  {
    v14 = v17;
  }
  v15 = *(_QWORD *)a2;
  if ( !*((_BYTE *)this[3] + 3094) && a6 )
    VIDMM_GLOBAL::EnsureLockedPages(this, a2, a3, a4);
  (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, unsigned __int64, bool))(**(_QWORD **)(v15 + 216) + 24LL))(
    *(_QWORD *)(v15 + 216),
    *(_QWORD *)(v15 + 224),
    a3,
    a4,
    a5);
  if ( v12 )
    v6[39] = (VIDMM_GLOBAL *)((char *)v6[39] + *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v14.QuadPart);
}
