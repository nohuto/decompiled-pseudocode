/*
 * XREFs of HmgRemoveGarbageCollectible @ 0x1401534D0
 * Callers:
 *     <none>
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x14001B29C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

__int64 __fastcall HmgRemoveGarbageCollectible(struct HOBJ__ *a1, char a2, unsigned int *a3)
{
  return HmgRemoveObjectImpl(a1, 0, 1, 2, a2, a3);
}
