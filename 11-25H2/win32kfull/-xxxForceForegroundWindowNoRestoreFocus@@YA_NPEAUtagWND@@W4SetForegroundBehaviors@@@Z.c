/*
 * XREFs of ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x14023A8E4
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140187CB8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x140238340 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x14026AB74 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     NtUserNavigateFocus @ 0x14029B410 (NtUserNavigateFocus.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline @ 0x14027A134 (Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall xxxForceForegroundWindowNoRestoreFocus(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct tagTHREADINFO *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v14; // rsi
  struct tagTHREADINFO *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx

  if ( (unsigned int)Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = a2 | 0x40;
    v7 = PtiCurrent(v5, v4);
    if ( (unsigned __int8)IsInputThread(v9, v8, v10)
      || *(struct tagTHREADINFO **)(W32GetUserSessionState(v12, v11) + 18648) == v7 )
    {
      v6 |= 0x400u;
    }
    return xxxSetForegroundWindowWithOptions(a1, 31LL, v6);
  }
  else
  {
    v14 = PtiCurrent(v5, v4);
    v15 = 0LL;
    if ( !(unsigned __int8)IsInputThread(v17, v16, v18)
      && *(struct tagTHREADINFO **)(W32GetUserSessionState(v20, v19) + 18648) != v14 )
    {
      v15 = v14;
    }
    return (unsigned int)xxxSetForegroundWindow2(a1, v15, a2 | 0x40u) != 0;
  }
}
