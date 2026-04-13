/*
 * XREFs of ?_Init@?$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180013DD8
 * Callers:
 *     ?_Getcat@?$moneypunct@G$00@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180011A74 (-_Getcat@-$moneypunct@G$00@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$moneypunct@G$0A@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180011B60 (-_Getcat@-$moneypunct@G$0A@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180014914 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     _Getcvt @ 0x180005EC8 (_Getcvt.c)
 *     ??_U@YAPEAX_K@Z @ 0x18000626C (--_U@YAPEAX_K@Z.c)
 *     ??$_Getvals@G@?$_Mpunct@G@std@@IEAAXGPEBUlconv@@@Z @ 0x18000EC3C (--$_Getvals@G@-$_Mpunct@G@std@@IEAAXGPEBUlconv@@@Z.c)
 *     memcpy_s_0 @ 0x1800219A8 (memcpy_s_0.c)
 *     strlen_0 @ 0x180021D0E (strlen_0.c)
 */

errno_t __fastcall std::_Mpunct<unsigned short>::_Init(__int64 a1, __int64 a2, char a3)
{
  _Cvtvec *v5; // rax
  struct lconv *v6; // rsi
  const char *mon_grouping; // r14
  size_t v8; // rdi
  _BYTE *v9; // rax
  _BYTE *i; // rdx
  char v11; // dl
  char *p_int_frac_digits; // rcx
  int v13; // ecx
  unsigned int p_sign_posn; // r8d
  unsigned int p_cs_precedes; // eax
  unsigned int p_sep_by_space; // ecx
  char *v17; // r8
  char *v18; // r14
  unsigned int n_sign_posn; // eax
  unsigned int n_cs_precedes; // ecx
  unsigned int n_sep_by_space; // edx
  errno_t result; // eax
  _Cvtvec v23; // [rsp+28h] [rbp-60h] BYREF

  v5 = Getcvt(&v23);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v5->_Page;
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v5->_Isleadbyte[4];
  *(_OWORD *)(a1 + 104) = *(_OWORD *)&v5->_Isleadbyte[20];
  v6 = localeconv();
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  mon_grouping = v6->mon_grouping;
  v8 = strlen_0(mon_grouping) + 1;
  try
  {
    v9 = operator new[](v8);
    for ( i = v9; v8; --v8 )
      *i++ = *mon_grouping++;
    *(_QWORD *)(a1 + 16) = v9;
    std::_Mpunct<unsigned short>::_Getvals<unsigned short>(a1, 0LL, (__int64)v6);
  }
  catch ( ... )
  {
    std::_Mpunct<wchar_t>::_Tidy(a1);
    throw;
  }
  v11 = *(_BYTE *)(a1 + 68);
  p_int_frac_digits = &v6->int_frac_digits;
  if ( !v11 )
    p_int_frac_digits = &v6->frac_digits;
  v13 = *p_int_frac_digits;
  *(_DWORD *)(a1 + 56) = v13;
  if ( (unsigned __int8)v13 > 0x7Eu )
    *(_DWORD *)(a1 + 56) = 0;
  p_sign_posn = v6->p_sign_posn;
  p_cs_precedes = v6->p_cs_precedes;
  p_sep_by_space = v6->p_sep_by_space;
  if ( v11 || p_sep_by_space > 2 || p_cs_precedes > 1 || p_sign_posn > 4 )
  {
    v18 = "$+xv";
    v17 = "$+xv";
  }
  else
  {
    v17 = &aVXVXvXvXvXVxVx[32 * p_sep_by_space
                         + 16 * p_cs_precedes
                         + 8 * p_sep_by_space
                         + 4 * p_cs_precedes
                         + 4 * p_sign_posn];
    v18 = "$+xv";
  }
  memcpy_s_0((void *const)(a1 + 60), 4uLL, v17, 4uLL);
  n_sign_posn = v6->n_sign_posn;
  n_cs_precedes = v6->n_cs_precedes;
  n_sep_by_space = v6->n_sep_by_space;
  if ( !*(_BYTE *)(a1 + 68) && n_sep_by_space <= 2 && n_cs_precedes <= 1 && n_sign_posn <= 4 )
    v18 = &aVXVXvXvXvXVxVx[32 * n_sep_by_space
                         + 16 * n_cs_precedes
                         + 8 * n_sep_by_space
                         + 4 * n_cs_precedes
                         + 4 * n_sign_posn];
  result = memcpy_s_0((void *const)(a1 + 64), 4uLL, v18, 4uLL);
  if ( a3 )
  {
    result = 1987586852;
    *(_DWORD *)(a1 + 60) = 1987586852;
    *(_DWORD *)(a1 + 64) = 1987586852;
  }
  return result;
}
