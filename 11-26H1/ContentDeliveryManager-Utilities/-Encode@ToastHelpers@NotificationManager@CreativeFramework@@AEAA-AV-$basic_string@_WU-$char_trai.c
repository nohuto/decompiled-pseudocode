/*
 * XREFs of ?Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x1800A7CF0
 * Callers:
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800A8D70 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18006B04C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x180089A80 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 *     ?reserve@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K@Z @ 0x180099150 (-reserve@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreativeFramework::NotificationManager::ToastHelpers::Encode(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 *v3; // rbx
  _QWORD *v5; // rdi
  __int64 *v6; // rcx
  __int64 *v7; // rdi

  v3 = a3;
  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  v5 = a3 + 2;
  std::wstring::reserve(a2, a3[2]);
  if ( (unsigned __int64)v3[3] < 8 )
  {
    v6 = v3;
  }
  else
  {
    v6 = (__int64 *)*v3;
    v3 = (__int64 *)*v3;
  }
  v7 = (__int64 *)((char *)v6 + 2 * *v5);
  while ( v3 != v7 )
  {
    if ( *(_WORD *)v3 == 38 )
      std::wstring::append(a2, L"&amp;");
    else
      std::wstring::append(a2, v3, 1uLL);
    v3 = (__int64 *)((char *)v3 + 2);
  }
  return a2;
}
