/*
 * XREFs of GreDecNonRBLockCount @ 0x14014B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

struct _GRETHREAD *__fastcall GreDecNonRBLockCount(__int64 a1, __int64 a2)
{
  struct _GRETHREAD *result; // rax

  result = GreGetCurrentThread(a1, a2);
  if ( result )
    --*((_DWORD *)result + 86);
  return result;
}
