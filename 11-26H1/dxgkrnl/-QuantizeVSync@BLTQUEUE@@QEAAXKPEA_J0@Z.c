/*
 * XREFs of ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x14006680C
 * Callers:
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140066AE8 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x14006B70C (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1402FEDE4 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     McTemplateK0qiiiiiqq_EtwWriteTransfer @ 0x140013D60 (McTemplateK0qiiiiiqq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x14003BB1C (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x14003CDA8 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x14004B5C4 (Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1400A56A4 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403EF9BC (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 */

void __fastcall BLTQUEUE::QuantizeVSync(BLTQUEUE *this, int a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // r9
  char v9; // r12
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  _BYTE v22[8]; // [rsp+60h] [rbp-68h] BYREF
  char *v23; // [rsp+68h] [rbp-60h]
  char v24; // [rsp+88h] [rbp-40h]

  v24 = 0;
  v23 = (char *)this + 456;
  Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline();
  if ( (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline() )
    DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v22);
  v8 = *((unsigned int *)this + 96);
  v9 = 0;
  v10 = *((unsigned int *)this + 97);
  v11 = *a4 * v8 / (*a3 * v10);
  *((_QWORD *)this + 59) = v11;
  v12 = v11;
  v13 = *a3 * v10 * (unsigned int)v11 / v8;
  *((_QWORD *)this + 60) = v13;
  v14 = v13;
  if ( v13 > *a4 )
  {
    v9 = 1;
    *((_QWORD *)this + 59) = v12 - 1;
    v14 = v10 * *a3 * (unsigned int)(v12 - 1) / v8;
    *((_QWORD *)this + 60) = v14;
  }
  v15 = v14 - *a3;
  v16 = 100 * v10 * *a3 / v8;
  if ( (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline() )
  {
    v17 = *((_QWORD *)this + 59);
    v18 = *((_QWORD *)this + 60);
    v19 = *((_QWORD *)this + 61);
    DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v22);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qiiiiiqq_EtwWriteTransfer(*a3, v20, v21, a2, v17, *a3, v18, v15, v16, v9, *((_DWORD *)this + 103));
    if ( v19 < 0 || v17 < 0 || v18 < 0 )
    {
      MicrosoftTelemetryAssertTriggeredMsgKM("QuantizeVSync: Errors detected in vsync values");
      WdLogSingleEntry3(2LL, v19, v17, v18);
      WdLogGlobalForLineNumber = 3417;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"QuantizeVSync: Errors detected in vsync values. LastVSyncTime: %I64x, CurRefreshCount: %I64x, LastVSync"
                  "TimeSnapped: %I64x",
        v19,
        v17,
        v18,
        0LL,
        0LL);
      if ( (int)DxgCreateLiveDumpWithWdLogs2(403LL, 2084LL, v19, v17, v18, 0x100000000LL) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3429;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 3429LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0qiiiiiqq_EtwWriteTransfer(
      *((_QWORD *)this + 60),
      *a3,
      *((_QWORD *)this + 59),
      a2,
      *((_QWORD *)this + 59),
      *a3,
      *((_QWORD *)this + 60),
      v15,
      v16,
      v9,
      *((_DWORD *)this + 103));
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v22);
}
