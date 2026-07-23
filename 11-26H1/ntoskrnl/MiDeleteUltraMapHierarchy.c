/*
 * XREFs of MiDeleteUltraMapHierarchy @ 0x14029E9AC
 * Callers:
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 */

__int64 __fastcall MiDeleteUltraMapHierarchy(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  BOOL v2; // edi
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // r9

  v1 = a1;
  v2 = 0;
  v3 = (__int64)(a1 << 25) >> 16;
  result = 0xFFFFF68000000000uLL;
  if ( v3 >= 0xFFFFF68000000000uLL )
  {
    result = 0xFFFFF6FFFFFFFFFFuLL;
    v2 = v3 <= 0xFFFFF6FFFFFFFFFFuLL;
  }
  v5 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  while ( 1 )
  {
    if ( v2 )
    {
      result = MiRewritePteWithLockBit(0LL, 0LL, v1, v5);
      v5 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    }
    else
    {
      *(_QWORD *)v1 = v5;
      v2 = 1;
    }
    if ( v1 >= qword_140E34D78 && v1 <= qword_140E34D80 )
      break;
    result = 0xFFFFF68000000000uLL;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  return result;
}
