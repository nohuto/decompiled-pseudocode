/*
 * XREFs of ?GreGetCurrentSystemThread@@YAPEAU_ETHREAD@@XZ @ 0x1400C03A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _ETHREAD *GreGetCurrentSystemThread(void)
{
  return KeGetCurrentThread();
}
