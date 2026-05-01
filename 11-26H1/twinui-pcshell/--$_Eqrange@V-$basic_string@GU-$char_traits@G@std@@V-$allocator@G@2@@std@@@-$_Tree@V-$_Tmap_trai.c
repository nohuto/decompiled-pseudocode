/*
 * XREFs of ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180583AD0
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180030EA0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ??$?MGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18029A9EC (--$-MGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,STARTUPAPPINFO,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,STARTUPAPPINFO>>,0>>::_Eqrange<std::wstring>(
        __int64 a1,
        __int64 *a2,
        const wchar_t *a3)
{
  __int64 v3; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // rcx
  __int64 *result; // rax

  v3 = StartupAppMonitor::s_showNotificationMap;
  v6 = StartupAppMonitor::s_showNotificationMap;
  v7 = StartupAppMonitor::s_showNotificationMap;
  v8 = *(_QWORD *)(StartupAppMonitor::s_showNotificationMap + 8);
  if ( !*(_BYTE *)(v8 + 25) )
  {
    do
    {
      if ( (unsigned __int8)std::operator<<unsigned short>((const wchar_t *)(v8 + 32), a3) )
      {
        v8 += 16LL;
      }
      else
      {
        if ( *(_BYTE *)(v7 + 25) && (unsigned __int8)std::operator<<unsigned short>(a3, (const wchar_t *)(v8 + 32)) )
          v7 = v8;
        v6 = v8;
      }
      v8 = *(_QWORD *)v8;
    }
    while ( !*(_BYTE *)(v8 + 25) );
    v3 = StartupAppMonitor::s_showNotificationMap;
  }
  v9 = v3 + 8;
  if ( !*(_BYTE *)(v7 + 25) )
    v9 = v7;
  while ( 1 )
  {
    v9 = *(_QWORD *)v9;
    if ( *(_BYTE *)(v9 + 25) )
      break;
    v10 = std::operator<<unsigned short>(a3, (const wchar_t *)(v9 + 32));
    v11 = v9;
    if ( !v10 )
      v11 = v7;
    v7 = v11;
    if ( !v10 )
      v9 += 16LL;
  }
  *a2 = v6;
  result = a2;
  a2[1] = v7;
  return result;
}
