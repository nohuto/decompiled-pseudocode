/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x14060422C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140B4D604 (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x140B77648 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)VfXdvEnabled;
}
