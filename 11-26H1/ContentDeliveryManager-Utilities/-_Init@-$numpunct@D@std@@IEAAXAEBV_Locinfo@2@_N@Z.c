/*
 * XREFs of ?_Init@?$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180009354
 * Callers:
 *     ?_Getcat@?$numpunct@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800075D4 (-_Getcat@-$numpunct@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180009A48 (-_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     _Getcvt @ 0x180005EC8 (_Getcvt.c)
 *     ??_U@YAPEAX_K@Z @ 0x18000626C (--_U@YAPEAX_K@Z.c)
 *     strlen_0 @ 0x180021D0E (strlen_0.c)
 */

_BYTE *__fastcall std::numpunct<char>::_Init(__int64 a1, __int64 a2, char a3)
{
  struct lconv *v5; // r14
  const char *grouping; // rdi
  size_t v7; // rax
  size_t v8; // rsi
  _BYTE *v9; // rax
  _BYTE *i; // rdx
  const char *v11; // rsi
  __int64 v12; // rdi
  _BYTE *v13; // rax
  _BYTE *v14; // rdx
  const char *v15; // rsi
  __int64 v16; // rdi
  _BYTE *result; // rax
  _BYTE *v18; // rdx
  _Cvtvec v20; // [rsp+30h] [rbp-48h] BYREF

  v5 = localeconv();
  Getcvt(&v20);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  Getcvt(&v20);
  grouping = (const char *)&Str;
  if ( !a3 )
    grouping = v5->grouping;
  v7 = strlen_0(grouping);
  v8 = v7 + 1;
  try
  {
    v9 = operator new[](v7 + 1);
    for ( i = v9; v8; --v8 )
      *i++ = *grouping++;
    *(_QWORD *)(a1 + 16) = v9;
    v11 = "false";
    v12 = 6LL;
    v13 = operator new[](6uLL);
    v14 = v13;
    do
    {
      *v14++ = *v11++;
      --v12;
    }
    while ( v12 );
    *(_QWORD *)(a1 + 32) = v13;
    v15 = "true";
    v16 = 5LL;
    result = operator new[](5uLL);
    v18 = result;
    do
    {
      *v18++ = *v15++;
      --v16;
    }
    while ( v16 );
    *(_QWORD *)(a1 + 40) = result;
  }
  catch ( ... )
  {
    std::numpunct<char>::_Tidy(a1);
    throw;
  }
  if ( a3 )
  {
    *(_WORD *)(a1 + 24) = 11310;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = *v5->decimal_point;
    result = v5->thousands_sep;
    *(_BYTE *)(a1 + 25) = *result;
  }
  return result;
}
