/*
 * XREFs of IsKeyboardIVEnabled @ 0x14010FD58
 * Callers:
 *     RIMInitialize @ 0x14010F990 (RIMInitialize.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14010FC20 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x14010FD9C (UseVelocityToEnableIV.c)
 */

char IsKeyboardIVEnabled()
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  char v3; // bl
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  v3 = 0;
  if ( (unsigned __int8)UseVelocityToEnableIV()
    || isChildPartition(v1, v0, v2) && *(_BYTE *)(W32GetUserSessionState(v6, v5, v7) + 19393) )
  {
    return 1;
  }
  return v3;
}
