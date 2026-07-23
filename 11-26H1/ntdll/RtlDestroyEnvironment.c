/*
 * XREFs of RtlDestroyEnvironment @ 0x18009E160
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 */

NTSTATUS __cdecl RtlDestroyEnvironment(PVOID Environment)
{
  RtlpSysVolFree(Environment);
  return 0;
}
