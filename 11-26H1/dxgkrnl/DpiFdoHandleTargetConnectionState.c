/*
 * XREFs of DpiFdoHandleTargetConnectionState @ 0x140243508
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1400174A8 (DpiFdoGetChildDescriptor.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DpiFdoCreateChildDescriptor @ 0x14023FC98 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoRemoveChildDescriptor @ 0x140245D68 (DpiFdoRemoveChildDescriptor.c)
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025E6A0 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025E760 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025E828 (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiPdoHandleChildConnectionChange @ 0x140443F48 (DpiPdoHandleChildConnectionChange.c)
 */

__int64 __fastcall DpiFdoHandleTargetConnectionState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdx
  int v10; // edx
  _QWORD *ChildDescriptor; // rdx
  int v12; // r9d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v13; // r10d
  int v14; // r9d
  unsigned int *Pool2; // r14
  unsigned int v16; // r13d
  int v17; // edx
  __int64 v18; // r9
  _QWORD *v19; // r15
  unsigned int v20; // r11d
  int v21; // edx
  int v22; // r9d
  int v23; // eax
  unsigned __int64 v24; // rdx
  int v26; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+28h] [rbp-D8h]
  int v28; // [rsp+30h] [rbp-D0h]
  int v29; // [rsp+38h] [rbp-C8h]
  unsigned int v30; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-9Ch] BYREF
  _DXGK_CHILD_CAPABILITIES v32; // [rsp+68h] [rbp-98h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v33; // [rsp+78h] [rbp-88h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v34[2]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v35[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int128 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C4h] [rbp-3Ch]
  int v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+CCh] [rbp-34h]
  __int64 v44; // [rsp+D0h] [rbp-30h]
  _DWORD v45[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v46; // [rsp+E8h] [rbp-18h]
  __int128 v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  int v50; // [rsp+110h] [rbp+10h]
  unsigned int v51; // [rsp+114h] [rbp+14h]
  int v52; // [rsp+118h] [rbp+18h]
  int v53; // [rsp+11Ch] [rbp+1Ch]
  __int64 v54; // [rsp+120h] [rbp+20h]

  v30 = 0;
  LOBYTE(v34[0]) = 0;
  v6 = 1;
  v31 = 1;
  v7 = 0;
  v32 = 0LL;
  CDisplayScenarioContextScope::ContextScopeConstructor(v34, (const struct _GUID *)(a3 + 40), 0x3Cu, 0);
  v8 = *(_DWORD *)(a3 + 8);
  v9 = *(_QWORD *)(a1 + 5888);
  v33 = v34[1];
  v36 = 0LL;
  v42 = v8 & 0xFFFFFF;
  v41 = HIBYTE(v8) & 0xF;
  v43 = *(_DWORD *)(a3 + 16);
  v44 = *(_QWORD *)(a1 + 2696);
  v39 = 0LL;
  v35[0] = 30;
  v35[1] = 72;
  v38 = 0LL;
  v37 = 0LL;
  v40 = 92;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v35, v9);
  v10 = *(_DWORD *)(a3 + 8) & 0xFFFFFF;
  v32.Type.Other.MustBeZero = *(_DWORD *)(a3 + 12);
  v32.Type.VideoOutput.MonitorOrientationAwareness = D3DKMDT_MOA_NONE;
  v32.Type.VideoOutput.SupportsSdtvModes = 0;
  v32.HpdAwareness = HpdAwarenessInterruptible;
  ChildDescriptor = DpiFdoGetChildDescriptor(a1, v10);
  if ( !ChildDescriptor )
  {
    v7 = -1073741810;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 20207;
LABEL_29:
    v24 = *(_QWORD *)(a1 + 5888);
    v49 = 0LL;
    v46 = 0LL;
    v54 = *(_QWORD *)(a1 + 2696);
    v45[0] = 30;
    v45[1] = 72;
    v48 = 0LL;
    v47 = 0LL;
    v50 = 93;
    v51 = v6;
    v52 = v7;
    v53 = 0;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v45, v24);
    goto LABEL_30;
  }
  v14 = v12 & 0xF000000;
  if ( ((v14 - 83886080) & 0xFEFFFFFF) != 0 )
  {
    if ( v14 != 0x4000000 )
      goto LABEL_30;
    v31 = *(_DWORD *)(a1 + 3616);
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, 4LL * v31, 1953656900LL);
    if ( !Pool2 )
    {
      v6 = 0x80000000;
      v7 = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 20317;
      goto LABEL_29;
    }
    v7 = DmmBuildDynamicVideoPresentTargetChildRelations(
           *(void **)(a1 + 4032),
           *(_DWORD *)(a3 + 8) & 0xFFFFFF,
           &v31,
           Pool2,
           (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v30);
    if ( v7 >= 0 )
    {
      v16 = v31;
      while ( v16 )
      {
        v17 = Pool2[--v16];
        v19 = DpiFdoGetChildDescriptor(a1, v17);
        if ( v19[6] != v18 )
        {
          LOBYTE(v29) = v18;
          LOBYTE(v28) = v18;
          LOBYTE(v27) = v18;
          LOBYTE(v26) = v18;
          v7 = DpiPdoHandleChildConnectionChange(
                 *(_QWORD *)(a1 + 24),
                 *((unsigned int *)v19 + 6),
                 *((unsigned int *)v19 + 1),
                 v18,
                 v26,
                 v27,
                 v28,
                 v29,
                 v18,
                 a2,
                 v33);
          if ( v7 < 0 )
          {
            v6 = 2;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 20369;
            goto LABEL_16;
          }
        }
        v7 = DmmDestroyDynamicVideoPresentTarget(
               *(void **)(a1 + 4032),
               *((_DWORD *)v19 + 6),
               (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v30);
        if ( v7 < 0 )
          break;
        DpiFdoRemoveChildDescriptor(a1, v19);
      }
    }
    v6 = v30;
LABEL_16:
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    if ( ChildDescriptor[6] )
    {
      v6 = 2;
      v7 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 20227;
      goto LABEL_29;
    }
    if ( IsInternalVideoOutput(v13) )
    {
      v6 = v20;
      v7 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 20242;
      goto LABEL_29;
    }
    if ( DpiFdoGetChildDescriptor(a1, *(_DWORD *)(a3 + 16)) )
    {
      if ( v22 == 83886080 )
      {
        v6 = 3;
        v7 = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 20259;
        goto LABEL_29;
      }
    }
    else
    {
      v7 = DpiFdoCreateChildDescriptor(a1, v21, 0, (int *)&v31, (__int64)&v32, 0);
      if ( v7 < 0 )
      {
        v6 = 0x80000000;
        goto LABEL_28;
      }
      LOBYTE(v6) = 0;
    }
    v23 = DmmCreateDynamicVideoPresentTarget(
            *(void **)(a1 + 4032),
            *(_DWORD *)(a3 + 16),
            *(_DWORD *)(a3 + 8) & 0xFFFFFF,
            &v32,
            v6,
            (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v30);
    v6 = v30;
    v7 = v23;
  }
LABEL_28:
  if ( v7 < 0 )
    goto LABEL_29;
LABEL_30:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v34);
  return (unsigned int)v7;
}
