/*
 * XREFs of KscpStringLengthFromUserSmap @ 0x140C64E00
 * Callers:
 *     <none>
 * Callees:
 *     KscpStringLengthFromUser @ 0x140C64DC0 (KscpStringLengthFromUser.c)
 */

_BYTE *__fastcall KscpStringLengthFromUserSmap(unsigned __int64 a1)
{
  _BYTE *result; // rax

  __asm { stac }
  result = KscpStringLengthFromUser(a1);
  __asm { clac }
  return result;
}
