/*
 * XREFs of ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x140107850
 * Callers:
 *     VidMmUpdateGpuVirtualAddress @ 0x140043580 (VidMmUpdateGpuVirtualAddress.c)
 * Callees:
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1400046F4 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     VidSchWaitForSingleSyncObject @ 0x14002D9C0 (VidSchWaitForSingleSyncObject.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x140044EC8 (McTemplateK0dq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqxpp_EtwWriteTransfer @ 0x1400452A0 (McTemplateK0qqqqqxpp_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaFailure@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@JI@Z @ 0x140099660 (-RecordVaPagingHistoryUpdateGpuVaFailure@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@JI@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@222K@Z @ 0x1400A955C (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1400CC4C8 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1400CD73C (-ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1401084D4 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 *     ?IsRangeValid@@YAE_K00@Z @ 0x1401085C8 (-IsRangeValid@@YAE_K00@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x14010864C (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     VidSchSubmitGlobalCommand @ 0x140108A8C (VidSchSubmitGlobalCommand.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a2,
        struct VIDMM_COMPANION_CONTEXT *a3,
        int a4,
        struct VIDMM_MULTI_ALLOC **a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        struct _KSEMAPHORE **a7)
{
  unsigned __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r9
  int v14; // r13d
  char *v15; // rdi
  __int64 v16; // rax
  struct VIDMM_PROCESS *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  UINT i; // eax
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v22; // r15
  __int64 v23; // r12
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  unsigned __int64 BaseAddress; // rbx
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  D3DGPU_SIZE_T AllocationSizeInBytes; // r8
  unsigned __int64 AllocationOffsetInBytes; // r10
  D3DGPU_SIZE_T SizeInBytes; // r9
  D3DGPU_SIZE_T v32; // rdx
  D3DGPU_SIZE_T v33; // rtt
  unsigned __int64 v34; // rcx
  __int64 Value; // rbx
  unsigned int v36; // eax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rax
  char *v39; // rax
  struct _KTHREAD **v40; // rbx
  struct _RTL_BALANCED_NODE *v41; // r15
  struct _RTL_BALANCED_NODE *v42; // r8
  struct _RTL_BALANCED_NODE **v43; // rcx
  struct _RTL_BALANCED_NODE *v44; // rax
  struct _RTL_BALANCED_NODE **ParentValue; // rdx
  __int128 *v46; // rcx
  char *v47; // rbx
  PVOID v48; // rax
  int v49; // ebx
  __int64 v50; // rcx
  _QWORD *v51; // rcx
  __int64 result; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // r10
  _QWORD *v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rcx
  PVOID v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  _QWORD *v62; // rcx
  _QWORD *v63; // rax
  unsigned int *v64; // r9
  _QWORD *v65; // rdi
  unsigned int j; // r8d
  __int64 v67; // rax
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  struct _RTL_BALANCED_NODE *v72; // rdx
  struct _RTL_BALANCED_NODE *v73; // rax
  __int64 v74; // rax
  UINT Timeouta; // [rsp+28h] [rbp-E0h]
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  UINT64 FenceValue; // [rsp+38h] [rbp-D0h]
  char v78; // [rsp+78h] [rbp-90h]
  __int128 v79; // [rsp+80h] [rbp-88h] BYREF
  UINT v80; // [rsp+90h] [rbp-78h]
  int v81; // [rsp+94h] [rbp-74h]
  unsigned __int64 v82; // [rsp+98h] [rbp-70h]
  unsigned int v83; // [rsp+A0h] [rbp-68h]
  struct VIDMM_PROCESS *v84; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v85; // [rsp+B0h] [rbp-58h]
  struct VIDMM_ALLOC *v86; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v87; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v88; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v89; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v90; // [rsp+D8h] [rbp-30h]
  UINT64 DriverProtection; // [rsp+E0h] [rbp-28h]
  __int64 v92; // [rsp+E8h] [rbp-20h]
  D3DGPU_SIZE_T v93; // [rsp+F0h] [rbp-18h]
  __int64 v94; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v95; // [rsp+100h] [rbp-8h]
  union _LARGE_INTEGER v96; // [rsp+108h] [rbp+0h] BYREF
  __int64 v97; // [rsp+110h] [rbp+8h]
  unsigned __int64 v98; // [rsp+118h] [rbp+10h]
  CVirtualAddressAllocator *v99; // [rsp+120h] [rbp+18h]
  PRKSEMAPHORE Semaphore; // [rsp+130h] [rbp+28h]
  _BYTE v101[32]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v102[16]; // [rsp+158h] [rbp+50h] BYREF
  bool v106; // [rsp+218h] [rbp+110h]

  v96.QuadPart = 0LL;
  Semaphore = (PRKSEMAPHORE)((char *)a3 + 24);
  *a7 = (struct _KSEMAPHORE *)((char *)a3 + 24);
  if ( KeWaitForSingleObject((char *)a3 + 24, Executive, 0, 0, &v96) == 258 )
  {
    WdLogSingleEntry0(3LL);
    result = 3223191810LL;
    WdLogGlobalForLineNumber = 25331;
    return result;
  }
  v10 = *(unsigned __int64 **)a3;
  v11 = *((_QWORD *)a3 + 2);
  v12 = -1LL;
  v13 = *((_QWORD *)a3 + 1);
  v14 = -1073741811;
  v87 = 0LL;
  v15 = 0LL;
  v84 = *(struct VIDMM_PROCESS **)(v11 + 8);
  v85 = v10[2];
  v16 = *(_QWORD *)(v13 + 96);
  v88 = 0LL;
  v99 = (CVirtualAddressAllocator *)v10;
  v95 = -1LL;
  v81 = *(unsigned __int16 *)(v16 + 6);
  *((_QWORD *)&v79 + 1) = &v79;
  *(_QWORD *)&v79 = &v79;
  v17 = (struct VIDMM_PROCESS *)v10[13];
  v78 = 0;
  FenceValue = a2->FenceValue;
  Timeouta = a2->NumOperations;
  v89 = -1LL;
  VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(this, 1u, v17, (struct _VIDSCH_CONTEXT *)v13, Timeouta, a6, FenceValue);
  if ( byte_14008A202 < 0 )
    McTemplateK0qqqqqxpp_EtwWriteTransfer(
      v19,
      v18,
      v20,
      a2->hDevice,
      a2->hContext,
      a2->hFenceObject,
      a2->NumOperations,
      a2->Flags.Value,
      a2->FenceValue,
      (char)a6,
      *((_QWORD *)a3 + 1));
  for ( i = 0; ; i = v80 + 1 )
  {
    v80 = i;
    if ( i >= a2->NumOperations )
    {
      if ( (a2->Flags.Value & 1) == 0 )
      {
        *((_BYTE *)a6 + 25) = 0;
        v14 = VidSchWaitForSingleSyncObject(*((_QWORD *)a3 + 1), (__int64)a6, a2->FenceValue);
        if ( v14 < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 25631;
          HIDWORD(Timeout) = 0;
          DxgkLogInternalTriageEvent(v58, 0x40000LL);
          v49 = 16;
          goto LABEL_42;
        }
      }
      v39 = (char *)operator new(184LL, 0x39346956u, 256LL);
      v15 = v39;
      if ( !v39 )
      {
        v15 = 0LL;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 25646;
        v49 = 17;
        v14 = -1073741801;
        goto LABEL_42;
      }
      memset(v39, 0, 0xB8uLL);
      v40 = (struct _KTHREAD **)v99;
      *((_QWORD *)v15 + 13) = v15 + 96;
      *((_QWORD *)v15 + 12) = v15 + 96;
      *((_QWORD *)v15 + 7) = v15 + 48;
      *((_QWORD *)v15 + 6) = v15 + 48;
      *((_QWORD *)v15 + 1) = this;
      *((_DWORD *)v15 + 5) = a2->NumOperations;
      *((_QWORD *)v15 + 10) = a2->FenceValue + 1;
      *((_DWORD *)v15 + 4) = v81;
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v101, v40 + 8);
      v41 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v40, v12, v87);
      if ( v41 )
      {
        if ( !v78 )
        {
          v42 = 0LL;
          goto LABEL_36;
        }
        v42 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v40, v89, v88);
        if ( v42 )
        {
LABEL_36:
          *((_QWORD *)v15 + 14) = v41;
          *((_QWORD *)v15 + 18) = v15 + 112;
          v43 = &v41[3].Children[1];
          *((_QWORD *)v15 + 15) = v42;
          *((_QWORD *)v15 + 21) = v15 + 120;
          v44 = (struct _RTL_BALANCED_NODE *)(v15 + 128);
          ParentValue = (struct _RTL_BALANCED_NODE **)v41[3].ParentValue;
          if ( *ParentValue == (struct _RTL_BALANCED_NODE *)&v41[3].Right )
          {
            v44->Children[0] = (struct _RTL_BALANCED_NODE *)v43;
            *((_QWORD *)v15 + 17) = ParentValue;
            *ParentValue = v44;
            v41[3].ParentValue = (ULONG_PTR)v44;
            if ( !v42 )
              goto LABEL_38;
            v72 = (struct _RTL_BALANCED_NODE *)(v15 + 152);
            if ( (struct _RTL_BALANCED_NODE **)v44->Children[0] == v43 )
            {
              v72->Children[0] = (struct _RTL_BALANCED_NODE *)v43;
              *((_QWORD *)v15 + 20) = v44;
              v44->Children[0] = v72;
              v41[3].ParentValue = (ULONG_PTR)v72;
              v15[176] = 1;
LABEL_38:
              v46 = (__int128 *)v79;
              v47 = v15;
              while ( v46 != &v79 )
              {
                *((_QWORD *)v46 - 1) = v41;
                if ( !*((_QWORD *)v46 + 10) )
                {
                  v73 = v41[4].Children[0];
                  if ( v73 )
                    *((_QWORD *)v46 + 10) = v73[3].Children[1];
                }
                v46 = *(__int128 **)v46;
              }
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v101);
              v64 = (unsigned int *)(v15 + 32);
              v65 = v15 + 96;
              *((_QWORD *)v47 + 8) = a5;
              *((_DWORD *)v47 + 8) = a4;
              *((_QWORD *)v47 + 3) = a2->Operations;
              a2->Operations = 0LL;
              *((_QWORD *)v47 + 9) = a6;
              *((_QWORD *)v47 + 11) = a3;
              *(_QWORD *)v47 = *((_QWORD *)a3 + 1);
              if ( (__int128 *)v79 == &v79 )
              {
                v65[1] = v65;
                *v65 = v65;
              }
              else
              {
                *(_OWORD *)v65 = v79;
                *(_QWORD *)(*v65 + 8LL) = v65;
                **((_QWORD **)v47 + 13) = v65;
              }
              *((_QWORD *)&v79 + 1) = &v79;
              *(_QWORD *)&v79 = &v79;
              _InterlockedIncrement((volatile signed __int32 *)a6 + 9);
              for ( j = 0; j < *v64; ++j )
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v47 + 8) + 8LL * j) + 696LL));
              memset(v102, 0, 0x50uLL);
              LODWORD(v102[5]) = 2;
              v102[3] = VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress;
              v67 = *((_QWORD *)a3 + 1);
              LODWORD(v102[0]) = 2;
              v102[6] = v47;
              v102[4] = 0LL;
              VidSchSubmitGlobalCommand(*(_QWORD *)(*(_QWORD *)(v67 + 104) + 40LL), v102);
              return 0LL;
            }
          }
LABEL_52:
          __fastfail(3u);
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 25681;
        v49 = 19;
      }
      else
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 25667;
        v49 = 18;
      }
      v14 = -1073741811;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v101);
      goto LABEL_42;
    }
    v22 = &a2->Operations[(unsigned __int64)i];
    v23 = i;
    OperationType = v22->OperationType;
    if ( v22->OperationType )
    {
      if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
        break;
    }
    BaseAddress = v22->Map.BaseAddress;
    v26 = BaseAddress + v22->Map.SizeInBytes;
    v98 = BaseAddress;
    v82 = v26;
    if ( !IsRangeValid(BaseAddress, v26, v85) )
    {
      v49 = 1;
      goto LABEL_42;
    }
    v86 = a5[v22->Map.hAllocation];
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(this, v84, *((struct _VIDSCH_CONTEXT **)a3 + 1), v86, v22);
    AllocationSizeInBytes = v22->Map.AllocationSizeInBytes;
    if ( (AllocationSizeInBytes & 0xFFF) != 0
      || (AllocationOffsetInBytes = v22->Map.AllocationOffsetInBytes,
          v90 = AllocationOffsetInBytes,
          (AllocationOffsetInBytes & 0xFFF) != 0) )
    {
      WdLogSingleEntry1(3LL, v23);
      WdLogGlobalForLineNumber = 25405;
      v49 = 2;
      goto LABEL_42;
    }
    SizeInBytes = v22->Map.SizeInBytes;
    v93 = SizeInBytes;
    if ( AllocationSizeInBytes )
    {
      if ( AllocationSizeInBytes > SizeInBytes )
      {
        WdLogSingleEntry1(3LL, v80);
        WdLogGlobalForLineNumber = 25421;
        v49 = 3;
        goto LABEL_42;
      }
      if ( SizeInBytes % AllocationSizeInBytes )
      {
        WdLogSingleEntry1(3LL, v80);
        WdLogGlobalForLineNumber = 25430;
        v49 = 4;
        goto LABEL_42;
      }
    }
    else
    {
      v22->Map.AllocationSizeInBytes = SizeInBytes;
      AllocationSizeInBytes = SizeInBytes;
    }
    if ( AllocationOffsetInBytes + AllocationSizeInBytes < AllocationOffsetInBytes
      || AllocationOffsetInBytes + AllocationSizeInBytes > *(_QWORD *)(***(_QWORD ***)v86 + 16LL) )
    {
      WdLogSingleEntry3(3LL, *(_QWORD *)(***(_QWORD ***)v86 + 16LL), v23, 25442LL);
      WdLogGlobalForLineNumber = 25442;
      v49 = 5;
      goto LABEL_42;
    }
    if ( (*((_BYTE *)this + 41065) & 2) != 0 )
    {
      LODWORD(v32) = 1;
      v94 = 1LL;
      v106 = SizeInBytes != AllocationSizeInBytes;
    }
    else
    {
      v106 = 0;
      v93 = AllocationSizeInBytes;
      v33 = SizeInBytes;
      SizeInBytes = AllocationSizeInBytes;
      v90 = 0LL;
      v32 = v33 / AllocationSizeInBytes;
      v94 = v33 / AllocationSizeInBytes;
      if ( v33 / AllocationSizeInBytes >= 0xFFFFFFFF )
      {
        WdLogSingleEntry1(3LL, v23);
        WdLogGlobalForLineNumber = 25466;
        v49 = 6;
        goto LABEL_42;
      }
    }
    v34 = BaseAddress;
    v92 = BaseAddress;
    DriverProtection = 0LL;
    if ( v22->OperationType )
    {
      Value = v22->MapProtect.Protection.Value;
      DriverProtection = v22->MapProtect.DriverProtection;
    }
    else
    {
      Value = 1LL;
    }
    v36 = 0;
    while ( 1 )
    {
      v83 = v36;
      if ( v36 >= (unsigned int)v32 )
        break;
      v97 = v34 + SizeInBytes;
      v48 = VIDMM_MAPPED_VA_RANGE::operator new();
      if ( !v48
        || (v106 ? (v53 = v22->Map.AllocationSizeInBytes >> 12) : (v53 = 0LL),
            (v54 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                     (__int64)v48,
                     (__int64)v48,
                     0LL,
                     v92,
                     v97,
                     v81,
                     (__int64)v86,
                     v22->Map.AllocationOffsetInBytes,
                     1,
                     Value,
                     DriverProtection,
                     v53,
                     v90,
                     0)) == 0) )
      {
        v49 = 7;
        _InterlockedIncrement(&dword_14008A830);
        WdLogSingleEntry1(6LL, 7LL);
        WdLogGlobalForLineNumber = 25502;
        HIDWORD(Timeout) = 0;
        goto LABEL_41;
      }
      v56 = (_QWORD *)*((_QWORD *)&v79 + 1);
      v57 = (_QWORD *)(v54 + 8);
      if ( **((__int128 ***)&v79 + 1) != &v79 )
        goto LABEL_52;
      SizeInBytes = v93;
      *v57 = &v79;
      LODWORD(v32) = v94;
      v57[1] = v56;
      *v56 = v57;
      v34 = v55;
      *((_QWORD *)&v79 + 1) = v57;
      v36 = v83 + 1;
      v92 = v55;
    }
    v37 = v98;
LABEL_23:
    if ( v82 <= v37 )
      goto LABEL_99;
    if ( ((v37 | v82) & 0xFFF) != 0 )
    {
      WdLogSingleEntry1(3LL, v23);
      WdLogGlobalForLineNumber = 25607;
      v49 = 15;
      goto LABEL_42;
    }
    v12 = v95;
    v38 = v87;
    if ( v95 > v37 )
      v12 = v37;
    v95 = v12;
    if ( v87 < v82 )
      v38 = v82;
    v87 = v38;
  }
  if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
  {
    if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
    {
LABEL_99:
      WdLogSingleEntry1(3LL, v23);
      WdLogGlobalForLineNumber = 25601;
      v49 = 14;
      goto LABEL_42;
    }
    v37 = v22->Unmap.Protection.Value;
    v82 = v37 + v22->Map.SizeInBytes;
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(this, v84, *((struct _VIDSCH_CONTEXT **)a3 + 1), 0LL, v22);
    if ( !IsRangeValid(v37, v82, v85) )
    {
      v49 = 10;
      goto LABEL_42;
    }
    v68 = v22->Map.BaseAddress;
    v69 = v68 + v22->Map.SizeInBytes;
    if ( v69 <= v68 )
    {
      WdLogSingleEntry1(3LL, v23);
      WdLogGlobalForLineNumber = 25561;
      v49 = 11;
      goto LABEL_42;
    }
    if ( ((v69 | v68) & 0xFFF) != 0 )
    {
      WdLogSingleEntry1(3LL, v23);
      WdLogGlobalForLineNumber = 25567;
      v49 = 12;
      goto LABEL_42;
    }
    if ( v37 < v69 && v82 > v68 )
    {
      WdLogSingleEntry1(3LL, v23);
      WdLogGlobalForLineNumber = 25574;
      v49 = 13;
      goto LABEL_42;
    }
    v70 = v89;
    v78 = 1;
    if ( v89 > v68 )
      v70 = v68;
    v89 = v70;
    v71 = v88;
    if ( v88 < v69 )
      v71 = v69;
    v88 = v71;
    goto LABEL_23;
  }
  v37 = v22->Map.BaseAddress;
  v82 = v37 + v22->Map.SizeInBytes;
  VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(this, v84, *((struct _VIDSCH_CONTEXT **)a3 + 1), 0LL, v22);
  if ( !IsRangeValid(v37, v82, v85) )
  {
    v49 = 8;
    goto LABEL_42;
  }
  v59 = VIDMM_MAPPED_VA_RANGE::operator new();
  if ( v59 )
  {
    LOBYTE(v60) = -(v22->Unmap.Protection.Value & 8);
    v61 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
            (__int64)v59,
            v60,
            0LL,
            v37,
            v82,
            v81,
            0LL,
            0LL,
            (v22->Unmap.Protection.Value & 8) == 0 ? 6 : 0,
            v22->Unmap.Protection.Value,
            0LL,
            0LL,
            0LL,
            0);
    if ( v61 )
    {
      v62 = (_QWORD *)*((_QWORD *)&v79 + 1);
      v63 = (_QWORD *)(v61 + 8);
      if ( **((__int128 ***)&v79 + 1) != &v79 )
        goto LABEL_52;
      v63[1] = *((_QWORD *)&v79 + 1);
      *v63 = &v79;
      *v62 = v63;
      *((_QWORD *)&v79 + 1) = v63;
      goto LABEL_23;
    }
  }
  v49 = 9;
  _InterlockedIncrement(&dword_14008A830);
  WdLogSingleEntry1(6LL, 9LL);
  HIDWORD(Timeout) = 0;
  WdLogGlobalForLineNumber = 25538;
LABEL_41:
  DxgkLogInternalTriageEvent(v50, 262145LL);
LABEL_42:
  if ( byte_14008A202 < 0 )
  {
    LODWORD(Timeout) = v49;
    McTemplateK0dq_EtwWriteTransfer(v27, &UpdateGpuVirtualAddressFailure, v28, v14, (__int64)Timeout);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaFailure(this, v84, v14, v49);
  KeReleaseSemaphore(Semaphore, 0, 1, 0);
  if ( v15 )
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'((VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)v15);
  while ( 1 )
  {
    v51 = (_QWORD *)v79;
    if ( (__int128 *)v79 == &v79 )
      return (unsigned int)v14;
    if ( *(__int128 **)(v79 + 8) != &v79 )
      goto LABEL_52;
    v74 = *(_QWORD *)v79;
    if ( *(_QWORD *)(*(_QWORD *)v79 + 8LL) != (_QWORD)v79 )
      goto LABEL_52;
    *(_QWORD *)&v79 = *(_QWORD *)v79;
    *(_QWORD *)(v74 + 8) = &v79;
    *v51 = 0LL;
    v51[1] = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v51 - 1));
  }
}
