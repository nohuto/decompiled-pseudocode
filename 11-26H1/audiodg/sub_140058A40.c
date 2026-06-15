/*
 * XREFs of sub_140058A40 @ 0x140058A40
 * Callers:
 *     sub_1400590E8 @ 0x1400590E8 (sub_1400590E8.c)
 * Callees:
 *     sub_140058A10 @ 0x140058A10 (sub_140058A10.c)
 */

__int64 __fastcall sub_140058A40(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2;
    v3 = a1 + 4;
    do
    {
      result = sub_140058A10(*(unsigned int *)(v3 - 4));
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
