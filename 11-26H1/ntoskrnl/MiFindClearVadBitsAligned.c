/*
 * XREFs of MiFindClearVadBitsAligned @ 0x140A74700
 * Callers:
 *     MiFindEmptyAddressRange @ 0x14099635C (MiFindEmptyAddressRange.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFindClearVadBitsAligned(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // r11
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rbx
  _DWORD *v10; // r8
  unsigned __int64 i; // rcx

  v5 = *a1;
  v7 = a2 >> 16;
  if ( a3 < v5 )
  {
    result = a2 >> 16;
    v9 = v5 - a3;
    if ( a4 < v5 && a4 > v7 )
      result = ~(v7 - 1) & (v7 + a4 - 1);
    while ( result <= v9 )
    {
      v10 = (_DWORD *)(a1[1] + 4 * (result >> 5));
      for ( i = 0LL; i < a3; i += 32LL )
      {
        if ( *v10 )
          break;
        ++v10;
      }
      if ( i == a3 )
        return result;
      result = v7 + (~(v7 - 1) & (i + result));
    }
  }
  return -1LL;
}
