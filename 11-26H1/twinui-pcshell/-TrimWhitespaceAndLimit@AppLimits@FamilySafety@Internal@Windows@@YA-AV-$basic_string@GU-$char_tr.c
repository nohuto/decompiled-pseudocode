/*
 * XREFs of ?TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV56@_K@Z @ 0x180576F00
 * Callers:
 *     ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x1805767F4 (-ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x1800336D8 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
const void **__fastcall Windows::Internal::FamilySafety::AppLimits::TrimWhitespaceAndLimit(
        const void **Src,
        _QWORD *a2)
{
  __int64 v4; // rdx
  char v5; // r15
  char v6; // si
  __int16 *v7; // rbx
  _QWORD *v8; // rcx
  __int16 v9; // r14

  std::wstring::wstring((__int64)Src);
  v5 = 1;
  v6 = 0;
  v7 = (__int16 *)v4;
  if ( *(_QWORD *)(v4 + 24) > 7uLL )
    v7 = *(__int16 **)v4;
  while ( 1 )
  {
    v8 = a2;
    if ( a2[3] > 7uLL )
      v8 = (_QWORD *)*a2;
    if ( v7 == (__int16 *)((char *)v8 + 2 * a2[2]) )
      break;
    v9 = *v7;
    if ( (unsigned int)_o_isspace((unsigned __int16)*v7) )
    {
      if ( !v5 )
        v6 = 1;
    }
    else
    {
      if ( v6 )
      {
        std::wstring::push_back(Src, 32);
        v6 = 0;
      }
      v5 = 0;
      std::wstring::push_back(Src, v9);
    }
    if ( (unsigned __int64)Src[2] + (v6 != 0) >= 0x32 )
      break;
    ++v7;
  }
  return Src;
}
