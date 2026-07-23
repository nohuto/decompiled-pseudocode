/*
 * XREFs of LZ4_resetStreamHC_fast @ 0x140638114
 * Callers:
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x14063808C (LZ4_compress_HC_extStateHC_fastReset.c)
 * Callees:
 *     LZ4_initStreamHC @ 0x140530F64 (LZ4_initStreamHC.c)
 */

_WORD *__fastcall LZ4_resetStreamHC_fast(__int64 a1)
{
  _WORD *result; // rax

  if ( *(_BYTE *)(a1 + 262183) )
  {
    result = LZ4_initStreamHC((_WORD *)a1);
  }
  else
  {
    *(_DWORD *)(a1 + 262168) += *(_DWORD *)(a1 + 0x40000) - *(_DWORD *)(a1 + 262152);
    *(_QWORD *)(a1 + 262152) = 0LL;
    *(_QWORD *)(a1 + 0x40000) = 0LL;
    *(_QWORD *)(a1 + 262184) = 0LL;
  }
  *(_WORD *)(a1 + 262180) = 9;
  return result;
}
