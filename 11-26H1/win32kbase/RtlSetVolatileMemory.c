/*
 * XREFs of RtlSetVolatileMemory @ 0x14024BCB0
 * Callers:
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x14015CD20 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     RtlSetUserMemory @ 0x1402D2218 (RtlSetUserMemory.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlSetVolatileMemory(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
