/*
 * XREFs of ?GetMonitorDisplayInfo@TouchEdgeGripperWindow@@AEAAJPEAUIImmersiveMonitor@@PEAUCRect@Geometry@@PEAI2@Z @ 0x18022E428
 * Callers:
 *     ??0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@@Z @ 0x180574FCC (--0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV-$function@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchEdgeGripperWindow::GetMonitorDisplayInfo(
        TouchEdgeGripperWindow *this,
        struct IImmersiveMonitor *a2,
        struct Geometry::CRect *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v7 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E3,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperwindow.cpp",
      (const char *)0x80004003LL);
    MicrosoftTelemetryAssertTriggeredNoArgs(v9, v8, v10, v11);
    return v7;
  }
  v13 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct Geometry::CRect *))(*(_QWORD *)a2 + 72LL))(a2, a3);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v19 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 112LL))(
            a2,
            a4,
            a5);
    v7 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E5,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperwindow.cpp",
        (const char *)(unsigned int)v19);
      MicrosoftTelemetryAssertTriggeredNoArgs(v21, v20, v22, v23);
      return v7;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E4,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperwindow.cpp",
      (const char *)(unsigned int)v13);
    MicrosoftTelemetryAssertTriggeredNoArgs(v16, v15, v17, v18);
    return v14;
  }
}
