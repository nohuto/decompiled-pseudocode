/*
 * XREFs of ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1403F3EA8
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403F3AF8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x140060984 (-ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x140060A58 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?ConvertMonitorModeTimingType@@YAJW4__WMI_MONITOR_TIMING_TYPE@@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE@@@Z @ 0x140061FDC (-ConvertMonitorModeTimingType@@YAJW4__WMI_MONITOR_TIMING_TYPE@@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE.c)
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14006D9D8 (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x1403EBA64 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::ParseDescriptorModes(
        DxgMonitor::MonitorModes ***this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  DxgMonitor::MonitorModes *v4; // r13
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // rbx
  int v10; // edi
  int v11; // eax
  unsigned int v12; // ecx
  void **v13; // rcx
  __int128 v14; // xmm6
  unsigned int v15; // eax
  __int64 v16; // rax
  _DWORD *v17; // rdi
  int v18; // ecx
  struct _D3DKMDT_VIDEO_SIGNAL_INFO *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  DxgMonitor::MonitorModes **v24; // rdi
  DxgMonitor::MonitorModes **v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _WORD *v29; // rax
  unsigned int i; // r15d
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v31; // rdi
  int v32; // r13d
  DxgMonitor::MonitorModes *v33; // rdi
  DxgMonitor::MonitorModes **v34; // rcx
  int v35; // [rsp+30h] [rbp-30h] BYREF
  int v36; // [rsp+34h] [rbp-2Ch]
  __int128 v37; // [rsp+38h] [rbp-28h]
  void *v38; // [rsp+48h] [rbp-18h] BYREF
  char v39; // [rsp+A0h] [rbp+40h]
  unsigned __int16 v40; // [rsp+A8h] [rbp+48h] BYREF
  int v41; // [rsp+B0h] [rbp+50h] BYREF
  void *v42; // [rsp+B8h] [rbp+58h] BYREF

  v39 = 0;
  WdLogSingleEntry2(7LL, this, a2);
  v4 = (DxgMonitor::MonitorModes *)(this + 16);
  WdLogGlobalForLineNumber = 251;
  if ( *(DxgMonitor::MonitorModes **)v4 != v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 258;
  }
  v5 = *(_QWORD *)a2;
  v41 = 0;
  v6 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, int *, _QWORD, _QWORD))(v5 + 192))(
         a2,
         &v41,
         0LL,
         0LL);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 270;
    return v6;
  }
  if ( !v41 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 283;
LABEL_38:
    v26 = *(_QWORD *)a2;
    v40 = 0;
    v6 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, unsigned __int16 *, _QWORD))(v26 + 200))(
           a2,
           &v40,
           0LL);
    if ( v6 == -1073741275 )
    {
      WdLogNewEntry5_WdTrace(v28, v27);
      WdLogGlobalForLineNumber = 440;
      goto LABEL_63;
    }
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 447;
      return v6;
    }
    if ( !v40 )
    {
LABEL_63:
      if ( !v39 && !*((_DWORD *)this + 42) )
        *((_DWORD *)this + 28) = 2;
      return 0LL;
    }
    v29 = (_WORD *)operator new[](52 * (v40 - 1LL) + 56, 0x4D677844u, 256LL);
    v42 = v29;
    v9 = v29;
    if ( v29 )
    {
      *v29 = v40;
      v10 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, _WORD *, _WORD *))(*(_QWORD *)a2 + 200LL))(
              a2,
              v29,
              v29 + 2);
      if ( v10 >= 0 )
      {
        for ( i = 0; i < v40; ++i )
        {
          v31 = (struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)operator new(0x40uLL, 0x4D677844u, 256LL);
          if ( !v31 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 496;
            goto LABEL_59;
          }
          v32 = ConvertFrequencyRange((const struct _FrequencyRangeDescriptor *)&v9[26 * i + 2], v31);
          if ( v32 >= 0 )
          {
            v33 = (DxgMonitor::MonitorModes *)&v31[1];
            v34 = this[23];
            if ( *v34 != (DxgMonitor::MonitorModes *)(this + 22) )
              goto LABEL_57;
            *(_QWORD *)v33 = this + 22;
            *((_QWORD *)v33 + 1) = v34;
            *v34 = v33;
            this[23] = (DxgMonitor::MonitorModes **)v33;
            ++*((_DWORD *)this + 42);
          }
          else
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 506;
            MonitorLogBadEDID(v32);
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v31);
          }
        }
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v42);
        goto LABEL_63;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 478;
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 466;
      v10 = -1073741801;
    }
    v13 = &v42;
LABEL_14:
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(v13);
    return (unsigned int)v10;
  }
  v8 = (unsigned __int16 *)operator new[](56LL * (unsigned int)(v41 - 1) + 60, 0x4D677844u, 256LL);
  v38 = v8;
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 299;
    v10 = -1073741801;
LABEL_13:
    v13 = &v38;
    goto LABEL_14;
  }
  v35 = 0;
  v11 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, int *, int *, unsigned __int16 *))(*(_QWORD *)a2 + 192LL))(
          a2,
          &v41,
          &v35,
          v8 + 2);
  v12 = 0;
  v10 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 309;
    goto LABEL_13;
  }
  *v9 = v41;
  v9[1] = v35;
  *(_QWORD *)&v37 = 0x800000008LL;
  *((_QWORD *)&v37 + 1) = 8LL;
  v14 = v37;
  while ( 1 )
  {
    v15 = *v9;
    LODWORD(v42) = v12;
    if ( v12 >= v15 )
    {
      wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v38);
      goto LABEL_38;
    }
    v16 = operator new(0x78uLL, 0x4D677844u, 256LL);
    v17 = (_DWORD *)v16;
    if ( !v16 )
      break;
    v18 = *((_DWORD *)this + 31);
    v19 = (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v16 + 8);
    *((_DWORD *)this + 31) = v18 + 1;
    v20 = 28LL * (unsigned int)v42;
    *v17 = v18;
    *(_QWORD *)&v37 = v20 * 2;
    v36 = ConvertVideoSignalInfo((const struct _VideoModeDescriptor *)&v9[v20 + 2], v19);
    if ( v36 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 363;
LABEL_20:
      MonitorLogBadEDID(v36);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
      goto LABEL_35;
    }
    v21 = v37;
    v17[16] = 2;
    *(_OWORD *)(v17 + 17) = v14;
    v36 = ConvertMonitorCapablitiesOrigin(*((unsigned __int8 *)v9 + v21 + 57), v17 + 21);
    if ( v36 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 377;
      goto LABEL_20;
    }
    v36 = ConvertMonitorModeTimingType(*((unsigned __int8 *)v9 + v37 + 58), v17 + 28);
    if ( v36 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 386;
      goto LABEL_20;
    }
    v22 = v17[28];
    if ( v22 == 1 || (unsigned int)(v22 - 2) <= 1 )
      v39 = 1;
    if ( v9[1] == (_DWORD)v42 )
    {
      if ( this[18] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 404;
      }
      this[18] = (DxgMonitor::MonitorModes **)v17;
      v23 = 1;
    }
    else
    {
      v23 = 2;
    }
    v17[22] = v23;
    v24 = (DxgMonitor::MonitorModes **)(v17 + 24);
    ++*((_DWORD *)this + 30);
    v25 = this[17];
    if ( *v25 != v4 )
LABEL_57:
      __fastfail(3u);
    *v24 = v4;
    v24[1] = (DxgMonitor::MonitorModes *)v25;
    *v25 = (DxgMonitor::MonitorModes *)v24;
    this[17] = v24;
LABEL_35:
    v12 = (_DWORD)v42 + 1;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 351;
LABEL_59:
  if ( v9 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  return 3221225495LL;
}
