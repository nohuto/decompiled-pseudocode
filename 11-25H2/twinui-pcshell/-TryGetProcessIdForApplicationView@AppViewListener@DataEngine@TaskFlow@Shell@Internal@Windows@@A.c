/*
 * XREFs of ?TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAIPEAUHWND__@@PEAUIApplicationView@@_N@Z @ 0x1803F3330
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1803F2A18 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180074750 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ??$FailedToRetreiveProcessId@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x1803F0C90 (--$FailedToRetreiveProcessId@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetProcessIdForApplicationView(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        HWND a2,
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64 *),
        char a4)
{
  int v4; // edi
  signed int LastError; // eax
  __int64 v7; // [rsp+30h] [rbp-10h] BYREF
  __int64 v8; // [rsp+38h] [rbp-8h] BYREF
  DWORD dwProcessId; // [rsp+60h] [rbp+20h] BYREF
  int v10; // [rsp+64h] [rbp+24h]
  int v11; // [rsp+78h] [rbp+38h] BYREF

  v10 = HIDWORD(this);
  v4 = 0;
  dwProcessId = 0;
  v11 = 0;
  if ( a4 )
  {
    v7 = 0LL;
    v8 = 0LL;
    if ( (int)ApplicationViewHelpers::GetApplicationFromView(
                a3,
                (struct IApplicationView *)&v8,
                (struct IImmersiveApplication **)a3) >= 0
      && (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
           v8,
           1LL,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           &v7) >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v7 + 48LL))(v7, &dwProcessId);
      v11 = v4;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  }
  else
  {
    if ( GetWindowThreadProcessId(a2, &dwProcessId) )
      return dwProcessId;
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v4 = LastError;
    v11 = LastError;
  }
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2147023496 )
    TaskFlowDataEngineTelemetry::FailedToRetreiveProcessId<long &>(&v11);
  return dwProcessId;
}
