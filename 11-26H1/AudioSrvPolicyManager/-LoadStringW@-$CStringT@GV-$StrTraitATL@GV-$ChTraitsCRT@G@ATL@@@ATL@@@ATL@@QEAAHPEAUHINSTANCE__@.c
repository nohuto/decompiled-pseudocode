/*
 * XREFs of ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x18003DDF0
 * Callers:
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x18003DD40 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180004EA0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x18001E294 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002848C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _o_wmemcpy_s_0 @ 0x1800309EC (_o_wmemcpy_s_0.c)
 *     ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x18003E194 (-_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        __int64 *a1,
        HMODULE a2,
        unsigned int a3)
{
  HRSRC Resource; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *StringResourceImage; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *v8; // rdi
  rsize_t v9; // rbx
  errno_t v10; // eax

  Resource = FindResourceExW(a2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a3 >> 4) + 1), 0);
  if ( !Resource )
    return 0LL;
  StringResourceImage = ATL::_AtlGetStringResourceImage(a2, Resource, a3);
  v8 = StringResourceImage;
  if ( !StringResourceImage )
    return 0LL;
  v9 = *(unsigned __int16 *)StringResourceImage;
  if ( (((*(_DWORD *)(*a1 - 12) - v9) | (1 - *(_DWORD *)(*a1 - 8))) & 0x80000000) != 0LL )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v9);
  v10 = o_wmemcpy_s_0((wchar_t *)*a1, v9, (const wchar_t *)v8 + 1, *(unsigned __int16 *)v8);
  ATL::AtlCrtErrorCheck(v10);
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v9);
  return 1LL;
}
