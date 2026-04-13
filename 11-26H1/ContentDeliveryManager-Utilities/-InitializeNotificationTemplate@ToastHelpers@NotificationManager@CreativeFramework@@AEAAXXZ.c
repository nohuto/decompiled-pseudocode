/*
 * XREFs of ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800A8F44
 * Callers:
 *     ??0ToastHelpers@NotificationManager@CreativeFramework@@QEAA@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x1800A7BA0 (--0ToastHelpers@NotificationManager@CreativeFramework@@QEAA@AEBV-$map@V-$basic_string@_WU-$char_.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004B620 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x18005CCB4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18006A6D4 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAHPEB_W@Z @ 0x180098EFC (-compare@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAHPEB_W@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009A648 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x1800A7C00 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     ?IsPresentInMap@ToastHelpers@NotificationManager@CreativeFramework@@AEAA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800A914C (-IsPresentInMap@ToastHelpers@NotificationManager@CreativeFramework@@AEAA_NAEBV-$basic_string@_WU.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::InitializeNotificationTemplate(
        CreativeFramework::NotificationManager::ToastHelpers *this)
{
  __int64 v2; // rax
  char *v3; // rbx
  const char *v4; // r8
  int v5; // eax
  _QWORD *v6; // rax
  int v7; // [rsp+28h] [rbp-39h]
  char *v8[4]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v9[4]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v10[4]; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  std::wstring::wstring((__int64)v9);
  if ( !(unsigned __int8)CreativeFramework::NotificationManager::ToastHelpers::IsPresentInMap(this, v9) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      173LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070057LL,
      v7);
  std::wstring::_Tidy(v9, 1, 0LL);
  std::wstring::wstring((__int64)v9);
  v2 = std::map<std::wstring,std::wstring>::operator[]((__int64 *)this + 4, v9);
  std::wstring::wstring((__int64)v8, v2);
  std::wstring::_Tidy(v9, 1, 0LL);
  v3 = (char *)&unk_1800DF410;
  while ( std::wstring::compare((__int64)v8, *((wchar_t **)v3 + 1)) )
  {
    v3 += 24;
    if ( v3 == (char *)&off_1800DF4A0 )
    {
      v4 = (const char *)v8;
      if ( v8[3] >= (char *)8 )
        v4 = v8[0];
      wil::details::in1diag3::Throw_HrIfMsg(
        retaddr,
        (void *)0xC3,
        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL,
        *((_QWORD *)this + 2) == 0LL,
        (__int64)"%ls",
        v4);
      goto LABEL_12;
    }
  }
  v5 = *(_DWORD *)v3;
  *((_DWORD *)this + 12) = *(_DWORD *)v3;
  if ( v5 == 6 )
  {
    std::wstring::wstring((__int64)v10);
    if ( !(unsigned __int8)CreativeFramework::NotificationManager::ToastHelpers::IsPresentInMap(this, v10) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        184LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL,
        v7);
    std::wstring::_Tidy(v10, 1, 0LL);
    std::wstring::wstring((__int64)v10);
    v6 = (_QWORD *)std::map<std::wstring,std::wstring>::operator[]((__int64 *)this + 4, v10);
    std::wstring::operator=(this, v6);
    std::wstring::_Tidy(v10, 1, 0LL);
  }
  else
  {
    std::wstring::assign((__int64)this, *((_QWORD *)v3 + 2));
  }
LABEL_12:
  std::wstring::_Tidy(v8, 1, 0LL);
}
