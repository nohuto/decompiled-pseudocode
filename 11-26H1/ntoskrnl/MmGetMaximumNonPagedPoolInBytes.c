/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1404E9610
 * Callers:
 *     ExEnableHandleTracing @ 0x14077C508 (ExEnableHandleTracing.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x140AB286C (EtwpGetSystemMaximumBufferCount.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return *(_QWORD *)&stru_140E366D8.ApcStateFill[40] << 12;
}
