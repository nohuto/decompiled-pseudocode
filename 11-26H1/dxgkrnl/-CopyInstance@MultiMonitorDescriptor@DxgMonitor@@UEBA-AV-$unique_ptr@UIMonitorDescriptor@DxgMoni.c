/*
 * XREFs of ?CopyInstance@MultiMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140099070
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140018A24 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@0@Z @ 0x140098F0C (--0MultiMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U-.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 *__fastcall DxgMonitor::MultiMonitorDescriptor::CopyInstance(__int64 a1, __int64 *a2)
{
  char v2; // bl
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 (__fastcall ***v10)(_QWORD, __int64); // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, __int64); // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  LODWORD(v10) = 0;
  v5 = (_QWORD *)operator new(0x28uLL, 0x4D677844u, 256LL);
  if ( v5 )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(
                     *(_QWORD *)(a1 + 16),
                     &v11);
    v7 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
                      *(_QWORD *)(a1 + 8),
                      &v10);
    v8 = DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(v5, v7, v6);
    v2 = 3;
  }
  else
  {
    v8 = 0LL;
  }
  *a2 = v8;
  if ( (v2 & 2) != 0 )
  {
    v2 &= ~2u;
    wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(&v10, 0LL);
  }
  if ( (v2 & 1) != 0 )
    wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(&v11, 0LL);
  return a2;
}
