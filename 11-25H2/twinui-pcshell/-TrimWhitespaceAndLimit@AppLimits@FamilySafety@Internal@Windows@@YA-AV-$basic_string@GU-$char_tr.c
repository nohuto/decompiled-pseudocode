/*
 * XREFs of ?TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV56@_K@Z @ 0x180552D04
 * Callers:
 *     ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x1805525A0 (-ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x1800AFD9C (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall Windows::Internal::FamilySafety::AppLimits::TrimWhitespaceAndLimit(void **Src, __int16 *a2)
{
  char v4; // r15
  char v5; // si
  __int16 *v6; // rbx
  __int16 *v7; // rcx
  __int16 v8; // bp

  *(_OWORD *)Src = 0LL;
  Src[2] = 0LL;
  Src[3] = (void *)7;
  *(_WORD *)Src = 0;
  v4 = 1;
  v5 = 0;
  v6 = a2;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    v6 = *(__int16 **)a2;
  while ( 1 )
  {
    v7 = a2;
    if ( *((_QWORD *)a2 + 3) > 7uLL )
      v7 = *(__int16 **)a2;
    if ( v6 == &v7[*((_QWORD *)a2 + 2)] )
      break;
    v8 = *v6;
    if ( (unsigned int)_o_isspace((unsigned __int16)*v6) )
    {
      if ( !v4 )
        v5 = 1;
    }
    else
    {
      if ( v5 )
      {
        std::wstring::push_back(Src, 32);
        v5 = 0;
      }
      v4 = 0;
      std::wstring::push_back(Src, v8);
    }
    if ( (unsigned __int64)Src[2] + (v5 != 0) >= 0x32 )
      break;
    ++v6;
  }
  return Src;
}
