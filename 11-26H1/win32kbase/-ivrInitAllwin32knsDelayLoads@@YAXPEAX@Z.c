/*
 * XREFs of ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x1401C6420
 * Callers:
 *     ?ivrInitialize@@YAJXZ @ 0x14021F8E0 (-ivrInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ivrInitAllwin32knsDelayLoads(_QWORD *a1)
{
  __int64 ExportedRoutineByName; // rbx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rbx
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rbx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rbx
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // rbx
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // rbx
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rbx
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rbx
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rbx
  int v43; // edx
  int v44; // ecx
  int v45; // r8d

  if ( a1 )
  {
    ExportedRoutineByName = RtlFindExportedRoutineByName(a1[2], "IVInitialize");
    *(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 19544) = ExportedRoutineByName;
    v6 = RtlFindExportedRoutineByName(a1[2], "IVUninitialize");
    *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 19552) = v6;
    v10 = RtlFindExportedRoutineByName(a1[2], "IVRegisterChildLifetimeNotifications");
    *(_QWORD *)(W32GetUserSessionState(v12, v11, v13) + 19560) = v10;
    v14 = RtlFindExportedRoutineByName(a1[2], "IVUnregisterChildLifetimeNotifications");
    *(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 19568) = v14;
    v18 = RtlFindExportedRoutineByName(a1[2], "IVSend");
    *(_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 19600) = v18;
    v22 = RtlFindExportedRoutineByName(a1[2], "IVRecv");
    *(_QWORD *)(W32GetUserSessionState(v24, v23, v25) + 19608) = v22;
    v26 = RtlFindExportedRoutineByName(a1[2], "IVBroadcast");
    *(_QWORD *)(W32GetUserSessionState(v28, v27, v29) + 19616) = v26;
    v30 = RtlFindExportedRoutineByName(a1[2], "IVFreeIVSRContext");
    *(_QWORD *)(W32GetUserSessionState(v32, v31, v33) + 19624) = v30;
    v34 = RtlFindExportedRoutineByName(a1[2], "IVResolveContainerId");
    *(_QWORD *)(W32GetUserSessionState(v36, v35, v37) + 19592) = v34;
    v38 = RtlFindExportedRoutineByName(a1[2], "IVChildReInitialize");
    *(_QWORD *)(W32GetUserSessionState(v40, v39, v41) + 19576) = v38;
    v42 = RtlFindExportedRoutineByName(a1[2], "IVCloseChildChannel");
    *(_QWORD *)(W32GetUserSessionState(v44, v43, v45) + 19584) = v42;
  }
}
