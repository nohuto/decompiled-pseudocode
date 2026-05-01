/*
 * XREFs of ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x1803F4C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1803F1498 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ?get_system_time@filetime@wil@@YA?AU_FILETIME@@XZ @ 0x1803F3668 (-get_system_time@filetime@wil@@YA-AU_FILETIME@@XZ.c)
 *     ??$GetActivationFactory@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1803F4654 (--$GetActivationFactory@UIUserPresenceDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@w.c)
 *     ??$UserPresenceDataCreated@AEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_J@TaskFlowDataEngineTelemetry@@SAXAEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_J@Z @ 0x1803F4860 (--$UserPresenceDataCreated@AEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AE.c)
 *     ??$UserPresenceIdleState@AEAH@TaskFlowDataEngineTelemetry@@SAXAEAH@Z @ 0x1803F4964 (--$UserPresenceIdleState@AEAH@TaskFlowDataEngineTelemetry@@SAXAEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::OnIdleStateChanged(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this,
        int a2)
{
  wil::filetime *v4; // rcx
  struct _FILETIME system_time; // rax
  struct _FILETIME v6; // rdx
  unsigned int v7; // r8d
  struct _FILETIME v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-30h] BYREF
  struct _FILETIME v17; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v19; // [rsp+78h] [rbp+10h] BYREF
  int v20; // [rsp+80h] [rbp+18h] BYREF
  BOOL v21; // [rsp+88h] [rbp+20h] BYREF

  v19 = a2;
  LOWORD(v20) = 0;
  TaskFlowDataEngineTelemetry::UserPresenceIdleState<int &>(&v19);
  system_time = wil::filetime::get_system_time(v4);
  v8 = system_time;
  v17 = system_time;
  try
  {
    wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceDataFactory>(
      (const WCHAR *)&v16,
      *(_QWORD *)&v6,
      v7);
    v21 = a2 != 0;
    v15 = 0LL;
    v9 = *v16;
    v15 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, bool, struct _FILETIME, __int64 *))(v9 + 48))(v16, a2 != 0, v8, &v15);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6D,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
        (const char *)(unsigned int)v10,
        v14);
    TaskFlowDataEngineTelemetry::UserPresenceDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceState &,__int64 &>(
      &v21,
      (__int64 *)&v17);
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7), v15);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x71,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
        (const char *)(unsigned int)v11,
        v14);
    LOBYTE(v20) = 1;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v20);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x76,
                           (int)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
                           v12);
  }
  return result;
}
