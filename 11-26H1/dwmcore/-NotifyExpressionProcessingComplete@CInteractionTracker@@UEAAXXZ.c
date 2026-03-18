/*
 * XREFs of ?NotifyExpressionProcessingComplete@CInteractionTracker@@UEAAXXZ @ 0x18013B8B0
 * Callers:
 *     <none>
 * Callees:
 *     CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_13_::_lambda_4___ @ 0x18013BD90 (CChainingHelper--RunForAllAxes__CChainingHelper--UpdateConfigurationIfDirty_--_13_--_lambda_4___.c)
 *     CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_10_::_lambda_3___ @ 0x18013BE08 (CChainingHelper--RunForAllAxes__CChainingHelper--UpdateConfigurationIfDirty_--_10_--_lambda_3___.c)
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18013C350 (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18013C68C (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180213EB8 (-find@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_8_::_lambda_2___ @ 0x18028F2CC (CChainingHelper--RunForAllAxes__CChainingHelper--UpdateConfigurationIfDirty_--_8_--_lambda_2___.c)
 */

void __fastcall CInteractionTracker::NotifyExpressionProcessingComplete(CInteractionTracker *this)
{
  bool v2; // al
  _BYTE *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdi
  char v6; // al
  __int64 v7; // rcx
  char v8; // al
  bool v9; // dl
  bool v10; // r9
  int v11; // r8d
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v2 = *((char *)this + 596) < 0 || !*((_QWORD *)this + 75);
  if ( !*((_DWORD *)this + 22) )
  {
    if ( !v2 )
      goto LABEL_6;
LABEL_13:
    v3 = (char *)this + 597;
    goto LABEL_14;
  }
  if ( v2 )
  {
    CInteractionTracker::CheckForIdle(this);
    goto LABEL_13;
  }
LABEL_6:
  v3 = (char *)this + 597;
  if ( (*((_BYTE *)this + 597) & 4) != 0 )
LABEL_14:
    CInteractionTracker::CheckForOutOfBounds(this);
  *v3 &= ~4u;
  if ( !*((_QWORD *)this + 40) )
    goto LABEL_9;
  if ( !*((_QWORD *)this + 50) )
    goto LABEL_9;
  std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::find(
    (char *)this + 304,
    &v13,
    *(_QWORD *)(*((_QWORD *)this + 47) + 8 * ((*((_QWORD *)this + 48) - 1LL) & (*((_QWORD *)this + 49) >> 1)))
  + 8 * (*((_QWORD *)this + 49) & 1LL));
  if ( v13 == *((_QWORD *)this + 39) )
    goto LABEL_9;
  v5 = *(_QWORD *)(v13 + 24);
  if ( !v5 )
    goto LABEL_9;
  v6 = *(_BYTE *)(v5 + 36);
  if ( (v6 & 1) != 0 )
  {
    v7 = 0LL;
    v8 = 0;
    v9 = 0;
    v14 = 0;
    v10 = 0;
    LOBYTE(v13) = 0;
    v11 = 0;
    if ( (*(_BYTE *)v5 & 1) != 0 )
    {
      v7 = *(unsigned int *)(v5 + 4);
      v8 = 1;
      v14 = v7;
      v11 = v7;
      v9 = (*(_BYTE *)v5 & 2) != 0;
      LOBYTE(v13) = v9;
      v10 = v9;
    }
    if ( (*(_BYTE *)(v5 + 12) & 1) != 0 )
    {
      v8 = 1;
      v11 = *(_DWORD *)(v5 + 16) | v7;
      v14 = v11;
      v10 = v9 || (*(_BYTE *)(v5 + 12) & 2) != 0;
      LOBYTE(v13) = v10;
    }
    if ( (*(_BYTE *)(v5 + 24) & 1) != 0 )
    {
      v14 = *(_DWORD *)(v5 + 28) | v11;
      LOBYTE(v13) = v10 || (*(_BYTE *)(v5 + 24) & 2) != 0;
    }
    else if ( !v8 )
    {
      v15 = v5;
      CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_10_::_lambda_3___(v7, &v15);
LABEL_25:
      v6 = *(_BYTE *)(v5 + 36) & 0xFE;
      *(_BYTE *)(v5 + 36) = v6;
      goto LABEL_26;
    }
    v12[0] = v5;
    v12[1] = &v13;
    v12[2] = &v14;
    CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_8_::_lambda_2___(v7, v12);
    goto LABEL_25;
  }
LABEL_26:
  if ( (v6 & 2) != 0 )
  {
    v13 = v5;
    CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_13_::_lambda_4___(v4, &v13);
    *(_BYTE *)(v5 + 36) &= ~2u;
  }
LABEL_9:
  CInteractionTracker::SendPendingCallbacks(this);
}
