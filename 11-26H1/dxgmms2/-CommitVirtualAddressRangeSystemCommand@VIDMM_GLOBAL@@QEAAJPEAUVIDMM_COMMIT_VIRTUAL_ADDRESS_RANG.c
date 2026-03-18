/*
 * XREFs of ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE814
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140047988 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400E4860 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     CommitAllocationVaRange @ 0x140038DCC (CommitAllocationVaRange.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z @ 0x1400AAFA4 (-ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400CBEA0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x140116DE4 (-CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2,
        struct VIDMM_ALLOC **a3)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 *v8; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v9; // rdx
  unsigned __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int128 *v14; // rax
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // eax
  unsigned int v18; // r8d
  VIDMM_GLOBAL *v19; // rcx
  _BYTE v21[32]; // [rsp+60h] [rbp-38h] BYREF

  *a3 = 0LL;
  v6 = 0;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v21,
    (struct _KTHREAD **)(*(_QWORD *)a2 + 64LL));
  v7 = *((_QWORD *)a2 + 4);
  if ( v7 )
  {
    if ( !**(_QWORD **)(v7 + 16) || (v8 = (__int64 *)((char *)a2 + 8), !**((_QWORD **)a2 + 1)) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 21044;
      goto LABEL_26;
    }
  }
  else
  {
    v8 = (__int64 *)((char *)a2 + 8);
  }
  v9 = (struct VIDMM_MAPPED_VA_RANGE *)*v8;
  switch ( *(_DWORD *)(*v8 + 72) & 0xF )
  {
    case 1:
      v16 = *((_QWORD *)v9 + 8);
      if ( (*(_BYTE *)(v16 + 28) & 3) == 2 )
        v17 = CommitAllocationVaRange(
                *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(***(_QWORD ***)v16 + 52LL) >> 2) & 0x3F)),
                *(CVirtualAddressAllocator **)a2,
                (__int64 ***)v16,
                *v8,
                a3);
      else
        v17 = CVirtualAddressAllocator::UncommitVirtualAddressRange(*(CVirtualAddressAllocator **)a2, v9, a3, 1u, 0);
      v6 = v17;
      if ( v17 >= 0 )
      {
        Feature_3358814523__private_IsEnabledDeviceUsageNoInline();
        v8 = (__int64 *)((char *)a2 + 8);
      }
      break;
    case 2:
      goto LABEL_14;
    case 6:
      v14 = &xmmword_140060B68;
      v15 = 4294967294LL;
LABEL_15:
      v13 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              *(_QWORD *)a2,
              v9,
              0LL,
              v15,
              0LL,
              v14,
              1,
              a3,
              0LL,
              0,
              0LL);
      goto LABEL_16;
    case 7:
    case 8:
LABEL_14:
      v14 = (__int128 *)((char *)a2 + 16);
      v15 = 0LL;
      goto LABEL_15;
    case 9:
      v10 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(*((_QWORD *)v9 + 8) + 24LL));
      v13 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              *(_QWORD *)a2,
              v11,
              0LL,
              v10,
              0LL,
              v12,
              1,
              a3,
              0LL,
              0,
              0LL);
LABEL_16:
      v6 = v13;
      break;
  }
  if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v6 >= 0 )
    {
      v18 = *(_DWORD *)(*v8 + 72);
      if ( (v18 & 0x8000) != 0 )
        v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
               *(struct _KTHREAD ***)a2,
               *(struct VIDMM_VAD **)*v8,
               (v18 >> 4) & 0x3F,
               (struct VIDMM_MAPPED_VA_RANGE *)*v8);
    }
  }
LABEL_26:
  if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v6 == -1073741267 )
    {
      if ( *((_BYTE *)a2 + 40) )
        goto LABEL_38;
      v6 = -1073741823;
    }
    else if ( v6 >= 0 )
    {
LABEL_37:
      VIDMM_GLOBAL::CleanupVadReference(v19, a2);
      goto LABEL_38;
    }
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(*((VIDMM_MAPPED_VA_RANGE **)a2 + 1));
    CVirtualAddressAllocator::ResetAddressSpaceForFailure(*(CVirtualAddressAllocator **)a2);
    goto LABEL_37;
  }
  if ( *((_BYTE *)a2 + 40) && v6 == -1073741267 || (VIDMM_GLOBAL::CleanupVadReference(v19, a2), v6 == -1073741267) )
  {
    if ( !*((_BYTE *)a2 + 40) )
      v6 = -1073741823;
  }
LABEL_38:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
  return (unsigned int)v6;
}
