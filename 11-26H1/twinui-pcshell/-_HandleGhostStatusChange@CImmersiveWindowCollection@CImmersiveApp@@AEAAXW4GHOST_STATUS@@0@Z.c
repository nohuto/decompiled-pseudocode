/*
 * XREFs of ?_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z @ 0x18005E85C
 * Callers:
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800585E4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1802167CC (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 * Callees:
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18005D718 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ??$GhostStatusChange@AEAPEAGAEAKAEAW4GHOST_STATUS@@AEAW41@@IamTraceLogging@@SAXAEAPEAGAEAKAEAW4GHOST_STATUS@@2@Z @ 0x18005E9B8 (--$GhostStatusChange@AEAPEAGAEAKAEAW4GHOST_STATUS@@AEAW41@@IamTraceLogging@@SAXAEAPEAGAEAKAEAW4G.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1802C09F4 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_HandleGhostStatusChange(
        CImmersiveApp::CImmersiveWindowCollection *a1,
        int a2,
        int a3)
{
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // si
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  v4 = a2;
  v5 = a3;
  result = IamTraceLogging::GhostStatusChange<unsigned short * &,unsigned long &,enum GHOST_STATUS &,enum GHOST_STATUS &>(
             *((_QWORD *)a1 + 19) + 576LL,
             *((_QWORD *)a1 + 19) + 584LL,
             &v7,
             &v8);
  if ( ((v5 ^ v4) & 2) != 0 )
  {
    if ( (v5 & 2) != 0 )
      return CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(a1, 0LL, 2LL);
    else
      return CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(a1, 2u);
  }
  return result;
}
