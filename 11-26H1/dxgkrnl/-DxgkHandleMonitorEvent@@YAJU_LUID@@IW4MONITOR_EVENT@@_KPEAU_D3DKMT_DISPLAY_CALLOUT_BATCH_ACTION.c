/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403ABC4C
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x140410AB0 (DxgkPollDisplayChildrenInternal.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x140438A20 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x140011108 (McTemplateK0tt_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x140067E2C (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CF2D8 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ABFD4 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403AC52C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1403ADEB8 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1403ADF00 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     DxgkSetPresenterViewMode @ 0x140413F50 (DxgkSetPresenterViewMode.c)
 */

__int64 __fastcall DxgkHandleMonitorEvent(struct _LUID a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int v5; // r14d
  unsigned __int64 v9; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v10; // r15
  struct DXGGLOBAL *Global; // rcx
  struct DXGGLOBAL *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // zf
  int v17; // eax
  DXGGLOBAL *v18; // rax
  struct DXGADAPTER *v19; // rax
  char v20; // cl
  char v21; // dl
  unsigned int CurrentProcessSessionId; // eax
  struct _LUID v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+5Ch] [rbp-A4h]
  int v27; // [rsp+60h] [rbp-A0h]
  char v28; // [rsp+70h] [rbp-90h]
  __int16 v29; // [rsp+71h] [rbp-8Fh]
  char v30; // [rsp+73h] [rbp-8Dh]
  char v31; // [rsp+74h] [rbp-8Ch]
  char v32; // [rsp+75h] [rbp-8Bh]
  char v33; // [rsp+77h] [rbp-89h]
  int v34; // [rsp+78h] [rbp-88h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v35; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v36; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v38[12]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v39; // [rsp+D0h] [rbp-30h]
  unsigned int v40; // [rsp+D4h] [rbp-2Ch]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  struct _LUID v42; // [rsp+E0h] [rbp-20h]
  unsigned int v43; // [rsp+E8h] [rbp-18h]
  int v44; // [rsp+ECh] [rbp-14h]
  int v45; // [rsp+F0h] [rbp-10h]
  int v46; // [rsp+F4h] [rbp-Ch]
  int v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+FCh] [rbp-4h]

  v24 = a1;
  v5 = 0;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)&v25);
  if ( a3 == 12 )
    v29 = 0;
  else
    *(_BYTE *)a5 |= 2u;
  v9 = *(_QWORD *)(a5 + 32);
  LOBYTE(v35) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(
    &v35,
    (const struct _GUID *)(v9 & ((unsigned __int128)-(__int128)v9 >> 64)),
    0,
    0);
  v10 = v36;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_11;
  if ( a3 == 10 )
  {
    if ( a4 == 2 )
    {
LABEL_11:
      Global = DXGGLOBAL::GetGlobal();
      _InterlockedExchange((volatile __int32 *)Global + 342, 0);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0tt_EtwWriteTransfer((__int64)Global, (__int64)&EventDxgkSetPresenterViewMode);
      v5 = HandleMonitorDepartureCase(&v25, &v24, a2, a3, a4, v10);
      v12 = DXGGLOBAL::GetGlobal();
      RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)v12 + 305640, 1u, *(_QWORD *)&v24);
LABEL_28:
      if ( v5 < 0 )
        goto LABEL_40;
      goto LABEL_29;
    }
    v16 = a4 == 1;
  }
  else
  {
    if ( !a3 && ((a4 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a4 != 2 || a3 == 1 && !a4 )
      goto LABEL_26;
    v16 = a3 == 3;
  }
  if ( v16 )
  {
LABEL_26:
    DxgkSetPresenterViewMode(0LL, 0LL);
    v17 = HandleMonitorArrival(&v25, &v24, a2, a3, a4, v10);
LABEL_27:
    v5 = v17;
    goto LABEL_28;
  }
  if ( a3 == 6 )
  {
    if ( a4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4442;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_Parameter == (ULONG_PTR) 0", 4442LL, 0LL, 0LL, 0LL, 0LL);
    }
    v17 = HandleRapidHPDAction((struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v25, &v24, a2, v10);
    goto LABEL_27;
  }
LABEL_29:
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors() && !v26 )
  {
    v18 = DXGGLOBAL::GetGlobal();
    v19 = DXGGLOBAL::ReferenceAdapterByLuid(v18, v24, &v37);
    if ( v19 )
    {
      *(_BYTE *)a5 |= 16 * (*(_BYTE *)(*((_QWORD *)v19 + 395) + 24LL) & 1);
      DXGADAPTER::ReleaseReference(v19);
    }
  }
  if ( a3 && a3 != 12 || (v20 = 32, a4 != 1) )
    v20 = 0;
  LOBYTE(v13) = *(_BYTE *)a5 & 0xDF ^ (v20 | *(_BYTE *)a5) & 0x20;
  *(_BYTE *)a5 = v13;
  if ( v28 )
  {
    v21 = v13 & 0xFB ^ ((HIBYTE(v29) != 0 ? 4 : 0) | v13 & 4);
    LOBYTE(v14) = v21 & 0xF7;
    LOBYTE(v13) = (v33 != 0 ? 0x40 : 0) | (v21 & 0xF7 ^ ((v32 != 0 ? 8 : 0) | v21 & 8)) & 0xBF;
    *(_BYTE *)a5 = v13;
  }
  else
  {
    *(_BYTE *)(a5 + 1) = *(_BYTE *)(a5 + 1) & 0xFE | (a3 == 9);
  }
LABEL_40:
  v38[0] = 2;
  v38[1] = 96;
  memset(&v38[2], 0, 40);
  v40 = a3;
  v41 = a4;
  v42 = v24;
  v44 = v34;
  v46 = v25;
  v47 = v27;
  v48 = v26;
  v39 = HIBYTE(v29) & 1 | (4 * (v30 & 1 | (2 * (v31 & 1))));
  v43 = a2;
  v45 = v5;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v39, v13, v14, v15);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v38, CurrentProcessSessionId);
  if ( (_BYTE)v35 )
    DisplayScenarioContextDissociate(&v36);
  return (unsigned int)v5;
}
