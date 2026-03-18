/*
 * XREFs of ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x14012FF64
 * Callers:
 *     NtSetCursorInputSpace @ 0x1401BBB70 (NtSetCursorInputSpace.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F7CFC (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputConfig::CMouseConfig::FindInputSpace(CInputConfig::CMouseConfig *this, __int64 a2)
{
  char v3; // bp
  _QWORD **v4; // rsi
  _QWORD **v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // r15
  _QWORD **v9; // rdx
  _QWORD *i; // r8
  _QWORD **v11; // rcx
  _QWORD **v12; // rcx

  *((_QWORD *)this + 1) = 0LL;
  if ( *(_DWORD *)this || (v3 = 1, *((_DWORD *)this + 1)) )
    v3 = 0;
  v4 = 0LL;
  v5 = *(_QWORD ***)(W32GetUserSessionState(this, a2) + 18632);
  UserSessionState = W32GetUserSessionState(v7, v6);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18640));
  v9 = (_QWORD **)*v5;
  for ( i = (_QWORD *)**v5; ; i = (_QWORD *)*i )
  {
    v11 = 0LL;
    if ( v9 != v5 )
      v11 = v9 + 2;
    if ( !v11 )
      break;
    v12 = 0LL;
    if ( v9 != v5 )
      v12 = v9 + 2;
    if ( v3 )
    {
      if ( ((_BYTE)v12[1] & 1) != 0 )
        goto LABEL_12;
    }
    else if ( *(_DWORD *)this == *(_DWORD *)v12 && *((_DWORD *)this + 1) == *((_DWORD *)v12 + 1) )
    {
LABEL_12:
      *((_QWORD *)this + 1) = v12;
      break;
    }
    if ( ((_DWORD)v12[1] & 1) != 0 || !v4 )
      v4 = v12;
    v9 = (_QWORD **)i;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18640));
  if ( !*((_QWORD *)this + 1) )
  {
    *((_QWORD *)this + 1) = v4;
    if ( !v4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 877LL);
  }
}
