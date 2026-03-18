/*
 * XREFs of CmpFlushNotifiesPostCallback @ 0x14085ECB0
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408BA114 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpFlushNotifiesPostCallback(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  LOBYTE(a4) = *((_BYTE *)a3 + 5);
  CmpFlushNotifiesOnKeyBodyList(a1, *a3, a2, a4);
  return 0LL;
}
