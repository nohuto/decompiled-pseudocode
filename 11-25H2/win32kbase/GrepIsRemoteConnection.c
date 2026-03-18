/*
 * XREFs of GrepIsRemoteConnection @ 0x1401C8010
 * Callers:
 *     <none>
 * Callees:
 *     UserIsRemoteConnection @ 0x14007F600 (UserIsRemoteConnection.c)
 */

_BOOL8 __fastcall GrepIsRemoteConnection(__int64 a1, __int64 a2)
{
  return UserIsRemoteConnection(a1, a2);
}
