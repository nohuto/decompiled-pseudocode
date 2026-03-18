/*
 * XREFs of ?IsMouseDevice@@YAHGG@Z @ 0x140216AAC
 * Callers:
 *     _GetRegisteredRawInputDevices @ 0x140215A04 (_GetRegisteredRawInputDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMouseDevice(__int16 a1, __int16 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 != 1 || a2 != 2 )
    return 0LL;
  return result;
}
