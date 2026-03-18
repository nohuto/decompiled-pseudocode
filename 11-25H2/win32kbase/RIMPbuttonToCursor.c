/*
 * XREFs of RIMPbuttonToCursor @ 0x14014CB4C
 * Callers:
 *     RIMGetDeviceButtons @ 0x1401E3DF8 (RIMGetDeviceButtons.c)
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
