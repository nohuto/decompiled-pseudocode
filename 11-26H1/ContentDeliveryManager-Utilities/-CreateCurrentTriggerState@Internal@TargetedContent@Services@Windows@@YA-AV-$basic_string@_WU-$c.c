/*
 * XREFs of ?CreateCurrentTriggerState@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x18007D378
 * Callers:
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::operator() @ 0x18007C934 (_lambda_0f325790d88d3e0e1d8faff7704602cc_--operator().c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004B5F0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?StringFormat@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_WZZ @ 0x1800B58B0 (-StringFormat@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@_WU-$char_traits@_.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::CreateCurrentTriggerState(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rax
  char v7; // bl
  char v8; // bl
  _QWORD v10[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v12[4]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_QWORD *)(std::wstring::wstring((__int64)v12) + 16) )
  {
    v6 = CreativeFramework::CommonHelper::StringUtils::StringFormat(v10, L"%s%s%s", a2, L"!", a3);
    v7 = 2;
  }
  else
  {
    v6 = std::wstring::wstring((__int64)v11);
    v7 = 1;
  }
  std::wstring::wstring(a1, v6);
  v8 = v7 | 4;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    std::wstring::_Tidy(v10, 1, 0LL);
  }
  if ( (v8 & 1) != 0 )
    std::wstring::_Tidy(v11, 1, 0LL);
  std::wstring::_Tidy(v12, 1, 0LL);
  return a1;
}
