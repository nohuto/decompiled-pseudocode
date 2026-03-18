/*
 * XREFs of VidSchCreateSyncObject @ 0x1400CA670
 * Callers:
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009D390 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1400CA0E0 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x14003A7B4 (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpqq_EtwWriteTransfer @ 0x14003A86C (McTemplateK0ppqqpqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpt_EtwWriteTransfer @ 0x14003A928 (McTemplateK0ppqqpt_EtwWriteTransfer.c)
 *     VidSchiAddSyncObjectToAdapterList @ 0x140044FA4 (VidSchiAddSyncObjectToAdapterList.c)
 *     VidSchiAddSyncObjectToCrossAdapterInfo @ 0x140045FE8 (VidSchiAddSyncObjectToCrossAdapterInfo.c)
 *     McTemplateK0pptqx_EtwWriteTransfer @ 0x1400491F0 (McTemplateK0pptqx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqppqi_EtwWriteTransfer @ 0x14004AEA0 (McTemplateK0ppqqppqi_EtwWriteTransfer.c)
 *     DxgkAcquireGuestCpuEvent @ 0x14004CAE0 (DxgkAcquireGuestCpuEvent.c)
 *     VidMmAllocateFenceStorageSlot @ 0x1400CAEF0 (VidMmAllocateFenceStorageSlot.c)
 */

__int64 __fastcall VidSchCreateSyncObject(
        __int64 a1,
        __int64 a2,
        int *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 *a8,
        _OWORD *a9,
        __int64 a10,
        _OWORD *a11,
        struct VIDMM_DEVICE *a12)
{
  __int64 v12; // r14
  int *v17; // rcx
  int v18; // r15d
  __int64 Pool2; // rax
  __int64 v20; // rdi
  bool v21; // zf
  struct DXGPROCESS *Current; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // edx
  unsigned int v26; // ecx
  bool v27; // al
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // r9
  __int64 result; // rax
  unsigned int v34; // eax
  char v35; // cl
  __int64 v36; // r9
  int FenceStorageSlot; // eax
  unsigned int v38; // ebx
  const EVENT_DESCRIPTOR *v39; // rdx
  __int64 v40; // rax
  void *v41; // rcx
  NTSTATUS v42; // eax
  __int64 v43; // rcx
  _OWORD *v44; // rax
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  _OWORD *v48; // rax
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-60h]
  char v56[8]; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF

  v12 = a10;
  if ( a3 )
  {
    if ( !a10 )
      goto LABEL_3;
    v38 = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 10662;
LABEL_61:
    DxgkLogInternalTriageEvent(v43, 0x40000LL);
    return v38;
  }
  if ( !a10 )
  {
    v38 = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 10669;
    goto LABEL_61;
  }
