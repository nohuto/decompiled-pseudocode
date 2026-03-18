/*
 * XREFs of RIMApiSetIsMouseDeviceOnIgnoreList @ 0x1400B1910
 * Callers:
 *     UpdateMouseConnectionState @ 0x14012F3A8 (UpdateMouseConnectionState.c)
 * Callees:
 *     IsMouseDeviceOnIgnoreList @ 0x1400B1DA8 (IsMouseDeviceOnIgnoreList.c)
 *     RIMIsRunningOnDesktop @ 0x1400B29E8 (RIMIsRunningOnDesktop.c)
 */

__int64 __fastcall RIMApiSetIsMouseDeviceOnIgnoreList(__int64 a1)
{
  if ( (unsigned int)RIMIsRunningOnDesktop() )
    return IsMouseDeviceOnIgnoreList(a1);
  else
    return 0LL;
}
