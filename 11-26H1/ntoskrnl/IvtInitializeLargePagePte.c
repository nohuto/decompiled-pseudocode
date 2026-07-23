/*
 * XREFs of IvtInitializeLargePagePte @ 0x1405A9640
 * Callers:
 *     IvtInitializeIdentityMappings @ 0x1405A9460 (IvtInitializeIdentityMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall IvtInitializeLargePagePte(unsigned __int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // r11
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8

  v4 = 1LL << a3;
  v6 = 512LL;
  do
  {
    v7 = 1LL;
    v8 = *a1 | 0x80;
    v9 = 2LL;
    if ( a3 == 30 )
    {
      do
      {
        v8 |= v7++;
        --v9;
      }
      while ( v9 );
      result = a2 & 0xFFFFFFFFC0000000uLL;
      v11 = v8 ^ a2 & 0xFFFFFFFFC0000000uLL;
      v12 = 0xFFF000003FFFFFFFuLL;
    }
    else
    {
      do
      {
        v8 |= v7++;
        --v9;
      }
      while ( v9 );
      result = a2 >> a3 << 21;
      v11 = v8 ^ result;
      v12 = 0xFFF00000001FFFFFuLL;
    }
    a2 += v4;
    *a1++ = result ^ v12 & v11;
    --v6;
  }
  while ( v6 );
  return result;
}