LABEL_3:
  v17 = (int *)(a10 + 16);
  *a8 = 0LL;
  if ( !v12 )
    v17 = a3 + 1;
  v18 = *v17;
  LODWORD(Object) = *v17 & 4;
  Pool2 = ExAllocatePool2(64LL, (_DWORD)Object != 0 ? 360LL : 280LL, 945908054LL);
  v20 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 945908054;
    *(_DWORD *)(Pool2 + 36) = 1;
    *(_QWORD *)(Pool2 + 8) = a1;
    *(_QWORD *)(Pool2 + 16) = a2;
    *(_DWORD *)(Pool2 + 40) = 0;
    *(_BYTE *)(Pool2 + 27) = v18 < 0;
    v21 = (_DWORD)Object == 0;
    *(_BYTE *)(Pool2 + 24) = v18 & 1;
    *(_DWORD *)(Pool2 + 52) = a4;
    *(_BYTE *)(Pool2 + 28) = !v21;
    Current = DXGPROCESS::GetCurrent();
    if ( Current )
    {
      v23 = *((_DWORD *)Current + 102) >> 8;
      if ( (*((_DWORD *)Current + 102) & 0x100) != 0 )
        *(_BYTE *)(v20 + 32) = 1;
      if ( (*((_DWORD *)Current + 102) & 0x10) != 0 )
        *(_WORD *)(v20 + 32) = 257;
    }
    if ( !a3 )
    {
      v21 = *(_DWORD *)(a2 + 420) == 5;
      *(_DWORD *)(v20 + 48) = 6;
      *(_BYTE *)(v20 + 57) = v21;
      *(_BYTE *)(v20 + 30) = *(_BYTE *)(a2 + 428) & 1;
      v44 = a9;
      v45 = a9[1];
      *(_OWORD *)(v20 + 64) = *a9;
      v46 = v44[2];
      *(_OWORD *)(v20 + 80) = v45;
      v47 = v44[3];
      v48 = a11;
      *(_OWORD *)(v20 + 96) = v46;
      *(_OWORD *)(v20 + 112) = v47;
      v49 = v48[1];
      *(_OWORD *)(v20 + 128) = *v48;
      v50 = v48[2];
      *(_OWORD *)(v20 + 144) = v49;
      v51 = v48[3];
      *(_OWORD *)(v20 + 160) = v50;
      *(_OWORD *)(v20 + 176) = v51;
      goto LABEL_19;
    }
    v25 = *a3;
    v23 = (unsigned int)(*a3 - 1);
    if ( *a3 == 1 )
    {
      *(_DWORD *)(v20 + 48) = 0;
      *(_BYTE *)(v20 + 25) = 0;
      if ( a3[2] )
      {
        *(_QWORD *)(v20 + 64) = 0LL;
        *(_QWORD *)(v20 + 72) = 0LL;
      }
      else
      {
        *(_QWORD *)(v20 + 64) = -1LL;
        *(_QWORD *)(v20 + 72) = -1LL;
      }
      goto LABEL_19;
    }
    if ( *a3 != 2 )
    {
      v23 = (unsigned int)(*a3 - 3);
      if ( *a3 == 3 )
      {
        v40 = *((_QWORD *)a3 + 1);
        *(_QWORD *)(v20 + 64) = v40;
        *(_QWORD *)(v20 + 72) = v40;
        *(_QWORD *)(v20 + 80) = v40;
        *(_DWORD *)(v20 + 48) = 2;
        *(_BYTE *)(v20 + 25) = 1;
      }
      else
      {
        if ( *a3 != 4 )
        {
          if ( (unsigned int)(*a3 - 5) > 1 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 10878;
            v38 = -1073741811;
          }
          else
          {
            v26 = a3[1];
            *(_BYTE *)(v20 + 25) = 1;
            v24 = (unsigned __int8)v26 & 0x80;
            *(_DWORD *)(v20 + 48) = 5 - (v25 != 6);
            v27 = (v26 & 0x80) != 0;
            v23 = v26 >> 10;
            LOBYTE(v23) = v23 & 1;
            *(_BYTE *)(v20 + 31) = v27;
            v28 = a9;
            *(_BYTE *)(v20 + 26) = v23;
            if ( v28 )
            {
              v29 = v28[1];
              *(_OWORD *)(v20 + 64) = *v28;
              v30 = v28[2];
              *(_OWORD *)(v20 + 80) = v29;
              v31 = v28[3];
              v21 = *(_DWORD *)(a2 + 420) == 7;
              *(_BYTE *)(v20 + 30) = *(_BYTE *)(a2 + 428) & 1;
              *(_OWORD *)(v20 + 96) = v30;
              *(_BYTE *)(v20 + 56) = v21;
              *(_OWORD *)(v20 + 112) = v31;
              goto LABEL_19;
            }
            if ( *(_BYTE *)(a1 + 56) || (v35 = 0, (_DWORD)v24) )
              v35 = 1;
            *(_BYTE *)(v20 + 30) = v35;
            v36 = 0LL;
            *(_DWORD *)(v20 + 116) = 16;
            if ( v25 != 6 )
              v36 = *((_QWORD *)a3 + 1);
            FenceStorageSlot = VidMmAllocateFenceStorageSlot(
                                 (struct VIDMM_MONITORED_FENCE_STORAGE *)(v20 + 64),
                                 a2 == 0,
                                 v36,
                                 v35,
                                 a12);
            if ( FenceStorageSlot >= 0 )
            {
              *(_QWORD *)(v20 + 88) = a6;
              goto LABEL_19;
            }
            v38 = FenceStorageSlot;
          }
          goto LABEL_41;
        }
        if ( (a3[1] & 1) != 0 )
        {
          v38 = -1073741811;
          WdLogSingleEntry1(1LL, -1073741811LL);
          WdLogGlobalForLineNumber = 10789;
          DxgkLogInternalTriageEvent(v54, 0x40000LL);
          goto LABEL_41;
        }
        v41 = (void *)*((_QWORD *)a3 + 1);
        *(_DWORD *)(v20 + 48) = 3;
        *(_BYTE *)(v20 + 25) = 0;
        if ( *(_BYTE *)(v20 + 32) )
        {
          *(_QWORD *)(v20 + 72) = v41;
          DxgkAcquireGuestCpuEvent();
        }
        else
        {
          Object = 0LL;
          v42 = ObReferenceObjectByHandle(v41, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
          v23 = (__int64)Object;
          *(_QWORD *)(v20 + 64) = Object;
          v38 = v42;
          if ( v42 < 0 )
          {
            WdLogSingleEntry1(3LL, v42);
            WdLogGlobalForLineNumber = 10818;
LABEL_41:
            ExFreePoolWithTag((PVOID)v20, 0);
            return v38;
          }
        }
      }
LABEL_19:
      *(_QWORD *)(v20 + 216) = v20 + 208;
      *(_QWORD *)(v20 + 208) = v20 + 208;
      *(_QWORD *)(v20 + 232) = v20 + 224;
      *(_QWORD *)(v20 + 224) = v20 + 224;
      *(_QWORD *)(v20 + 264) = v20 + 256;
      *(_QWORD *)(v20 + 256) = v20 + 256;
      if ( *(_BYTE *)(v20 + 28) )
      {
        *(_QWORD *)(v20 + 344) = a5;
        *(_QWORD *)(v20 + 352) = VidSchPostCrossAdapterSignal;
        VidSchiAddSyncObjectToAdapterList(a1, v20);
        VidSchiAddSyncObjectToCrossAdapterInfo(v20);
      }
      *a8 = v20;
      if ( v12 )
      {
        if ( (byte_14008A201 & 1) != 0 )
        {
          *(_DWORD *)v56 = *(_DWORD *)(v12 + 16);
          LODWORD(HandleInformation) = 0;
          McTemplateK0pptqx_EtwWriteTransfer(
            v23,
            &EventCreateNativeFence,
            v24,
            *(_QWORD *)(a1 + 16),
            v20,
            HandleInformation,
            *(_QWORD *)v56,
            *(_QWORD *)v12);
        }
        return 0LL;
      }
      if ( !bTracingEnabled )
        return 0LL;
      v32 = *(_QWORD *)(a1 + 16);
      if ( *a3 == 1 )
      {
        if ( (byte_14008A201 & 1) != 0 )
        {
          *(_DWORD *)v56 = a3[1];
          LODWORD(HandleInformation) = 0;
          McTemplateK0ppqqpt_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventCreateSynchronizationMutex,
            0LL,
            v32,
            v20,
            HandleInformation,
            *(_QWORD *)v56,
            (unsigned int)a3[18],
            a3[2]);
        }
        return 0LL;
      }
      if ( *a3 == 2 )
      {
        if ( (byte_14008A201 & 1) != 0 )
        {
          *(_DWORD *)v56 = a3[1];
          LODWORD(HandleInformation) = 0;
          McTemplateK0ppqqpqq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventCreateSemaphore,
            0LL,
            v32,
            v20,
            HandleInformation,
            *(_QWORD *)v56,
            (unsigned int)a3[18],
            a3[2],
            a3[3]);
        }
        return 0LL;
      }
      if ( *a3 == 3 )
      {
        if ( (byte_14008A201 & 1) == 0 )
          return 0LL;
        v39 = (const EVENT_DESCRIPTOR *)&EventCreateFence;
      }
      else
      {
        if ( *a3 == 4 )
        {
          if ( (byte_14008A201 & 1) != 0 )
          {
            *(_DWORD *)v56 = a3[1];
            LODWORD(HandleInformation) = 0;
            McTemplateK0ppqqpx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              &EventCreateCPUNotification,
              0LL,
              v32,
              v20,
              HandleInformation,
              *(_QWORD *)v56,
              (unsigned int)a3[18],
              *((_QWORD *)a3 + 1));
          }
          return 0LL;
        }
        if ( *a3 != 5 )
        {
          if ( *a3 == 6 )
          {
            if ( (byte_14008A201 & 1) != 0 )
            {
              *(_DWORD *)v56 = a3[1];
              LODWORD(HandleInformation) = 0;
              McTemplateK0ppqqppqi_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                &EventCreatePeriodicMonitoredFence,
                0LL,
                v32,
                v20,
                HandleInformation,
                *(_QWORD *)v56,
                (unsigned int)a3[18],
                (unsigned int)a3[2],
                a3[3],
                *((_QWORD *)a3 + 2));
            }
          }
          else
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1056;
            DxgkLogInternalTriageEvent(v53, 262146LL);
          }
          return 0LL;
        }
        if ( (byte_14008A201 & 1) == 0 )
          return 0LL;
        v39 = (const EVENT_DESCRIPTOR *)&EventCreateMonitoredFence;
      }
      *(_DWORD *)v56 = a3[1];
      LODWORD(HandleInformation) = 0;
      McTemplateK0ppqqpx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v39,
        0LL,
        v32,
        v20,
        HandleInformation,
        *(_QWORD *)v56,
        (unsigned int)a3[18],
        *((_QWORD *)a3 + 1));
      return 0LL;
    }
    v23 = (unsigned int)a3[2];
    v34 = a3[3];
    if ( v34 <= (unsigned int)v23 )
    {
      *(_DWORD *)(v20 + 48) = 1;
      *(_BYTE *)(v20 + 25) = 0;
      *(_DWORD *)(v20 + 64) = v34;
      *(_DWORD *)(v20 + 72) = v34;
      *(_DWORD *)(v20 + 68) = v23;
      goto LABEL_19;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10767;
    DxgkLogInternalTriageEvent(v52, 0x40000LL);
    ExFreePoolWithTag((PVOID)v20, 0);
    return -1073741811LL;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 10692;
  }
  return result;
}
