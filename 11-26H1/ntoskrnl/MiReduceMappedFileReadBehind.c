/*
 * XREFs of MiReduceMappedFileReadBehind @ 0x1404B1B98
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14036EBF0 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14024EFA0 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x14036F510 (RtlSetBitsEx.c)
 */

__int64 __fastcall MiReduceMappedFileReadBehind(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r15
  __int64 v10; // r11
  unsigned __int64 v11; // rbx
  _QWORD *v12; // r8
  __int64 v13; // r9
  _QWORD *i; // rax
  unsigned __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  unsigned __int64 j; // rax
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rbx

  v4 = 0LL;
  RtlSetBitsEx((__int64)a1, a2, 1uLL);
  v7 = 0LL;
  if ( a2 )
  {
    do
    {
      v8 = *a1;
      if ( *a1 <= v7 )
        break;
      v9 = a1[1];
      v10 = 0LL;
      v11 = v9 + 8 * ((v8 - 1) >> 6);
      v12 = (_QWORD *)(v9 + 8 * (v7 >> 6));
      v13 = *v12 | ((1LL << v7) - 1);
      for ( i = v12 + 1; ; ++i )
      {
        v15 = ~v13;
        if ( v15 )
          break;
        if ( (unsigned __int64)i > v11 )
          goto LABEL_6;
        v13 = *++v12;
      }
      _BitScanForward64((unsigned __int64 *)&v16, v15);
      v17 = (unsigned int)v16 + ((__int64)((__int64)v12 - v9) >> 3 << 6);
      if ( v17 > v8 )
        break;
      for ( j = ~(v15 | ((1LL << v16) - 1)); !j; j = *v20 )
      {
        v10 += 64LL;
        v20 = v12 + 1;
        if ( (unsigned __int64)(v12 + 1) > v11 )
        {
          LODWORD(j) = 64;
          goto LABEL_14;
        }
        ++v12;
      }
      _BitScanForward64(&j, j);
LABEL_14:
      v21 = ((__int64)((__int64)v12 - v9) >> 3 << 6) + (unsigned int)j;
      if ( v21 > v8 )
        v21 = *a1;
      v22 = v21 - v17;
      if ( !v22 || v17 >= a2 )
        break;
      if ( v22 > a3 - v4 )
        v22 = a3 - v4;
      RtlSetBitsEx((__int64)a1, v17, v22);
      v4 += v22;
      if ( v4 == a3 )
        break;
      v7 = v17 + v22;
    }
    while ( v17 + v22 < a2 );
  }
LABEL_6:
  RtlClearBitsEx((__int64)a1, a2, 1uLL);
  return v4;
}
