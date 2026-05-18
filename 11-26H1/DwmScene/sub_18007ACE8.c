/*
 * XREFs of sub_18007ACE8 @ 0x18007ACE8
 * Callers:
 *     sub_18007B220 @ 0x18007B220 (sub_18007B220.c)
 *     sub_18007B650 @ 0x18007B650 (sub_18007B650.c)
 *     sub_18007B6B8 @ 0x18007B6B8 (sub_18007B6B8.c)
 *     sub_18007B864 @ 0x18007B864 (sub_18007B864.c)
 *     sub_18007D1E0 @ 0x18007D1E0 (sub_18007D1E0.c)
 *     sub_18007D524 @ 0x18007D524 (sub_18007D524.c)
 *     sub_18007D7C8 @ 0x18007D7C8 (sub_18007D7C8.c)
 *     sub_18007DAF8 @ 0x18007DAF8 (sub_18007DAF8.c)
 *     sub_18007F40C @ 0x18007F40C (sub_18007F40C.c)
 * Callees:
 *     sub_18006D610 @ 0x18006D610 (sub_18006D610.c)
 */

__int64 __fastcall sub_18007ACE8(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_18006D610(v3);
      v3 += 40LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
