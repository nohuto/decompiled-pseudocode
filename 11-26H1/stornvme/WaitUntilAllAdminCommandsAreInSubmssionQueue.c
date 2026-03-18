/*
 * XREFs of WaitUntilAllAdminCommandsAreInSubmssionQueue @ 0x1400194B4
 * Callers:
 *     NVMeControllerPowerDown @ 0x140007400 (NVMeControllerPowerDown.c)
 *     NVMeControllerCompleteAllIORequests @ 0x140016A30 (NVMeControllerCompleteAllIORequests.c)
 * Callees:
 *     <none>
 */

bool __fastcall WaitUntilAllAdminCommandsAreInSubmssionQueue(__int64 a1)
{
  __int16 v1; // ax
  unsigned __int16 v2; // bx
  bool v4; // cf

  v1 = *(_WORD *)(a1 + 976);
  v2 = 0;
  while ( v1 )
  {
    v4 = v2 < 0x1388u;
    if ( v2 >= 0x1388u )
      return v4;
    StorPortStallExecution(10LL);
    v1 = *(_WORD *)(a1 + 976);
    ++v2;
  }
  return v2 < 0x1388u;
}
