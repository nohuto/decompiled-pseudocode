/*
 * XREFs of sub_140001AB0 @ 0x140001AB0
 * Callers:
 *     sub_140001B40 @ 0x140001B40 (sub_140001B40.c)
 *     sub_14000EBE0 @ 0x14000EBE0 (sub_14000EBE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140001AB0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r11
  signed int v4; // r10d
  int v5; // ebx
  __int64 i; // rax
  __int64 result; // rax
  unsigned __int8 *v9; // rcx
  int v10; // edx

  v3 = 0LL;
  v4 = 7;
  v5 = 0;
  for ( i = 7LL; i >= 0; --i )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a1 + i + 64) - 33) <= 0x5Du && ++v5 == a3 )
      break;
    if ( !i )
      break;
    --v4;
  }
  result = v4;
  if ( (unsigned __int64)v4 < 8 )
  {
    v9 = (unsigned __int8 *)(v4 + a1 + 64);
    do
    {
      v10 = *v9;
      result = (unsigned int)(v10 - 33);
      if ( (unsigned __int8)(v10 - 33) <= 0x5Du )
      {
        *(_BYTE *)(v3 + a2) = v10;
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= a3 )
          break;
      }
      ++v4;
      ++v9;
    }
    while ( (unsigned int)v4 < 8 );
  }
  return result;
}
