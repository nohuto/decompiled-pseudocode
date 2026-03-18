/*
 * XREFs of RIMPbuttonToCursor @ 0x140189D54
 * Callers:
 *     RIMGetDeviceButtons @ 0x140204BF4 (RIMGetDeviceButtons.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMPbuttonToCursor(__int16 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 == 66 )
    return 1LL;
  if ( a1 == 69 )
    return 2LL;
  return result;
}
