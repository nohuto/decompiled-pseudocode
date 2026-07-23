/*
 * XREFs of detect_data_type @ 0x14063993C
 * Callers:
 *     _tr_flush_block @ 0x140638E50 (_tr_flush_block.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detect_data_type(_WORD *a1)
{
  _WORD *v1; // rdx
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 v5; // rax
  _WORD *v6; // rcx

  v1 = a1 + 134;
  v2 = 0LL;
  v3 = -201342849;
  while ( v2 <= 31 )
  {
    if ( (v3 & 1) != 0 && *v1 )
      return 0LL;
    ++v2;
    v1 += 2;
    v3 >>= 1;
  }
  if ( !a1[152] && !a1[154] && !a1[160] )
  {
    v5 = 32LL;
    v6 = a1 + 198;
    while ( v5 < 256 )
    {
      if ( *v6 )
        return 1LL;
      ++v5;
      v6 += 2;
    }
    return 0LL;
  }
  return 1LL;
}
