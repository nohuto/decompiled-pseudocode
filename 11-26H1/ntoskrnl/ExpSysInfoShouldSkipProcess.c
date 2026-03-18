/*
 * XREFs of ExpSysInfoShouldSkipProcess @ 0x14096A180
 * Callers:
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     ExProcessCounterSetCallback @ 0x140969300 (ExProcessCounterSetCallback.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpSysInfoShouldSkipProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 4) != 0
      && *(_DWORD *)(a1 + 4)
      && !*(_DWORD *)(a1 + 896)
      && *(_QWORD *)(a1 + 48) == a1 + 48;
}
