/*
 * XREFs of ZwSystemDebugControl @ 0x14069EB40
 * Callers:
 *     PspLocateSystemDll @ 0x1407624B0 (PspLocateSystemDll.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSystemDebugControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
