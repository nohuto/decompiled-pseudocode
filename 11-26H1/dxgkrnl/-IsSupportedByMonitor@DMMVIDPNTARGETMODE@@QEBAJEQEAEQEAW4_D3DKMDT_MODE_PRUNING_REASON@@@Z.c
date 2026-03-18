/*
 * XREFs of ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1403937B0
 * Callers:
 *     BmlIsSupportedByMonitorTargetMode @ 0x140393438 (BmlIsSupportedByMonitorTargetMode.c)
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1403934E0 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x140393C2C (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODE::IsSupportedByMonitor(
        DMMVIDPNTARGETMODE *this,
        char a2,
        unsigned __int8 *const a3,
        enum _D3DKMDT_MODE_PRUNING_REASON *const a4)
{
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // r15d
  char v13; // r12
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // di
  int v18; // esi
  __int64 result; // rax
  int IsSupportedModeInternal; // eax
  _BYTE v21[4]; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+34h] [rbp-34h] BYREF
  int v23; // [rsp+38h] [rbp-30h] BYREF
  __int64 v24; // [rsp+40h] [rbp-28h]
  _QWORD v25[4]; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int8 v26; // [rsp+B0h] [rbp+48h] BYREF
  char v27; // [rsp+B8h] [rbp+50h]
  unsigned __int8 *v28; // [rsp+C0h] [rbp+58h]
  enum _D3DKMDT_MODE_PRUNING_REASON *v29; // [rsp+C8h] [rbp+60h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 66;
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 67;
  }
  *a3 = 0;
  v7 = 0;
  *a4 = D3DKMDT_MPR_UNINITIALIZED;
  if ( !*((_QWORD *)this + 5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v8 = *((_QWORD *)this + 5);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 87;
    return 3223192337LL;
  }
  v9 = *(_QWORD *)(v8 + 112);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 101;
    return 3223192337LL;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 112LL);
  v24 = v10;
  if ( v10 )
  {
    if ( this == (DMMVIDPNTARGETMODE *)-72LL )
    {
      v18 = -1073741811;
    }
    else
    {
      MONITOR_MGR::AcquireMonitorShared(v25, v10);
      if ( v25[0] )
      {
        v11 = *(_QWORD *)(v25[0] + 232LL);
        v12 = 0;
        v23 = 0;
        v13 = 0;
        v26 = 0;
        if ( ((*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 232) + 40LL))(*(_QWORD *)(v11 + 232)) == 1
           || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 232) + 40LL))(*(_QWORD *)(v11 + 232)) == 2
           || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 232) + 40LL))(*(_QWORD *)(v11 + 232)) == 3
           || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 232) + 40LL))(*(_QWORD *)(v11 + 232)) == 14)
          && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 232) + 104LL))(*(_QWORD *)(v11 + 232)) )
        {
          WdLogSingleEntry1(7LL);
          v12 = 1;
          WdLogGlobalForLineNumber = 1771;
          v13 = 1;
        }
        else
        {
          v15 = *(unsigned int *)(v11 + 112);
          if ( (_DWORD)v15 == 2 || (_DWORD)v15 == 1 )
          {
            LOBYTE(v14) = v27;
            IsSupportedModeInternal = DxgMonitor::MonitorModes::_IsSupportedModeInternal(
                                        v11,
                                        (char *)this + 72,
                                        v15,
                                        v14,
                                        &v26,
                                        &v23);
            v13 = v26;
            v7 = IsSupportedModeInternal;
            v12 = v23;
          }
          else
          {
            v26 = 0;
            v21[0] = 0;
            v22 = 0;
            v23 = 0;
            if ( (_DWORD)v15 != 3 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1795;
            }
            LOBYTE(v14) = v27;
            v7 = DxgMonitor::MonitorModes::_IsSupportedModeInternal(v11, (char *)this + 72, 2LL, v14, &v26, &v22);
            if ( v7 >= 0 )
            {
              LOBYTE(v16) = v27;
              v7 = DxgMonitor::MonitorModes::_IsSupportedModeInternal(v11, (char *)this + 72, 1LL, v16, v21, &v23);
              if ( v7 >= 0 )
              {
                v17 = v21[0];
                v12 = v23;
                if ( v26 != v21[0] )
                {
                  WdLogSingleEntry5(7LL, v11, v26, v22, v21[0], v23);
                  WdLogGlobalForLineNumber = 1835;
                  WdLogSingleEntry5(
                    7LL,
                    *((unsigned int *)this + 21),
                    *((unsigned int *)this + 22),
                    *((unsigned int *)this + 23),
                    *((unsigned int *)this + 24),
                    (int)(*((_DWORD *)this + 30) << 29) >> 29);
                  WdLogGlobalForLineNumber = 1843;
                  WdLogSingleEntry3(
                    7LL,
                    *((unsigned int *)this + 25),
                    *((unsigned int *)this + 26),
                    *((_QWORD *)this + 14));
                  WdLogGlobalForLineNumber = 1849;
                }
                if ( !v17 && !v26 || (v13 = 1, !v17) )
                  v12 = v22;
                v7 = 0;
              }
            }
          }
        }
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v25);
        v18 = v7;
        if ( v7 >= 0 )
        {
          *v28 = v13;
          *v29 = v12;
          return 0LL;
        }
      }
      else
      {
        v18 = -1073741275;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 3116;
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v25);
      }
    }
    WdLogSingleEntry3(2LL, this, v24, v18);
    result = (unsigned int)v18;
    WdLogGlobalForLineNumber = 134;
  }
  else
  {
    WdLogSingleEntry2(3LL, *(unsigned int *)(v9 + 24), this);
    result = 3223192376LL;
    WdLogGlobalForLineNumber = 114;
  }
  return result;
}
