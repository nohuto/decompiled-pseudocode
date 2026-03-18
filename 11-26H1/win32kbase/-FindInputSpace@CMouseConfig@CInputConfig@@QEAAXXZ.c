/*
 * XREFs of ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x14008EF74
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x14008DB84 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x140211EDC (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputConfig::CMouseConfig::FindInputSpace(CInputConfig::CMouseConfig *this, int a2, int a3)
{
  char v4; // bp
  _QWORD **v5; // rsi
  _QWORD **v6; // r14
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // r15
  _QWORD **v11; // rdx
  _QWORD *i; // r8
  _QWORD **v13; // rax
  _QWORD **v14; // rcx

  *((_QWORD *)this + 1) = 0LL;
  if ( *(_DWORD *)this || (v4 = 1, *((_DWORD *)this + 1)) )
    v4 = 0;
  v5 = 0LL;
  v6 = *(_QWORD ***)(W32GetUserSessionState((_DWORD)this, a2, a3) + 18680);
  UserSessionState = W32GetUserSessionState(v8, v7, v9);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
  v11 = (_QWORD **)*v6;
  for ( i = (_QWORD *)**v6; ; i = (_QWORD *)*i )
  {
    v13 = 0LL;
    if ( v11 != v6 )
      v13 = v11 + 2;
    if ( !v13 )
      break;
    v14 = 0LL;
    if ( v11 != v6 )
      v14 = v11 + 2;
    if ( v4 )
    {
      if ( ((_BYTE)v14[1] & 1) != 0 )
        goto LABEL_12;
    }
    else if ( *(_DWORD *)this == *(_DWORD *)v14 && *((_DWORD *)this + 1) == *((_DWORD *)v14 + 1) )
    {
LABEL_12:
      *((_QWORD *)this + 1) = v14;
      break;
    }
    if ( ((_DWORD)v14[1] & 1) != 0 || !v5 )
      v5 = v14;
    v11 = (_QWORD **)i;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  if ( !*((_QWORD *)this + 1) )
  {
    *((_QWORD *)this + 1) = v5;
    if ( !v5 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 877LL);
  }
}
