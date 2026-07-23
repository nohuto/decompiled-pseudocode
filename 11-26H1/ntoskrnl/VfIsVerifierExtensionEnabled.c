/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x14064430C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140C00E30 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x140C2B634 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)VfXdvEnabled;
}
