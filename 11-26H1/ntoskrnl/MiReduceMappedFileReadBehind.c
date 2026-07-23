/*
 * XREFs of MiReduceMappedFileReadBehind @ 0x1404ABF14
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x140370990 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 */

__int64 __fastcall MiReduceMappedFileReadBehind(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r11
  _QWORD *v11; // r8
  __int64 v12; // r9
  _QWORD *i; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  unsigned __int64 j; // rax
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbx

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
      v10 = v9 + 8 * ((v8 - 1) >> 6);
      v11 = (_QWORD *)(v9 + 8 * (v7 >> 6));
      v12 = *v11 | ((1LL << v7) - 1);
      for ( i = v11 + 1; ; ++i )
      {
        v14 = ~v12;
        if ( v14 )
          break;
        if ( (unsigned __int64)i > v10 )
          goto LABEL_6;
        v12 = *++v11;
      }
      _BitScanForward64((unsigned __int64 *)&v15, v14);
      v16 = (unsigned int)v15 + ((__int64)((__int64)v11 - v9) >> 3 << 6);
      if ( v16 > v8 )
        break;
      for ( j = ~(v14 | ((1LL << v15) - 1)); !j; j = *v19 )
      {
        v19 = v11 + 1;
        if ( (unsigned __int64)(v11 + 1) > v10 )
        {
          LODWORD(j) = 64;
          goto LABEL_14;
        }
        ++v11;
      }
      _BitScanForward64(&j, j);
LABEL_14:
      v20 = ((__int64)((__int64)v11 - v9) >> 3 << 6) + (unsigned int)j;
      if ( v20 > v8 )
        v20 = *a1;
      v21 = v20 - v16;
      if ( !v21 || v16 >= a2 )
        break;
      if ( v21 > a3 - v4 )
        v21 = a3 - v4;
      RtlSetBitsEx((__int64)a1, v16, v21);
      v4 += v21;
      if ( v4 == a3 )
        break;
      v7 = v16 + v21;
    }
    while ( v16 + v21 < a2 );
  }
LABEL_6:
  RtlClearBitsEx((__int64)a1, a2, 1uLL);
  return v4;
}
