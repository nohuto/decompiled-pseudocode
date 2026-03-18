/*
 * XREFs of ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1402BDBF8
 * Callers:
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x14020A050 (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403C442C (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x14005FE4C (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z @ 0x1402BDF10 (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall CreatePeriodicMonitoredFenceNotificationInternal(
        struct DXGADAPTER *a1,
        struct DXGADAPTER *a2,
        struct DXGSYNCOBJECT *a3,
        const struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a4,
        bool a5)
{
  struct DXGADAPTER *v9; // rcx
  __int64 v10; // rdi
  int PairingAdapters; // eax
  ADAPTER_DISPLAY **v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // edx
  ADAPTER_DISPLAY *v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  void *FenceValueCPUVirtualAddress; // rdx
  struct DXGADAPTER *v21; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v22; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v25[144]; // [rsp+70h] [rbp-90h] BYREF

  if ( DXGADAPTER::IsDxgmms2(a1) || (*((_DWORD *)v9 + 111) & 0x100) != 0 )
  {
    v21 = 0LL;
    v22 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v9, 0, &v21, &v24, &v22, &v23, 0);
    v10 = PairingAdapters;
    if ( PairingAdapters >= 0 )
    {
      v12 = (ADAPTER_DISPLAY **)v22;
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v21, v22);
      if ( !a5 )
        LODWORD(v10) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25, 0LL);
      DXGADAPTER::ReleaseReference(v21);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
      if ( (int)v10 >= 0 )
      {
        v13 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v12[395], a4->Info.Semaphore.InitialCount);
        v10 = v13;
        if ( v13 == -1 )
        {
          v16 = v14;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 310;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid VidPnTargetId %d specified when creating a periodic monitored fence",
            v16,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v10) = -1073741811;
        }
        else
        {
          v17 = *((_QWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(v15, v13) + 2);
          if ( HIDWORD(v17) && (_DWORD)v17 )
          {
            v18 = 10000000 * HIDWORD(v17) / (unsigned int)v17;
            FenceValueCPUVirtualAddress = a4->Info.MonitoredFence.FenceValueCPUVirtualAddress;
            if ( (unsigned __int64)FenceValueCPUVirtualAddress <= v18 )
            {
              LODWORD(v10) = DXGSYNCOBJECT::CreatePeriodicFrameNotification(
                               a3,
                               a2,
                               v21,
                               (struct DXGADAPTER *)v12,
                               v18,
                               v10);
              if ( (int)v10 < 0 )
              {
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 342;
              }
            }
            else
            {
              LODWORD(v10) = -1073741811;
              WdLogSingleEntry2(3LL, FenceValueCPUVirtualAddress, -1073741811LL);
              WdLogGlobalForLineNumber = 332;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 320;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid refresh rate for VidPnSourceId: %d when creating a periodic monitored fence",
              v10,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v10) = -1073741676;
          }
        }
      }
      else
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 300;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
    }
    else
    {
      WdLogSingleEntry2(2LL, a1, PairingAdapters);
      WdLogGlobalForLineNumber = 281;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get pairing adapters from adapter 0x%I64x (Status 0x%I64x)!",
        (__int64)a1,
        v10,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 257;
    LODWORD(v10) = -1073741811;
  }
  return (unsigned int)v10;
}
