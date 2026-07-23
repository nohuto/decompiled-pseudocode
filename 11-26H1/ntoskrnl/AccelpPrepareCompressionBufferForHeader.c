/*
 * XREFs of AccelpPrepareCompressionBufferForHeader @ 0x1406E39C8
 * Callers:
 *     AccelpQatCompressionDecompression @ 0x1406E3A04 (AccelpQatCompressionDecompression.c)
 *     AccelpSiovIaaCompressionDecompression @ 0x1406E3F00 (AccelpSiovIaaCompressionDecompression.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AccelpPrepareCompressionBufferForHeader(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // r8d
  __int64 v4; // rcx
  int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // r9d

  v1 = *(_QWORD *)(a1 + 88);
  v3 = 0;
  v4 = *(unsigned int *)(v1 + 20);
  v5 = *(_DWORD *)(v1 + 24);
  v6 = *(_DWORD *)(a1 + 80);
  v7 = v4 + v5;
  if ( v6 >= v7 )
  {
    *(_QWORD *)(a1 + 72) += v4;
    *(_DWORD *)(a1 + 80) = v6 - v7;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v3;
}
