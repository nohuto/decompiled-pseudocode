/*
 * XREFs of ACPIFlushPowerQueueCallback @ 0x140059EC0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x14004A10C (AMLIRestartContext.c)
 */

__int64 __fastcall ACPIFlushPowerQueueCallback(__int64 a1, _QWORD *a2)
{
  return AMLIRestartContext(a2);
}
