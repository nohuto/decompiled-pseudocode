/*
 * XREFs of RtlpFcEnterRegion @ 0x140B1077C
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1404CC190 (RtlQueryFeatureConfiguration.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404D88A8 (RtlpFcBufferManagerReferenceBuffers.c)
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
