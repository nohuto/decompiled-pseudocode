/*
 * XREFs of ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x14008F734
 * Callers:
 *     ??1DISPLAY_MUX_SWITCH_OPERATION@@QEAA@XZ @ 0x14008A130 (--1DISPLAY_MUX_SWITCH_OPERATION@@QEAA@XZ.c)
 *     _DXGKCALLONEXIT__lambda_3df126e43ef527cc1a2970c1b44a89a0____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A200 (_DXGKCALLONEXIT__lambda_3df126e43ef527cc1a2970c1b44a89a0____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     _DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A2B4 (_DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1400577A0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ??1DXGKCALLONEXIT@?1???$DXGKCALLONEXIT@V_lambda_185d87d944743aa6a3f01ca06f509bbd_@@@@YA?A_PV_lambda_185d87d944743aa6a3f01ca06f509bbd_@@@Z@QEAA@XZ @ 0x14008A1AC (--1DXGKCALLONEXIT@-1---$DXGKCALLONEXIT@V_lambda_185d87d944743aa6a3f01ca06f509bbd_@@@@YA-A_PV_lam.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x14008CDC4 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 *     ?QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z @ 0x14008EA20 (-QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z.c)
 *     ?SetAdapterAllowedToReportDisplayMuxHpd@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x14008F3AC (-SetAdapterAllowedToReportDisplayMuxHpd@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_TARG.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z @ 0x1400937E0 (--0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z.c)
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x140093840 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 *     DpiDxgkDdiDisplayMuxSwitchCanceled @ 0x1400942D0 (DpiDxgkDdiDisplayMuxSwitchCanceled.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401E08E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     DxgkWriteDiagEntry @ 0x14031B9C0 (DxgkWriteDiagEntry.c)
 */

