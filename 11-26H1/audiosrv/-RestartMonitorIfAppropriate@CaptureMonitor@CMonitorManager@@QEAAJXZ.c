/*
 * XREFs of ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18005F134
 * Callers:
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x18005FFD8 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x18011F098 (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 *     ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N@Z @ 0x18011FF70 (-SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x18005F424 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800AEB68 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 *     WPP_SF_SS @ 0x1800D12B0 (WPP_SF_SS.c)
 *     McTemplateU0qzz_EtwEventWriteTransfer @ 0x1801209A0 (McTemplateU0qzz_EtwEventWriteTransfer.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801221D8 (-Start@CMonitor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(CMonitorManager::CaptureMonitor *this)
{
  int v2; // edi
  _QWORD *v3; // rax
  _QWORD *v4; // r9
  char *v5; // rsi
  char *v6; // rdx
  char *v7; // r14
  char *v8; // rdx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // r8d
  bool v14; // [rsp+70h] [rbp+40h] BYREF
  struct IMMDevice *v15; // [rsp+78h] [rbp+48h] BYREF
  struct IMMDevice *v16; // [rsp+80h] [rbp+50h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 26) + 72LL) != 3 && !*((_BYTE *)this + 12) )
  {
    v16 = 0LL;
    v15 = 0LL;
    SetThreadpoolWait(*((PTP_WAIT *)this + 2), *((HANDLE *)this + 4), 0LL);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v3 = (_QWORD *)((char *)this + 168);
      if ( *((_QWORD *)this + 24) > 7uLL )
        v3 = (_QWORD *)*v3;
      v4 = (_QWORD *)((char *)this + 136);
      if ( *((_QWORD *)this + 20) > 7uLL )
        v4 = (_QWORD *)*v4;
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        59,
        (unsigned int)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
        (_DWORD)v4,
        (__int64)v3);
    }
    v5 = (char *)this + 136;
    v6 = (char *)this + 136;
    if ( *((_QWORD *)this + 20) > 7uLL )
      v6 = *(char **)v5;
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *, struct IMMDevice **))(**(_QWORD **)(*((_QWORD *)this + 25) + 64LL)
                                                                        + 40LL))(
           *(_QWORD *)(*((_QWORD *)this + 25) + 64LL),
           v6,
           &v16);
    if ( v2 < 0 )
      goto LABEL_17;
    v7 = (char *)this + 168;
    v8 = (char *)this + 168;
    if ( *((_QWORD *)this + 24) > 7uLL )
      v8 = *(char **)v7;
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *, struct IMMDevice **))(**(_QWORD **)(*((_QWORD *)this + 25) + 64LL)
                                                                        + 40LL))(
           *(_QWORD *)(*((_QWORD *)this + 25) + 64LL),
           v8,
           &v15);
    if ( v2 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 60LL, &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, this);
      }
      v14 = 0;
      v9 = CMonitor::Initialize(*((CMonitor **)this + 26), v16, v15, &v14);
      v2 = v9;
      if ( v9 < 0 )
      {
        v11 = (int)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            62LL,
            &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
            this,
            v9);
        }
        v12 = *((_DWORD *)this + 6) + 1;
        *((_DWORD *)this + 6) = v12;
        if ( v12 > *(_DWORD *)(*((_QWORD *)this + 25) + 328LL) )
        {
          *((_BYTE *)this + 12) = 1;
          if ( (Microsoft_Windows_AudioEnableBits & 8) != 0 )
          {
            if ( *((_QWORD *)this + 24) > 7uLL )
              v7 = *(char **)v7;
            if ( *((_QWORD *)this + 20) > 7uLL )
              v5 = *(char **)v5;
            McTemplateU0qzz_EtwEventWriteTransfer(v11, v10, v12, (_DWORD)v5, (__int64)v7);
          }
        }
        CMonitor::Terminate(*((CMonitor **)this + 26), 1, 0LL);
        v2 = 0;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 61LL, &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, this);
        }
        *(_QWORD *)(*((_QWORD *)this + 25) + 304LL) = 0LL;
        *((_DWORD *)this + 6) = 0;
        CMonitor::Start(*((CMonitor **)this + 26));
      }
      if ( v15 )
        ((void (__fastcall *)(struct IMMDevice *))v15->lpVtbl->Release)(v15);
      if ( v16 )
        ((void (__fastcall *)(struct IMMDevice *))v16->lpVtbl->Release)(v16);
    }
    else
    {
LABEL_17:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          63LL,
          &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids,
          (unsigned int)v2);
      }
    }
  }
  return (unsigned int)v2;
}
