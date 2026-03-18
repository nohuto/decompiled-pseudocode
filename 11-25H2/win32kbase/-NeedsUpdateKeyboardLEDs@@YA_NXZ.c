/*
 * XREFs of ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x14018A604
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1400BF9C0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DA4 (Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline.c)
 */

char NeedsUpdateKeyboardLEDs(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  char v2; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = 0;
  if ( (unsigned int)Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline() )
    return 0;
  if ( *(_QWORD *)(W32GetUserSessionState(v1, v0) + 12928) )
    return (*(_DWORD *)(W32GetUserSessionState(v5, v4) + 12872) & 7) != 0;
  return v2;
}
