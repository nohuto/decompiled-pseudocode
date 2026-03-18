/*
 * XREFs of UserCoreMsgOpenConnectionHandle @ 0x1400D9E10
 * Callers:
 *     <none>
 * Callees:
 *     CoreMsgOpenConnection @ 0x1400D8214 (CoreMsgOpenConnection.c)
 */

__int64 __fastcall UserCoreMsgOpenConnectionHandle(char a1, const struct tagMsgRoutingInfo *a2, void **a3)
{
  return CoreMsgOpenConnection(a1, a2, a3);
}
