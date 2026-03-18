/*
 * XREFs of ?CopyInstance@MonitorModes@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorModes@DxgMonitor@@U?$default_delete@VMonitorModes@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x14042F430
 * Callers:
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14018D950 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400632F0 (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ?reset@?$unique_ptr@VMonitorModes@DxgMonitor@@U?$default_delete@VMonitorModes@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorModes@DxgMonitor@@@Z @ 0x14006CB44 (-reset@-$unique_ptr@VMonitorModes@DxgMonitor@@U-$default_delete@VMonitorModes@DxgMonitor@@@wistd.c)
 *     ??0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x14018E278 (--0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z.c)
 */

_QWORD *__fastcall DxgMonitor::MonitorModes::CopyInstance(
        __int64 a1,
        _QWORD *a2,
        const struct DxgMonitor::IMonitorComponentParent *a3,
        const struct DxgMonitor::IMonitorRegistry *a4)
{
  DxgMonitor::MonitorModes *v8; // rax
  DxgMonitor::MonitorModes *v9; // rax
  DxgMonitor::MonitorModes *v10; // rsi
  __int64 i; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  DxgMonitor::MonitorModes *v14; // rcx
  DxgMonitor::MonitorModes **v15; // r8
  int v16; // eax
  _QWORD *v17; // rbp
  _QWORD *j; // rax
  _QWORD *v19; // rbx
  _OWORD *v20; // rax
  DxgMonitor::MonitorModes **v21; // rdx
  DxgMonitor::MonitorModes *v22; // rax
  DxgMonitor::MonitorModes *v24[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = (DxgMonitor::MonitorModes *)operator new(0xF8uLL, 0x4D677844u, 256LL);
  if ( v8 && (v9 = DxgMonitor::MonitorModes::MonitorModes(v8, a3, a4), v24[0] = v9, (v10 = v9) != 0LL) )
  {
    *((_BYTE *)v9 + 116) = *(_BYTE *)(a1 + 116);
    *((_DWORD *)v9 + 28) = *(_DWORD *)(a1 + 112);
    for ( i = *(_QWORD *)(a1 + 128); ; i = *(_QWORD *)(v12 + 96) )
    {
      if ( i == a1 + 128 )
      {
        v12 = 0LL;
      }
      else
      {
        v12 = i - 96;
        if ( !i )
          v12 = 0LL;
      }
      if ( !v12 )
        break;
      v13 = operator new(0x78uLL, 0x4D677844u, 256LL);
      if ( !v13 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 79;
LABEL_16:
        *a2 = 0LL;
        goto LABEL_17;
      }
      v14 = (DxgMonitor::MonitorModes *)(v13 + 96);
      *(_OWORD *)v13 = *(_OWORD *)v12;
      *(_OWORD *)(v13 + 16) = *(_OWORD *)(v12 + 16);
      *(_OWORD *)(v13 + 32) = *(_OWORD *)(v12 + 32);
      *(_OWORD *)(v13 + 48) = *(_OWORD *)(v12 + 48);
      *(_OWORD *)(v13 + 64) = *(_OWORD *)(v12 + 64);
      *(_OWORD *)(v13 + 80) = *(_OWORD *)(v12 + 80);
      *(_OWORD *)(v13 + 96) = *(_OWORD *)(v12 + 96);
      *(_QWORD *)(v13 + 112) = *(_QWORD *)(v12 + 112);
      v15 = (DxgMonitor::MonitorModes **)*((_QWORD *)v10 + 17);
      if ( *v15 != (DxgMonitor::MonitorModes *)((char *)v10 + 128) )
LABEL_28:
        __fastfail(3u);
      *(_QWORD *)v14 = (char *)v10 + 128;
      *(_QWORD *)(v13 + 104) = v15;
      *v15 = v14;
      *((_QWORD *)v10 + 17) = v14;
      ++*((_DWORD *)v10 + 30);
      if ( v12 == *(_QWORD *)(a1 + 144) )
        *((_QWORD *)v10 + 18) = v13;
    }
    v16 = *(_DWORD *)(a1 + 124);
    v17 = (_QWORD *)(a1 + 176);
    *((_DWORD *)v10 + 31) = v16;
    for ( j = (_QWORD *)*v17; ; j = (_QWORD *)v19[6] )
    {
      if ( j == v17 )
      {
        v19 = 0LL;
      }
      else
      {
        v19 = j - 6;
        if ( !j )
          v19 = 0LL;
      }
      if ( !v19 )
        break;
      v20 = (_OWORD *)operator new(0x40uLL, 0x4D677844u, 256LL);
      if ( !v20 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 127;
        goto LABEL_16;
      }
      *v20 = *(_OWORD *)v19;
      v20[1] = *((_OWORD *)v19 + 1);
      v20[2] = *((_OWORD *)v19 + 2);
      v20[3] = *((_OWORD *)v19 + 3);
      v21 = (DxgMonitor::MonitorModes **)*((_QWORD *)v10 + 23);
      v22 = (DxgMonitor::MonitorModes *)(v20 + 3);
      if ( *v21 != (DxgMonitor::MonitorModes *)((char *)v10 + 176) )
        goto LABEL_28;
      *(_QWORD *)v22 = (char *)v10 + 176;
      *((_QWORD *)v22 + 1) = v21;
      *v21 = v22;
      *((_QWORD *)v10 + 23) = v22;
      ++*((_DWORD *)v10 + 42);
    }
    wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
      (__int64)a2,
      (__int64 *)v24);
LABEL_17:
    wistd::unique_ptr<DxgMonitor::MonitorModes,wistd::default_delete<DxgMonitor::MonitorModes>>::reset(v24, 0LL);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
