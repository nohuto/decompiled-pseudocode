/*
 * XREFs of ?FormatV@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z @ 0x180004AA8
 * Callers:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18002E830 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180004B90 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBGPEAUIAtlStringMgr@1@@Z @ 0x180004CE0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBGPEAUIAtlStringMgr@1@@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180004EA0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x18002E660 (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     vswprintf_s @ 0x180030AB8 (vswprintf_s.c)
 *     _vscwprintf @ 0x180030B20 (_vscwprintf.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::FormatV(
        wchar_t *const *a1,
        const wchar_t *a2,
        va_list a3)
{
  int v6; // eax
  __int64 v7; // rbx
  __int64 Manager; // rax
  wchar_t *Format; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v6 = vscwprintf(a2, a3);
  v7 = v6;
  if ( v6 == -1 )
    ATL::AtlThrowImpl(-2147024882);
  Manager = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(a1);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    &Format,
    a2,
    Manager);
  if ( (int)((*((_DWORD *)*a1 - 3) - v7) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, (unsigned int)v7);
  vswprintf_s(*a1, (int)v7 + 1, Format, a3);
  if ( (int)v7 < 0 || (int)v7 > *((_DWORD *)*a1 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)*a1 - 4) = v7;
  (*a1)[v7] = 0;
  ATL::CStringData::Release((ATL::CStringData *)(Format - 12));
}
