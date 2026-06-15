/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180004BC8
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18004963C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180004E40 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180004EA0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     memmove_0 @ 0x18004B850 (memmove_0.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(__int64 *a1, char *a2)
{
  char *v2; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r15
  char *v7; // rcx
  __int64 v8; // rsi
  __int64 result; // rax

  v2 = a2;
  if ( !a2 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty();
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)&a2[2 * v4] );
  if ( !(_DWORD)v4 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty();
  v5 = (__int64)&a2[-*a1] >> 1;
  v6 = *(unsigned int *)(*a1 - 16);
  if ( (int)((*(_DWORD *)(*a1 - 12) - v4) | (1 - *(_DWORD *)(*a1 - 8))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, (unsigned int)v4);
  v7 = (char *)*a1;
  v8 = 2LL * (int)v4;
  if ( v5 <= v6 )
  {
    a2 = &v7[2 * v5];
    if ( !v8 )
      goto LABEL_16;
    if ( v7 && a2 )
    {
      memmove_0(v7, a2, 2LL * (int)v4);
      goto LABEL_16;
    }
LABEL_14:
    *(_DWORD *)_o__errno(v7, a2) = 22;
    invalid_parameter_noinfo();
    goto LABEL_16;
  }
  if ( !v8 )
    goto LABEL_16;
  if ( !v7 )
    goto LABEL_14;
  memcpy_0(v7, v2, 2LL * (int)v4);
LABEL_16:
  if ( (int)v4 < 0 || (int)v4 > *(_DWORD *)(*a1 - 12) )
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(*a1 - 16) = v4;
  result = *a1;
  *(_WORD *)(v8 + *a1) = 0;
  return result;
}
