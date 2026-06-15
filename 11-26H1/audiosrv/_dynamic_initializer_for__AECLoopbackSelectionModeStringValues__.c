/*
 * XREFs of _dynamic_initializer_for__AECLoopbackSelectionModeStringValues__ @ 0x180007CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180013A08 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@1@@Z @ 0x180083C68 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2014 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     atexit @ 0x1800B2494 (atexit.c)
 */

// Hidden C++ exception states: #wind=2
int dynamic_initializer_for__AECLoopbackSelectionModeStringValues__()
{
  __int64 v0; // rcx
  _QWORD v2[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v3[32]; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+50h] [rbp-48h]
  _BYTE v5[32]; // [rsp+58h] [rbp-40h] BYREF
  int v6; // [rsp+78h] [rbp-20h]
  __int64 v7; // [rsp+80h] [rbp-18h] BYREF

  std::wstring::wstring(v3, L"ACTIVE_OR_DEFAULT_COMMUNICATIONS");
  v4 = 2;
  std::wstring::wstring(v5, L"ACTIVE_OR_DEFAULT_CONSOLE");
  v6 = 3;
  v2[0] = v3;
  v2[1] = &v7;
  std::map<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE>::map<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE>(v0, v2);
  `eh vector destructor iterator'(v3, 0x28uLL, 2uLL, std::wstring::~wstring);
  return atexit(dynamic_atexit_destructor_for__AECLoopbackSelectionModeStringValues__);
}
