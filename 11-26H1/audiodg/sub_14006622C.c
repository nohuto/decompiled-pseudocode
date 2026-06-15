/*
 * XREFs of sub_14006622C @ 0x14006622C
 * Callers:
 *     sub_1400122B4 @ 0x1400122B4 (sub_1400122B4.c)
 *     sub_140065010 @ 0x140065010 (sub_140065010.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14006622C(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // ecx

  v1 = *(_DWORD *)(a1 + 16) * *(_DWORD *)(a1 + 20);
  v2 = 16;
  if ( v1 > 0x10 )
  {
    if ( ((v1 - 1) & v1) != 0 )
    {
      do
        v2 *= 2;
      while ( v1 / v2 );
    }
    else
    {
      return v1;
    }
  }
  return v2;
}
