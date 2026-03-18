/*
 * XREFs of IsKeyboardIVEnabled @ 0x14005DFE8
 * Callers:
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14005DEB0 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 *     RIMInitialize @ 0x14005E170 (RIMInitialize.c)
 * Callees:
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1400C8E98 (UseVelocityToEnableIV.c)
 */

char IsKeyboardIVEnabled()
{
  char v0; // bl
  __int64 v1; // rdx
  __int64 v2; // rcx

  v0 = 0;
  if ( (unsigned __int8)UseVelocityToEnableIV()
    || (unsigned __int8)isChildPartition() && *(_BYTE *)(W32GetUserSessionState(v2, v1) + 19361) )
  {
    return 1;
  }
  return v0;
}
