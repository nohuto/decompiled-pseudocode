/*
 * XREFs of DxgkPowerRuntimeControlRequestCB @ 0x140075440
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DpiGetDxgAdapter @ 0x1400348A0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140034914 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140038950 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     McTemplateK0pj_EtwWriteTransfer @ 0x14006F93C (McTemplateK0pj_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkPowerRuntimeControlRequestCB(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 DxgAdapter; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  unsigned int v15; // ebx
  _BYTE v17[56]; // [rsp+50h] [rbp-78h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v17);
  DxgAdapter = DpiGetDxgAdapter(a1);
  v14 = DxgAdapter;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pj_EtwWriteTransfer(v12, &Dxgk_PowerRuntimeControlRequestCB, v13, DxgAdapter, a2);
  if ( v14 && *(_BYTE *)(v14 + 3705) )
  {
    v15 = PoFxPowerControl(*(_QWORD *)(v14 + 3272), a2, a3, a4, a5, a6, a7);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 526;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkPowerRuntimeControlRequestCB is called when runtime power management is not enabled.",
      526LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v15 = -1073741823;
  }
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v17);
  return v15;
}
