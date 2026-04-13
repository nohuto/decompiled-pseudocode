/*
 * XREFs of ?GetActionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@W4ActionServices@12@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180091924
 * Callers:
 *     ?GetActionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@W4ActionServices@12@AEBUActionContext@12@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@4@@Z @ 0x180091854 (-GetActionService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@CreativeF.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180028118 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180091F44 (-Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreativeFramework::Actions::GetActionService(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  void ***v5; // rbx
  unsigned __int8 (*v9)(void); // rax
  unsigned int v11; // eax
  char *v12; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (void ***)&unk_18017E740;
  while ( 1 )
  {
    if ( *(_DWORD *)v5 == a2 )
    {
      v9 = (unsigned __int8 (*)(void))v5[2];
      if ( !v9 || v9() )
        break;
    }
    v5 += 3;
    if ( v5 == std::_Error_objects<int>::_System_object )
    {
      v11 = wil::verify_hresult<long>(0x80070490);
      LODWORD(v12) = a2;
      wil::details::in1diag3::Throw_HrMsg(
        retaddr,
        (void *)0x47,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\actionfactory.cpp",
        (const char *)v11,
        (int)"Requested action service: %d",
        v12);
    }
  }
  ((void (__fastcall *)(__int64, __int64, __int64))v5[1])(a1, a3, a4);
  return a1;
}
