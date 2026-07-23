/*
 * XREFs of KscpWideStringLengthFromUserSmap @ 0x140C64E60
 * Callers:
 *     <none>
 * Callees:
 *     KscpWideStringLengthFromUser @ 0x140C64E20 (KscpWideStringLengthFromUser.c)
 */

unsigned __int64 __fastcall KscpWideStringLengthFromUserSmap(unsigned __int64 a1)
{
  unsigned __int64 result; // rax

  __asm { stac }
  result = KscpWideStringLengthFromUser(a1);
  __asm { clac }
  return result;
}
