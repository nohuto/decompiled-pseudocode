/*
 * XREFs of ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x14037EFF0
 * Callers:
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1401D500C (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x14037E398 (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 *     ?ReportDevicePowerState@DXGGLOBAL@@QEAAXPEAU_DEVICE_OBJECT@@W4_DEVICE_POWER_STATE@@@Z @ 0x14037EF84 (-ReportDevicePowerState@DXGGLOBAL@@QEAAXPEAU_DEVICE_OBJECT@@W4_DEVICE_POWER_STATE@@@Z.c)
 * Callees:
 *     McTemplateK0qqqszq_EtwWriteTransfer @ 0x14005B240 (McTemplateK0qqqszq_EtwWriteTransfer.c)
 *     ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1402FAD94 (-GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z.c)
 *     ?EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1402FB8CC (-EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry(DripsBlockerTrackingHelper *this)
{
  unsigned __int64 Elapsed; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rdi
  char *v5; // rax
  __int64 v6; // rax
  const wchar_t *v7; // r10
  int v8; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 302152) )
  {
    Elapsed = DripsBlockerTrackingHelper::TimeInterval::GetElapsed(*((_QWORD *)this + 37767));
    v3 = *((unsigned int *)this + 75537);
    v4 = Elapsed;
    v5 = (char *)this + 4720 * *((unsigned int *)this + 75536);
    if ( *((_BYTE *)this + 302153) )
      *(_QWORD *)&v5[72 * v3 + 160] += v4;
    else
      *(_QWORD *)&v5[72 * v3 + 152] += v4;
    if ( bTracingEnabled )
    {
      v6 = *((unsigned int *)this + 75537);
      v8 = 0;
      v7 = DripsBlockerTrackingHelper::EtwProfilerTypeName(
             *((_DWORD *)this + 1180 * *((unsigned int *)this + 75536) + 18 * v6 + 43),
             &v8);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0qqqszq_EtwWriteTransfer(
          *((unsigned __int8 *)this + 302153),
          &DripsBlockerTracking_AddD0LagTime,
          (__int64)this + 4720 * *((unsigned int *)this + 75536) + 8,
          *((_DWORD *)this + 75536),
          *((_DWORD *)this + 75537),
          *((_BYTE *)this + 302153),
          (const char *)this + 4720 * *((unsigned int *)this + 75536) + 8,
          v7,
          v4 / 0x2710);
    }
    *((_BYTE *)this + 302152) = 0;
  }
}
