/*
 * XREFs of ?GreGetCurrentSystemThread@@YAPEAU_ETHREAD@@XZ @ 0x140101EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _ETHREAD *GreGetCurrentSystemThread(void)
{
  return KeGetCurrentThread();
}
