/*
 * XREFs of WakeRIT @ 0x1401E8158
 * Callers:
 *     WaitForRitDisEngagement @ 0x1401E8004 (WaitForRitDisEngagement.c)
 *     _EnableSessionForMMCSS @ 0x1401E80D8 (_EnableSessionForMMCSS.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 *     WakeRITForShutdown @ 0x140223A10 (WakeRITForShutdown.c)
 *     EditionInitiateMouseEventProcessing @ 0x140238610 (EditionInitiateMouseEventProcessing.c)
 *     EditionDeactivateMitInput @ 0x140247350 (EditionDeactivateMitInput.c)
 *     WakeRITForConfigSwitch @ 0x1402773C0 (WakeRITForConfigSwitch.c)
 *     EditionIVSyncForeground @ 0x140279EE0 (EditionIVSyncForeground.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WakeRIT(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rdx
  signed __int32 v6; // eax
  __int64 v7; // rcx
  signed __int32 v8; // ett
  __int64 v9; // rax

  v2 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18680) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    _m_prefetchw((const void *)(UserSessionState + 18692));
    v6 = *(_DWORD *)(UserSessionState + 18692);
    do
    {
      v7 = v2 | v6;
      v8 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(UserSessionState + 18692), v7, v6);
    }
    while ( v8 != v6 );
    if ( (v6 & v2) == 0 )
    {
      v9 = W32GetUserSessionState(v7, UserSessionState);
      KeSetEvent(*(PRKEVENT *)(v9 + 18680), 1, 0);
    }
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(W32GetUserSessionState(v4, v3) + 18688), v2);
    return 0LL;
  }
}