void __fastcall DISPLAY_MUX_SWTICH_DDI_TRACKING::SwitchCanceled(
        DISPLAY_MUX_SWTICH_DDI_TRACKING *this,
        unsigned __int8 a2)
{
  int v2; // ebx
  unsigned int v4; // ecx
  unsigned int v5; // r8d
  struct _LUID v6; // rdx
  int IsTargetPartOfMux; // eax
  struct _LUID *v8; // rbx
  int AdapterAndAcquire; // eax
  __int64 v10; // rsi
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rbx
  unsigned __int8 v18; // [rsp+50h] [rbp-B0h] BYREF
  char v19; // [rsp+51h] [rbp-AFh] BYREF
  char v20; // [rsp+52h] [rbp-AEh] BYREF
  unsigned __int8 v21; // [rsp+58h] [rbp-A8h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v22; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // [rsp+68h] [rbp-98h]
  struct _DEVICE_OBJECT *v24[4]; // [rsp+70h] [rbp-90h] BYREF
  int v25; // [rsp+90h] [rbp-70h]
  _QWORD v26[5]; // [rsp+A0h] [rbp-60h] BYREF
  char v27; // [rsp+C8h] [rbp-38h]
  _OWORD v28[4]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = a2;
  v21 = a2;
  v19 = 0;
  v20 = 0;
  v18 = 0;
  memset(v28, 0, sizeof(v28));
  v4 = v2 | DWORD2(v28[3]) & 0xFFFFFFFE;
  LODWORD(v28[3]) = *((_DWORD *)this + 1);
  DWORD1(v28[3]) = *(_DWORD *)this;
  DWORD2(v28[3]) = v4;
  if ( (_BYTE)v2 )
  {
    v28[0] = 0x4000000037uLL;
    DWORD2(v28[3]) = v4 | 0x20;
    memset(&v28[1], 0, 28);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v28);
  }
  v27 = 1;
  v26[0] = &v21;
  v26[1] = &v20;
  v26[2] = v28;
  v26[3] = &v18;
  v26[4] = &v19;
  if ( *((_DWORD *)this + 1) == 2 || *(_DWORD *)this == 2 )
  {
    v5 = *((_DWORD *)this + 7);
    v6 = *(struct _LUID *)((char *)this + 20);
    v20 = 1;
    IsTargetPartOfMux = DISPLAY_MUX_MGR::IsTargetPartOfMux(qword_140169448, v6, v5, &v18, 0LL);
    if ( IsTargetPartOfMux < 0 )
    {
      v18 = *((_BYTE *)this + 32);
      WdLogSingleEntry2(2LL, IsTargetPartOfMux, v18);
      WdLogGlobalForLineNumber = 227;
    }
    if ( *(_DWORD *)this == 2 )
    {
      v8 = (struct _LUID *)((char *)this + 8);
      v22 = 0LL;
      LOBYTE(v23) = 0;
      AdapterAndAcquire = AUTO_REMOVE_LOCK::FindAdapterAndAcquire((AUTO_REMOVE_LOCK *)&v22, (struct _LUID *)this + 1);
      v10 = AdapterAndAcquire;
      if ( AdapterAndAcquire < 0 )
      {
        WdLogSingleEntry3(2LL, *((int *)this + 3), v8->LowPart, AdapterAndAcquire);
        WdLogGlobalForLineNumber = 265;
      }
      else
      {
        CInterfaceCallContext::CInterfaceCallContext(v24, v22);
        if ( v25 < 0 )
        {
          WdLogSingleEntry3(2LL, *((int *)this + 3), v8->LowPart, v10);
          WdLogGlobalForLineNumber = 260;
        }
        else
        {
          DWORD2(v28[3]) |= 8u;
          LOBYTE(v11) = v18 == 0;
          if ( (int)DpiDxgkDdiDisplayMuxSwitchCanceled(v22, *((unsigned int *)this + 4), v11) < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 246;
          }
          DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(
            qword_140169448,
            (DISPLAY_MUX_SWTICH_DDI_TRACKING *)((char *)this + 8));
          if ( (int)QueryConnectionChanges(
                      v24[0],
                      *v8,
                      (struct _GUID *)((char *)this + 36),
                      (struct _GUID *)((char *)this + 52)) < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 254;
          }
          DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(qword_140169448, 0LL);
        }
        CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v24);
      }
      v19 = 1;
      *(_DWORD *)this = 3;
      AUTO_REMOVE_LOCK::Release((PVOID *)&v22);
    }
    if ( *((_DWORD *)this + 1) == 2 )
    {
      v22 = 0LL;
      LOBYTE(v23) = 0;
      v12 = AUTO_REMOVE_LOCK::FindAdapterAndAcquire((AUTO_REMOVE_LOCK *)&v22, (struct _LUID *)((char *)this + 20));
      v13 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry3(2LL, *((int *)this + 6), *((unsigned int *)this + 5), v12);
        WdLogGlobalForLineNumber = 310;
      }
      else
      {
        CInterfaceCallContext::CInterfaceCallContext(v24, v22);
        if ( v25 < 0 )
        {
          WdLogSingleEntry3(2LL, *((int *)this + 3), *((unsigned int *)this + 2), v13);
          WdLogGlobalForLineNumber = 305;
        }
        else
        {
          LOBYTE(v14) = v18;
          v15 = *((unsigned int *)this + 7);
          DWORD2(v28[3]) |= 0x10u;
          if ( (int)DpiDxgkDdiDisplayMuxSwitchCanceled(v22, v15, v14) < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 291;
          }
          DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(
            qword_140169448,
            (DISPLAY_MUX_SWTICH_DDI_TRACKING *)((char *)this + 20));
          if ( (int)QueryConnectionChanges(
                      v24[0],
                      *(struct _LUID *)((char *)this + 20),
                      (struct _GUID *)((char *)this + 36),
                      (struct _GUID *)((char *)this + 52)) < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 299;
          }
          DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(qword_140169448, 0LL);
        }
        CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v24);
      }
      v19 = 1;
      *((_DWORD *)this + 1) = 3;
      AUTO_REMOVE_LOCK::Release((PVOID *)&v22);
    }
    if ( v19 )
    {
      LOBYTE(v22) = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor(&v22, 0LL, 0x4Du, 0);
      v16 = DxgkRequestAsyncDisplaySwitchCallout(0LL, v23);
      if ( v16 < 0 )
      {
        v17 = v16;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 327;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed DxgkRequestAsyncDisplaySwitchCallout for DisplayMux switch failure (Status = 0x%I64x).",
          v17,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v22);
    }
  }
  `DXGKCALLONEXIT<_lambda_185d87d944743aa6a3f01ca06f509bbd_>'::`2'::DXGKCALLONEXIT::~DXGKCALLONEXIT((__int64)v26);
}
