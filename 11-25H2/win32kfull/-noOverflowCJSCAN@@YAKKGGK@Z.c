/*
 * XREFs of ?noOverflowCJSCAN@@YAKKGGK@Z @ 0x140164E18
 * Callers:
 *     GreGetBitmapBitsSize @ 0x140164C9C (GreGetBitmapBitsSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall noOverflowCJSCAN(unsigned int a1, unsigned __int16 a2, unsigned __int16 a3, unsigned int a4)
{
  unsigned __int64 v4; // r10
  __int64 result; // rax
  unsigned __int64 v6; // r10

  v4 = ((a3 * a2 * (unsigned __int64)a1 + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL;
  result = 0LL;
  if ( v4 <= 0xFFFFFFFF )
  {
    v6 = a4 * v4;
    if ( v6 > 0xFFFFFFFF )
      LODWORD(v6) = 0;
    return (unsigned int)v6;
  }
  return result;
}
