/*
 * XREFs of ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBGPEAUIAtlStringMgr@1@@Z @ 0x180004CE0
 * Callers:
 *     ?FormatV@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z @ 0x180004AA8 (-FormatV@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z.c)
 * Callees:
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180004E40 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180004EA0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x18003DD40 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z.c)
 *     memmove_0 @ 0x18004B850 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        __int64 *a1,
        _WORD *a2,
        __int64 a3)
{
  __int64 v5; // rax
  char *v6; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  char *v11; // rcx
  __int64 v12; // r14

  if ( !a3 )
    ATL::AtlThrowImpl(-2147467259);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3) + 24;
  *a1 = v5;
  if ( !a2 )
    goto LABEL_3;
  if ( (unsigned __int64)a2 < 0x10000 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      a1,
      (unsigned __int16)a2);
    return a1;
  }
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  if ( !(_DWORD)v8 )
  {
LABEL_3:
    ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
    return a1;
  }
  v9 = *(unsigned int *)(v5 - 16);
  v10 = ((__int64)a2 - v5) >> 1;
  if ( (int)((*(_DWORD *)(v5 - 12) - v8) | (1 - *(_DWORD *)(v5 - 8))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, (unsigned int)v8);
  v11 = (char *)*a1;
  v12 = 2LL * (int)v8;
  if ( v10 > v9 )
  {
    if ( !v12 )
      goto LABEL_14;
    if ( v11 )
    {
      memcpy_0(v11, a2, 2LL * (int)v8);
      goto LABEL_14;
    }
LABEL_19:
    *(_DWORD *)_o__errno(v11, v6) = 22;
    invalid_parameter_noinfo();
    goto LABEL_14;
  }
  v6 = &v11[2 * v10];
  if ( !v12 )
    goto LABEL_14;
  if ( !v11 || !v6 )
    goto LABEL_19;
  memmove_0(v11, v6, 2LL * (int)v8);
LABEL_14:
  if ( (int)v8 < 0 || (int)v8 > *(_DWORD *)(*a1 - 12) )
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(*a1 - 16) = v8;
  *(_WORD *)(v12 + *a1) = 0;
  return a1;
}
