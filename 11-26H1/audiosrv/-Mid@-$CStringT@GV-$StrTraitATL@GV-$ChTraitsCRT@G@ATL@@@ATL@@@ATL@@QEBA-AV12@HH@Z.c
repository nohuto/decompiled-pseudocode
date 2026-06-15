/*
 * XREFs of ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x180029F10
 * Callers:
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x180029E14 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 * Callees:
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x18002A1A0 (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x180042158 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800AF15C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800B314E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void **__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Mid(
        _QWORD *a1,
        void **a2,
        int a3,
        int a4)
{
  int v5; // esi
  int v6; // edx
  int v8; // ebx
  int v9; // r8d
  int v10; // eax
  __int64 (__fastcall ***Manager)(_QWORD, _QWORD, __int64); // rax
  const void *v12; // rsi
  __int64 v13; // rax
  size_t v14; // r8
  void *v15; // rcx

  v5 = 0;
  v6 = 0;
  if ( a3 >= 0 )
    v5 = a3;
  if ( a4 >= 0 )
    v6 = a4;
  if ( 0x7FFFFFFF - v5 < v6 )
    goto LABEL_26;
  v8 = 0;
  v9 = *(_DWORD *)(*a1 - 16LL);
  v10 = v9 - v5;
  if ( v6 + v5 <= v9 )
    v10 = v6;
  if ( v5 <= v9 )
    v8 = v10;
  if ( !v5 && v8 == v9 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      a2,
      a1);
    return a2;
  }
  Manager = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(a1);
  v12 = (const void *)(*a1 + 2LL * v5);
  if ( !Manager )
    ATL::AtlThrowImpl(-2147467259);
  if ( !v12 && v8 )
    goto LABEL_26;
  v13 = (**Manager)(Manager, (unsigned int)v8, 2LL);
  if ( !v13 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  *a2 = (void *)(v13 + 24);
  if ( v8 < 0 || v8 > *(_DWORD *)(v13 + 12) )
LABEL_26:
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(v13 + 8) = v8;
  v14 = 2LL * v8;
  *(_WORD *)((char *)*a2 + v14) = 0;
  v15 = *a2;
  if ( v14 )
  {
    if ( v15 )
    {
      if ( v12 )
      {
        memcpy_0(v15, v12, v14);
        return a2;
      }
      memset_0(v15, 0, v14);
    }
    *(_DWORD *)_o__errno(v15) = 22;
    invalid_parameter_noinfo();
  }
  return a2;
}
