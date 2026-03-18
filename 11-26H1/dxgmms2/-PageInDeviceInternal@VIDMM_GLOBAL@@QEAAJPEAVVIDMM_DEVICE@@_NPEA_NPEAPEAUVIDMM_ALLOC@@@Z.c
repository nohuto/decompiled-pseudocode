/*
 * XREFs of ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE52C
 * Callers:
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CDA2C (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x140126F0C (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140029460 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE298 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1400CEA6C (-PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CEC00 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140101480 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140101648 (-FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInDeviceInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        bool a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  _QWORD *v5; // r12
  VIDMM_GLOBAL *v8; // rbp
  int v9; // edi
  __int64 v11; // rdx
  __int64 v12; // r13
  struct VIDMM_ALLOC *v13; // rbx
  int i; // ebp
  _QWORD *v15; // r15
  _DWORD *v16; // rcx
  VIDMM_DEVICE *v17; // rcx
  _QWORD *v18; // r15
  _DWORD *v19; // rax
  _DWORD *v20; // rcx
  struct _KTHREAD **VirtualAddressAllocator; // rdi
  struct VIDMM_ALLOC **v22; // rcx
  int v23; // eax
  _BYTE v24[88]; // [rsp+30h] [rbp-58h] BYREF
  bool v26; // [rsp+A0h] [rbp+18h]

  v26 = a3;
  v5 = (_QWORD *)((char *)a2 + 136);
  v8 = this;
  v9 = 0;
  *a4 = 0;
  *a5 = 0LL;
  if ( (_QWORD *)*v5 == v5
    || (v11 = *((_QWORD *)a2 + 4)) != 0
    && (*(_BYTE *)(v11 + 212) || _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 208), 0, 0)) )
  {
    if ( *((_QWORD *)a2 + 31) )
      *((_QWORD *)a2 + 31) = 0LL;
    return (unsigned int)v9;
  }
  v12 = *((_QWORD *)a2 + 3);
  if ( v12 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 808));
    a3 = v26;
  }
  v13 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 31);
  if ( !v13 )
    goto LABEL_9;
  v20 = **(_DWORD ***)v13;
  if ( (v20[6] & 4) != 0 )
  {
    VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                    *((VIDMM_PROCESS **)a2 + 1),
                                                    *(_DWORD *)(*((_QWORD *)v8 + 3) + 240LL),
                                                    (*(_DWORD *)(*(_QWORD *)v20 + 52LL) >> 2) & 0x3F);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v24, VirtualAddressAllocator + 8);
    v22 = *(struct VIDMM_ALLOC ***)(**(_QWORD **)v13 + 64LL);
    if ( (*(_DWORD *)v22 & 7) != 0 )
      v23 = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(
              v22,
              (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
              a5);
    else
      v23 = VIDMM_PAGE_TABLE::CommitPageTable(
              (VIDMM_PAGE_TABLE *)v22,
              (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
              a5);
    v9 = v23;
    *a4 = v23 == -1073741267;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
LABEL_38:
    if ( v9 < 0 )
      goto LABEL_39;
    goto LABEL_48;
  }
  if ( (*((_DWORD *)v13 + 7) & 3) != 0 )
  {
    v9 = VIDMM_GLOBAL::PageInFaultedAllocation(v8, v13, a3, a4, a5);
    goto LABEL_38;
  }
  v9 = 0;
LABEL_48:
  *((_QWORD *)a2 + 31) = 0LL;
LABEL_9:
  for ( i = 0; i < 3; ++i )
  {
    v15 = (_QWORD *)*v5;
    while ( v15 != v5 )
    {
      v13 = (struct VIDMM_ALLOC *)(v15 - 7);
      v15 = (_QWORD *)*v15;
      v16 = **(_DWORD ***)v13;
      if ( i )
      {
        if ( i != 1 || *(_DWORD *)(*(_QWORD *)v16 + 48LL) >= 0xA0000000 )
          goto LABEL_17;
      }
      else if ( (v16[6] & 1) == 0 )
      {
LABEL_17:
        if ( v16[18] == 1 )
        {
          v9 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v13, v26, a4, a5);
          if ( v9 < 0 )
          {
LABEL_19:
            v8 = this;
LABEL_39:
            if ( (*((_DWORD *)v13 + 7) & 3) == 2 )
              VIDMM_GLOBAL::FaultOneAllocation(v8, v13);
            else
              VIDMM_DEVICE::FaultCommitment(v17, v13);
            *((_QWORD *)a2 + 31) = *a5;
            goto LABEL_30;
          }
        }
      }
    }
    v18 = (_QWORD *)*v5;
    while ( v18 != v5 )
    {
      v13 = (struct VIDMM_ALLOC *)(v18 - 7);
      v18 = (_QWORD *)*v18;
      v19 = **(_DWORD ***)v13;
      if ( i )
      {
        if ( i != 1 || *(_DWORD *)(*(_QWORD *)v19 + 48LL) >= 0xA0000000 )
          goto LABEL_25;
      }
      else if ( (v19[6] & 1) == 0 )
      {
LABEL_25:
        v9 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v13, v26, a4, a5);
        if ( v9 < 0 )
          goto LABEL_19;
      }
    }
  }
LABEL_30:
  if ( v12 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 824));
    ExReleasePushLockSharedEx(v12 + 808, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v9;
}
