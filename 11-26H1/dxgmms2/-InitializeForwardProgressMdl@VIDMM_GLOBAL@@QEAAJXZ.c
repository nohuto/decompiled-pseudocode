/*
 * XREFs of ?InitializeForwardProgressMdl@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009F2C8
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x14009E770 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x14003B35C (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004CB04 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitializeForwardProgressMdl(VIDMM_GLOBAL *this)
{
  PMDL PagesForMdl; // rax
  PMDL v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  int LogicalMemory; // edi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int64 LogicalAddress; // rax
  int v12; // eax
  void *v13; // rdx
  int v15; // [rsp+20h] [rbp-38h]

  PagesForMdl = MmAllocatePagesForMdlEx(
                  0LL,
                  *(PHYSICAL_ADDRESS *)(*((_QWORD *)this + 3) + 2440LL),
                  0LL,
                  0x10000uLL,
                  MmWriteCombined,
                  4u);
  *((_QWORD *)this + 5660) = PagesForMdl;
  v3 = PagesForMdl;
  if ( PagesForMdl )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v8 = (*((__int64 (__fastcall **)(PMDL, _QWORD, __int64, _QWORD, _DWORD, int))VirtualMemoryInterface + 5))(
           v3,
           0LL,
           2LL,
           0LL,
           0,
           1073741856);
    *((_QWORD *)this + 5659) = v8;
    if ( v8 )
    {
      if ( *((_BYTE *)this + 40098) )
      {
        if ( *((_BYTE *)this + 40099) )
        {
          LogicalMemory = SysMmAllocateLogicalMemory(
                            *(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL),
                            0x10000LL,
                            *((const void **)this + 5660),
                            (void **)this + 5661);
          if ( LogicalMemory < 0 )
          {
            _InterlockedIncrement(&dword_14008A7D0);
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 30069;
            DxgkLogInternalTriageEvent(v9, 262145LL);
            goto LABEL_12;
          }
        }
        v10 = *((_QWORD *)this + 5660);
        LogicalAddress = VidMmiGetLogicalAddress(*((void **)this + 5661), 0LL);
        LOBYTE(v15) = 0;
        v12 = SysMmMapPagesToIommu(
                *(_QWORD *)(*((_QWORD *)this + 3) + 224LL),
                LogicalAddress,
                v10 + 48,
                (unsigned __int64)*(unsigned int *)(v10 + 40) >> 12,
                v15,
                8,
                this);
        LogicalMemory = v12;
        if ( v12 < 0 )
        {
          WdLogSingleEntry2(3LL, this, v12);
          WdLogGlobalForLineNumber = 30084;
          goto LABEL_12;
        }
      }
      return 0LL;
    }
    _InterlockedIncrement(&dword_14008A7D0);
    WdLogSingleEntry0(6LL);
    v5 = 30046;
  }
  else
  {
    _InterlockedIncrement(&dword_14008A794);
    WdLogSingleEntry0(6LL);
    v5 = 30031;
  }
  WdLogGlobalForLineNumber = v5;
  DxgkLogInternalTriageEvent(v4, 262145LL);
  LogicalMemory = -1073741801;
LABEL_12:
  v13 = (void *)*((_QWORD *)this + 5661);
  if ( v13 )
  {
    SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), v13);
    *((_QWORD *)this + 5661) = 0LL;
  }
  return (unsigned int)LogicalMemory;
}
