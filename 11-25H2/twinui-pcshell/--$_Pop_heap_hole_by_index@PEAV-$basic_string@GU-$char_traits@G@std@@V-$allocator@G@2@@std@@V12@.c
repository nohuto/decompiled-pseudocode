/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@_J1$$QEAV10@U?$less@X@0@@Z @ 0x18033E62C
 * Callers:
 *     ??$_Make_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x18033E2A4 (--$_Make_heap_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less.c)
 *     ??$_Pop_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x18033E730 (--$_Pop_heap_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEF48 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18023A6FC (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

__int64 __fastcall std::_Pop_heap_hole_by_index<std::wstring *,std::wstring,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  __int64 v4; // r13
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 i; // rbx
  int v12; // eax
  __int64 v13; // r11
  __int64 v14; // r11
  __int64 v15; // rbx
  int v16; // eax

  v4 = a3 - 1;
  v7 = (a3 - 1) >> 1;
  v8 = a2;
  for ( i = a2; i < v7; v8 = i )
  {
    LOBYTE(v12) = std::wstring::compare(
                    (_QWORD *)(a1 + 32 * (2 * i + 2)),
                    (unsigned __int16 *)(a1 + 32 * (2 * i + 2) - 32));
    i = v13 + ((unsigned __int64)(unsigned int)~v12 >> 31) + 1;
    std::wstring::operator=(a1 + 32 * v8, a1 + 32 * i);
  }
  v14 = i;
  if ( i == v7 && (a3 & 1) == 0 )
  {
    std::wstring::operator=(a1 + 32 * i, 32 * a3 + a1 - 32);
    v14 = v4;
  }
  if ( a2 < v14 )
  {
    do
    {
      v15 = (v14 - 1) >> 1;
      LOBYTE(v16) = std::wstring::compare((_QWORD *)(a1 + 32 * v15), a4);
      if ( v16 >= 0 )
        break;
      std::wstring::operator=(a1 + 32 * v14, a1 + 32 * v15);
      v14 = v15;
    }
    while ( a2 < v15 );
  }
  return std::wstring::operator=(a1 + 32 * v14, (__int64)a4);
}
