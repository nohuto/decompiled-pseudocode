/*
 * XREFs of PnpGetMultiSzLength @ 0x140A8D984
 * Callers:
 *     PiSwStartCreate @ 0x1407B375C (PiSwStartCreate.c)
 *     PnpCompareMultiSz @ 0x140A8BF3C (PnpCompareMultiSz.c)
 *     PnpAllocateMultiSZ @ 0x140A8D8B4 (PnpAllocateMultiSZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpGetMultiSzLength(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v5; // r11
  _WORD *v7; // rax
  unsigned __int64 v8; // r10
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // r10
  unsigned __int64 v12; // rax

  v3 = 0;
  *a3 = 0LL;
  v5 = 0LL;
  while ( 1 )
  {
    v7 = (_WORD *)(a1 + 2 * v5);
    v8 = a2 - v5;
    if ( !v7 || v8 > 0x7FFFFFFF )
      break;
    v9 = a2 - v5;
    if ( v8 )
    {
      do
      {
        if ( !*v7 )
          break;
        ++v7;
        --v9;
      }
      while ( v9 );
    }
    v10 = v9 == 0 ? 0xC000000D : 0;
    if ( v9 )
      v11 = v8 - v9;
    else
      v11 = 0LL;
    if ( !v9 )
      return v10;
    v12 = v11 + v5;
    if ( v11 + v5 < v5 || (v5 = v12 + 1, v12 + 1 < v12) )
    {
      *a3 = -1LL;
      return (unsigned int)-1073741675;
    }
    *a3 = v5;
    if ( !v11 )
      return v3;
  }
  return (unsigned int)-1073741811;
}
