/*
 * XREFs of ??$ApplyRangeColorKey@TGpCC@@@@YAXAEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z @ 0x1800E2270
 * Callers:
 *     ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z @ 0x1800E20F4 (-ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplyRangeColorKey<GpCC>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        __int64 a7)
{
  unsigned int i; // esi
  __int64 j; // rax
  __int64 v11; // rdx
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // cl

  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
    {
      v11 = a2 * i + 4 * j;
      v12 = *(_BYTE *)(v11 + a4 + 3);
      if ( a5[3] > v12
        || v12 > a6[3]
        || (v13 = *(_BYTE *)(v11 + a4 + 2), a5[2] > v13)
        || v13 > a6[2]
        || (v14 = *(_BYTE *)(v11 + a4 + 1), a5[1] > v14)
        || v14 > a6[1]
        || (v15 = *(_BYTE *)(v11 + a4), *a5 > v15)
        || v15 > *a6 )
      {
        if ( a7 )
          *(_BYTE *)(v11 + a4 + 3) = *(_BYTE *)(a7 + 3);
      }
      else
      {
        *(_DWORD *)(v11 + a4) = 0;
      }
    }
  }
}
