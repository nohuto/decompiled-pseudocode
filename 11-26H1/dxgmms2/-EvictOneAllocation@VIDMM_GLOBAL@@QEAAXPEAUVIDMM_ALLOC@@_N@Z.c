/*
 * XREFs of ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D47A8
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400D4590 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1400E3CE8 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     MapInVideoMemory @ 0x140102EA8 (MapInVideoMemory.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1401053E0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x140105818 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D498C (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14011D298 (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictOneAllocation(VIDMM_GLOBAL *this, __int64 ***a2, __int64 a3)
{
  bool v3; // bp
  VIDMM_GLOBAL *v5; // rsi
  __int64 *v6; // r14
  __int64 v7; // r12
  int v8; // eax
  __int64 *v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  char v14; // [rsp+20h] [rbp-38h]

  v3 = a3;
  v5 = this;
  v6 = **a2;
  v7 = *v6;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 16764;
  }
  v8 = *((_DWORD *)a2 + 7) & 3;
  if ( v8 == 2 )
  {
    v9 = **a2;
    v10 = *v9;
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
      WdLogGlobalForLineNumber = 13153;
    }
    VIDMM_DEVICE::RemoveCommitment((VIDMM_DEVICE *)a2[1], (struct VIDMM_ALLOC *)a2, v3);
    if ( !*((_DWORD *)v9 + 19) )
    {
      this = (VIDMM_GLOBAL *)v9[46];
      if ( (*(_DWORD *)this & 0x40000000) == 0 && !*((_DWORD *)this + 4) && (*(_DWORD *)v9[46] & 0x20000) == 0 )
      {
        v12 = *(_QWORD *)(*((_QWORD *)v5 + 5040) + 8LL * ((*(_DWORD *)(*v9 + 52) >> 2) & 0x3F));
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 256LL))(v12, v10);
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0x_EtwWriteTransfer((__int64)this, &EventMarkAllocation, a3, a2);
        v13 = *(_QWORD *)(v10 + 16);
        _InterlockedIncrement((volatile signed __int32 *)v5 + 1804);
        _InterlockedAdd64((volatile signed __int64 *)v5 + 903, v13);
      }
    }
  }
  else if ( v8 == 1 )
  {
    VIDMM_DEVICE::UnfaultCommitment(this, (struct VIDMM_ALLOC *)a2);
  }
  if ( !v3 || (this = (VIDMM_GLOBAL *)a2[1][1], (*((_DWORD *)this + 38) & 2) != 0) )
  {
    if ( *((_DWORD *)v6 + 18) == 1 )
    {
      LOBYTE(a3) = 1;
      v14 = 0;
      v11 = *(_QWORD *)(*((_QWORD *)v5 + 5040) + 8LL * ((*(_DWORD *)(*v6 + 52) >> 2) & 0x3F));
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, char, _QWORD))(*(_QWORD *)v11 + 240LL))(
        v11,
        v7,
        a3,
        0LL,
        v14,
        0LL);
    }
  }
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0x_EtwWriteTransfer((__int64)this, &EventEvictAllocation, a3, v6);
}
