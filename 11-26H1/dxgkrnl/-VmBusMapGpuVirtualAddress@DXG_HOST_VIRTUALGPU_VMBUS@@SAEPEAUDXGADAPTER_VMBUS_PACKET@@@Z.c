/*
 * XREFs of ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1404416F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x140045E34 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140064648 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTU.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x14037FEC0 (DxgkMapGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMapGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // edx
  _BOOL8 v7; // rcx
  unsigned __int64 v8; // rdx
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v10; // r13
  __int64 v11; // r9
  __int64 v12; // r12
  unsigned int v13; // ebx
  unsigned int v14; // eax
  int v15; // r8d
  __int64 v16; // rcx
  struct _EX_RUNDOWN_REF *v17; // rdx
  struct DXGDEVICE *v18; // rbx
  int v19; // ecx
  __int64 v20; // r8
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v21; // [rsp+20h] [rbp-E0h]
  __int64 v22; // [rsp+28h] [rbp-D8h]
  __int64 v23; // [rsp+28h] [rbp-D8h]
  __int64 v24; // [rsp+28h] [rbp-D8h]
  __int64 v25; // [rsp+30h] [rbp-D0h]
  struct DXGDEVICE *v26; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v27[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v28[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[24]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v30; // [rsp+88h] [rbp-78h] BYREF
  __int64 v31; // [rsp+98h] [rbp-68h]
  int v32; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+A4h] [rbp-5Ch]
  _BYTE v34[160]; // [rsp+B0h] [rbp-50h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v29,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5512;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5512LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS>((__int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v31 = 0LL;
    v30 = 0LL;
    v6 = *(_DWORD *)(v4 + 128);
    v7 = v6 == 0;
    if ( v7 == (*(_DWORD *)(v4 + 24) == 0) )
    {
      LODWORD(v31) = -1073741811;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 5521;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Both device and paging queue are set or not set",
        5521LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_34:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v30, 0x18u);
      v2 = 1;
      goto LABEL_35;
    }
    if ( !v6 )
    {
      v19 = DxgkMapGpuVirtualAddress((struct D3DDDI_MAPGPUVIRTUALADDRESS *)(v4 + 24));
      LODWORD(v31) = v19;
      goto LABEL_31;
    }
    v8 = *(_QWORD *)(v4 + 80);
    if ( v8 >= 0x20 || (v8 & 0xC) != 0 )
    {
      WdLogSingleEntry2(2LL, v8, *((_QWORD *)a1 + 11));
      v24 = *((_QWORD *)a1 + 11);
      v21 = *(struct D3DDDI_MAPGPUVIRTUALADDRESS **)(v5 + 80);
      WdLogGlobalForLineNumber = 5536;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid protection flags specified 0x%I64x DXGPROCESS=0x%I64x",
        (__int64)v21,
        v24,
        0LL,
        0LL,
        0LL);
      LODWORD(v31) = -1073741811;
      goto LABEL_34;
    }
    v26 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v27, *(_DWORD *)(v5 + 128), Current, &v26);
    v10 = v26;
    if ( *(_DWORD *)(v5 + 128) && !v26 )
    {
      LODWORD(v31) = -1073741811;
      WdLogSingleEntry2(2LL, -1073741811LL, *(unsigned int *)(v5 + 128));
      v22 = *(unsigned int *)(v5 + 128);
      WdLogGlobalForLineNumber = 5546;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid device handle: 0x%I64x",
        (int)v31,
        v22,
        0LL,
        0LL,
        0LL);
LABEL_12:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v27);
      goto LABEL_34;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v28,
      v26);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, (__int64)v10, 0, v11, 0);
    LODWORD(v31) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v34, 0LL);
    if ( (int)v31 < 0 )
    {
LABEL_14:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v28);
      goto LABEL_12;
    }
    v12 = *((_QWORD *)a1 + 11);
    v13 = *(_DWORD *)(v5 + 56);
    v26 = 0LL;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 248));
    v14 = (v13 >> 6) & 0xFFFFFF;
    if ( v14 < *(_DWORD *)(v12 + 296) )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(v12 + 280) + 16LL * v14 + 8);
      if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v12 + 280) + 16LL * v14 + 8) & 0x60)
        && (v15 & 0x2000) == 0
        && (v15 & 0x1F) != 0 )
      {
        v16 = *(_QWORD *)(v12 + 280);
        if ( (*(_BYTE *)(v16 + 16LL * v14 + 8) & 0x1F) == 5 )
        {
          v17 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * v14);
          goto LABEL_22;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v17 = 0LL;
LABEL_22:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v32, v17);
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 264));
    ExReleasePushLockSharedEx(v12 + 248, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v26, (struct _EX_RUNDOWN_REF **)&v32);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v32);
    v18 = v26;
    if ( !v26 )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, *(unsigned int *)(v5 + 56), *((_QWORD *)a1 + 11));
      v25 = *((_QWORD *)a1 + 11);
      v23 = *(unsigned int *)(v5 + 56);
      WdLogGlobalForLineNumber = 5561;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Invalid hAllocation=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        v23,
        v25,
        0LL,
        0LL);
LABEL_24:
      LODWORD(v31) = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v26);
      goto LABEL_14;
    }
    if ( *((struct DXGDEVICE **)v26 + 1) != v10 )
    {
      v32 = 58994391;
      v33 = 1LL;
      RtlLogUnexpectedCodepath(&v32);
      WdLogSingleEntry3(2LL, v10, v18, -1073741811LL);
      WdLogGlobalForLineNumber = 5575;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        (__int64)v10,
        (__int64)v18,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_24;
    }
    LODWORD(v31) = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                     *(VIDMM_EXPORT **)(*((_QWORD *)v10 + 2) + 760LL),
                     *(struct VIDMM_GLOBAL **)(*((_QWORD *)v10 + 2) + 768LL),
                     0LL,
                     *((struct VIDMM_MULTI_ALLOC **)v26 + 3),
                     (struct D3DDDI_MAPGPUVIRTUALADDRESS *)(v5 + 24),
                     0,
                     0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v26);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v28);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v27);
    v19 = v31;
LABEL_31:
    *((_QWORD *)&v30 + 1) = *(_QWORD *)(v5 + 120);
    v20 = *(_QWORD *)(v5 + 112);
    *(_QWORD *)&v30 = v20;
    if ( v19 < 0 || !v20 )
    {
      WdLogSingleEntry2(2LL, v19, v20);
      WdLogGlobalForLineNumber = 5614;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkMapGpuVirtualAddress failed: 0x%I64x 0x%I64x",
        (int)v31,
        v30,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_34;
  }
LABEL_35:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  return v2;
}
