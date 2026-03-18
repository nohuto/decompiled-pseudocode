/*
 * XREFs of ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1400A351C
 * Callers:
 *     VidMmUpdateContextAllocation @ 0x14004D9A0 (VidMmUpdateContextAllocation.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     CommitAllocationVaRange @ 0x140038DCC (CommitAllocationVaRange.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1400A25F0 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x140105A6C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
        VIDMM_GLOBAL *this,
        const struct _DXGKARGCB_UPDATECONTEXTALLOCATION *a2,
        char a3)
{
  __int64 ***v5; // r12
  __int64 *v6; // r9
  __int64 v7; // r15
  int v8; // ebx
  struct _KTHREAD **v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rcx
  D3DGPU_VIRTUAL_ADDRESS v15; // rdi
  __int64 v16; // rbx
  int v17; // ebx
  _BYTE v18[32]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v19[12]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v20; // [rsp+138h] [rbp+10h] BYREF

  v5 = (__int64 ***)*((_QWORD *)a2->hAllocation + 3);
  v6 = **v5;
  v7 = *v6;
  v8 = *(_DWORD *)(*v6 + 52);
  if ( a3 )
  {
    v10 = (struct _KTHREAD **)*((_QWORD *)this + ((unsigned __int8)v8 >> 2) + 5068);
    if ( (*((_DWORD *)v5 + 7) & 3) == 2 )
    {
      v12 = CVirtualAddressAllocator::MapVirtualAddressRange(
              v10,
              v5,
              0LL,
              1LL,
              *(_QWORD *)(v7 + 16),
              0LL,
              0LL,
              0LL,
              *(_DWORD *)(v7 + 32),
              1LL,
              0LL,
              (unsigned __int8)v8 >> 2,
              0LL,
              0,
              0);
      v13 = v12;
      if ( v12 )
      {
        v15 = *(_QWORD *)(v12 + 104);
        v16 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v7 + 52) >> 2) & 0x3F));
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v18, v10 + 8);
        v17 = CommitAllocationVaRange(v16, (CVirtualAddressAllocator *)v10, v5, v13, &v20);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
        if ( v17 >= 0 )
          VIDMM_GLOBAL::UpdateContextAllocation(
            (ADAPTER_RENDER **)this,
            v15,
            *(_QWORD *)(v7 + 16),
            (SIZE_T)a2->pPrivateDriverData,
            a2->PrivateDriverDataSize);
        if ( v15 )
          CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)v10, v15);
        return (unsigned int)v17;
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 23614;
        DxgkLogInternalTriageEvent(v14, 0x40000LL);
        return 3221225473LL;
      }
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 23589;
      DxgkLogInternalTriageEvent(v11, 0x40000LL);
      return 3221225485LL;
    }
  }
  else
  {
    memset(v19, 0, 0x58uLL);
    LODWORD(v19[0]) = 117;
    HIDWORD(v19[0]) = (unsigned __int8)v8 >> 2;
    v19[5] = a2;
    return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v19, 1);
  }
}
