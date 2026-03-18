/*
 * XREFs of ?GetMonitorDescriptorPnpIds@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x140279DE0
 * Callers:
 *     ?MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x14026F244 (-MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140018A24 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::GetMonitorDescriptorPnpIds(
        DxgMonitor::MonitorDescriptorState *this,
        struct _DXGK_GENERIC_DESCRIPTOR *a2)
{
  __int64 v4; // rcx
  int v5; // edi
  WCHAR v7; // ax
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  __int64 (__fastcall ***v10)(_QWORD, __int64); // [rsp+20h] [rbp-50h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v12[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h]
  WCHAR v14; // [rsp+60h] [rbp-10h]

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1619;
  }
  a2->HardwareId[0] = 0;
  a2->InstanceId[0] = 0;
  a2->CompatibleId[0] = 0;
  a2->DeviceText[0] = 0;
  v4 = *((_QWORD *)this + 20);
  if ( !v4 )
    return 3223126017LL;
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, __int64)))(*(_QWORD *)v4 + 24LL))(v4, &v10);
  if ( !v10 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1642;
    v5 = -1073741801;
LABEL_10:
    wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(&v10, 0LL);
    return (unsigned int)v5;
  }
  v11[0] = 2752512LL;
  v11[1] = v12;
  v5 = (*v10)[8](v10, (__int64)v11);
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1653;
    goto LABEL_10;
  }
  v5 = (*v10)[9](v10, (__int64)v11);
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1654;
    goto LABEL_10;
  }
  v7 = v14;
  v8 = v12[1];
  *(_OWORD *)a2->HardwareId = v12[0];
  v9 = v13;
  *(_OWORD *)&a2->HardwareId[8] = v8;
  *(_QWORD *)&a2->HardwareId[16] = v9;
  a2->HardwareId[20] = v7;
  wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(&v10, 0LL);
  return 0LL;
}
