/*
 * XREFs of ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x14021B1F4
 * Callers:
 *     ?ivrInitialize@@YAJXZ @ 0x14021B40C (-ivrInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ivrInitAllwin32knsDelayLoads(_QWORD *a1)
{
  __int64 ExportedRoutineByName; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx

  if ( a1 )
  {
    ExportedRoutineByName = RtlFindExportedRoutineByName(a1[2], "IVInitialize");
    *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19512) = ExportedRoutineByName;
    v5 = RtlFindExportedRoutineByName(a1[2], "IVUninitialize");
    *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19520) = v5;
    v8 = RtlFindExportedRoutineByName(a1[2], "IVRegisterChildLifetimeNotifications");
    *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19528) = v8;
    v11 = RtlFindExportedRoutineByName(a1[2], "IVUnregisterChildLifetimeNotifications");
    *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19536) = v11;
    v14 = RtlFindExportedRoutineByName(a1[2], "IVSend");
    *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19568) = v14;
    v17 = RtlFindExportedRoutineByName(a1[2], "IVRecv");
    *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19576) = v17;
    v20 = RtlFindExportedRoutineByName(a1[2], "IVBroadcast");
    *(_QWORD *)(W32GetUserSessionState(v22, v21) + 19584) = v20;
    v23 = RtlFindExportedRoutineByName(a1[2], "IVFreeIVSRContext");
    *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19592) = v23;
    v26 = RtlFindExportedRoutineByName(a1[2], "IVResolveContainerId");
    *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19560) = v26;
    v29 = RtlFindExportedRoutineByName(a1[2], "IVChildReInitialize");
    *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19544) = v29;
    v32 = RtlFindExportedRoutineByName(a1[2], "IVCloseChildChannel");
    *(_QWORD *)(W32GetUserSessionState(v34, v33) + 19552) = v32;
  }
}
