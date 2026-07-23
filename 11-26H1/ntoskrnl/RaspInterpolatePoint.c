/*
 * XREFs of RaspInterpolatePoint @ 0x140356F04
 * Callers:
 *     RaspCreateSegmentList @ 0x14035778C (RaspCreateSegmentList.c)
 * Callees:
 *     RaspAllocateMemory @ 0x140357710 (RaspAllocateMemory.c)
 */

__int64 __fastcall RaspInterpolatePoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _DWORD *v6; // r10
  __int64 v7; // r11

  result = RaspAllocateMemory(17LL, a3);
  if ( result )
  {
    v6 = (_DWORD *)a2;
    v7 = 4LL;
    do
    {
      *(_DWORD *)((char *)v6 + result - a2) = (*v6 + *(_DWORD *)((char *)v6 + a1 - a2)) / 2;
      ++v6;
      --v7;
    }
    while ( v7 );
    *(_BYTE *)(result + 16) = *(_BYTE *)(a2 + 16) | *(_BYTE *)(a1 + 16) | 1;
  }
  return result;
}
