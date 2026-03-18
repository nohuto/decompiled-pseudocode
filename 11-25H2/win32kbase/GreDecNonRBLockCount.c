/*
 * XREFs of GreDecNonRBLockCount @ 0x140090470
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

struct _GRETHREAD *GreDecNonRBLockCount()
{
  struct _GRETHREAD *result; // rax

  result = GreGetCurrentThread();
  if ( result )
    --*((_DWORD *)result + 88);
  return result;
}
