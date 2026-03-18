/*
 * XREFs of IsCurrentSessionHostServiceSession @ 0x140142338
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     InitializeWin32KSyscallFilter @ 0x140141B80 (InitializeWin32KSyscallFilter.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140142028 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?InitializeInputGlobals@@YAJXZ @ 0x1401BCD80 (-InitializeInputGlobals@@YAJXZ.c)
 *     UserIsCurrentSessionHostServiceSession @ 0x1401EA750 (UserIsCurrentSessionHostServiceSession.c)
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     IsHostServiceSession @ 0x140142354 (IsHostServiceSession.c)
 */

__int64 __fastcall IsCurrentSessionHostServiceSession(__int64 a1)
{
  unsigned int CurrentWin32kSessionId; // eax

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(a1);
  return IsHostServiceSession(CurrentWin32kSessionId);
}
