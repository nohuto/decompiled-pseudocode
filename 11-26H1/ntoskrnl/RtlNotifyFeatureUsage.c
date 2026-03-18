/*
 * XREFs of RtlNotifyFeatureUsage @ 0x140356EC0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerNotifyFeatureUsage @ 0x140356ED8 (CmFcManagerNotifyFeatureUsage.c)
 */

__int64 __fastcall RtlNotifyFeatureUsage(__int64 a1)
{
  return CmFcManagerNotifyFeatureUsage(a1, a1);
}
