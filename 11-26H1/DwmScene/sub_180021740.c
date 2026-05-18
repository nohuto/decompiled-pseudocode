/*
 * XREFs of sub_180021740 @ 0x180021740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG sub_180021740()
{
  ULONG result; // eax
  REGHANDLE v1; // rcx

  result = _InterlockedExchangeAdd(&dword_1801C8544, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v1 = RegHandle;
    RegHandle = 0LL;
    dword_1801BD188 = 0;
    return EventUnregister(v1);
  }
  return result;
}
