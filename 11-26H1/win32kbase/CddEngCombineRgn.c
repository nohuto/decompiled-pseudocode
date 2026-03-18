/*
 * XREFs of CddEngCombineRgn @ 0x1401FB8A0
 * Callers:
 *     CddEngCopyRgn @ 0x1401FB990 (CddEngCopyRgn.c)
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x14012E038 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017BE00 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     ?iCombine@RGNCOREOBJ@@QEAAJAEAV1@0J@Z @ 0x14019FA90 (-iCombine@RGNCOREOBJ@@QEAAJAEAV1@0J@Z.c)
 */

__int64 __fastcall CddEngCombineRgn(REGION_CORE **a1, REGION_CORE *a2, REGION_CORE *a3, int a4)
{
  REGION_CORE *v5; // rbx
  unsigned int v6; // ecx
  REGION_CORE *v7; // rax
  REGION_CORE *v9; // [rsp+20h] [rbp-20h] BYREF
  REGION_CORE *v10; // [rsp+28h] [rbp-18h] BYREF
  REGION_CORE *v11; // [rsp+30h] [rbp-10h] BYREF

  if ( (unsigned int)(a4 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    if ( a4 == 5 )
    {
      v5 = *a1;
      v10 = a2;
      v9 = v5;
      if ( RGNCOREOBJ::bCopy(&v9, &v10) )
        v6 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v9);
      else
        v6 = 0;
      if ( !WPP_MAIN_CB.Dpc.DeferredContext )
      {
        if ( v6 )
          *a1 = v5;
      }
    }
    else
    {
      v7 = *a1;
      if ( *a1 == a2 || v7 == a3 )
      {
        return 0;
      }
      else
      {
        v11 = a2;
        v10 = a3;
        v9 = v7;
        if ( (unsigned int)RGNCOREOBJ::iCombine((RGNCOREOBJ *)&v9, (struct RGNCOREOBJ *)&v11, (struct RGNCOREOBJ *)&v10) )
          v6 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v9);
        else
          v6 = 0;
        if ( !WPP_MAIN_CB.Dpc.DeferredContext && v6 )
          *a1 = v9;
      }
    }
    return v6;
  }
}
