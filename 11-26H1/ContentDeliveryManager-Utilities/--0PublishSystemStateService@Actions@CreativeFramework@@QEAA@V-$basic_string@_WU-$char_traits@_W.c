/*
 * XREFs of ??0PublishSystemStateService@Actions@CreativeFramework@@QEAA@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z @ 0x1800A26E4
 * Callers:
 *     ??$make_shared@VPublishSystemStateService@Actions@CreativeFramework@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@@std@@YA?AV?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@0@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x1800A263C (--$make_shared@VPublishSystemStateService@Actions@CreativeFramework@@V-$basic_string@_WU-$char_t.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004B620 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::PublishSystemStateService::PublishSystemStateService(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *v6; // rax

  *(_QWORD *)a1 = &CreativeFramework::Actions::PublishSystemStateService::`vftable';
  std::wstring::wstring(a1 + 8, (__int64)a2);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  if ( a3[2] )
  {
    if ( (unsigned __int64)a3[3] < 8 )
      v6 = a3;
    else
      v6 = (__int64 *)*a3;
    *(_QWORD *)(a1 + 40) = v6;
    *(_DWORD *)(a1 + 48) = 2 * *((_DWORD *)a3 + 4);
  }
  std::wstring::_Tidy(a2, 1, 0LL);
  std::wstring::_Tidy(a3, 1, 0LL);
  return a1;
}
