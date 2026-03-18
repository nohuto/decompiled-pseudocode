/*
 * XREFs of ??$ApplyRangeColorKey@TGpCCR@@@@YAXAEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z @ 0x1802B0DEC
 * Callers:
 *     ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z @ 0x1800E20F4 (-ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ApplyRangeColorKey<GpCCR>(__int64 a1, int a2, __int64 a3, __int64 a4, _BYTE *a5, _BYTE *a6, __int64 a7)
{
  _UNKNOWN **v7; // rax
  unsigned int i; // r10d
  __int64 j; // rdx
  __int64 v12; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v7 = &retaddr;
  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
    {
      v12 = a2 * i + 4 * j;
      LOBYTE(v7) = *(_BYTE *)(v12 + a4 + 3);
      if ( a5[3] > (unsigned __int8)v7
        || (unsigned __int8)v7 > a6[3]
        || (LOBYTE(v7) = *(_BYTE *)(v12 + a4), *a5 > (unsigned __int8)v7)
        || (unsigned __int8)v7 > *a6
        || (LOBYTE(v7) = *(_BYTE *)(v12 + a4 + 1), a5[1] > (unsigned __int8)v7)
        || (unsigned __int8)v7 > a6[1]
        || (LOBYTE(v7) = *(_BYTE *)(v12 + a4 + 2), a5[2] > (unsigned __int8)v7)
        || (unsigned __int8)v7 > a6[2] )
      {
        if ( a7 )
        {
          LOBYTE(v7) = *(_BYTE *)(a7 + 3);
          *(_BYTE *)(v12 + a4 + 3) = (_BYTE)v7;
        }
      }
      else
      {
        LOBYTE(v7) = 0;
        *(_DWORD *)(v12 + a4) = 0;
      }
    }
  }
  return (char)v7;
}
