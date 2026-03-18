/*
 * XREFs of ?GreDeleteKMutex@@YAX_K@Z @ 0x140188CD0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall GreDeleteKMutex(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  GreDeleteFastMutex(a1, a2, a3, a4);
}
