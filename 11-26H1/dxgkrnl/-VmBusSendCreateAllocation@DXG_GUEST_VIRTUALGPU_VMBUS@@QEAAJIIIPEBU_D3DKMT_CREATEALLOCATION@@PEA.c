/*
 * XREFs of ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x14022BB88
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003DA90 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1401FD8B4 (-FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z.c)
 *     ?CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z @ 0x14021FF04 (-CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x14021FF7C (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        int a4,
        const struct _D3DKMT_CREATEALLOCATION *a5,
        struct _D3DDDI_ALLOCATIONINFO2 *a6,
        void **a7,
        void *a8,
        void *Src,
        char a10,
        char a11,
        unsigned __int8 **a12)
{
  const struct _D3DKMT_CREATEALLOCATION *v13; // r13
  UINT PrivateRuntimeDataSize; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // esi
  unsigned int v17; // edx
  __int64 NumAllocations; // rcx
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // r14d
  __int64 v22; // rdi
  __int64 v24; // r14
  void *v25; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // ecx
  size_t v27; // rdx
  unsigned int v28; // ecx
  D3DKMT_CREATEALLOCATIONFLAGS v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // r14d
  UINT v32; // esi
  unsigned int v33; // eax
  UINT *v34; // r14
  UINT v35; // r12d
  UINT v36; // r15d
  UINT *p_Flags; // rsi
  D3DKMT_CREATEALLOCATIONFLAGS v38; // eax
  struct DXGGLOBAL *Global; // rax
  const void *v40; // rdx
  bool v41; // si
  __int64 v42; // rcx
  char v43; // al
  PVOID v44; // rdi
  _DWORD *v45; // r15
  _DWORD *v46; // rdx
  char *v47; // rdi
  struct _D3DDDI_ALLOCATIONINFO2 *v48; // r10
  UINT i; // r12d
  __int64 v50; // rcx
  __int64 v51; // rsi
  SIZE_T v52; // rdi
  struct _MDL *PagesForMdl; // rdi
  struct DXGGLOBAL *v54; // rax
  _DWORD *v55; // r13
  PVOID v56; // r13
  char v57; // r12
  NTSTATUS v58; // eax
  __int64 v59; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v60; // rsi
  __int64 v61; // rdi
  __int64 CurrentProcess; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  struct DXGGLOBAL *v64; // rax
  struct _MDL *Mdl; // rsi
  PVOID v66; // rsi
  __int64 v67; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v68; // rax
  struct DXGKVMB_COMMAND_BASE *v69; // r8
  int v70; // edx
  _DWORD *v71; // r13
  int v72; // eax
  int v73; // eax
  unsigned int v74; // esi
  DXG_VMBUS_CHANNEL_BASE *v75; // rdi
  unsigned int v76; // edx
  __int64 *v77; // r13
  __int64 v78; // r9
  struct DXGKVMB_COMMAND_BASE *v79; // rcx
  _QWORD *v80; // r8
  unsigned int v81; // r12d
  int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rax
  int v85; // eax
  struct DXG_VMBUS_CHANNEL_BASE *v86; // rdi
  __int64 v87; // rdx
  int v88; // eax
  char v89; // [rsp+60h] [rbp-588h]
  bool v90; // [rsp+60h] [rbp-588h]
  int v91; // [rsp+64h] [rbp-584h]
  UINT v92; // [rsp+64h] [rbp-584h]
  unsigned int v93[2]; // [rsp+70h] [rbp-578h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v94; // [rsp+78h] [rbp-570h]
  PVOID VirtualAddress; // [rsp+80h] [rbp-568h] BYREF
  struct DXG_VMBUS_CHANNEL_BASE *v96; // [rsp+88h] [rbp-560h]
  _DWORD *v97; // [rsp+90h] [rbp-558h]
  void *v98; // [rsp+98h] [rbp-550h]
  _DWORD *v99; // [rsp+A0h] [rbp-548h]
  __int64 v100; // [rsp+A8h] [rbp-540h] BYREF
  char *v101; // [rsp+B0h] [rbp-538h] BYREF
  UINT v102; // [rsp+B8h] [rbp-530h]
  const struct _D3DKMT_CREATEALLOCATION *v103; // [rsp+C0h] [rbp-528h]
  PVOID v104; // [rsp+C8h] [rbp-520h]
  void *v105; // [rsp+D0h] [rbp-518h]
  ULONG Length[2]; // [rsp+D8h] [rbp-510h]
  void **v107; // [rsp+E0h] [rbp-508h]
  char *v108; // [rsp+E8h] [rbp-500h]
  PVOID Object; // [rsp+F0h] [rbp-4F8h] BYREF
  unsigned __int8 **v110; // [rsp+F8h] [rbp-4F0h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v111; // [rsp+100h] [rbp-4E8h]
  struct DXGKVMB_COMMAND_BASE *v112[2]; // [rsp+110h] [rbp-4D8h] BYREF
  unsigned int v113; // [rsp+120h] [rbp-4C8h]
  struct DXGKVMB_COMMAND_BASE *v114[2]; // [rsp+230h] [rbp-3B8h] BYREF
  unsigned int v115; // [rsp+240h] [rbp-3A8h]
  __int128 v116; // [rsp+350h] [rbp-298h] BYREF
  int v117; // [rsp+360h] [rbp-288h]
  __int128 v118; // [rsp+470h] [rbp-178h] BYREF
  int v119; // [rsp+480h] [rbp-168h]
  char v120[16]; // [rsp+590h] [rbp-58h] BYREF
  __int64 v121; // [rsp+5A0h] [rbp-48h]

  v96 = this;
  v111 = this;
  v13 = a5;
  v103 = a5;
  v94 = a6;
  v107 = a7;
  v105 = a8;
  v110 = a12;
  *a12 = 0LL;
  if ( !a10 || (v89 = 1, (*(_DWORD *)&a5->Flags & 0x10000) != 0) )
    v89 = 0;
  v93[0] = *((_DWORD *)DXGGLOBAL::GetGlobal() + 438);
  PrivateRuntimeDataSize = a5->PrivateRuntimeDataSize;
  v15 = PrivateRuntimeDataSize + a5->PrivateDriverDataSize;
  if ( v15 < PrivateRuntimeDataSize )
    return 2147483653LL;
  v16 = 0;
  v17 = 0;
  NumAllocations = a5->NumAllocations;
  while ( v17 < (unsigned int)NumAllocations )
  {
    if ( v16 + a6[v17].PrivateDriverDataSize < v16 )
      return 2147483653LL;
    v16 += a6[v17++].PrivateDriverDataSize;
  }
  v19 = v16 + v15;
  if ( v16 + v15 < v15 )
    return 2147483653LL;
  v20 = v19 + 64;
  if ( v19 + 64 < v19 )
    return 2147483653LL;
  if ( !(_DWORD)NumAllocations || (unsigned int)NumAllocations > 0x71C || v16 > 0x20000 )
  {
    WdLogSingleEntry2(2LL, v16, a5->NumAllocations);
    WdLogGlobalForLineNumber = 10248;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VM bus message size: 0x%I64x or invalid number of allocations: 0x%I64x",
      v16,
      a5->NumAllocations,
      0LL,
      0LL,
      0LL);
    return 2147483653LL;
  }
  v21 = 12 * NumAllocations;
  if ( (unsigned __int64)(12 * NumAllocations) > 0xFFFFFFFF )
    return 2147483653LL;
  LODWORD(VirtualAddress) = v21 + v20;
  if ( v21 + v20 < v20 )
    return 2147483653LL;
  v91 = 0;
  v116 = 0LL;
  v117 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v116, v96, v21 + v20, 0LL, 0LL, 0LL);
  v22 = v116;
  if ( !(_QWORD)v116 )
  {
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v116);
    return 3221225495LL;
  }
  *(_QWORD *)v116 = 0LL;
  *(_DWORD *)(v22 + 8) = 0;
  *(_BYTE *)(v22 + 12) = 0;
  *(_DWORD *)(v22 + 12) &= 0x1FFu;
  *(_QWORD *)(v22 + 16) = 4LL;
  v104 = (PVOID)((v16 + 72 * a5->NumAllocations + 23) & 0xFFFFFFF8);
  v98 = (void *)operator new[]((unsigned int)v104, 0x4B677844u, 64LL);
  if ( !v98 )
  {
    LODWORD(v24) = -1073741801;
    v25 = 0LL;
    goto LABEL_137;
  }
  *(_DWORD *)(v22 + 24) = a3;
  *(_DWORD *)(v22 + 8) = a2;
  Flags = a5->Flags;
  *(D3DKMT_CREATEALLOCATIONFLAGS *)(v22 + 44) = Flags;
  *(_DWORD *)(v22 + 28) = a4;
  *(_QWORD *)(v22 + 48) = a5->hPrivateRuntimeResourceHandle;
  *(_DWORD *)(v22 + 40) = a5->NumAllocations;
  v27 = a5->PrivateRuntimeDataSize;
  *(_DWORD *)(v22 + 32) = v27;
  *(_DWORD *)(v22 + 36) = a5->PrivateDriverDataSize;
  v28 = *(_DWORD *)&Flags & 0xFFFEFFFF;
  *(_DWORD *)(v22 + 44) = v28;
  if ( (*(_DWORD *)&a5->Flags & 0x20020) != 0 )
  {
    v28 &= 0xFFFFE7FF;
    *(_DWORD *)(v22 + 44) = v28;
  }
  else if ( (v28 & 0x1000) != 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10306;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Open cross adapter allocation is not supported",
      10306LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v24) = -1073741811;
LABEL_23:
    v25 = v98;
    goto LABEL_137;
  }
  v29 = a5->Flags;
  if ( (*(_BYTE *)&v29 & 8) != 0 )
  {
    LOBYTE(v91) = 1;
    v30 = v28 & 0xFFFFFFF7;
LABEL_31:
    *(_DWORD *)(v22 + 44) = v30 | 0x20;
    goto LABEL_32;
  }
  if ( (*(_BYTE *)&v29 & 0x20) != 0 )
  {
    LOBYTE(v91) = 2;
  }
  else if ( (*(_DWORD *)&v29 & 0x20000) != 0 )
  {
    LOBYTE(v91) = 2;
    v30 = v28 & 0xFFFDFFFF;
    goto LABEL_31;
  }
LABEL_32:
  v31 = v21 + 64;
  v32 = v31 + a5->PrivateRuntimeDataSize;
  if ( (_DWORD)v27 && Src )
    memmove((void *)(v22 + v31), Src, v27);
  v33 = *(_DWORD *)(v22 + 36);
  if ( v33 && v105 )
    memmove((void *)(v22 + v32), v105, v33);
  v34 = (UINT *)(v22 + 64);
  v35 = v32 + *(_DWORD *)(v22 + 36);
  v36 = 0;
  p_Flags = (UINT *)&v94->Flags;
  while ( v36 < a5->NumAllocations )
  {
    v38 = a5->Flags;
    if ( *((_QWORD *)p_Flags - 3) )
    {
      if ( (*(_DWORD *)&v38 & 0x20000) == 0 )
      {
        *(_DWORD *)(v22 + 44) |= 0x20u;
        LOBYTE(v91) = v91 | 2;
      }
    }
    else if ( (*(_BYTE *)&v38 & 0x20) != 0 )
    {
      LODWORD(v24) = -1073741811;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 10392;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"pSysMem pointer is NULL: 0x%I64x",
        10392LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_23;
    }
    *v34 = *p_Flags;
    if ( (*p_Flags & 1) != 0 && a5->NumAllocations == 1 && v93[0] >= 0x1E )
    {
      v101 = 0LL;
      v102 = 0;
      Global = DXGGLOBAL::GetGlobal();
      if ( (int)REMOTEMONITORMAPPING::FindMappingFromGuestVidPnSourceId(
                  (struct _KTHREAD **)Global + 38159,
                  *(p_Flags - 1),
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v101) >= 0
        && v101 == *(char **)(*((_QWORD *)v96 + 9) + 4812LL) )
      {
        v34[2] = v102;
        *(_QWORD *)(v22 + 56) |= 2uLL;
      }
      else
      {
        v34[2] = 0;
      }
    }
    else
    {
      v34[2] = *(p_Flags - 1);
    }
    if ( v35 + *(p_Flags - 2) > (unsigned int)VirtualAddress )
    {
      WdLogSingleEntry5(0LL, 275LL, 2LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 10425;
    }
    v34[1] = *(p_Flags - 2);
    if ( *(p_Flags - 2) )
    {
      if ( v89 )
        v40 = v107[v36];
      else
        v40 = (const void *)*((_QWORD *)p_Flags - 2);
      if ( v40 )
        memmove((void *)(v22 + v35), v40, *(p_Flags - 2));
      v35 += *(p_Flags - 2);
    }
    v34 += 3;
    p_Flags += 24;
    ++v36;
  }
  v41 = (*(_BYTE *)&a5->Flags & 8) == 0 && (*(_DWORD *)(v22 + 44) & 0x20020) == 0;
  v90 = v41;
  if ( v93[0] < 0x1E )
  {
    if ( !a11 || (v43 = 1, !v41) )
      v43 = 0;
    *(_BYTE *)(v22 + 56) = v43;
  }
  else
  {
    if ( !a11 || (v42 = 1LL, !v41) )
      v42 = 0LL;
    *(_QWORD *)(v22 + 56) = v42 | *(_QWORD *)(v22 + 56) & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v44 = v104;
  v93[0] = (unsigned int)v104;
  v45 = v98;
  LODWORD(v24) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v96, (struct DXGVMBUSMESSAGE *)&v116, v98, v93);
  if ( (int)v24 >= 0 )
  {
    LODWORD(v24) = -1073741823;
    if ( v93[0] >= (unsigned int)v44 )
    {
      LODWORD(v24) = 0;
      v97 = v45;
      v46 = v45;
      v99 = v45;
      v45[3] = v91;
      v101 = (char *)v45 + (_QWORD)v44;
      v47 = (char *)&v45[16 * (a5->NumAllocations - 1) + 22 + 2 * (a5->NumAllocations - 1)];
      v48 = v94;
      for ( i = 0; ; ++i )
      {
        v92 = i;
        v105 = v48;
        v108 = v47;
        if ( i >= v13->NumAllocations )
        {
LABEL_135:
          *v110 = (unsigned __int8 *)v98;
          v25 = 0LL;
          goto LABEL_137;
        }
        if ( !v41 && (int)v24 >= 0 )
          break;
LABEL_132:
        if ( &v47[v48->PrivateDriverDataSize] > v101 )
        {
          WdLogSingleEntry5(0LL, 275LL, 2LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 10725;
          v48 = v94;
        }
        memmove(v107[i], v47, v48->PrivateDriverDataSize);
        v47 += v94->PrivateDriverDataSize;
        v48 = ++v94;
        v46 = v99;
      }
      v50 = (unsigned int)v13->Flags;
      v51 = 9LL * i;
      v52 = *(_QWORD *)&v46[18 * i + 8];
      *(_QWORD *)Length = v52;
      if ( (v50 & 8) != 0 )
      {
        PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v52, MmCached, 4u);
        if ( !PagesForMdl )
        {
          LODWORD(v24) = -1073741801;
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 10512;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate memory for protecter allocation",
            10512LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_135;
        }
        v94->hSection = PagesForMdl;
        if ( (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1760) & 1) == 0 )
        {
          v54 = DXGGLOBAL::GetGlobal();
          v55 = v99;
          LODWORD(v24) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
                           *((struct _KTHREAD ***)v54 + 212),
                           PagesForMdl,
                           &v99[18 * i + 7]);
          goto LABEL_102;
        }
      }
      else
      {
        VirtualAddress = 0LL;
        v56 = 0LL;
        v104 = 0LL;
        v57 = 0;
        if ( (v50 & 0x20000) != 0 )
        {
          Object = 0LL;
          v58 = ObReferenceObjectByHandle(v48->hSection, 0x20000u, MmSectionObjectType, 1, &Object, 0LL);
          v24 = v58;
          v56 = Object;
          v104 = Object;
          if ( v58 >= 0 )
          {
            v100 = 0LL;
            *(_QWORD *)v93 = *(_QWORD *)&v99[2 * v51 + 8];
            v61 = *(_QWORD *)v93;
            CurrentProcess = PsGetCurrentProcess(v59);
            VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
            LODWORD(v24) = (*((__int64 (__fastcall **)(PVOID, __int64, PVOID *, _QWORD, __int64, __int64 *, unsigned int *, int, _DWORD, int))VirtualMemoryInterface
                            + 3))(
                             v56,
                             CurrentProcess,
                             &VirtualAddress,
                             0LL,
                             v61,
                             &v100,
                             v93,
                             2,
                             0,
                             4);
            if ( (int)v24 >= 0 )
            {
              v57 = 1;
            }
            else
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 10565;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to map allocation view. Size: 0x%I64x",
                *(__int64 *)v93,
                0LL,
                0LL,
                0LL,
                0LL);
              ObfDereferenceObject(v56);
            }
          }
          else
          {
            v60 = v94;
            WdLogSingleEntry2(2LL, v94->hSection, v58);
            WdLogGlobalForLineNumber = 10546;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
              (__int64)v60->hSection,
              v24,
              0LL,
              0LL,
              0LL);
          }
          LODWORD(v52) = Length[0];
        }
        else
        {
          VirtualAddress = v48->hSection;
        }
        if ( (int)v24 >= 0 )
        {
          if ( (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1760) & 1) != 0 )
          {
            Mdl = IoAllocateMdl(VirtualAddress, v52, 0, 0, 0LL);
            v100 = (__int64)Mdl;
            if ( Mdl )
            {
              v97[18 * v92 + 6] &= ~0x200000u;
              MmProbeAndLockPages(Mdl, 0, (LOCK_OPERATION)(~(unsigned __int8)(*(_DWORD *)&v103->Flags >> 6) & 2));
              v97[18 * v92 + 6] |= 0x200000u;
            }
            else
            {
              LODWORD(v24) = -1073741801;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 10593;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to allocate MDL for sysmem: 0x%I64x",
                -1073741801LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v94->hSection = Mdl;
          }
          else
          {
            v64 = DXGGLOBAL::GetGlobal();
            LODWORD(v24) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromBuffer(
                             *((struct _KTHREAD ***)v64 + 212),
                             VirtualAddress,
                             v52,
                             &v97[18 * v92 + 7]);
          }
        }
        if ( v57 )
        {
          v66 = VirtualAddress;
          v67 = PsGetCurrentProcess(v50);
          v68 = DxgkGetVirtualMemoryInterface();
          (*((void (__fastcall **)(__int64, PVOID))v68 + 4))(v67, v66);
          ObfDereferenceObject(v56);
        }
        i = v92;
      }
      v55 = v99;
LABEL_102:
      if ( (int)v24 >= 0 )
      {
        if ( (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1760) & 1) == 0 )
        {
          *(_OWORD *)v114 = 0LL;
          v115 = 0;
          DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v114, v96, 0x28u, 0LL, 0LL, 0LL);
          v69 = v114[0];
          v70 = v55[18 * i + 7];
          v71 = v97;
          v72 = v97[18 * i + 4];
          *(_QWORD *)v114[0] = 0LL;
          *((_DWORD *)v69 + 2) = a2;
          *((_BYTE *)v69 + 12) = 0;
          *((_DWORD *)v69 + 3) &= 0x1FFu;
          *((_QWORD *)v69 + 2) = 45LL;
          *((_DWORD *)v69 + 6) = a3;
          *((_DWORD *)v69 + 7) = v72;
          *((_DWORD *)v69 + 8) = v70;
          v73 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v96, (unsigned __int8 *)v114[1], v114[0], v115);
          v24 = v73;
          if ( v73 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 10638;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to set existing sysmem Gpadl: 0x%I64x",
              v24,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v114);
          goto LABEL_124;
        }
        v74 = (unsigned int)(v55[18 * i + 8] + 4095) >> 12;
        *(_OWORD *)v112 = 0LL;
        v113 = 0;
        v75 = v96;
        DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v112, v96, 0x1EFF0u, 0LL, 0LL, 0LL);
        if ( !v112[0] )
        {
          LODWORD(v24) = -1073741801;
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 10654;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to allocate DXGKVMB_COMMAND_SETEXISTINGSYSMEMPAGES",
            10654LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v76 = 0;
        v93[0] = 0;
        v77 = (__int64 *)((char *)v94->hSection + 48);
        if ( v74 )
        {
          v78 = 9LL * i;
          v100 = v78;
          do
          {
            if ( (int)v24 < 0 )
              break;
            v79 = v112[0];
            v80 = (_QWORD *)((char *)v112[0] + 40);
            v81 = 15865;
            if ( v74 - v76 < 0x3DF9 )
              v81 = v74 - v76;
            v82 = v97[2 * v78 + 4];
            *(_QWORD *)v112[0] = 0LL;
            *((_DWORD *)v79 + 2) = a2;
            *((_BYTE *)v79 + 12) = 0;
            *((_DWORD *)v79 + 3) &= 0x1FFu;
            *((_QWORD *)v79 + 2) = 66LL;
            *((_DWORD *)v79 + 6) = a3;
            *((_DWORD *)v79 + 7) = v82;
            *((_DWORD *)v79 + 8) = v81;
            *((_DWORD *)v79 + 9) = v76;
            if ( v81 )
            {
              v83 = v81;
              do
              {
                v84 = *v77++;
                *v80++ = v84;
                --v83;
              }
              while ( v83 );
            }
            v85 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                    v75,
                    (unsigned __int8 *)v112[1],
                    v112[0],
                    v113);
            v24 = v85;
            if ( v85 < 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 10675;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"DXGKVMB_COMMAND_SETEXISTINGSYSMEMPAGES failed: 0x%I64x",
                v24,
                0LL,
                0LL,
                0LL,
                0LL);
              v75 = v96;
            }
            v76 = v81 + v93[0];
            v93[0] = v76;
            v78 = v100;
          }
          while ( v76 < v74 );
          i = v92;
        }
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v112);
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 10624;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to allocate existing sysmem Gpadl: 0x%I64x",
          (int)v24,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v71 = v97;
LABEL_124:
      if ( a11 )
      {
        v118 = 0LL;
        v119 = 0;
        v86 = v96;
        DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v118, v96, 0x30u, 0LL, 0LL, 0LL);
        v87 = v118;
        if ( (_QWORD)v118 )
        {
          *(_QWORD *)v118 = 0LL;
          *(_BYTE *)(v87 + 12) = 0;
          *(_DWORD *)(v87 + 12) &= 0x1FFu;
          *(_QWORD *)(v87 + 16) = 11LL;
          *(_DWORD *)(v87 + 8) = a2;
          *(_DWORD *)(v87 + 24) = a3;
          *(_DWORD *)(v87 + 36) = 1;
          *(_DWORD *)(v87 + 40) = v71[18 * i + 4];
          *(_DWORD *)(v87 + 32) = 3;
          LODWORD(VirtualAddress) = 24;
          v88 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(
                  v86,
                  (struct DXGVMBUSMESSAGE *)&v118,
                  v120,
                  (unsigned int *)&VirtualAddress);
          v24 = v88;
          if ( v88 >= 0 )
          {
            LODWORD(v24) = v121;
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 10710;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"VmBusSendMakeResident failed: 0x%I64x",
              v24,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 10694;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate storage for input buffer to MakeResident",
            10694LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v24) = -1073741801;
        }
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v118);
      }
      v48 = v94;
      v47 = v108;
      v41 = v90;
      v13 = v103;
      goto LABEL_132;
    }
  }
  v25 = v98;
LABEL_137:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v25);
  if ( (int)v24 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10743;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendCreateAllocation failed: 0x%I64x",
      (int)v24,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v116);
  return (unsigned int)v24;
}
