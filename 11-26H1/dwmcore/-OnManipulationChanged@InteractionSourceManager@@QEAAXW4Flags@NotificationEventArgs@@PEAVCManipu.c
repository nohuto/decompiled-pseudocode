/*
 * XREFs of ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x18013D9E8
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18013D8D0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CInteractionTracker2@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180274600 (-OnChanged@CInteractionTracker2@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180139A40 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 *     ?at@?$unordered_map@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@@std@@QEAAAEAV?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18013DB98 (-at@-$unordered_map@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$unique_ptr.c)
 *     ?IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z @ 0x18013DC0C (-IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z.c)
 *     _CChainingHelper::OnRailsEnabledChanged_::_2_::_lambda_1_::operator() @ 0x18013DC5C (_CChainingHelper--OnRailsEnabledChanged_--_2_--_lambda_1_--operator().c)
 *     ?AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z @ 0x18028E18C (-AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InteractionSourceManager::OnManipulationChanged(
        InteractionSourceManager *a1,
        int a2,
        const struct CManipulation *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 *v8; // rax
  const struct CManipulation *v9; // rcx
  int v10; // edi
  __int64 v11; // rax
  CExpressionManager *v12; // rcx
  const struct CManipulation *v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-20h] BYREF
  const struct CManipulation *v15; // [rsp+68h] [rbp+20h] BYREF

  v5 = a2 - 7;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        if ( v7 == 1
          && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 272LL))(*(_QWORD *)a1)
          && InteractionSourceManager::IsManipulationActive(a1, a3) )
        {
          v12 = *(CExpressionManager **)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 816LL);
          *((_BYTE *)v12 + 418) = 1;
          CExpressionManager::Invalidate(v12);
        }
      }
      else
      {
        v15 = a3;
        if ( a3 )
          (*(void (__fastcall **)(const struct CManipulation *))(*(_QWORD *)a3 + 8LL))(a3);
        v8 = (__int64 *)std::unordered_map<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>>::at(
                          (char *)a1 + 8,
                          &v15);
        v9 = *(const struct CManipulation **)a1;
        v10 = 0;
        v15 = v9;
        v14[0] = &v15;
        v11 = *v8;
        v14[1] = &v13;
        v13 = a3;
        v14[2] = v11;
        do
          CChainingHelper::OnRailsEnabledChanged_::_2_::_lambda_1_::operator()(v14, (unsigned int)v10++);
        while ( v10 < 3 );
        if ( a3 )
          (*(void (__fastcall **)(const struct CManipulation *))(*(_QWORD *)a3 + 16LL))(a3);
      }
    }
    else if ( !*(_DWORD *)(*(_QWORD *)a1 + 88LL) )
    {
      InteractionSourceManager::ReconfigureAllManipulations(a1);
    }
  }
  else
  {
    if ( !InteractionSourceManager::IsManipulationActive(a1, a3) )
      InteractionSourceManager::AddActiveManipulation(a1, a3);
    *((_BYTE *)a1 + 112) = 1;
  }
}
