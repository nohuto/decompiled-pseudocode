/*
 * XREFs of EditionInitiateMouseEventProcessing @ 0x140238610
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1401E8158 (WakeRIT.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x14021DA40 (-xxxUserBeep@@YAHKK_N@Z.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140276FFC (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall EditionInitiateMouseEventProcessing(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf
  __int64 result; // rax
  __int64 v8; // rdx

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    v6 = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 18744) == 0;
  else
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(W32GetUserSessionState(v5, v4) + 16340), 1, 1) == 0;
  if ( v6 )
  {
    EtwTraceWakeRIT(1LL);
    result = WakeRIT(1LL, v8);
  }
  else
  {
    EtwTraceWakeMIT(1LL);
    result = WakeMIT(1LL);
  }
  if ( a1 )
    return xxxUserBeep(440LL, 125LL, a2 == 0);
  return result;
}
