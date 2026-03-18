/*
 * XREFs of ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x140105F78
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAllocator@@_K2E@Z @ 0x140105CBC (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAll.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x140105EE0 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14002FDD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline @ 0x14004DCBC (Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline.c)
 *     CleanupVaRangeReference @ 0x14009D1F8 (CleanupVaRangeReference.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400CBEA0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2)
{
  struct _LIST_ENTRY *v2; // rsi
  __int64 v4; // rcx
  struct _KTHREAD ***v6; // r14
  __int64 v7; // rbx
  VIDMM_GLOBAL *v8; // rcx
  struct _KTHREAD **v9; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v10; // rbx
  CVirtualAddressAllocator *v11; // rcx
  int v12; // edi
  _BYTE v13[32]; // [rsp+50h] [rbp-28h] BYREF
  struct VIDMM_ALLOC *v14; // [rsp+80h] [rbp+8h] BYREF

  v14 = this;
  v2 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 8);
  if ( v2 )
  {
    if ( !v2[1].Flink->Flink )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 21312;
      DxgkLogInternalTriageEvent(v4, 0x40000LL);
      return 0LL;
    }
    v6 = (struct _KTHREAD ***)((char *)a2 + 48);
    v7 = *((_QWORD *)a2 + 6);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 64));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v8, v2);
    *(_QWORD *)(v7 + 72) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 64, 0LL);
    KeLeaveCriticalRegion();
    operator delete(*((void **)a2 + 8));
  }
  else
  {
    v6 = (struct _KTHREAD ***)((char *)a2 + 48);
  }
  v9 = *v6;
  v10 = (struct VIDMM_MAPPED_VA_RANGE *)*((_QWORD *)a2 + 7);
  v11 = (CVirtualAddressAllocator *)*v6;
  v14 = 0LL;
  v12 = CVirtualAddressAllocator::UncommitVirtualAddressRange(v11, v10, &v14, 1u, 0);
  if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() && (*((_DWORD *)v10 + 18) & 0x8000) != 0 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13, v9 + 8);
    if ( v12 >= 0 )
    {
      v12 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
              v9,
              *(struct VIDMM_VAD **)v10,
              (*((_DWORD *)v10 + 18) >> 4) & 0x3F,
              v10);
      if ( (unsigned int)Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v12 < 0 )
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v10);
      }
    }
    CleanupVaRangeReference(v10);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  }
  return (unsigned int)v12;
}
