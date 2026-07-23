/*
 * XREFs of LZ4_resetStreamHC_fast @ 0x180122474
 * Callers:
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x180155B1C (LZ4_compress_HC_extStateHC_fastReset.c)
 * Callees:
 *     LZ4_initStreamHC @ 0x1801224D0 (LZ4_initStreamHC.c)
 */

__int64 __fastcall LZ4_resetStreamHC_fast(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 262183) )
  {
    result = LZ4_initStreamHC(a1);
  }
  else
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 0x40000) - *(_DWORD *)(a1 + 262152));
    *(_DWORD *)(a1 + 262168) += result;
    *(_QWORD *)(a1 + 262152) = 0LL;
    *(_QWORD *)(a1 + 0x40000) = 0LL;
    *(_QWORD *)(a1 + 262184) = 0LL;
  }
  *(_WORD *)(a1 + 262180) = 9;
  return result;
}
