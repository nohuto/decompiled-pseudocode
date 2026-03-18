/*
 * XREFs of HmgIsGarbageCollectibleType @ 0x140177280
 * Callers:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HmgIsGarbageCollectibleType(char a1)
{
  return a1 == 5 || a1 == 7 || a1 == 8 || a1 == 9 || a1 == 16;
}
