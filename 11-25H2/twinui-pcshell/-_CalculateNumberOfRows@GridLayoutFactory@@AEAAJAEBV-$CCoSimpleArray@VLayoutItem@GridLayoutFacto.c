/*
 * XREFs of ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x1804C39B8
 * Callers:
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x1804C3C44 (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     sqrt @ 0x1802D2F9C (sqrt.c)
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x1804A8DD0 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 *     ?_SkipRowCountByContentWidth@GridLayoutFactory@@AEAA_KAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@@Z @ 0x1804C4458 (-_SkipRowCountByContentWidth@GridLayoutFactory@@AEAA_KAEBV-$CCoSimpleArray@VLayoutItem@GridLayou.c)
 *     ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1804C4520 (-_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PP.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x1804C47D0 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 */

__int64 __fastcall GridLayoutFactory::_CalculateNumberOfRows(
        GridLayoutFactory *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        _DWORD *a5)
{
  _DWORD *v5; // rax
  __int64 v8; // rax
  bool v9; // zf
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  unsigned __int64 i; // rbx
  int v13; // ebp
  double v14; // xmm6_8
  int TotalWidthForHeight; // eax
  double v16; // xmm0_8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // ebp
  int v23; // edi
  __int64 v24; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 *v27; // [rsp+98h] [rbp+20h]

  v27 = a4;
  v5 = a5;
  *a4 = 0LL;
  *v5 = 0;
  v8 = GridLayoutFactory::_SkipRowCountByContentWidth();
  v9 = *((_DWORD *)this + 14) == 1;
  v10 = v8;
  v11 = *(_QWORD *)(a2 + 8);
  i = v8;
  v13 = 0;
  LODWORD(v26) = 0;
  if ( v9 )
  {
    v14 = (double)(int)(*((_DWORD *)this + 29)
                      + *((_DWORD *)this + 38)
                      + *((_DWORD *)this + 39)
                      + *((_DWORD *)this + 42)
                      + *((_DWORD *)this + 43)
                      + ThumbnailHeight::GetForScreenHeight(
                          (GridLayoutFactory *)((char *)this + 72),
                          *((_DWORD *)this + 129)));
    TotalWidthForHeight = GridLayoutFactory::s_GetTotalWidthForHeight(
                            a2,
                            *((unsigned int *)this + 12),
                            (unsigned int)(int)v14,
                            0LL);
    v16 = sqrt(
            (double)TotalWidthForHeight
          / v14
          / ((double)(*((_DWORD *)this + 132) - *((_DWORD *)this + 130))
           / (double)(*((_DWORD *)this + 133) - *((_DWORD *)this + 131))))
        + 0.5;
    v17 = 0LL;
    if ( v16 >= 9.223372036854776e18 )
    {
      v16 = v16 - 9.223372036854776e18;
      if ( v16 < 9.223372036854776e18 )
        v17 = 0x8000000000000000uLL;
    }
    v19 = v17 + (unsigned int)(int)v16;
    v18 = v19;
    if ( v19 <= v10 + 1 )
      v19 = v10 + 1;
    if ( v19 >= v11 )
    {
      v18 = v11;
    }
    else if ( v18 <= v10 + 1 )
    {
      v18 = v10 + 1;
    }
    for ( i = v18; i > v10; --i )
    {
      v20 = GridLayoutFactory::_SplitIntoRows(this, (__int64)&v26);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17A,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
          (const char *)(unsigned int)v20);
        return v21;
      }
      v13 = v26;
      if ( (int)v26 <= *((_DWORD *)this + 132) - *((_DWORD *)this + 130) )
        goto LABEL_28;
    }
    if ( i == v10 )
    {
      if ( v18 < v11 )
      {
        i = v18;
        goto LABEL_25;
      }
      v23 = GridLayoutFactory::_SplitIntoRows(this, (__int64)&v26);
      if ( v23 < 0 )
      {
        v24 = 404LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
          (const char *)(unsigned int)v23);
        return (unsigned int)v23;
      }
LABEL_29:
      v13 = v26;
    }
  }
  else if ( !*((_DWORD *)this + 14) )
  {
LABEL_25:
    while ( 1 )
    {
      ++i;
      v23 = GridLayoutFactory::_SplitIntoRows(this, (__int64)&v26);
      if ( v23 < 0 )
        break;
      if ( i >= v11 )
        goto LABEL_29;
      v13 = v26;
      if ( (int)v26 <= *((_DWORD *)this + 132) - *((_DWORD *)this + 130) )
        goto LABEL_28;
    }
    v24 = 418LL;
    goto LABEL_23;
  }
LABEL_28:
  *a5 = v13;
  *v27 = i;
  return 0LL;
}
