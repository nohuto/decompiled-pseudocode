/*
 * XREFs of RtlFlushFeatureUsage @ 0x1408010B0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerFlushFeatureUsage @ 0x140B33E0C (CmFcManagerFlushFeatureUsage.c)
 */

__int64 __fastcall RtlFlushFeatureUsage(__int64 a1, __int64 a2)
{
  return CmFcManagerFlushFeatureUsage(a1, (unsigned int)a1, a2);
}
