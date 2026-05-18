/*
 * XREFs of sub_1800BF1A8 @ 0x1800BF1A8
 * Callers:
 *     sub_1800C0B9C @ 0x1800C0B9C (sub_1800C0B9C.c)
 * Callees:
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 */

__int64 __fastcall sub_1800BF1A8(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  v5 = *a1;
  v3 = a1;
  if ( a2 )
  {
    do
      sub_18001D6F4(&v5, a2);
    while ( v4 != 1 );
    result = v5;
  }
  *v3 = result;
  return result;
}
