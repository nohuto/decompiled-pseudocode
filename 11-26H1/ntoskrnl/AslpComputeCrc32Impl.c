/*
 * XREFs of AslpComputeCrc32Impl @ 0x14088EB88
 * Callers:
 *     AslComputeCrc32 @ 0x14088E458 (AslComputeCrc32.c)
 *     AslpComputeCrc32Uma @ 0x14088EBC4 (AslpComputeCrc32Uma.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslpComputeCrc32Impl(int a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // rax

  v4 = ~a1;
  if ( a3 )
  {
    v5 = a3;
    do
    {
      v6 = (unsigned __int8)(*a2++ ^ v4);
      v4 = *((_DWORD *)AslpCrc32Table + v6) ^ (v4 >> 8);
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
