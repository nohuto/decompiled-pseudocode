/*
 * XREFs of InitKeyboard @ 0x1401597CC
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1402573C0 (xxxRemoteReconnect.c)
 * Callees:
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x140229F58 (-ClearCachedHotkeyModifiers@@YAXXZ.c)
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x140231880 (-GetBiosNumLockStatus@@YAXXZ.c)
 */

void __fastcall InitKeyboard(__int64 a1, __int64 a2)
{
  if ( !IsRemoteConnection(a1, a2) )
  {
    GetBiosNumLockStatus();
    ClearCachedHotkeyModifiers();
  }
}
