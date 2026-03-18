/*
 * XREFs of ZwSystemDebugControl @ 0x140726E10
 * Callers:
 *     DifZwSystemDebugControlWrapper @ 0x1406BD630 (DifZwSystemDebugControlWrapper.c)
 *     PspLocateSystemDll @ 0x1407EE38C (PspLocateSystemDll.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSystemDebugControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
