/*
 * XREFs of ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x140099D34
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z @ 0x1400AC650 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z.c)
 *     ?AllocateGlobal@VIDMM_SYSTEM_HEAP@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@PEAXW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400ADC90 (-AllocateGlobal@VIDMM_SYSTEM_HEAP@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     MapChildVaSpace @ 0x14004D0B4 (MapChildVaSpace.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400CBDB4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x140104B4C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x140105A6C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::MapHostVirtualAddressToGuest(
        VIDMM_PROCESS *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        void **a6,
        unsigned __int64 *a7)
{
  CVirtualAddressAllocator *CpuVisibleBufferAllocator; // rsi
  unsigned __int64 v11; // r8
  int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rbp
  __int64 v20; // rcx
  unsigned __int64 v21; // [rsp+50h] [rbp-28h] BYREF

  CpuVisibleBufferAllocator = VIDMM_PROCESS::GetCpuVisibleBufferAllocator(this);
  if ( !CpuVisibleBufferAllocator )
    return 3221225495LL;
  v21 = 0LL;
  v13 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          CpuVisibleBufferAllocator,
          a3,
          v11,
          0LL,
          0LL,
          0x1000u,
          &v21);
  if ( v13 >= 0 )
  {
    v15 = *((_QWORD *)this + 9);
    v16 = *(_DWORD *)(v15 + 408);
    if ( (v16 & 0x100) != 0 )
      v17 = *(_QWORD *)(v15 + 592);
    else
      v17 = v15 & -(__int64)((v16 & 0x80u) != 0);
    v18 = v21;
    v19 = v21 + *(_QWORD *)(*(_QWORD *)(v17 + 592) + 256LL);
    v13 = MapChildVaSpace(v15, a2, v19, a3);
    if ( v13 >= 0 )
    {
      *a7 = v19;
    }
    else
    {
      WdLogSingleEntry1(1LL, a3);
      WdLogGlobalForLineNumber = 2511;
      DxgkLogInternalTriageEvent(v20, 0x40000LL);
      CVirtualAddressAllocator::FreeVirtualAddressRange(CpuVisibleBufferAllocator, v18);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, a3);
    WdLogGlobalForLineNumber = 2502;
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
  }
  return (unsigned int)v13;
}
