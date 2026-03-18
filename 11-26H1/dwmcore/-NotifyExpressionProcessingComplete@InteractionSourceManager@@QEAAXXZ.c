/*
 * XREFs of ?NotifyExpressionProcessingComplete@InteractionSourceManager@@QEAAXXZ @ 0x18013BC30
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker2@@UEAAXXZ @ 0x1802744C0 (-NotifyExpressionProcessingComplete@CInteractionTracker2@@UEAAXXZ.c)
 * Callees:
 *     CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_13_::_lambda_4___ @ 0x18013BD90 (CChainingHelper--RunForAllAxes__CChainingHelper--UpdateConfigurationIfDirty_--_13_--_lambda_4___.c)
 *     CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_10_::_lambda_3___ @ 0x18013BE08 (CChainingHelper--RunForAllAxes__CChainingHelper--UpdateConfigurationIfDirty_--_10_--_lambda_3___.c)
 *     ?find@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180213EB8 (-find@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_8_::_lambda_2___ @ 0x18028F2CC (CChainingHelper--RunForAllAxes__CChainingHelper--UpdateConfigurationIfDirty_--_8_--_lambda_2___.c)
 */

void __fastcall InteractionSourceManager::NotifyExpressionProcessingComplete(InteractionSourceManager *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbx
  char v5; // al
  __int64 v6; // rcx
  char v7; // al
  bool v8; // dl
  bool v9; // r9
  int v10; // r8d
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v2 = (char *)this + 8;
  if ( *((_QWORD *)v2 + 2) )
  {
    if ( *((_QWORD *)this + 13) )
    {
      std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::find(
        v2,
        &v12,
        *(_QWORD *)(*((_QWORD *)this + 10) + 8 * ((*((_QWORD *)this + 11) - 1LL) & (*((_QWORD *)this + 12) >> 1)))
      + 8 * (*((_QWORD *)this + 12) & 1LL));
      if ( v12 != *((_QWORD *)this + 2) )
      {
        v4 = *(_QWORD *)(v12 + 24);
        if ( v4 )
        {
          v5 = *(_BYTE *)(v4 + 36);
          if ( (v5 & 1) == 0 )
            goto LABEL_15;
          v6 = 0LL;
          v7 = 0;
          v8 = 0;
          v13 = 0;
          v9 = 0;
          LOBYTE(v12) = 0;
          v10 = 0;
          if ( (*(_BYTE *)v4 & 1) != 0 )
          {
            v6 = *(unsigned int *)(v4 + 4);
            v7 = 1;
            v13 = v6;
            v10 = v6;
            v8 = (*(_BYTE *)v4 & 2) != 0;
            LOBYTE(v12) = v8;
            v9 = v8;
          }
          if ( (*(_BYTE *)(v4 + 12) & 1) != 0 )
          {
            v7 = 1;
            v10 = *(_DWORD *)(v4 + 16) | v6;
            v13 = v10;
            v9 = v8 || (*(_BYTE *)(v4 + 12) & 2) != 0;
            LOBYTE(v12) = v9;
          }
          if ( (*(_BYTE *)(v4 + 24) & 1) != 0 )
          {
            v13 = *(_DWORD *)(v4 + 28) | v10;
            LOBYTE(v12) = v9 || (*(_BYTE *)(v4 + 24) & 2) != 0;
          }
          else if ( !v7 )
          {
            v14 = v4;
            CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_10_::_lambda_3___(v6, &v14);
LABEL_14:
            *(_BYTE *)(v4 + 36) &= ~1u;
            v5 = *(_BYTE *)(v4 + 36);
LABEL_15:
            if ( (v5 & 2) != 0 )
            {
              v12 = v4;
              CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_13_::_lambda_4___(v3, &v12);
              *(_BYTE *)(v4 + 36) &= ~2u;
            }
            return;
          }
          v11[0] = v4;
          v11[1] = &v12;
          v11[2] = &v13;
          CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_8_::_lambda_2___(v6, v11);
          goto LABEL_14;
        }
      }
    }
  }
}
