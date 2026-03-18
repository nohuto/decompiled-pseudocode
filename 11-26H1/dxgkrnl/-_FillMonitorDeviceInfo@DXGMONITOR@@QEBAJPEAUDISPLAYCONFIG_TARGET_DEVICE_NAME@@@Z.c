/*
 * XREFs of ?_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1403B0FA8
 * Callers:
 *     _lambda_eeea5582e93711493668b9eafd12873f_::operator() @ 0x1401CC7CC (_lambda_eeea5582e93711493668b9eafd12873f_--operator().c)
 *     _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401CD050 (_lambda_ef85c4d3ba2b9aeb28478c22401d75d8_--operator().c)
 *     ?MonitorFillMonitorDeviceInfo@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1402CC758 (-MonitorFillMonitorDeviceInfo@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DXGMONITOR::_FillMonitorDeviceInfo(DXGMONITOR *this, struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a2)
{
  __int64 v4; // rsi
  int v5; // edi
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2986;
  }
  v4 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  if ( !v4 )
    return 3223126017LL;
  v7[0] = 0x800000LL;
  v7[1] = (char *)a2 + 36;
  memset((char *)a2 + 36, 0, 0x80uLL);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 104LL))(v4, v7);
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 3023;
  }
  *((_DWORD *)a2 + 5) = *((_DWORD *)a2 + 5) & 0xFFFFFFFE | (v5 >= 0);
  *((_DWORD *)a2 + 5) ^= ((unsigned __int8)~((*(unsigned int (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v4 + 112LL))(
                                               v4,
                                               (char *)a2 + 28,
                                               (char *)a2 + 30) >> 29) ^ (unsigned __int8)*((_DWORD *)a2 + 5)) & 4;
  return 0LL;
}
