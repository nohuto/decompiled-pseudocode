/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x14064072C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140BFAE30 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x140C25624 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)VfXdvEnabled;
}
