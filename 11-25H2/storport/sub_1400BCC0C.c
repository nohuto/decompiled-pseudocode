/*
 * XREFs of sub_1400BCC0C @ 0x1400BCC0C
 * Callers:
 *     sub_1400BD9F4 @ 0x1400BD9F4 (sub_1400BD9F4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1400BCC0C(__int64 a1, __int64 a2, int a3)
{
  __int64 i; // rdx
  int v4; // r9d

  for ( i = 0LL; (unsigned int)i < 0x400; i = (unsigned int)(i + 1) )
  {
    v4 = *(_DWORD *)(a1 + 4 * i);
    if ( !v4 )
      break;
    if ( v4 == a3 )
      return 1;
  }
  return 0;
}
