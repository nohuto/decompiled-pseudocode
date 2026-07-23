/*
 * XREFs of KscpMemmoveUserToUserSmap @ 0x140C65060
 * Callers:
 *     <none>
 * Callees:
 *     KscpMemmoveUserToUser @ 0x140C64FA0 (KscpMemmoveUserToUser.c)
 */

__int64 __fastcall KscpMemmoveUserToUserSmap(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax

  __asm { stac }
  result = KscpMemmoveUserToUser(a1, a2, a3);
  __asm { clac }
  return result;
}
