/*
 * XREFs of FsRtlIsNonEmptyDirectoryReparsePointAllowed @ 0x1404727B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FsRtlIsNonEmptyDirectoryReparsePointAllowed(int a1)
{
  return (a1 & 0x10000000) != 0 || a1 == -2147483624;
}
