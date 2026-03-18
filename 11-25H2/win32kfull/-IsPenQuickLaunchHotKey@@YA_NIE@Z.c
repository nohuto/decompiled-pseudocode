/*
 * XREFs of ?IsPenQuickLaunchHotKey@@YA_NIE@Z @ 0x14021CB04
 * Callers:
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z @ 0x14021CA40 (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z.c)
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14028B1B8 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPenQuickLaunchHotKey(int a1, char a2)
{
  return a1 == 8 && (unsigned __int8)(a2 + 127) <= 2u;
}
