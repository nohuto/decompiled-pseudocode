/*
 * XREFs of ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800BFCC8
 * Callers:
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800737A4 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800BFA2C (-GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x1802B451C (-ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z.c)
 *     ?ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z @ 0x1805E5928 (-ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z.c)
 *     ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180689B10 (-_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z.c)
 *     ?_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEAPEAUIShellItem@@PEAPEAG3@Z @ 0x18068A284 (-_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEA.c)
 *     ?Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z @ 0x1806CA110 (-Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z.c)
 *     ?InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z @ 0x1806CA160 (-InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT.c)
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall _AllocString<CTCoAllocPolicy>(__int64 a1, __int64 a2, const WCHAR *a3, _QWORD *a4)
{
  unsigned __int64 v4; // rdi
  const WCHAR *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned int v8; // ebx
  _WORD *v10; // rax
  _WORD *v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  signed __int64 v14; // r14
  __int64 v15; // r8
  _WORD *v16; // r9
  __int16 v17; // ax
  _WORD *v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rsi

  v4 = -1LL;
  v6 = a3;
  do
    ++v4;
  while ( a3[v4] );
  v7 = v4 + 1;
  *a4 = 0LL;
  if ( v4 + 1 >= v4 && is_mul_ok(v7, 2uLL) )
  {
    v10 = CoTaskMemAlloc(2 * v7);
    *a4 = v10;
    v11 = v10;
    if ( v10 )
    {
      if ( v7 > 0x7FFFFFFF )
      {
        *v10 = 0;
        return 0;
      }
      else if ( v4 >= 0x7FFFFFFF )
      {
        v8 = 0;
        if ( v4 != -1LL )
          *v10 = 0;
      }
      else
      {
        if ( !v6 )
        {
          v6 = &pvData;
          v4 = 0LL;
        }
        v8 = 0;
        if ( v7 )
        {
          v12 = v4 - v7;
          v13 = v7;
          v14 = (char *)v6 - (char *)v10;
          v15 = 0LL;
          v16 = v10;
          do
          {
            if ( !(v12 + v13) )
              break;
            v17 = *(_WORD *)((char *)v11 + v14);
            if ( !v17 )
              break;
            *v11 = v17;
            ++v15;
            ++v11;
            --v13;
          }
          while ( v13 );
          v18 = v11 - 1;
          if ( v13 )
            v18 = v11;
          *v18 = 0;
          v19 = v15 - 1;
          if ( v13 )
            v19 = v15;
          v20 = v7 - v19;
          if ( v13 && v20 > 1 && 2 * v20 > 2 )
            memset_0(&v16[v19 + 1], 0, 2 * v20 - 2);
        }
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v8;
}
