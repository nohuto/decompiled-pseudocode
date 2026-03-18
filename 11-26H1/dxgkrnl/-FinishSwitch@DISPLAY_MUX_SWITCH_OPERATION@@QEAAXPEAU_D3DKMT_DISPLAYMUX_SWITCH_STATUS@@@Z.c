/*
 * XREFs of ?FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z @ 0x14008C2F8
 * Callers:
 *     DxgkDisplayMuxSwitchFinish @ 0x1400912B4 (DxgkDisplayMuxSwitchFinish.c)
 * Callees:
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1400577A0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     _DXGKCALLONEXIT__lambda_3df126e43ef527cc1a2970c1b44a89a0____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A200 (_DXGKCALLONEXIT__lambda_3df126e43ef527cc1a2970c1b44a89a0____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x14008A910 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?CheckForMdmFaultOrDelayInjection@@YA_NW4_D3DKMT_DISPLAYMUX_SWITCH_INJECTION_STAGE@@W4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@@Z @ 0x14008ABA4 (-CheckForMdmFaultOrDelayInjection@@YA_NW4_D3DKMT_DISPLAYMUX_SWITCH_INJECTION_STAGE@@W4_D3DKMT_DI.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z @ 0x1400937E0 (--0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z.c)
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x140093840 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 *     DpiDxgkDdiDisplayMuxPostSwitchAway @ 0x140093D5C (DpiDxgkDdiDisplayMuxPostSwitchAway.c)
 *     DpiDxgkDdiDisplayMuxPostSwitchToPhase2 @ 0x140093EB4 (DpiDxgkDdiDisplayMuxPostSwitchToPhase2.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkWriteDiagEntry @ 0x14031B9C0 (DxgkWriteDiagEntry.c)
 */

void __fastcall DISPLAY_MUX_SWITCH_OPERATION::FinishSwitch(
        DISPLAY_MUX_SWITCH_OPERATION *this,
        struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *a2)
{
  int AdapterAndAcquire; // eax
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  int v7; // eax
  _BYTE v8[8]; // [rsp+30h] [rbp-79h] BYREF
  PVOID v9; // [rsp+38h] [rbp-71h] BYREF
  char v10; // [rsp+40h] [rbp-69h]
  PVOID v11; // [rsp+48h] [rbp-61h] BYREF
  char v12; // [rsp+50h] [rbp-59h]
  _QWORD v13[2]; // [rsp+58h] [rbp-51h] BYREF
  char v14; // [rsp+68h] [rbp-41h]
  _BYTE v15[8]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v16; // [rsp+78h] [rbp-31h]
  int v17; // [rsp+90h] [rbp-19h]
  _DWORD v18[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-1h]
  __int128 v20; // [rsp+B0h] [rbp+7h]
  __int64 v21; // [rsp+C0h] [rbp+17h]
  __int64 v22; // [rsp+C8h] [rbp+1Fh]
  __int64 v23; // [rsp+D0h] [rbp+27h]
  __int64 v24; // [rsp+D8h] [rbp+2Fh]
  struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *v25; // [rsp+118h] [rbp+6Fh] BYREF

  v25 = a2;
  v13[0] = this;
  v14 = 1;
  v13[1] = &v25;
  v9 = 0LL;
  v10 = 0;
  AdapterAndAcquire = AUTO_REMOVE_LOCK::FindAdapterAndAcquire(
                        (AUTO_REMOVE_LOCK *)&v9,
                        (struct _LUID *)((char *)this + 68));
  if ( !CheckFailed(AdapterAndAcquire, 1283, (__int64)this + 92, 0x452u) )
  {
    v11 = 0LL;
    v12 = 0;
    v4 = AUTO_REMOVE_LOCK::FindAdapterAndAcquire((AUTO_REMOVE_LOCK *)&v11, (struct _LUID *)this + 10);
    if ( !CheckFailed(v4, 1281, (__int64)this + 92, 0x45Au) )
    {
      CInterfaceCallContext::CInterfaceCallContext(v15, v11);
      if ( !CheckFailed(v17, 1285, (__int64)this + 92, 0x462u)
        && !CheckForMdmFaultOrDelayInjection(16, 1282, (__int64)this + 92) )
      {
        v5 = *((unsigned int *)this + 22);
        v8[0] = 0;
        v6 = DpiDxgkDdiDisplayMuxPostSwitchToPhase2(v16, v5, v8);
        if ( v6 >= 0 )
          *((_DWORD *)this + 1) = 3;
        if ( !CheckFailed(v6, 1282, (__int64)this + 92, 0x470u) )
        {
          if ( !v8[0] )
          {
            *((_DWORD *)this + 76) |= 4u;
            v22 = 0LL;
            v18[0] = 6;
            v19 = 0LL;
            v20 = 0LL;
            v18[1] = 64;
            v21 = 0LL;
            v23 = 137LL;
            v24 = 0LL;
            DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v18);
          }
          CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v15);
          CInterfaceCallContext::CInterfaceCallContext(v15, v9);
          if ( !CheckFailed(v17, 1286, (__int64)this + 92, 0x485u)
            && !CheckForMdmFaultOrDelayInjection(17, 1284, (__int64)this + 92) )
          {
            v7 = DpiDxgkDdiDisplayMuxPostSwitchAway(v16, *((unsigned int *)this + 19));
            if ( v7 >= 0 )
              *(_DWORD *)this = 3;
            CheckFailed(v7, 1284, (__int64)this + 92, 0x492u);
          }
        }
      }
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v15);
    }
    AUTO_REMOVE_LOCK::Release(&v11);
  }
  AUTO_REMOVE_LOCK::Release(&v9);
  DXGKCALLONEXIT__lambda_3df126e43ef527cc1a2970c1b44a89a0____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v13);
}
