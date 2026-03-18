/*
 * XREFs of GreIncNonRBLockCount @ 0x14008EED0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

struct _GRETHREAD *GreIncNonRBLockCount()
{
  struct _GRETHREAD *result; // rax

  result = GreGetCurrentThread();
  if ( result )
    ++*((_DWORD *)result + 88);
  return result;
}
