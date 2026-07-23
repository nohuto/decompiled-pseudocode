/*
 * XREFs of RtlpFcEnterRegion @ 0x140B121BC
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1404C5BC0 (RtlQueryFeatureConfiguration.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404D2078 (RtlpFcBufferManagerReferenceBuffers.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *RtlpFcEnterRegion()
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  --result->KernelApcDisable;
  return result;
}
