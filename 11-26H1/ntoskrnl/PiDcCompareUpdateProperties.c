/*
 * XREFs of PiDcCompareUpdateProperties @ 0x140ADA4A0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall PiDcCompareUpdateProperties(__int64 a1, const void *a2, const void *a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = memcmp(a2, a3, 0x14uLL);
  result = 0LL;
  if ( v3 >= 0 )
  {
    LOBYTE(result) = v3 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
