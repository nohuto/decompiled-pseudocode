/*
 * XREFs of KeFindBiasedSetBitGroupMask @ 0x1402005D0
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140200820 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall KeFindBiasedSetBitGroupMask(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // r8
  unsigned __int64 *v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 *v11; // r9
  __int64 i; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 *v17; // [rsp+28h] [rbp-20h]

  v16 = 32LL;
  v3 = a1;
  v17 = a1;
  v4 = a1;
  while ( ~*a1 == -1LL )
  {
    if ( ++a1 > v4 )
    {
      v5 = -1LL;
      goto LABEL_5;
    }
  }
  _BitScanForward64(&v14, *a1);
  v5 = ((a1 - v3) << 6) + v14;
  if ( v5 > 0x1F )
    v5 = -1LL;
LABEL_5:
  v6 = a2 % RtlNumberOfSetBitsEx(&v16, v4, v3);
  if ( v6 )
  {
LABEL_7:
    v8 = v5 + 1;
    v9 = (v5 + 1) & -(__int64)(v5 + 1 < v16);
    v10 = v16 - 1;
    while ( 1 )
    {
      if ( v10 - v9 == -1LL )
        goto LABEL_12;
      v11 = &v17[v9 >> 6];
      for ( i = ~*v11 | ((1LL << v9) - 1); i == -1; i = ~*v11 )
      {
        if ( ++v11 > &v17[v10 >> 6] )
          goto LABEL_12;
      }
      _BitScanForward64(&v15, ~i);
      v5 = ((v11 - v17) << 6) + v15;
      if ( v5 > v10 )
      {
LABEL_12:
        v5 = -1LL;
      }
      else if ( v5 != -1LL )
      {
LABEL_22:
        if ( !--v6 )
          return (unsigned __int16)v5;
        goto LABEL_7;
      }
      if ( !v9 )
        goto LABEL_22;
      v13 = v8 + 1;
      if ( v8 + 1 > v16 )
        v13 = v16;
      v10 = v13 - 1;
      v9 = 0LL;
    }
  }
  return (unsigned __int16)v5;
}
