/*
 * XREFs of DpiPanelBufferingSetOverrideState @ 0x1400923DC
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1401D1110 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14005D4C4 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiPanelBufferingSetOverrideState(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v8; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r15
  int v24; // ecx
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // [rsp+30h] [rbp-40h] BYREF
  int v30; // [rsp+34h] [rbp-3Ch] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-38h] BYREF
  int v32; // [rsp+40h] [rbp-30h] BYREF
  __int64 v33; // [rsp+48h] [rbp-28h]
  char v34; // [rsp+50h] [rbp-20h]
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2230;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2230);
  if ( !(unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
    }
    return 2147500033LL;
  }
  if ( !a1 || !a3 && a4 )
    goto LABEL_63;
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 || *(_DWORD *)(v10 + 16) != 1953656900 || *(_DWORD *)(v10 + 20) != 2 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 54;
LABEL_63:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( !*(_BYTE *)(v10 + 6512) )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    return 3221225659LL;
  }
  v12 = 0;
  if ( a3 )
    v12 = (a4 != 0) + 1;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  LOBYTE(v13) = 1;
  v14 = DpiAcquireCoreSyncAccessSafe(a1, v13);
  if ( (v14 & 0xC0000000) == 0xC0000000 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    return v14;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _KEVENT *))(v10 + 6488))(
          *(_QWORD *)(v10 + 6456),
          a2,
          v12,
          &Event);
  LOBYTE(v17) = 1;
  v18 = v16;
  DpiReleaseCoreSyncAccessSafe(a1, v17);
  if ( (v18 & 0xC0000000) == 0xC0000000 )
  {
    if ( !v12 && (_DWORD)v18 != -1071774920 )
    {
      WdLogSingleEntry3(0LL, 275LL, 21LL, v18);
      WdLogGlobalForLineNumber = 105;
    }
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    return (unsigned int)v18;
  }
  Timeout.QuadPart = -20000000LL;
  if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) == 258 )
  {
    WdLogSingleEntry3(0LL, 275LL, 21LL, 258LL);
    WdLogGlobalForLineNumber = 121;
  }
  LOBYTE(v20) = 1;
  LODWORD(v18) = DpiAcquireCoreSyncAccessSafe(a1, v20);
  if ( (v18 & 0xC0000000) == 0xC0000000 )
    goto LABEL_32;
  v30 = -1073741822;
  v29 = 0;
  v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, int *))(v10 + 6496))(*(_QWORD *)(v10 + 6456), a2, &v30, &v29);
  LOBYTE(v22) = 1;
  v23 = v21;
  DpiReleaseCoreSyncAccessSafe(a1, v22);
  if ( (v23 & 0xC0000000) == 0xC0000000 )
  {
    WdLogSingleEntry2(2LL, v23, v12);
    WdLogGlobalForLineNumber = 146;
    if ( !v12 && (_DWORD)v23 != -1071774920 )
    {
      WdLogSingleEntry3(0LL, 275LL, 21LL, v23);
      WdLogGlobalForLineNumber = 165;
    }
    goto LABEL_50;
  }
  v24 = v29;
  if ( !v12 && v29 )
  {
    WdLogSingleEntry3(0LL, 275LL, 21LL, v30);
    v24 = v29;
    WdLogGlobalForLineNumber = 180;
  }
  v25 = v30;
  if ( (v30 & 0xC0000000) == 0xC0000000 && v24 && v30 != -1071774920 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 189;
LABEL_50:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit);
    return 0LL;
  }
  if ( v30 >= 0 && v12 && !v24 )
  {
    WdLogSingleEntry1(2LL);
    v25 = v30;
    WdLogGlobalForLineNumber = 202;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit);
  return v25;
}
