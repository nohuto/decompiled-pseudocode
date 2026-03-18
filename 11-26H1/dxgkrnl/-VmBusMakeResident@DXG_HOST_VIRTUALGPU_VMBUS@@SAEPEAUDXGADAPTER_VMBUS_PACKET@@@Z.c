/*
 * XREFs of ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140441030
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x140045DFC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x140046468 (-VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MUL.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004ED14 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x14005C4E4 (-VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAP.c)
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x140060570 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x14028C280 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMakeResident(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned int v6; // edx
  struct _KTHREAD **v7; // r8
  DXGDEVICE *v8; // r14
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // r13
  __int64 v13; // r12
  unsigned int v14; // eax
  int v15; // r8d
  __int64 v16; // rcx
  struct _EX_RUNDOWN_REF *v17; // rdx
  int Resident; // eax
  __int64 v19; // [rsp+28h] [rbp-E0h]
  __int64 v20; // [rsp+28h] [rbp-E0h]
  __int64 v21; // [rsp+28h] [rbp-E0h]
  DXGDEVICE *v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  struct VIDMM_PAGING_QUEUE *v24; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v26; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v27[16]; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp-78h] BYREF
  D3DDDI_MAKERESIDENT Src; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v30[24]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v31; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-18h]
  __int64 v33; // [rsp+F8h] [rbp-10h] BYREF
  int v34; // [rsp+100h] [rbp-8h]
  _BYTE v35[160]; // [rsp+108h] [rbp+0h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v30,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5024;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5024LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  if ( v4 )
  {
    v31 = 0LL;
    v32 = 0LL;
    v5 = *(unsigned int *)(v4 + 36);
    if ( (_DWORD)v5 && ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) / v5 >= 4 )
    {
      v6 = *(_DWORD *)(v4 + 24);
      if ( v6 )
      {
        if ( (_DWORD)v5 != 1 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 5050;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"NumAllocation mist be 1 when hDevice is not 0",
            5050LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v32) = -1073741811;
          goto LABEL_37;
        }
        v7 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
        v22 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v23, v6, v7, &v22);
        v8 = v22;
        if ( !v22 )
        {
          WdLogSingleEntry1(2LL);
          v19 = *(unsigned int *)(v4 + 24);
          WdLogGlobalForLineNumber = 5058;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid device handle: 0x%I64x",
            v19,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v32) = -1073741811;
LABEL_11:
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v23);
          goto LABEL_36;
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27, v22);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, (__int64)v8, 0, v9, 0);
        LODWORD(v32) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v35, 0LL);
        if ( (int)v32 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 5067;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device was removed: 0x%I64x",
            (int)v32,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_14:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
          goto LABEL_11;
        }
        if ( !DXGDEVICE::UmdManagesResidency(v8) )
          goto LABEL_14;
        v10 = *((_QWORD *)a1 + 11);
        v11 = *(_DWORD *)(v4 + 40);
        v24 = 0LL;
        v26 = 0LL;
        v12 = *((_QWORD *)v8 + 2);
        v13 = v10 + 248;
        v33 = v10;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v10 + 248));
        v14 = (v11 >> 6) & 0xFFFFFF;
        if ( v14 < *(_DWORD *)(v33 + 296) )
        {
          v15 = *(_DWORD *)(*(_QWORD *)(v33 + 280) + 16LL * v14 + 8);
          if ( ((v11 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v33 + 280) + 16LL * v14 + 8) & 0x60)
            && (v15 & 0x2000) == 0
            && (v15 & 0x1F) != 0 )
          {
            v16 = *(_QWORD *)(v33 + 280);
            if ( (*(_BYTE *)(v16 + 16LL * v14 + 8) & 0x1F) == 5 )
            {
              v17 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * v14);
LABEL_23:
              DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v22, v17);
              _InterlockedDecrement((volatile signed __int32 *)(v13 + 16));
              ExReleasePushLockSharedEx(v13, 0LL);
              KeLeaveCriticalRegion();
              if ( v22 )
              {
                if ( *((DXGDEVICE **)v22 + 1) == v8 )
                {
                  VIDMM_EXPORT::VidMmGetDevicePagingQueue(
                    *(VIDMM_EXPORT **)(v12 + 760),
                    *((struct VIDMM_DEVICE **)v8 + 99),
                    0,
                    &v24,
                    &v26);
                  v25 = 0LL;
                  v28 = 0LL;
                  Resident = VIDMM_EXPORT::VidMmMakeResident(
                               *(VIDMM_EXPORT **)(v12 + 760),
                               *(struct VIDMM_GLOBAL **)(v12 + 768),
                               v24,
                               (struct VIDMM_MULTI_ALLOC **)v22 + 3,
                               1u,
                               3u,
                               &v25,
                               &v28);
                  LODWORD(v32) = Resident;
                  if ( Resident >= 0 )
                  {
                    if ( Resident == 259 )
                    {
                      VIDMM_EXPORT::VidMmWaitForFences(
                        *(VIDMM_EXPORT **)(v12 + 760),
                        *(struct VIDMM_GLOBAL **)(v12 + 768),
                        &v26,
                        &v25);
                      LODWORD(v32) = 0;
                    }
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL);
                    WdLogGlobalForLineNumber = 5132;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to make staging allocation resident. Returning 0x%I64x",
                      (int)v32,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  goto LABEL_26;
                }
                v33 = 58994391LL;
                v34 = 0;
                RtlLogUnexpectedCodepath(&v33);
                WdLogSingleEntry3(2LL, v8, v22, -1073741811LL);
                WdLogGlobalForLineNumber = 5092;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
                  (__int64)v8,
                  (__int64)v22,
                  -1073741811LL,
                  0LL,
                  0LL);
              }
              else
              {
                WdLogSingleEntry1(2LL);
                v20 = *(unsigned int *)(v4 + 40);
                WdLogGlobalForLineNumber = 5078;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Invalid allocation handle: 0x%I64x",
                  v20,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              LODWORD(v32) = -1073741811;
LABEL_26:
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v22);
              goto LABEL_14;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        v17 = 0LL;
        goto LABEL_23;
      }
      Src.Flags.Value = *(_DWORD *)(v4 + 32);
      Src.NumAllocations = v5;
      Src.AllocationList = (const D3DKMT_HANDLE *)(v4 + 40);
      Src.hPagingQueue = *(_DWORD *)(v4 + 28);
      Src.PriorityList = 0LL;
      memset(&Src.Flags + 1, 0, 20);
      LODWORD(v32) = DxgkMakeResidentInternal(&Src, 0, 0LL);
      v31 = *(_OWORD *)&Src.PagingFenceValue;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      v21 = *((unsigned int *)a1 + 36);
      WdLogGlobalForLineNumber = 5034;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid packet size 0x%I64x", v21, 0LL, 0LL, 0LL, 0LL);
      LODWORD(v32) = -1073741811;
    }
LABEL_36:
    if ( (int)v32 >= 0 )
    {
LABEL_38:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v31, 0x18u);
      v2 = 1;
      goto LABEL_39;
    }
LABEL_37:
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 5164;
    goto LABEL_38;
  }
LABEL_39:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
  return v2;
}
