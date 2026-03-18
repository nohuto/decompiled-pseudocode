/*
 * XREFs of ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x14037CDEC
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x140013EF0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x140046468 (-VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MUL.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x14004C094 (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_L.c)
 *     McTemplateK0pqqqqq_EtwWriteTransfer @ 0x1400583DC (McTemplateK0pqqqqq_EtwWriteTransfer.c)
 *     ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x14005C4E4 (-VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAP.c)
 *     McTemplateK0pqqqqqqq_EtwWriteTransfer @ 0x14005CE20 (McTemplateK0pqqqqqqq_EtwWriteTransfer.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x14005FCC4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x140060570 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x14006541C (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x140193298 (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1401BA3C8 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x14037E0BC (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x14038BD00 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateVidMmAllocations(
        struct VIDMM_DEVICE **this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        unsigned __int8 a7)
{
  UINT v7; // edi
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // ecx
  struct _DXGK_ALLOCATIONINFO *v10; // r10
  __int64 v11; // rsi
  BOOL v12; // r8d
  struct VIDMM_DEVICE *v13; // rax
  __int64 v14; // rcx
  struct DXGALLOCATION *v15; // r15
  struct _D3DKMT_CREATEALLOCATION *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rsi
  int v19; // eax
  bool v20; // zf
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D Value; // r8d
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rsi
  UINT v25; // esi
  __int64 v26; // rdx
  struct _DXGK_ALLOCATIONINFO *v27; // r8
  __int64 v28; // rdx
  char v29; // di
  struct _DXGK_ALLOCATIONINFO *v30; // r10
  struct _D3DKMT_CREATEALLOCATION *v31; // rsi
  PVOID v32; // r9
  __int64 v33; // rcx
  PVOID v34; // r12
  __int64 v35; // r8
  __int64 v36; // rcx
  struct VIDMM_DEVICE *v37; // rcx
  __int64 v38; // r8
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rax
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v42; // r8d
  int v43; // edx
  UINT v44; // edi
  struct DXGALLOCATION *v45; // r15
  __int64 v46; // rcx
  struct VIDMM_MULTI_GLOBAL_ALLOC *v47; // r8
  struct VIDMM_MULTI_ALLOC *v48; // r8
  __int64 v50; // rcx
  int v51; // ecx
  PVOID v52; // rsi
  SIZE_T v53; // r12
  __int64 v54; // rdi
  struct DXGPROCESS *v55; // rax
  __int64 v56; // r9
  int v57; // eax
  struct DXGPROCESS *v58; // rax
  PVOID v59; // r12
  __int64 v60; // rdx
  __int64 v61; // r9
  int v62; // r8d
  struct VIDMM_DEVICE *v63; // rcx
  struct VIDMM_DEVICE *v64; // rdx
  int v65; // r8d
  struct VIDMM_DEVICE *v66; // rcx
  int Resident; // eax
  const EVENT_DESCRIPTOR *v68; // rdx
  _DWORD *v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // r8
  void *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rcx
  struct DXGPROCESS *Current; // rax
  UINT v82; // edx
  __int64 v83; // r12
  NTSTATUS v84; // eax
  PVOID v85; // r9
  int v86; // eax
  __int64 v87; // r9
  int v88; // r8d
  struct DXGPROCESS *v89; // rax
  __int64 v90; // rcx
  SIZE_T Size; // rdx
  __int64 v92; // rdx
  void *v93; // rax
  _DWORD *v94; // rcx
  _DWORD *v95; // rcx
  HANDLE hSection; // rax
  const wchar_t *v97; // r9
  PVOID *Object; // [rsp+28h] [rbp-A9h]
  PVOID *Objecta; // [rsp+28h] [rbp-A9h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+30h] [rbp-A1h]
  __int64 HandleInformationa; // [rsp+30h] [rbp-A1h]
  unsigned __int64 *v102; // [rsp+38h] [rbp-99h]
  unsigned __int64 *v103; // [rsp+40h] [rbp-91h]
  __int64 v104; // [rsp+48h] [rbp-89h]
  __int64 v105; // [rsp+50h] [rbp-81h]
  __int64 v106; // [rsp+58h] [rbp-79h]
  _BYTE v107[4]; // [rsp+68h] [rbp-69h] BYREF
  UINT v108; // [rsp+6Ch] [rbp-65h]
  char v109; // [rsp+70h] [rbp-61h]
  PVOID BaseAddress; // [rsp+78h] [rbp-59h]
  int v111; // [rsp+80h] [rbp-51h]
  unsigned int v112; // [rsp+84h] [rbp-4Dh]
  BOOL v113; // [rsp+88h] [rbp-49h]
  PVOID v114; // [rsp+90h] [rbp-41h]
  int v115; // [rsp+98h] [rbp-39h] BYREF
  __int64 v116; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v117; // [rsp+A8h] [rbp-29h] BYREF
  PVOID v118; // [rsp+B0h] [rbp-21h] BYREF
  struct VIDMM_PAGING_QUEUE *v119; // [rsp+B8h] [rbp-19h] BYREF
  unsigned __int64 v120; // [rsp+C0h] [rbp-11h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v121; // [rsp+C8h] [rbp-9h] BYREF
  unsigned __int64 v122[7]; // [rsp+D0h] [rbp-1h] BYREF
  unsigned __int8 v127; // [rsp+150h] [rbp+7Fh]

  v7 = 0;
  v111 = 0;
  Flags = a2->Flags;
  v10 = a4;
  LODWORD(v11) = 0;
  v127 = 1;
  if ( (*(_DWORD *)&Flags & 0x10000) != 0 && a6 )
  {
    LODWORD(v11) = -1073741811;
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 4095;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Can not create StandardAllocation from UserMode and Kernel simultaneously,               "
                "              returning 0x%I64x",
      (__int64)this,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v11;
  }
  v12 = (*(_DWORD *)&Flags & 0x40000) == 0;
  v13 = this[2];
  if ( (*(_WORD *)&Flags & 0x400) != 0 )
    v12 = 1;
  v113 = v12;
  v14 = *((_QWORD *)v13 + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v14 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v14 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4110;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
        4110LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    LOBYTE(v12) = v113;
    v10 = a4;
  }
  v15 = a5;
  while ( 1 )
  {
    v16 = a2;
    v108 = v7;
    if ( v7 >= a2->NumAllocations )
    {
      if ( (int)v11 >= 0 )
      {
        a2->Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&a2->Flags & 0xFFFFBFFF | (v127 << 14));
        return (unsigned int)v11;
      }
      goto LABEL_54;
    }
    v17 = *((_QWORD *)v15 + 6);
    v18 = v7;
    v116 = 0LL;
    v117 = 0LL;
    v107[0] = v12;
    BaseAddress = 0LL;
    v19 = LODWORD(v10[v18].Size) + 4095;
    v114 = 0LL;
    v20 = (*(_DWORD *)(v17 + 4) & 0x200F) == 0;
    v112 = v19 & 0xFFFFF000;
    if ( !v20 )
      v107[0] = 1;
    if ( !*(_QWORD *)(v17 + 16) && (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4138;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pAllocation->m_pAllocation->m_hDriverAllocation != NULL || pKMTCreateAllocation->Flags.NoKmdAccess",
        4138LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v10 = a4;
      v16 = a2;
    }
    Value = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v10[v18].Flags.Value;
    if ( (*(_WORD *)&Value & 0x4000) != 0 )
    {
      v77 = 352LL * ((*((_DWORD *)v15 + 18) >> 12) & 0x3F);
      v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 3168LL) + 16LL) + 3032LL);
      v79 = *(_QWORD *)(v77 + v78 + 40);
      if ( !*((_BYTE *)this + 1912) || !v79 )
      {
        WdLogSingleEntry2(2LL, this, *(_QWORD *)(v77 + v78 + 40));
        WdLogGlobalForLineNumber = 4158;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver asking for history buffer, but device history buffer creation is disabled, or adapter does not"
                    " have precision data. Device=0x%I64x, PrecisionData=%I64X",
          (__int64)this,
          v79,
          0LL,
          0LL,
          0LL);
        goto LABEL_71;
      }
      v7 = v108;
    }
    if ( a7 )
    {
      v50 = *(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL);
      if ( v50 )
        BaseAddress = *(PVOID *)(v50 + 192);
      v51 = v111;
      if ( *(_BYTE *)&v16->Flags < 0 )
        v51 = 1;
      v111 = v51;
      goto LABEL_37;
    }
    v109 = 0;
    v22 = (unsigned int)a2->Flags;
    v23 = *(_DWORD *)&a2->Flags & 0x20;
    if ( (v22 & 0x10000) != 0 )
    {
      if ( !v23 )
      {
        if ( (v22 & 0x20000) != 0 )
        {
          v118 = 0LL;
          v83 = v7;
          v84 = ObReferenceObjectByHandle(a3[v83].hSection, 0x20000u, MmSectionObjectType, 1, &v118, 0LL);
          v85 = v118;
          v11 = v84;
          v114 = v118;
          if ( v84 < 0 )
          {
            WdLogSingleEntry2(2LL, a3[v83].hSection, v84);
            hSection = a3[v83].hSection;
            WdLogGlobalForLineNumber = 4197;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
              (__int64)hSection,
              v11,
              0LL,
              0LL,
              0LL);
            goto LABEL_54;
          }
          a4[v7].Flags.Value |= 0x400000u;
          v86 = ProcessSectionAttributes(v85, &a4[v7]);
          v11 = v86;
          if ( v86 < 0 )
          {
            WdLogSingleEntry2(2LL, this, v86);
            WdLogGlobalForLineNumber = 4209;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to query section attributes. Device=0x%I64x, Status=%I64X",
              (__int64)this,
              v11,
              0LL,
              0LL,
              0LL);
            goto LABEL_167;
          }
          v10 = a4;
          v87 = *(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL);
          *(_DWORD *)(v87 + 12) |= 0x400u;
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL) + 192LL) = v114;
          v88 = *(_DWORD *)(v87 + 12);
          *(_DWORD *)(v87 + 204) = a4[v7].Alignment;
          *(_DWORD *)(v87 + 12) = v88 ^ ((unsigned __int16)v88 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&a4[v7].Flags.0 << 9)) & 0x800;
        }
        goto LABEL_19;
      }
      v80 = v7;
      BaseAddress = a3[v80].hSection;
      v10[v18].Flags.Value = *(_DWORD *)&Value | 0x10;
      Current = DXGPROCESS::GetCurrent(v80 * 96);
      v25 = v108;
      v10 = a4;
      if ( (*((_DWORD *)Current + 102) & 0x100) != 0 )
        goto LABEL_136;
    }
    else
    {
      v24 = v108;
      if ( !v23 )
      {
        if ( (*(_BYTE *)&Value & 0x10) != 0 )
        {
          BaseAddress = a3[v108].hSection;
        }
        else if ( (*(_DWORD *)&Value & 0x400000) != 0 )
        {
          if ( a2->NumAllocations != 1 || (*(_DWORD *)&Value & 0x2000000) == 0 || !a6 || !*((_QWORD *)a6 + 4) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4284;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"(pKMTCreateAllocation->NumAllocations == 1) && (pDriverAllocations[i].Flags.DoDPrimary) && (pCrea"
                        "teStandardAllocation != NULL) && (pCreateStandardAllocation->pfnAllocateSysMem != NULL)",
              4284LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v114 = (PVOID)(*((__int64 (__fastcall **)(_QWORD, _QWORD))a6 + 4))(*((_QWORD *)a6 + 5), v112);
          if ( !v114 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 4290;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot create section object for DoD primary backing store.",
              4290LL,
              0LL,
              0LL,
              0LL,
              0LL);
LABEL_71:
            LODWORD(v11) = -1073741823;
            goto LABEL_54;
          }
          v10 = a4;
          v109 = 1;
        }
LABEL_19:
        v25 = v108;
        goto LABEL_20;
      }
      v89 = DXGPROCESS::GetCurrent(v22);
      v10 = a4;
      v90 = v7;
      if ( (*((_DWORD *)v89 + 102) & 0x100) != 0 )
      {
        v25 = v108;
        v82 = a4[v90].Flags.Value | 0x10;
        BaseAddress = a3[v7].hSection;
        a4[v108].Flags.Value = v82;
LABEL_136:
        *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL) |= 0x20000000u;
        goto LABEL_20;
      }
      Size = a4[v90].Size;
      if ( Size > v112 )
      {
        LODWORD(v11) = -1073741811;
        WdLogSingleEntry2(2LL, Size, -1073741811LL);
        v97 = L"Overflow rounding allocation size 0x%I64x to next page boundary returning 0x%I64x";
        WdLogGlobalForLineNumber = 4258;
        HandleInformationa = -1073741811LL;
        Objecta = (PVOID *)a4[v108].Size;
        goto LABEL_165;
      }
      v92 = v112;
      a4[v24].Size = v112;
      v93 = (void *)(*((__int64 (__fastcall **)(_QWORD, __int64))a6 + 4))(*((_QWORD *)a6 + 5), v92);
      BaseAddress = v93;
      if ( !v93 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4265;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot allocate memory allocation for existing sys mem.",
          4265LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_71;
      }
      v25 = v108;
      v10 = a4;
      a3[v108].hSection = v93;
    }
LABEL_20:
    if ( a6 && (*(_DWORD *)a6 & 0x40) != 0 )
    {
      if ( !*((_QWORD *)a6 + 41) && !*((_QWORD *)a6 + 42) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4312;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Section object or SystemMem is not supplied for a cross adapter allocation.",
          4312LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_71;
      }
      v73 = *(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL);
      *(_DWORD *)(v73 + 12) ^= ((unsigned __int16)*(_DWORD *)(v73 + 12) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)a6 << 7)) & 0x800;
      v74 = *((_QWORD *)a6 + 42);
      if ( v74 )
      {
        BaseAddress = (PVOID)*((_QWORD *)a6 + 42);
        v10[v25].Flags.Value |= 0x10u;
        *(_DWORD *)(v73 + 12) |= 0x200u;
        *(_QWORD *)(v73 + 192) = v74;
      }
      else
      {
        if ( !*((_QWORD *)a6 + 41) )
          goto LABEL_21;
        v10[v25].Flags.Value |= 0x400000u;
        ObfReferenceObject(*((PVOID *)a6 + 41));
        v75 = (void *)*((_QWORD *)a6 + 41);
        *(_DWORD *)(v73 + 12) |= 0x400u;
        v114 = v75;
        *(_QWORD *)(v73 + 192) = *((_QWORD *)a6 + 41);
      }
      *(_DWORD *)(v73 + 204) = *((_DWORD *)a6 + 98);
    }
LABEL_21:
    v26 = v25;
    if ( (a3[v26].Flags.Value & 4) != 0 )
    {
      v27 = a4;
      a4[v25].AllocationPriority = a3[v26].Priority;
    }
    else
    {
      v27 = a4;
      if ( !a4[v25].AllocationPriority )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4356;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"KMD should set a non-zero initial priority for allocations.",
          4356LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v27 = a4;
      }
    }
    v28 = *((_QWORD *)v15 + 5);
    v29 = 0;
    if ( v28 )
    {
      if ( (v27[v25].Flags.Value & 0x100000) != 0 )
      {
        v29 = 1;
        if ( !*(_QWORD *)(*(_QWORD *)(v28 + 56) + 184LL) )
          break;
      }
    }
LABEL_24:
    if ( (*(_DWORD *)&a2->Flags & 0x10020) == 0x10020 )
    {
      if ( (*((_BYTE *)this + 1917) & 1) != 0 )
      {
        v59 = BaseAddress;
      }
      else
      {
        v58 = DXGPROCESS::GetCurrent(65568LL);
        v59 = BaseAddress;
        if ( (*((_DWORD *)v58 + 102) & 0x10) == 0 )
        {
          LODWORD(v11) = ProcessSysMemAttributes(BaseAddress, v112, &a4[v25]);
          if ( (int)v11 < 0 )
            goto LABEL_54;
        }
      }
      v31 = a2;
      v30 = a4;
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
      {
        v60 = v108;
        v61 = *(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL);
        *(_DWORD *)(v61 + 12) |= 0x200u;
        v62 = *(_DWORD *)(v61 + 12);
        *(_QWORD *)(v61 + 192) = v59;
        *(_DWORD *)(v61 + 204) = a4[v60].Alignment;
        *(_DWORD *)(v61 + 12) = v62 ^ ((unsigned __int16)v62 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&a4[v60].Flags.0 << 9)) & 0x800;
      }
    }
    else
    {
      v30 = a4;
      v31 = a2;
    }
    v32 = BaseAddress;
    if ( BaseAddress )
    {
      if ( (*(_DWORD *)&v31->Flags & 0x80u) != 0 )
      {
        v70 = *((_QWORD *)v15 + 6);
        v111 = 1;
        *(_DWORD *)(v70 + 4) |= 0x8000000u;
        v71 = *((_QWORD *)v15 + 5);
        if ( v71 )
        {
          v72 = *(_QWORD *)(v71 + 56);
          if ( v72 )
            *(_DWORD *)(v72 + 12) |= 0x1000u;
        }
      }
    }
    if ( v29 )
      v33 = *(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL) + 184LL;
    else
      v33 = 0LL;
    v7 = v108;
    v34 = v114;
    LODWORD(v11) = (*(__int64 (__fastcall **)(struct VIDMM_DEVICE *, struct _DXGK_ALLOCATIONINFO *, _QWORD, PVOID, PVOID, __int64, __int64 *, _BYTE *))(*(_QWORD *)(*((_QWORD *)this[2] + 95) + 8LL) + 112LL))(
                     this[99],
                     &v30[v108],
                     *((_QWORD *)v15 + 6),
                     v114,
                     v32,
                     v33,
                     &v116,
                     v107);
    if ( !v127 || (v127 = 1, !v107[0]) )
      v127 = 0;
    if ( v109 )
      ObfDereferenceObject(v34);
    if ( (int)v11 < 0 )
      goto LABEL_54;
    v36 = v116;
    if ( !v116 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4460;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidMmMultiGlobalAlloc", 4460LL, 0LL, 0LL, 0LL, 0LL);
      v36 = v116;
    }
    *(_QWORD *)(*((_QWORD *)v15 + 6) + 8LL) = v36;
    if ( a6 )
    {
      switch ( *((_DWORD *)a6 + 4) )
      {
        case 1:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_37;
          v68 = (const EVENT_DESCRIPTOR *)&EventCddStandardAllocationSharedPrimarySurface;
          break;
        case 2:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v95 = (_DWORD *)*((_QWORD *)a6 + 3);
            LODWORD(v104) = v95[3];
            LODWORD(v103) = v95[2];
            LODWORD(v102) = v95[1];
            LODWORD(HandleInformation) = *v95;
            LODWORD(Object) = *(_DWORD *)a6;
            McTemplateK0pqqqqq_EtwWriteTransfer(
              (__int64)v95,
              &EventCddStandardAllocationShadowSurface,
              v35,
              *((_QWORD *)v15 + 6),
              Object,
              HandleInformation,
              v102,
              v103,
              v104);
          }
          goto LABEL_37;
        case 3:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v94 = (_DWORD *)*((_QWORD *)a6 + 3);
            LODWORD(v103) = v94[2];
            LODWORD(v102) = v94[1];
            LODWORD(HandleInformation) = *v94;
            LODWORD(Object) = *(_DWORD *)a6;
            McTemplateK0pqtqq_EtwWriteTransfer(
              (__int64)v94,
              &EventCddStandardAllocationStagingSurface,
              v35,
              *((_QWORD *)v15 + 6),
              Object,
              HandleInformation,
              v102,
              v103);
          }
          goto LABEL_37;
        default:
          if ( *((_DWORD *)a6 + 4) != 4 || (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_37;
          v68 = (const EVENT_DESCRIPTOR *)&EventCddStandardAllocationGdiSurface;
          break;
      }
      v69 = (_DWORD *)*((_QWORD *)a6 + 3);
      LODWORD(v106) = v69[5];
      LODWORD(v105) = v69[4];
      LODWORD(v104) = v69[3];
      LODWORD(v103) = v69[2];
      LODWORD(v102) = v69[1];
      LODWORD(HandleInformation) = *v69;
      LODWORD(Object) = *(_DWORD *)a6;
      McTemplateK0pqqqqqqq_EtwWriteTransfer(
        (__int64)v69,
        v68,
        v35,
        *((_QWORD *)v15 + 6),
        Object,
        HandleInformation,
        v102,
        v103,
        v104,
        v105,
        v106);
    }
LABEL_37:
    v37 = this[2];
    v38 = *((_QWORD *)v15 + 6);
    v115 = 0;
    LOBYTE(HandleInformation) = v111 != 0;
    LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_DEVICE *, _QWORD, _QWORD, PVOID, POBJECT_HANDLE_INFORMATION, struct DXGALLOCATION *, __int64 *, int *, _BYTE *))(*(_QWORD *)(*((_QWORD *)v37 + 95) + 8LL) + 128LL))(
                     *((_QWORD *)v37 + 96),
                     this[99],
                     *(_QWORD *)(v38 + 8),
                     a4[v7].MaximumRenamingListLength,
                     BaseAddress,
                     HandleInformation,
                     v15,
                     &v117,
                     &v115,
                     v107);
    if ( !v127 || (v127 = 1, !v107[0]) )
      v127 = 0;
    v39 = v115 & 0x3F;
    *((_DWORD *)v15 + 18) = *((_DWORD *)v15 + 18) & 0xFFFC0FFF | (v39 << 12);
    *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL) = (v39 << 21) | *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL) & 0xF81FFFFF;
    if ( (int)v11 < 0 )
      goto LABEL_54;
    v40 = v117;
    if ( !v117 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4565;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidMmMultiAlloc", 4565LL, 0LL, 0LL, 0LL, 0LL);
      v40 = v117;
    }
    *((_QWORD *)v15 + 3) = v40;
    v41 = *((_QWORD *)v15 + 6);
    v42 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)a4[v7].Flags.Value;
    v43 = *(_DWORD *)(v41 + 4);
    if ( (*(_WORD *)&v42 & 0x100) != 0 )
    {
      *(_DWORD *)(v41 + 4) = v43 | 8;
    }
    else if ( (*(_DWORD *)&v42 & 0x20200) == 0 && (v43 & 0x20) == 0 && (v43 & 0x4000) == 0 )
    {
      goto LABEL_45;
    }
    if ( (a4[v7].Flags.Value & 0x200) != 0 )
      *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL) |= 0x20u;
    if ( (a4[v7].Flags.Value & 0x20000) != 0 )
      *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL) |= 0x4000u;
    LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 95) + 8LL)
                                                                                             + 208LL))(
                     *((_QWORD *)this[2] + 96),
                     *((_QWORD *)v15 + 3),
                     0LL,
                     0LL,
                     0LL,
                     0LL);
    if ( (int)v11 < 0 )
      goto LABEL_54;
    v76 = *((_QWORD *)v15 + 6);
    *((_DWORD *)v15 + 18) |= 0x800u;
    if ( (*(_DWORD *)(v76 + 4) & 0x4000) != 0 )
    {
      VIDMM_EXPORT::VidMmUnpinAllocation(
        *((VIDMM_EXPORT **)this[2] + 95),
        *((struct VIDMM_GLOBAL **)this[2] + 96),
        *((struct VIDMM_MULTI_ALLOC **)v15 + 3));
      *((_DWORD *)v15 + 18) &= ~0x800u;
    }
LABEL_45:
    if ( (*((_BYTE *)this + 1919) || *((_DWORD *)this + 116) == 2 && *(int *)(*((_QWORD *)this[2] + 2) + 3044LL) >= 2000)
      && a6
      && *((_DWORD *)a6 + 4) == 2 )
    {
      v63 = this[2];
      v64 = this[99];
      v65 = *((_DWORD *)v15 + 18) >> 12;
      v119 = 0LL;
      v121 = 0LL;
      VIDMM_EXPORT::VidMmGetDevicePagingQueue(*((VIDMM_EXPORT **)v63 + 95), v64, v65 & 0x3F, &v119, &v121);
      v66 = this[2];
      v120 = 0LL;
      v122[0] = 0LL;
      Resident = VIDMM_EXPORT::VidMmMakeResident(
                   *((VIDMM_EXPORT **)v66 + 95),
                   *((struct VIDMM_GLOBAL **)v66 + 96),
                   v119,
                   (struct VIDMM_MULTI_ALLOC **)v15 + 3,
                   1u,
                   3u,
                   &v120,
                   v122);
      v11 = Resident;
      if ( Resident >= 0 )
      {
        if ( Resident == 259 )
        {
          VIDMM_EXPORT::VidMmWaitForFences(
            *((VIDMM_EXPORT **)this[2] + 95),
            *((struct VIDMM_GLOBAL **)this[2] + 96),
            &v121,
            &v120);
          LODWORD(v11) = 0;
        }
        goto LABEL_47;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4654;
      v97 = L"Failed to make shadow allocation resident. Status = 0x%I64x";
      HandleInformationa = 0LL;
      Objecta = (PVOID *)v11;
LABEL_165:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v97, (__int64)Objecta, HandleInformationa, 0LL, 0LL, 0LL);
      goto LABEL_54;
    }
LABEL_47:
    v15 = (struct DXGALLOCATION *)*((_QWORD *)v15 + 8);
    ++v7;
    v10 = a4;
    LOBYTE(v12) = v113;
  }
  v52 = 0LL;
  v53 = 0LL;
  if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 && BaseAddress )
  {
    v52 = BaseAddress;
    v53 = a2->pStandardAllocation->ExistingHeapData.Size;
  }
  v54 = *((_QWORD *)this[2] + 95);
  v55 = DXGPROCESS::GetCurrent((__int64)a2);
  v56 = *((_DWORD *)v55 + 102) >> 8;
  LOBYTE(v56) = BYTE1(*((_DWORD *)v55 + 102)) & 1;
  v57 = (*(__int64 (__fastcall **)(__int64, PVOID, SIZE_T, __int64))(*(_QWORD *)(v54 + 8) + 1160LL))(
          *(_QWORD *)(*((_QWORD *)v15 + 5) + 56LL) + 184LL,
          v52,
          v53,
          v56);
  v11 = v57;
  if ( v57 >= 0 )
  {
    v25 = v108;
    v29 = 1;
    goto LABEL_24;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 4391;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to create VIDMM_CROSSADAPTER_ALLOC, returning 0x%I64x",
    v11,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( v109 )
LABEL_167:
    ObfDereferenceObject(v114);
LABEL_54:
  v44 = 0;
  if ( a2->NumAllocations )
  {
    v45 = a5;
    do
    {
      if ( (*((_DWORD *)v45 + 18) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *((VIDMM_EXPORT **)this[2] + 95),
          *((struct VIDMM_GLOBAL **)this[2] + 96),
          *((struct VIDMM_MULTI_ALLOC **)v45 + 3));
        *((_DWORD *)v45 + 18) &= ~0x800u;
      }
      v46 = *((_QWORD *)v45 + 6);
      v47 = *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(v46 + 8);
      if ( v47
        && !a7
        && (!*((_DWORD *)this + 116) && (*(_DWORD *)(v46 + 4) & 1) != 0 || (*(_DWORD *)(v46 + 4) & 2) != 0) )
      {
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *((VIDMM_EXPORT **)this[2] + 95),
          *((struct VIDMM_GLOBAL **)this[2] + 96),
          v47);
        *(_DWORD *)(*((_QWORD *)v45 + 6) + 4LL) |= 0x10u;
      }
      v48 = (struct VIDMM_MULTI_ALLOC *)*((_QWORD *)v45 + 3);
      if ( v48 )
      {
        VIDMM_EXPORT::VidMmCloseAllocation(
          *((VIDMM_EXPORT **)this[2] + 95),
          *((struct VIDMM_GLOBAL **)this[2] + 96),
          v48,
          0LL,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        *((_QWORD *)v45 + 3) = 0LL;
      }
      else
      {
        DXGDEVICE::TraceCloseParavirtualizedAllocation((DXGDEVICE *)this, v45);
      }
      if ( !a7 )
        DXGDEVICE::DestroyAdapterAllocation((DXGDEVICE *)this, *((struct DXGADAPTERALLOCATION **)v45 + 6));
      v45 = (struct DXGALLOCATION *)*((_QWORD *)v45 + 8);
      ++v44;
    }
    while ( v44 < a2->NumAllocations );
  }
  return (unsigned int)v11;
}
