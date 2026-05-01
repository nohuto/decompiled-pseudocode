/*
 * XREFs of ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x18057557C
 * Callers:
 *     ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180575934 (-TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ??$DebugInfo@AEAY0BP@$$CBG@AppUsageTelemetry@@SAXAEAY0BP@$$CBG@Z @ 0x180573898 (--$DebugInfo@AEAY0BP@$$CBG@AppUsageTelemetry@@SAXAEAY0BP@$$CBG@Z.c)
 *     ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x1805751E4 (-IsProcessActive@Win32ProcessInfo@@QEAA_NXZ.c)
 *     ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180575800 (-TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 */

void __fastcall Win32AppInfo::TerminateApp(Win32AppInfo *this, char a2)
{
  __int64 *v4; // rbx
  const WCHAR *v5; // rcx
  __int64 v6; // rdx
  __int64 **v7; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx

  v4 = (__int64 *)**((_QWORD **)this + 4);
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( Win32ProcessInfo::IsProcessActive((__int64 ***)v4[5]) )
    {
      AppUsageTelemetry::DebugInfo<unsigned short const (&)[31]>(v5);
      LOBYTE(v6) = a2;
      Win32ProcessInfo::TerminateApp(v4[5], v6, this);
    }
    v7 = (__int64 **)v4[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v4 = i;
      v4 = i;
    }
    else
    {
      v4 = (__int64 *)v4[2];
      for ( j = *v7; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v4 = j;
    }
  }
}
