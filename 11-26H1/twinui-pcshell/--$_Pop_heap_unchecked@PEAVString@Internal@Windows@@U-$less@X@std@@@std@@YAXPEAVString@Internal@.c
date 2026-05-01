/*
 * XREFs of ??$_Pop_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x18030F75C
 * Callers:
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x18004D9C8 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18004D95C (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ??$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@_J1$$QEAV123@U?$less@X@0@@Z @ 0x18030F630 (--$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U-$less@X@std@@@std@@YAXPEAVString@.c)
 */

void __fastcall std::_Pop_heap_unchecked<Windows::Internal::String *,std::less<void>>(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  HSTRING v4; // [rsp+40h] [rbp+8h] BYREF

  if ( (__int64)((a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF8uLL) >= 16 )
  {
    v3 = (_QWORD *)(a2 - 8);
    v4 = *(HSTRING *)(a2 - 8);
    *(_QWORD *)(a2 - 8) = 0LL;
    Windows::Internal::String::Release((HSTRING *)(a2 - 8));
    *v3 = *a1;
    *a1 = 0LL;
    std::_Pop_heap_hole_by_index<Windows::Internal::String *,Windows::Internal::String,std::less<void>>(
      (__int64)a1,
      0LL,
      v3 - a1,
      &v4);
    Windows::Internal::String::~String(&v4);
  }
}
