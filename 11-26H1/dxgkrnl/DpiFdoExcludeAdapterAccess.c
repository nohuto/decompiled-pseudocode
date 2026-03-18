/*
 * XREFs of DpiFdoExcludeAdapterAccess @ 0x140241720
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401E08E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1401E09BC (DxgkRequestSyncDisplaySwitchCallout.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiRequestIoPowerState @ 0x1403BE7FC (DpiRequestIoPowerState.c)
 *     DpiDxgkDdiProtectedCallback @ 0x14040E1D0 (DpiDxgkDdiProtectedCallback.c)
 */

void __fastcall DpiFdoExcludeAdapterAccess(_QWORD *IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rbx
  int v5; // r13d
  bool v6; // r15
  __int64 v7; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r12
  int SDCFlags; // edi
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  int v12; // eax
  int v13; // r8d
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  unsigned __int64 v18; // r8
  char v19; // [rsp+30h] [rbp-D0h]
  struct _DXGK_WIN32K_PARAM_DATA v20; // [rsp+38h] [rbp-C8h] BYREF
  PIO_WORKITEM IoWorkItema; // [rsp+58h] [rbp-A8h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v22; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // [rsp+68h] [rbp-98h]
  _OWORD v24[5]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v25[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int128 v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  int v30; // [rsp+F0h] [rbp-10h]
  ULONG v31; // [rsp+F4h] [rbp-Ch]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  __int64 v33; // [rsp+100h] [rbp+0h]

  v3 = IoObject[8];
  IoWorkItema = IoWorkItem;
  v5 = (int)IoObject;
  v19 = 0;
  LOBYTE(v22) = 0;
  v6 = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v22, 0LL, 0xDu, 0);
  v8 = v23;
  if ( *(_BYTE *)(v3 + 480) )
  {
    SDCFlags = -1073741637;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6306;
LABEL_15:
    DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)SDCFlags);
    goto LABEL_18;
  }
  if ( (Context[2] & 1) != 0 )
  {
    v10 = *(_QWORD *)(v3 + 5888);
    v26 = 0LL;
    LOBYTE(v7) = 1;
    v33 = *(_QWORD *)(v3 + 2696);
    v20.PathsArray = (PVOID)4;
    memset(&v20.ModesArray, 0, 24);
    v29 = 0LL;
    v25[0] = 30;
    v25[1] = 72;
    v28 = 0LL;
    v27 = 0LL;
    v30 = 43;
    v32 = 0LL;
    SMgrGdiCallout(&v20, v10, v7, 0LL, 0LL, v23);
    v11 = *(_QWORD *)(v3 + 5888);
    SDCFlags = v20.SDCFlags;
    v31 = v20.SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v25, v11);
    if ( SDCFlags < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6341;
      goto LABEL_15;
    }
  }
  if ( (Context[2] & 2) == 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
    KeWaitForSingleObject((PVOID)(v3 + 176), Executive, 0, 0, 0LL);
    v19 = 1;
    if ( *(_DWORD *)(v3 + 236) != 2 || *(_DWORD *)(v3 + 4120) == 1 || *(_DWORD *)(v3 + 284) != 1 )
    {
      SDCFlags = -1073741661;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6366;
      goto LABEL_15;
    }
  }
  v12 = DpiRequestIoPowerState(v5, 5, v7, *((_DWORD *)Context + 4), 0LL);
  SDCFlags = v12;
  if ( v12 < 0 )
  {
    v6 = v12 == -1071775482;
    goto LABEL_15;
  }
  DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v12);
  SDCFlags = DpiRequestIoPowerState(v5, 6, v13, *((_DWORD *)Context + 4), 0LL);
  if ( SDCFlags < 0 )
  {
    SDCFlags = 0;
    v6 = 1;
  }
LABEL_18:
  if ( v19 == 1 )
  {
    KeReleaseMutex((PRKMUTEX)(v3 + 176), 0);
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
  }
  memset(v24, 0, 0x48uLL);
  if ( (Context[2] & 1) != 0 )
  {
    v15 = *(_QWORD *)(v3 + 2696);
    *((_QWORD *)&v24[3] + 1) = 0LL;
    memset(&v24[1], 0, 28);
    *(_QWORD *)&v24[4] = v15;
    v24[0] = 0x480000001EuLL;
    LOBYTE(v14) = 1;
    LODWORD(v24[3]) = 44;
    v16 = *(_QWORD *)(v3 + 5888);
    v20.PathsArray = (PVOID)4;
    *(_QWORD *)&v20.SDCFlags = 0LL;
    *(_QWORD *)&v20.NumPathArrayElements = 1LL;
    v20.ModesArray = 0LL;
    SMgrGdiCallout(&v20, v16, v14, 0LL, 0LL, v8);
    DWORD1(v24[3]) = v20.SDCFlags;
    SDCFlags = v20.SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24, *(_QWORD *)(v3 + 5888));
    if ( (v20.SDCFlags & 0x80000000) != 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6490;
    }
  }
  if ( v6 )
  {
    *(_OWORD *)&v20.NumPathArrayElements = 0LL;
    v20.SDCFlags = 143;
    *(_OWORD *)&v20.PathsArray = 0LL;
    memset(v24, 0, 0x48uLL);
    *(_QWORD *)&v24[4] = *(_QWORD *)(v3 + 2696);
    v17 = *((_DWORD *)Context + 4);
    v24[0] = 0x480000001EuLL;
    v24[3] = 0x2DuLL;
    memset(&v24[1], 0, 28);
    v18 = *(_QWORD *)(v3 + 5888);
    if ( (v17 & 2) != 0 )
    {
      DxgkRequestAsyncDisplaySwitchCallout(&v20, (const struct _GUID *)v8, v18);
    }
    else
    {
      SDCFlags = DxgkRequestSyncDisplaySwitchCallout(&v20, (const struct _GUID *)v8, v18);
      if ( SDCFlags < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 6526;
      }
    }
    DWORD1(v24[3]) = SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24, *(_QWORD *)(v3 + 5888));
  }
  if ( (Context[2] & 2) != 0 )
    KeSetEvent((PRKEVENT)Context[3], 0, 0);
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItema);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItema, 0x20u);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v22);
}
