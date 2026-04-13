/*
 * XREFs of ??$make_shared@VPublishSystemStateService@Actions@CreativeFramework@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@@std@@YA?AV?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@0@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x1800A263C
 * Callers:
 *     ?MakePublishSystemStateService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800A27A0 (-MakePublishSystemStateService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Acti.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004B5F0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0PublishSystemStateService@Actions@CreativeFramework@@QEAA@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z @ 0x1800A26E4 (--0PublishSystemStateService@Actions@CreativeFramework@@QEAA@V-$basic_string@_WU-$char_traits@_W.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::PublishSystemStateService,std::wstring,std::wstring>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE v11[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v12[56]; // [rsp+50h] [rbp-38h] BYREF

  v6 = operator new(0x48uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    v8 = std::wstring::wstring((__int64)v11, a3);
    v9 = std::wstring::wstring((__int64)v12, a2);
    CreativeFramework::Actions::PublishSystemStateService::PublishSystemStateService(v7 + 4, v9, v8);
  }
  else
  {
    v7 = 0LL;
  }
  a1[1] = v7;
  *a1 = v7 + 4;
  return a1;
}
