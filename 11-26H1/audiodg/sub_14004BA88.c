/*
 * XREFs of sub_14004BA88 @ 0x14004BA88
 * Callers:
 *     sub_14004E670 @ 0x14004E670 (sub_14004E670.c)
 * Callees:
 *     <none>
 */

FARPROC __fastcall sub_14004BA88(HMODULE a1)
{
  return GetProcAddress(a1, "RtlDisownModuleHeapAllocation");
}
