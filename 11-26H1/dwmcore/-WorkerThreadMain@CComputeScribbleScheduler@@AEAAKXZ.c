/*
 * XREFs of ?WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ @ 0x18019337C
 * Callers:
 *     _CComputeScribbleScheduler::StartWorkerThread_::_2_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x18025C100 (_CComputeScribbleScheduler--StartWorkerThread_--_2_--_lambda_1_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800F3B80 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?GetOverlayMonitorTarget@CComputeScribbleRenderer@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z @ 0x180193594 (-GetOverlayMonitorTarget@CComputeScribbleRenderer@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x180193604 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastErrorMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18025CB08 (-FailFast_GetLastErrorMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleScheduler::WorkerThreadMain(CComputeScribbleScheduler *this)
{
  int v2; // esi
  CComputeScribbleRenderer *v3; // rcx
  int OverlayMonitorTarget; // eax
  struct IOverlayMonitorTarget *v5; // rbx
  signed int v6; // eax
  void *v7; // rax
  DWORD v8; // eax
  int v9; // eax
  DWORD v10; // eax
  int v11; // eax
  HANDLE Handles[2]; // [rsp+20h] [rbp-28h] BYREF
  HANDLE v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IOverlayMonitorTarget *v16; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v2 = *((_BYTE *)this + 218) != 0 ? 0xEA61 : 0;
      if ( *((_BYTE *)this + 216) )
        break;
      v14[0] = *((HANDLE *)this + 11);
      v14[1] = *((HANDLE *)this + 9);
      v10 = WaitForMultipleObjects(2u, v14, 0, v2 - 1);
      if ( v10 )
      {
        if ( v10 == 1 )
          return 0LL;
        if ( v10 != 258 )
          wil::details::in1diag3::FailFast_GetLastErrorMsg(
            retaddr,
            (void *)0x25F,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
            "Waiting for handles failed.",
            (const char *)Handles[0]);
        CSuperWetInkManager::s_cleanupScribble = 1;
        ScheduleCompositionPass(0x3E8u, 0x400000u);
      }
      else
      {
        v11 = CComputeScribbleScheduler::ProcessScribbleFrame(this);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x251,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
            (const char *)(unsigned int)v11,
            (int)Handles[0]);
      }
    }
    v3 = (CComputeScribbleRenderer *)*((_QWORD *)this + 25);
    v16 = 0LL;
    OverlayMonitorTarget = CComputeScribbleRenderer::GetOverlayMonitorTarget(v3, &v16);
    v5 = v16;
    if ( OverlayMonitorTarget < 0 )
      break;
    v6 = (*(__int64 (__fastcall **)(struct IOverlayMonitorTarget *, _QWORD))(*(_QWORD *)v16 + 200LL))(
           v16,
           *((_QWORD *)this + 9));
    if ( v6 == 142213121 )
      break;
    if ( v6 < 0 )
      v6 = WaitForSingleObject(*((HANDLE *)this + 9), 0x50u);
    if ( v6 == 1 )
    {
      v9 = CComputeScribbleScheduler::ProcessScribbleFrame(this);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x239,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
          (const char *)(unsigned int)v9,
          (int)Handles[0]);
    }
    else if ( !v6 )
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
      return 0LL;
    }
LABEL_7:
    if ( v5 )
      (*(void (__fastcall **)(struct IOverlayMonitorTarget *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Handles[0] = *((HANDLE *)this + 9);
  v7 = (void *)*((_QWORD *)this + 10);
  *((_BYTE *)this + 217) = 1;
  Handles[1] = v7;
  v8 = WaitForMultipleObjects(2u, Handles, 0, v2 - 1);
  *((_BYTE *)this + 217) = 0;
  if ( v8 )
  {
    if ( v8 == 258 )
    {
      CSuperWetInkManager::s_cleanupScribble = 1;
      ScheduleCompositionPass(0x3E8u, 0x400000u);
    }
    goto LABEL_7;
  }
  if ( v5 )
    (*(void (__fastcall **)(struct IOverlayMonitorTarget *))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}
