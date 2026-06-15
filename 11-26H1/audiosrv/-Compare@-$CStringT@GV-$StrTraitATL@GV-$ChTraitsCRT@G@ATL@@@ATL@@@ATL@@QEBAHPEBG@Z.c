/*
 * XREFs of ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x180052EEC
 * Callers:
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18007BBAC (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
        unsigned __int16 **a1,
        __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 *v3; // rcx
  __int64 v4; // r8
  unsigned __int16 v5; // dx

  result = 0LL;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v3 = *a1;
  v4 = a2 - (_QWORD)v3;
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 != *(unsigned __int16 *)((char *)v3 + v4) )
      break;
    ++v3;
    if ( !v5 )
      return result;
  }
  return v5 < *(unsigned __int16 *)((char *)v3 + v4) ? -1 : 1;
}
