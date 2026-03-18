/*
 * XREFs of ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1401F81F0
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F7CFC (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401479E0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputConfig::_FindDefaultInputSpace(CInputConfig *this, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // rdi
  _QWORD **v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // r14
  _QWORD *v11; // rsi
  int v12; // eax
  __int64 UserSessionState; // [rsp+68h] [rbp+10h]

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD ***)(W32GetUserSessionState(this, a2) + 18632);
  UserSessionState = W32GetUserSessionState(v7, v6);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18640));
  v9 = *v5;
  v10 = (_QWORD *)**v5;
  while ( 1 )
  {
    v11 = 0LL;
    if ( v9 != v5 )
      v11 = v9 + 2;
    if ( !v11 )
      break;
    if ( !CInputConfig::LockExclusivelyHeld((__int64)v9, v8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 384);
    v12 = *((_DWORD *)v11 + 2);
    if ( *((_BYTE *)v11 + 1448) )
      v2 = v11;
    if ( (v12 & 1) != 0 )
    {
      v3 = v11;
      *((_DWORD *)v11 + 2) = v12 & 0xFFFFFFFE;
    }
    v9 = v10;
    v10 = (_QWORD *)*v10;
    if ( !v4 )
      v4 = v11;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18640));
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 831);
  if ( !v2 )
  {
    if ( v3 )
    {
      v2 = v3;
    }
    else
    {
      v2 = v4;
      if ( !v4 )
        return;
    }
  }
  *((_DWORD *)v2 + 2) |= 1u;
}
