/*
 * XREFs of ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x18002FAFC
 * Callers:
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002A340 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x180018600 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x18002FBF8 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800B314E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
        _QWORD *a1,
        int a2)
{
  int v2; // esi
  int v4; // edi
  int v5; // ebx
  unsigned int v6; // ebp
  int v7; // edi
  __int64 Buffer; // rax
  void *v9; // rcx
  size_t v10; // r8
  unsigned int v11; // ebx

  v2 = 0;
  if ( a2 >= 0 )
    v2 = a2;
  v4 = *(_DWORD *)(*a1 - 16LL);
  if ( v2 == 0x7FFFFFFF )
    goto LABEL_16;
  v5 = v4 - v2;
  if ( v2 + 1 <= v4 )
  {
    v6 = 1;
LABEL_6:
    v7 = v4 - v6;
    Buffer = ATL::CSimpleStringT<unsigned short,0>::GetBuffer();
    v9 = (void *)(Buffer + 2LL * v2);
    v10 = 2LL * (int)(v5 - v6 + 1);
    if ( v10 )
    {
      if ( !v9 || !(Buffer + 2 * (v2 + (unsigned __int64)v6)) )
      {
        v11 = 22;
        *(_DWORD *)_o__errno(v9) = 22;
        invalid_parameter_noinfo();
LABEL_9:
        ATL::AtlCrtErrorCheck(v11);
        if ( v7 >= 0 && v7 <= *(_DWORD *)(*a1 - 12LL) )
        {
          *(_DWORD *)(*a1 - 16LL) = v7;
          *(_WORD *)(*a1 + 2LL * v7) = 0;
          return *(unsigned int *)(*a1 - 16LL);
        }
LABEL_16:
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0(v9, (const void *)(Buffer + 2 * (v2 + (unsigned __int64)v6)), v10);
    }
    v11 = 0;
    goto LABEL_9;
  }
  v6 = v4 - v2;
  if ( v5 > 0 )
    goto LABEL_6;
  return *(unsigned int *)(*a1 - 16LL);
}
