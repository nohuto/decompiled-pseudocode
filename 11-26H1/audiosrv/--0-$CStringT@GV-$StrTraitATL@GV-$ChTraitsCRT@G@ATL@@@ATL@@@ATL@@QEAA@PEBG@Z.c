/*
 * XREFs of ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1800283B0
 * Callers:
 *     ?NewNode@?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@PEBGPEAV312@1@Z @ 0x18012ADFC (-NewNode@-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTr.c)
 *     ?NewNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x18015B0C4 (-NewNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValu.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018490 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180028504 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800B314E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x1800CEA8C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        __int64 *a1,
        _WORD *a2)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbp
  char *v9; // rcx
  __int64 v10; // r14
  char *v11; // rdx

  v4 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  *a1 = v4;
  if ( !a2 )
    goto LABEL_2;
  if ( (unsigned __int64)a2 < 0x10000 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      a1,
      (unsigned __int16)a2);
    return a1;
  }
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  if ( !(_DWORD)v6 )
  {
LABEL_2:
    ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
    return a1;
  }
  v7 = *(unsigned int *)(v4 - 16);
  v8 = ((__int64)a2 - v4) >> 1;
  if ( (int)((*(_DWORD *)(v4 - 12) - v6) | (1 - *(_DWORD *)(v4 - 8))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v6);
  v9 = (char *)*a1;
  v10 = 2LL * (int)v6;
  if ( v8 <= v7 )
  {
    v11 = &v9[2 * v8];
    if ( v10 )
    {
      if ( !v9 || !v11 )
      {
LABEL_11:
        *(_DWORD *)_o__errno(v9) = 22;
        invalid_parameter_noinfo();
        goto LABEL_12;
      }
      memmove_0(v9, v11, 2LL * (int)v6);
    }
  }
  else
  {
    if ( !v10 )
      goto LABEL_12;
    if ( !v9 )
      goto LABEL_11;
    memcpy_0(v9, a2, 2LL * (int)v6);
  }
LABEL_12:
  if ( (int)v6 < 0 || (int)v6 > *(_DWORD *)(*a1 - 12) )
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(*a1 - 16) = v6;
  *(_WORD *)(v10 + *a1) = 0;
  return a1;
}
