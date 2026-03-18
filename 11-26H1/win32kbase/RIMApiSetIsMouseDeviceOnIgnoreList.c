/*
 * XREFs of RIMApiSetIsMouseDeviceOnIgnoreList @ 0x1400EEEBC
 * Callers:
 *     UpdateMouseConnectionState @ 0x140163FC4 (UpdateMouseConnectionState.c)
 * Callees:
 *     IsMouseDeviceOnIgnoreList @ 0x1400EF3E4 (IsMouseDeviceOnIgnoreList.c)
 *     RIMIsRunningOnDesktop @ 0x1400F0800 (RIMIsRunningOnDesktop.c)
 */

__int64 __fastcall RIMApiSetIsMouseDeviceOnIgnoreList(__int64 a1)
{
  if ( (unsigned int)RIMIsRunningOnDesktop() )
    return IsMouseDeviceOnIgnoreList(a1);
  else
    return 0LL;
}
