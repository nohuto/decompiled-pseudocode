/*
 * XREFs of xxxCleanupThreadPointerInputInfo @ 0x1402471B0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCleanupThreadPointerData@@YAXPEAUtagTHREADINFO@@@Z @ 0x140139210 (-xxxCleanupThreadPointerData@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140276FFC (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall xxxCleanupThreadPointerInputInfo(struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  if ( a1 == *(struct tagTHREADINFO **)(W32GetUserSessionState(a1, a2) + 18824) )
  {
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      UserSessionState = W32GetUserSessionState(v4, v3);
      CTouchProcessor::CleanupManipulationThreadData(*(CTouchProcessor **)(UserSessionState + 3256));
    }
    *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18824) = 0LL;
  }
  xxxCleanupThreadPointerData(a1);
}
