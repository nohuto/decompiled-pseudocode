/*
 * XREFs of ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800B54D0
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180082D50 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004D9D0 (--_D-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800653B4 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x18008A508 (-str@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV-$basic_string@_W.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x180099078 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x18009F6E0 (--0-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV-$basic_strin.c)
 *     ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800B4F24 (--$-5_WU-$char_traits@_W@std@@_W@std@@YAAEAV-$basic_istream@_WU-$char_traits@_W@std@@@0@AEAV10@A.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
struct _FILETIME __fastcall CreativeFramework::CommonHelper::StringUtils::GetFileTimeFromString(
        CreativeFramework::CommonHelper::StringUtils *this,
        const wchar_t *a2)
{
  __int64 v2; // rax
  const wchar_t *v3; // rax
  const char *v4; // r9
  unsigned __int64 v5; // rbx
  const char *v6; // r9
  struct _FILETIME v7; // rbx
  FILETIME LocalFileTime; // [rsp+28h] [rbp-E0h] BYREF
  struct _FILETIME FileTime; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v12[224]; // [rsp+48h] [rbp-C0h] BYREF
  SYSTEMTIME SystemTime; // [rsp+128h] [rbp+20h] BYREF
  __int128 v14; // [rsp+138h] [rbp+30h] BYREF
  __int128 v15; // [rsp+148h] [rbp+40h]
  int v16; // [rsp+158h] [rbp+50h]
  __int64 v17[4]; // [rsp+160h] [rbp+58h] BYREF
  _QWORD v18[4]; // [rsp+180h] [rbp+78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v2 = -1LL;
  do
    ++v2;
  while ( *((_WORD *)this + v2) );
  if ( !v2 )
    return 0LL;
  std::wstring::wstring((__int64)v18);
  std::wistringstream::wistringstream(v11, v18);
  std::wstring::_Tidy(v18, 1, 0LL);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v17[0] = (__int64)&v14;
  v3 = L"%Y-%m-%dT%H:%M:%S";
  v17[1] = (__int64)L"%Y-%m-%dT%H:%M:%S";
  do
    ++v3;
  while ( *v3 );
  v17[2] = (__int64)v3;
  std::operator>><wchar_t,std::char_traits<wchar_t>,wchar_t>((__int64)v11, v17);
  SystemTime = 0LL;
  SystemTime.wYear = WORD2(v15) + 1900;
  SystemTime.wMonth = v15 + 1;
  SystemTime.wDay = WORD6(v14);
  SystemTime.wHour = WORD4(v14);
  SystemTime.wMinute = WORD2(v14);
  SystemTime.wSecond = v14;
  FileTime = 0LL;
  if ( !SystemTimeToFileTime(&SystemTime, &FileTime) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x8C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\stringhelper.cpp",
      v4);
  std::wstringbuf::str((__int64)v12, v17);
  LOWORD(LocalFileTime.dwLowDateTime) = 90;
  v5 = std::wstring::find(v17, (wchar_t *)&LocalFileTime, 0LL, 1uLL);
  std::wstring::_Tidy(v17, 1, 0LL);
  if ( v5 == -1LL )
  {
    LocalFileTime = FileTime;
    if ( !LocalFileTimeToFileTime(&LocalFileTime, &FileTime) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x93,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\stringhelper.cpp",
        v6);
  }
  v7 = FileTime;
  std::basic_istringstream<unsigned short>::`vbase destructor'((__int64)v11);
  return v7;
}
