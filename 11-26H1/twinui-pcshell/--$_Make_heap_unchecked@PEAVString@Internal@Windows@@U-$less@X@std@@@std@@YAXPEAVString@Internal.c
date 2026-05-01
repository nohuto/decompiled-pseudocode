/*
 * XREFs of ??$_Make_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1802B98BC
 * Callers:
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x18004D9C8 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ??$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@_J1$$QEAV123@U?$less@X@0@@Z @ 0x18030F630 (--$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U-$less@X@std@@@std@@YAXPEAVString@.c)
 */

void __fastcall std::_Make_heap_unchecked<Windows::Internal::String *,std::less<void>>(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // [rsp+20h] [rbp-18h]
  HSTRING v8; // [rsp+40h] [rbp+8h] BYREF

  v5 = (a2 - a1) >> 3;
  v6 = (a2 - a1) >> 4;
  while ( v6 > 0 )
  {
    --v6;
    LOBYTE(v7) = a3;
    v8 = *(HSTRING *)(a1 + 8 * v6);
    *(_QWORD *)(a1 + 8 * v6) = 0LL;
    std::_Pop_heap_hole_by_index<Windows::Internal::String *,Windows::Internal::String,std::less<void>>(
      a1,
      v6,
      v5,
      &v8,
      v7);
    Windows::Internal::String::~String(&v8);
  }
}
