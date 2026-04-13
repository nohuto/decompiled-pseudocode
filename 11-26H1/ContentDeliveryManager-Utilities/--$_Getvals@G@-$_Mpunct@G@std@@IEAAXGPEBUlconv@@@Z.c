/*
 * XREFs of ??$_Getvals@G@?$_Mpunct@G@std@@IEAAXGPEBUlconv@@@Z @ 0x18000EC3C
 * Callers:
 *     ?_Init@?$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180013DD8 (-_Init@-$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     _Mbrtowc @ 0x1800049A4 (_Mbrtowc.c)
 *     ??$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z @ 0x180049908 (--$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z.c)
 */

__int64 __fastcall std::_Mpunct<unsigned short>::_Getvals<unsigned short>(__int64 a1, __int64 a2, __int64 a3)
{
  const _Cvtvec *v3; // rsi
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rax
  char *v9; // rax
  __int64 result; // rax
  char v11; // [rsp+60h] [rbp+30h] BYREF
  wchar_t v12; // [rsp+70h] [rbp+40h] BYREF
  mbstate_t v13; // [rsp+78h] [rbp+48h] BYREF

  v3 = (const _Cvtvec *)(a1 + 72);
  *(_QWORD *)(a1 + 32) = std::_Maklocstr<unsigned short>(*(char **)((-(__int64)(*(_BYTE *)(a1 + 68) != 0) & 0xFFFFFFFFFFFFFFF8uLL)
                                                                  + a3
                                                                  + 32));
  v6 = (char *)&Str;
  if ( *(_BYTE *)(a3 + 86) <= 4u )
    v6 = *(char **)(a3 + 64);
  *(_QWORD *)(a1 + 40) = std::_Maklocstr<unsigned short>(v6);
  v7 = "-";
  if ( *(_BYTE *)(a3 + 87) <= 4u )
    v7 = *(char **)(a3 + 72);
  *(_QWORD *)(a1 + 48) = std::_Maklocstr<unsigned short>(v7);
  v8 = *(char **)(a3 + 40);
  v12 = 0;
  v13._Wchar = 0;
  v11 = *v8;
  Mbrtowc(&v12, &v11, 1uLL, &v13, v3);
  *(_WORD *)(a1 + 24) = v12;
  v9 = *(char **)(a3 + 48);
  v12 = 0;
  v13._Wchar = 0;
  v11 = *v9;
  Mbrtowc(&v12, &v11, 1uLL, &v13, v3);
  result = v12;
  *(_WORD *)(a1 + 26) = v12;
  return result;
}
