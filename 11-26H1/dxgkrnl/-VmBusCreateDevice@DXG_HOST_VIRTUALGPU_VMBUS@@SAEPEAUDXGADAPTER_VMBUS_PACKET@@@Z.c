/*
 * XREFs of ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14036FBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE40 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x14006BEF0 (-SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x14036EF20 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403700B8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  char v6; // si
  __int64 v7; // r14
  char v8; // al
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r15
  int v12; // eax
  DXGDEVICE *v13; // rbx
  struct VMBPACKETCOMPLETION__ *v14; // rcx
  __int64 v16; // rbx
  struct DXGADAPTER **v17; // rdx
  int v18; // eax
  struct VMBPACKETCOMPLETION__ *v19; // rcx
  __int64 v20; // rbx
  char v21; // [rsp+28h] [rbp-D8h]
  char v22; // [rsp+30h] [rbp-D0h]
  char v23; // [rsp+38h] [rbp-C8h]
  __int64 v24; // [rsp+40h] [rbp-C0h]
  char v25; // [rsp+50h] [rbp-B0h]
  D3DKMT_HANDLE hDevice; // [rsp+60h] [rbp-A0h] BYREF
  struct DXG_SET_GUEST_DATA *v27; // [rsp+68h] [rbp-98h] BYREF
  DXGDEVICE *v28; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[24]; // [rsp+78h] [rbp-88h] BYREF
  _D3DKMT_CREATEDEVICE Src; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v31[144]; // [rsp+D0h] [rbp-30h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v29,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( v2 )
    {
      v3 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
      v4 = operator new(0x10uLL, 0x4B677844u, 64LL);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v2 + 32);
        *(_QWORD *)v4 = v3;
        v6 = 1;
        *(_QWORD *)(v4 + 8) = v5;
        v7 = *((_QWORD *)a1 + 11);
        v27 = (struct DXG_SET_GUEST_DATA *)v4;
        v8 = *(_BYTE *)(v7 + 408) & 1;
        if ( *(_BYTE *)(v2 + 28) )
        {
          if ( v8 )
          {
            v9 = v7 + 216;
            v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL) + 3168LL);
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v9, 0LL);
            v11 = v10 + 48;
            *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v10 + 48, 0LL);
            *(_QWORD *)(v10 + 56) = KeGetCurrentThread();
            COREADAPTERACCESS::COREADAPTERACCESS(
              (COREADAPTERACCESS *)v31,
              *(struct DXGADAPTER *const *)(*((_QWORD *)a1 + 10) + 16LL),
              0LL);
            if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31, 0LL) >= 0
              && (*(_DWORD *)(*((_QWORD *)a1 + 12) + 408LL) & 0x800) == 0 )
            {
              v25 = 0;
              v24 = *((_QWORD *)a1 + 10);
              v23 = 1;
              v22 = 0;
              v21 = 0;
              v28 = 0LL;
              v12 = ADAPTER_RENDER::CreateDevice(v10, &v28, 0LL, 2LL, 0LL, v21, v22, v23, v24, &v27, v25);
              if ( v12 >= 0 )
              {
                v13 = v28;
                DXGDEVICE::SetVirtualGpu(v28, *((struct DXGK_VIRTUAL_GPU_PARAV **)a1 + 10));
                v14 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
                hDevice = *((_DWORD *)v13 + 117);
                VmBusCompletePacket(v14, &hDevice, 4u);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
                *(_QWORD *)(v11 + 8) = 0LL;
                ExReleasePushLockExclusiveEx(v11, 0LL);
                KeLeaveCriticalRegion();
                *(_QWORD *)(v9 + 8) = 0LL;
                ExReleasePushLockExclusiveEx(v9, 0LL);
                KeLeaveCriticalRegion();
LABEL_10:
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
                return v6;
              }
              v16 = v12;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 1091;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to create CDD device: 0x%I64x",
                v16,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
            *(_QWORD *)(v11 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v11, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(v9 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v9, 0LL);
            KeLeaveCriticalRegion();
          }
          else
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 1052;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"CDD device must be created in CSRSS process context",
              1052LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else if ( v8 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 1097;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"CSRSS process context can only create CDD devices",
            1097LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          memset(&Src, 0, sizeof(Src));
          v17 = (struct DXGADAPTER **)*((_QWORD *)a1 + 10);
          Src.Flags = *(D3DKMT_CREATEDEVICEFLAGS *)(v2 + 24);
          v18 = DxgkCreateDeviceImpl(&Src, v17, &v27, 0);
          if ( v18 >= 0 )
          {
            v19 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
            hDevice = Src.hDevice;
            VmBusCompletePacket(v19, &hDevice, 4u);
            goto LABEL_10;
          }
          v20 = v18;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1113;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to create device: 0x%I64x",
            v20,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v27);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1044;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to allocate DXG_SET_GUEST_DATA",
          1044LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v6 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1032;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1032LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  return 0;
}
