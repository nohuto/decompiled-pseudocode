/*
 * XREFs of ?CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x140279AF4
 * Callers:
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14018D950 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140018A24 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400632F0 (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ?reset@?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorDescriptorState@DxgMonitor@@@Z @ 0x140063FB0 (-reset@-$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U-$default_delete@VMonitorDescriptorStat.c)
 *     ??4?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140098C40 (--4-$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U-$default_delete@UIMonitorDescriptor@DxgMonitor.c)
 *     ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z @ 0x140098F50 (--0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x140190738 (--0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@.c)
 */

_QWORD *__fastcall DxgMonitor::MonitorDescriptorState::CopyInstance(
        __int64 a1,
        _QWORD *a2,
        const struct DxgMonitor::IMonitorComponentParent *a3,
        const struct DxgMonitor::IMonitorRegistry *a4)
{
  DxgMonitor::MonitorDescriptorState *v8; // rax
  DxgMonitor::MonitorDescriptorState *v9; // rdi
  __int64 v10; // rcx
  __int64 (__fastcall ****v11)(_QWORD, __int64); // rax
  __int64 v12; // rcx
  struct DxgMonitor::IMonitorDescriptor **v13; // r14
  __int64 (__fastcall ****v14)(_QWORD, __int64); // rax
  struct DxgMonitor::IMonitorDescriptor **v15; // rbx
  DxgMonitor::MultiMonitorDescriptor *v16; // rax
  __int64 v17; // rax
  struct DxgMonitor::IMonitorDescriptor *v18; // rax
  struct _ERESOURCE *v20; // [rsp+20h] [rbp-18h] BYREF
  __int64 (__fastcall ***v21[2])(_QWORD, __int64); // [rsp+28h] [rbp-10h] BYREF

  v8 = (DxgMonitor::MonitorDescriptorState *)operator new(0xB8uLL, 0x4D677844u, 256LL);
  if ( v8 )
    v9 = DxgMonitor::MonitorDescriptorState::MonitorDescriptorState(v8, a3, a4);
  else
    v9 = 0LL;
  v20 = (struct _ERESOURCE *)v9;
  if ( !v9 )
    goto LABEL_23;
  v10 = *(_QWORD *)(a1 + 128);
  if ( v10 )
  {
    v11 = (__int64 (__fastcall ****)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 16LL))(
                                                        v10,
                                                        v21);
    wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::operator=(
      (__int64 (__fastcall ****)(_QWORD, __int64))v9 + 16,
      v11);
    wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(v21, 0LL);
    if ( !*((_QWORD *)v9 + 16) )
      goto LABEL_23;
  }
  v12 = *(_QWORD *)(a1 + 136);
  if ( v12 )
  {
    v14 = (__int64 (__fastcall ****)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 16LL))(
                                                        v12,
                                                        v21);
    v13 = (struct DxgMonitor::IMonitorDescriptor **)((char *)v9 + 136);
    wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::operator=(
      (__int64 (__fastcall ****)(_QWORD, __int64))v9 + 17,
      v14);
    wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(v21, 0LL);
    if ( *((_QWORD *)v9 + 17) )
    {
      *((_BYTE *)v9 + 152) = *(_BYTE *)(a1 + 152);
      goto LABEL_11;
    }
LABEL_23:
    *a2 = 0LL;
    goto LABEL_24;
  }
  v13 = (struct DxgMonitor::IMonitorDescriptor **)((char *)v9 + 136);
LABEL_11:
  v15 = (struct DxgMonitor::IMonitorDescriptor **)((char *)v9 + 144);
  if ( *(_QWORD *)(a1 + 144) )
  {
    v16 = (DxgMonitor::MultiMonitorDescriptor *)operator new(0x28uLL, 0x4D677844u, 256LL);
    if ( v16 )
      v16 = DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(
              v16,
              *((struct DxgMonitor::IMonitorDescriptor **)v9 + 16),
              *v13);
    wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))v9 + 18,
      (__int64 (__fastcall ***)(_QWORD, __int64))v16);
    if ( !*v15 )
      goto LABEL_23;
  }
  v17 = *(_QWORD *)(a1 + 160);
  if ( v17 == *(_QWORD *)(a1 + 128) )
  {
    v18 = (struct DxgMonitor::IMonitorDescriptor *)*((_QWORD *)v9 + 16);
LABEL_21:
    *((_QWORD *)v9 + 20) = v18;
    goto LABEL_22;
  }
  if ( v17 == *(_QWORD *)(a1 + 136) )
  {
    v18 = *v13;
    goto LABEL_21;
  }
  if ( v17 == *(_QWORD *)(a1 + 144) )
  {
    v18 = *v15;
    goto LABEL_21;
  }
LABEL_22:
  wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
    (__int64)a2,
    (__int64 *)&v20);
LABEL_24:
  wistd::unique_ptr<DxgMonitor::MonitorDescriptorState,wistd::default_delete<DxgMonitor::MonitorDescriptorState>>::reset(
    &v20,
    0LL);
  return a2;
}
