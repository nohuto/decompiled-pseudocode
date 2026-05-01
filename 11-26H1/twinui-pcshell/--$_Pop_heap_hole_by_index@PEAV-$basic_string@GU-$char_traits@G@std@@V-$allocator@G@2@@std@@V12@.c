/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@_J1$$QEAV10@U?$less@X@0@@Z @ 0x18033E388
 * Callers:
 *     ??$_Sort_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x18033E6D8 (--$_Sort_heap_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less.c)
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x18033E78C (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?MGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18029A9EC (--$-MGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 */

_QWORD *__fastcall std::_Pop_heap_hole_by_index<std::wstring *,std::wstring,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        wchar_t *a4)
{
  __int64 v5; // r14
  __int64 v7; // r15
  __int64 i; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v14; // [rsp+20h] [rbp-58h]

  v14 = a3 - 1;
  v5 = (a3 - 1) >> 1;
  v7 = a2;
  for ( i = a2; i < v5; v7 = i )
  {
    i = 2 * i
      + ((unsigned __int8)std::operator<<unsigned short>(
                            (const wchar_t *)(a1 + 32 * (2 * i + 2)),
                            (const wchar_t *)(a1 + 32 * (2 * i + 2) - 32)) ^ 1LL)
      + 1;
    std::wstring::operator=((_QWORD *)(a1 + 32 * v7), (_QWORD *)(a1 + 32 * i));
  }
  v11 = i;
  if ( i == v5 && (a3 & 1) == 0 )
  {
    std::wstring::operator=((_QWORD *)(a1 + 32 * i), (_QWORD *)(32 * a3 + a1 - 32));
    v11 = v14;
  }
  if ( a2 < v11 )
  {
    do
    {
      v12 = (v11 - 1) >> 1;
      if ( !(unsigned __int8)std::operator<<unsigned short>((const wchar_t *)(a1 + 32 * v12), a4) )
        break;
      std::wstring::operator=((_QWORD *)(a1 + 32 * v11), (_QWORD *)(a1 + 32 * ((v11 - 1) >> 1)));
      v11 = (v11 - 1) >> 1;
    }
    while ( a2 < v12 );
  }
  return std::wstring::operator=((_QWORD *)(a1 + 32 * v11), a4);
}
