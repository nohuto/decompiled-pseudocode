/*
 * XREFs of ??4hstring@winrt@@QEAAAEAU01@QEBG@Z @ 0x1802C65DC
 * Callers:
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1800AC660 (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x1800ABDCC (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

winrt::hstring *__fastcall winrt::hstring::operator=(winrt::hstring *a1, const unsigned __int16 *a2)
{
  winrt::hstring *v3; // rax
  __int64 v4; // rdx
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = winrt::hstring::hstring((winrt::hstring *)&v6, a2);
  if ( a1 != v3 )
  {
    v4 = *(_QWORD *)v3;
    *(_QWORD *)v3 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::attach(a1, v4);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
  return a1;
}
