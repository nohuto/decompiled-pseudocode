/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1404F0030
 * Callers:
 *     ExEnableHandleTracing @ 0x1407795D8 (ExEnableHandleTracing.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x140A6DAC8 (EtwpGetSystemMaximumBufferCount.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return *(_QWORD *)&stru_140E36558.ApcStateFill[40] << 12;
}
