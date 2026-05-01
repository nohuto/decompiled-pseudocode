/*
 * XREFs of ??$_Make_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1802BE4A8
 * Callers:
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x180110454 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ??$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@_J1$$QEAV123@U?$less@X@0@@Z @ 0x180313754 (--$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U-$less@X@std@@@std@@YAXPEAVString@.c)
 */

void __fastcall std::_Make_heap_unchecked<Windows::Internal::String *,std::less<void>>(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  HSTRING *v7; // r14
  HSTRING v8; // rax
  int v9; // [rsp+20h] [rbp-28h]
  HSTRING v10; // [rsp+50h] [rbp+8h] BYREF

  v5 = (a2 - a1) >> 3;
  v6 = (a2 - a1) >> 4;
  if ( v6 > 0 )
  {
    v7 = (HSTRING *)(a1 - 8 + 8 * v6);
    do
    {
      v8 = *v7;
      *v7 = 0LL;
      --v6;
      v10 = v8;
      LOBYTE(v9) = a3;
      std::_Pop_heap_hole_by_index<Windows::Internal::String *,Windows::Internal::String,std::less<void>>(
        a1,
        v6,
        v5,
        &v10,
        v9);
      Windows::Internal::String::~String(&v10);
      --v7;
    }
    while ( v6 > 0 );
  }
}
