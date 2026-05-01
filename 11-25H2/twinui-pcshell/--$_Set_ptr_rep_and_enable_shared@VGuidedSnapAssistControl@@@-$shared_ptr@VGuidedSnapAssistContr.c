/*
 * XREFs of ??$_Set_ptr_rep_and_enable_shared@VGuidedSnapAssistControl@@@?$shared_ptr@VGuidedSnapAssistControl@@@std@@AEAAXQEAVGuidedSnapAssistControl@@QEAV_Ref_count_base@1@@Z @ 0x1800BD7D8
 * Callers:
 *     ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x1800BD010 (-Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<GuidedSnapAssistControl>::_Set_ptr_rep_and_enable_shared<GuidedSnapAssistControl>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rax
  volatile signed __int32 *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r8
  std::_Ref_count_base *v7; // rcx

  *a1 = a2;
  a1[1] = a3;
  if ( a2 )
  {
    v3 = a2[1];
    if ( !v3 || !*(_DWORD *)(v3 + 8) )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 8));
      v4 = (volatile signed __int32 *)a1[1];
      v5 = 0LL;
      v6 = 0LL;
      if ( v4 )
      {
        v5 = a2;
        v6 = a1[1];
        _InterlockedIncrement(v4 + 3);
      }
      *a2 = v5;
      v7 = (std::_Ref_count_base *)a2[1];
      a2[1] = v6;
      if ( v7 )
        std::_Ref_count_base::_Decwref(v7);
      if ( v4 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
    }
  }
}
