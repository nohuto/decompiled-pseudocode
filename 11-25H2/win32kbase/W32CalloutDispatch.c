/*
 * XREFs of W32CalloutDispatch @ 0x1400DB030
 * Callers:
 *     <none>
 * Callees:
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, __int64 a2, __int64 a3)
{
  return W32CalloutDispatchWorker(a2, a3);
}
